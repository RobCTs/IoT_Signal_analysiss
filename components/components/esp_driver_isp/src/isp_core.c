/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <esp_types.h>
#include <sys/lock.h>
#include "sdkconfig.h"
#include "esp_log.h"
#include "esp_check.h"
#include "esp_heap_caps.h"
#include "freertos/FreeRTOS.h"
#include "esp_clk_tree.h"
#include "driver/isp_core.h"
#include "esp_private/periph_ctrl.h"
#include "esp_private/mipi_csi_share_hw_ctrl.h"
#include "hal/hal_utils.h"
#include "soc/mipi_csi_bridge_struct.h"
#include "soc/isp_periph.h"
#include "isp_internal.h"

typedef struct isp_platform_t {
    _lock_t         mutex;
    isp_processor_t *processors[SOC_ISP_NUMS];
} isp_platform_t;

static const char *TAG = "ISP";
static isp_platform_t s_platform;

static esp_err_t s_isp_claim_processor(isp_processor_t *proc)
{
    assert(proc);

    _lock_acquire(&s_platform.mutex);
    bool found = false;
    for (int i = 0; i < SOC_ISP_NUMS; i ++) {
        found = !s_platform.processors[i];
        if (found) {
            s_platform.processors[i] = proc;
            proc->proc_id = i;
            PERIPH_RCC_ATOMIC() {
                isp_ll_enable_module_clock(proc->hal.hw, true);
                isp_ll_reset_module_clock(proc->hal.hw);
            }
            break;
        }
    }
    _lock_release(&s_platform.mutex);

    if (!found) {
        return ESP_ERR_NOT_FOUND;
    }
    return ESP_OK;
}

static esp_err_t s_isp_declaim_processor(isp_processor_t *proc)
{
    assert(proc);

    _lock_acquire(&s_platform.mutex);
    s_platform.processors[proc->proc_id] = NULL;
    PERIPH_RCC_ATOMIC() {
        isp_ll_enable_module_clock(proc->hal.hw, false);
    }
    _lock_release(&s_platform.mutex);

    return ESP_OK;
}

esp_err_t esp_isp_new_processor(const esp_isp_processor_cfg_t *proc_config, isp_proc_handle_t *ret_proc)
{
    esp_err_t ret = ESP_FAIL;
    ESP_RETURN_ON_FALSE(proc_config && ret_proc, ESP_ERR_INVALID_ARG, TAG, "invalid argument: null pointer");
    ESP_RETURN_ON_FALSE(proc_config->input_data_source == ISP_INPUT_DATA_SOURCE_CSI, ESP_ERR_NOT_SUPPORTED, TAG, "only support CSI as input source at this moment");
    ESP_RETURN_ON_FALSE(proc_config->input_data_color_type == ISP_COLOR_RAW8, ESP_ERR_NOT_SUPPORTED, TAG, "input data type not supported");

    isp_processor_t *proc = heap_caps_calloc(1, sizeof(isp_processor_t), ISP_MEM_ALLOC_CAPS);
    ESP_RETURN_ON_FALSE(proc, ESP_ERR_NO_MEM, TAG, "no mem");

    //claim a processor, then do assignment
    ESP_GOTO_ON_ERROR(s_isp_claim_processor(proc), err, TAG, "no available isp processor");
#if SOC_ISP_SHARE_CSI_BRG
    ESP_GOTO_ON_ERROR(mipi_csi_brg_claim(MIPI_CSI_BRG_USER_SHARE, &proc->csi_brg_id), err, TAG, "csi bridge is in use already");
#endif

    isp_clk_src_t clk_src = !proc_config->clk_src ? ISP_CLK_SRC_DEFAULT : proc_config->clk_src;
    uint32_t clk_src_freq_hz = 0;
    ESP_GOTO_ON_ERROR(esp_clk_tree_src_get_freq_hz(clk_src, ESP_CLK_TREE_SRC_FREQ_PRECISION_CACHED, &clk_src_freq_hz), err, TAG, "clock source setting fail");
    ESP_GOTO_ON_FALSE((proc_config->clk_hz > 0 && proc_config->clk_hz <= clk_src_freq_hz), ESP_ERR_INVALID_ARG, err, TAG, "clk hz not supported");

    uint32_t out_clk_freq_hz = 0;
    hal_utils_clk_div_t clk_div = {};
    hal_utils_clk_info_t clk_info = {
        .src_freq_hz = clk_src_freq_hz,
        .exp_freq_hz = proc_config->clk_hz,
        .max_integ = ISP_LL_TX_MAX_CLK_INT_DIV,
        .min_integ = 1,
        .round_opt = HAL_DIV_ROUND,
    };
    out_clk_freq_hz = hal_utils_calc_clk_div_integer(&clk_info, &clk_div.integer);
    if (out_clk_freq_hz != proc_config->clk_hz) {
        ESP_LOGW(TAG, "precision loss, real output frequency: %"PRIu32"Hz", out_clk_freq_hz);
    }

    isp_hal_init(&proc->hal, proc->proc_id);
    //necessary ISP submodules that needs basic initialisation
    isp_ll_bf_clk_enable(proc->hal.hw, true);
    isp_ll_bf_enable(proc->hal.hw, true);
    isp_ll_ccm_clk_enable(proc->hal.hw, true);
    isp_ll_ccm_enable(proc->hal.hw, true);
    isp_ll_color_clk_enable(proc->hal.hw, true);
    isp_ll_color_enable(proc->hal.hw, true);
    PERIPH_RCC_ATOMIC() {
        isp_ll_select_clk_source(proc->hal.hw, clk_src);
        isp_ll_set_clock_div(proc->hal.hw, &clk_div);
    }

    proc->isp_fsm = ISP_FSM_INIT;
    proc->spinlock = (portMUX_TYPE)portMUX_INITIALIZER_UNLOCKED;

    //Input color format
    bool valid_format = false;
    color_space_pixel_format_t in_color_format = {
        .color_type_id = proc_config->input_data_color_type,
    };
    valid_format = isp_ll_set_input_data_color_format(proc->hal.hw, in_color_format);
    ESP_GOTO_ON_FALSE(valid_format, ESP_ERR_INVALID_ARG, err, TAG, "invalid input color space config");

    //Output color format
    valid_format = false;
    color_space_pixel_format_t out_color_format = {
        .color_type_id = proc_config->output_data_color_type,
    };
    valid_format = isp_ll_set_output_data_color_format(proc->hal.hw, out_color_format);
    ESP_GOTO_ON_FALSE(valid_format, ESP_ERR_INVALID_ARG, err, TAG, "invalid output color space config");

    isp_ll_clk_enable(proc->hal.hw, true);
    isp_ll_set_input_data_source(proc->hal.hw, proc_config->input_data_source);
    isp_ll_enable_line_start_packet_exist(proc->hal.hw, proc_config->has_line_start_packet);
    isp_ll_enable_line_end_packet_exist(proc->hal.hw, proc_config->has_line_end_packet);
    isp_ll_set_intput_data_h_pixel_num(proc->hal.hw, proc_config->h_res);
    isp_ll_set_intput_data_v_row_num(proc->hal.hw, proc_config->v_res);

    *ret_proc = proc;

    return ESP_OK;

err:
    free(proc);

    return ret;
}

esp_err_t esp_isp_del_processor(isp_proc_handle_t proc)
{
    ESP_RETURN_ON_FALSE(proc, ESP_ERR_INVALID_ARG, TAG, "invalid argument: null pointer");
    ESP_RETURN_ON_FALSE(proc->isp_fsm == ISP_FSM_INIT, ESP_ERR_INVALID_STATE, TAG, "processor isn't in init state");

    //declaim first, then do free
    ESP_RETURN_ON_ERROR(s_isp_declaim_processor(proc), TAG, "declaim processor fail");
#if SOC_ISP_SHARE_CSI_BRG
    ESP_RETURN_ON_ERROR(mipi_csi_brg_declaim(proc->csi_brg_id), TAG, "declaim csi bridge fail");
#endif
    free(proc);

    return ESP_OK;
}

esp_err_t esp_isp_enable(isp_proc_handle_t proc)
{
    ESP_RETURN_ON_FALSE(proc, ESP_ERR_INVALID_ARG, TAG, "invalid argument: null pointer");
    ESP_RETURN_ON_FALSE(proc->isp_fsm == ISP_FSM_INIT, ESP_ERR_INVALID_STATE, TAG, "processor isn't in init state");

    isp_ll_enable(proc->hal.hw, true);
    proc->isp_fsm = ISP_FSM_ENABLE;

    return ESP_OK;
}

esp_err_t esp_isp_disable(isp_proc_handle_t proc)
{
    ESP_RETURN_ON_FALSE(proc, ESP_ERR_INVALID_ARG, TAG, "invalid argument: null pointer");
    ESP_RETURN_ON_FALSE(proc->isp_fsm == ISP_FSM_ENABLE, ESP_ERR_INVALID_STATE, TAG, "processor isn't in enable state");

    isp_ll_enable(proc->hal.hw, false);
    proc->isp_fsm = ISP_FSM_INIT;

    return ESP_OK;
}
