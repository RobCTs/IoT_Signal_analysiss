/*
 * SPDX-FileCopyrightText: 2015-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "sdkconfig.h"
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/portmacro.h"
#include "esp_err.h"
#include "esp_heap_caps.h"
#include "esp_log.h"
#include "usb_private.h"
#include "hcd.h"
#include "hub.h"
#include "usb/usb_helpers.h"

/*
Implementation of the HUB driver that only supports the Root Hub with a single port. Therefore, we currently don't
implement the bare minimum to control the root HCD port.
*/

#define HUB_ROOT_PORT_NUM                           1  // HCD only supports one port
#define HUB_ROOT_DEV_UID                            1  // Unique device ID

#ifdef CONFIG_USB_HOST_HW_BUFFER_BIAS_IN
#define HUB_ROOT_HCD_PORT_FIFO_BIAS                 HCD_PORT_FIFO_BIAS_RX
#elif CONFIG_USB_HOST_HW_BUFFER_BIAS_PERIODIC_OUT
#define HUB_ROOT_HCD_PORT_FIFO_BIAS                 HCD_PORT_FIFO_BIAS_PTX
#else   // CONFIG_USB_HOST_HW_BUFFER_BIAS_BALANCED
#define HUB_ROOT_HCD_PORT_FIFO_BIAS                 HCD_PORT_FIFO_BIAS_BALANCED
#endif

#ifdef CONFIG_USB_HOST_ENABLE_ENUM_FILTER_CALLBACK
#define ENABLE_ENUM_FILTER_CALLBACK
#endif // CONFIG_USB_HOST_ENABLE_ENUM_FILTER_CALLBACK

#define SET_ADDR_RECOVERY_INTERVAL_MS               CONFIG_USB_HOST_SET_ADDR_RECOVERY_MS

#define ENUM_CTRL_TRANSFER_MAX_DATA_LEN             CONFIG_USB_HOST_CONTROL_TRANSFER_MAX_SIZE
#define ENUM_DEV_ADDR                               1       // Device address used in enumeration
#define ENUM_CONFIG_INDEX_DEFAULT                   0       // Index used to get the first configuration descriptor of the device
#define ENUM_SHORT_DESC_REQ_LEN                     8       // Number of bytes to request when getting a short descriptor (just enough to get bMaxPacketSize0 or wTotalLength)
#define ENUM_WORST_CASE_MPS_LS                      8       // The worst case MPS of EP0 for a LS device
#define ENUM_WORST_CASE_MPS_FS                      64      // The worst case MPS of EP0 for a FS device
#define ENUM_LOW_SPEED_MPS                          8       // Worst case MPS for the default endpoint of a low-speed device
#define ENUM_FULL_SPEED_MPS                         64      // Worst case MPS for the default endpoint of a full-speed device
#define ENUM_LANGID                                 0x409   // Current enumeration only supports English (United States) string descriptors

// Hub driver action flags. LISTED IN THE ORDER THEY SHOULD BE HANDLED IN within hub_process(). Some actions are mutually exclusive
#define HUB_DRIVER_FLAG_ACTION_ROOT_EVENT           0x01
#define HUB_DRIVER_FLAG_ACTION_PORT_REQ             0x02
#define HUB_DRIVER_FLAG_ACTION_ENUM_EVENT           0x04

#define PORT_REQ_DISABLE                            0x01
#define PORT_REQ_RECOVER                            0x02

/**
 * @brief Root port states
 *
 */
typedef enum {
    ROOT_PORT_STATE_NOT_POWERED,    /**< Root port initialized and/or not powered */
    ROOT_PORT_STATE_POWERED,        /**< Root port is powered, device is not connected */
    ROOT_PORT_STATE_DISABLED,       /**< A device is connected but is disabled (i.e., not reset, no SOFs are sent) */
    ROOT_PORT_STATE_ENABLED,        /**< A device is connected, port has been reset, SOFs are sent */
    ROOT_PORT_STATE_RECOVERY,       /**< Root port encountered an error and needs to be recovered */
} root_port_state_t;

/**
 * @brief Stages of device enumeration listed in their order of execution
 *
 * - These stages MUST BE LISTED IN THE ORDER OF THEIR EXECUTION as the enumeration will simply increment the current stage
 * - If an error occurs at any stage, ENUM_STAGE_CLEANUP_FAILED acts as a common exit stage on failure
 * - Must start with 0 as enum is also used as an index
 * - The short descriptor stages are used to fetch the start particular descriptors that don't have a fixed length in order to determine the full descriptors length
 */
typedef enum {
    ENUM_STAGE_NONE = 0,                    /**< There is no device awaiting enumeration. Start requires device connection and first reset. */
    ENUM_STAGE_START,                       /**< A device has connected and has already been reset once. Allocate a device object in USBH */
    // Basic device enumeration
    ENUM_STAGE_GET_SHORT_DEV_DESC,          /**< Getting short dev desc (wLength is ENUM_SHORT_DESC_REQ_LEN) */
    ENUM_STAGE_CHECK_SHORT_DEV_DESC,        /**< Save bMaxPacketSize0 from the short dev desc. Update the MPS of the enum pipe */
    ENUM_STAGE_SECOND_RESET,                /**< Reset the device again (Workaround for old USB devices that get confused by the previous short dev desc request). */
    ENUM_STAGE_SET_ADDR,                    /**< Send SET_ADDRESS request */
    ENUM_STAGE_CHECK_ADDR,                  /**< Update the enum pipe's target address */
    ENUM_STAGE_SET_ADDR_RECOVERY,           /**< Wait SET ADDRESS recovery interval at least for 2ms due to usb_20, chapter 9.2.6.3 */
    ENUM_STAGE_GET_FULL_DEV_DESC,           /**< Get the full dev desc */
    ENUM_STAGE_CHECK_FULL_DEV_DESC,         /**< Check the full dev desc, fill it into the device object in USBH. Save the string descriptor indexes*/
    ENUM_STAGE_GET_SHORT_CONFIG_DESC,       /**< Getting a short config desc (wLength is ENUM_SHORT_DESC_REQ_LEN) */
    ENUM_STAGE_CHECK_SHORT_CONFIG_DESC,     /**< Save wTotalLength of the short config desc */
    ENUM_STAGE_GET_FULL_CONFIG_DESC,        /**< Get the full config desc (wLength is the saved wTotalLength) */
    ENUM_STAGE_CHECK_FULL_CONFIG_DESC,      /**< Check the full config desc, fill it into the device object in USBH */
    ENUM_STAGE_SET_CONFIG,                  /**< Send SET_CONFIGURATION request */
    ENUM_STAGE_CHECK_CONFIG,                /**< Check that SET_CONFIGURATION request was successful */
    // Get string descriptors
    ENUM_STAGE_GET_SHORT_LANGID_TABLE,      /**< Get the header of the LANGID table string descriptor */
    ENUM_STAGE_CHECK_SHORT_LANGID_TABLE,    /**< Save the bLength of the LANGID table string descriptor */
    ENUM_STAGE_GET_FULL_LANGID_TABLE,       /**< Get the full LANGID table string descriptor */
    ENUM_STAGE_CHECK_FULL_LANGID_TABLE,     /**< Check whether ENUM_LANGID is in the LANGID table */
    ENUM_STAGE_GET_SHORT_MANU_STR_DESC,     /**< Get the header of the iManufacturer string descriptor */
    ENUM_STAGE_CHECK_SHORT_MANU_STR_DESC,   /**< Save the bLength of the iManufacturer string descriptor */
    ENUM_STAGE_GET_FULL_MANU_STR_DESC,      /**< Get the full iManufacturer string descriptor */
    ENUM_STAGE_CHECK_FULL_MANU_STR_DESC,    /**< Check and fill the full iManufacturer string descriptor */
    ENUM_STAGE_GET_SHORT_PROD_STR_DESC,     /**< Get the header of the string descriptor at index iProduct */
    ENUM_STAGE_CHECK_SHORT_PROD_STR_DESC,   /**< Save the bLength of the iProduct string descriptor */
    ENUM_STAGE_GET_FULL_PROD_STR_DESC,      /**< Get the full iProduct string descriptor */
    ENUM_STAGE_CHECK_FULL_PROD_STR_DESC,    /**< Check and fill the full iProduct string descriptor */
    ENUM_STAGE_GET_SHORT_SER_STR_DESC,      /**< Get the header of the string descriptor at index iSerialNumber */
    ENUM_STAGE_CHECK_SHORT_SER_STR_DESC,    /**< Save the bLength of the iSerialNumber string descriptor */
    ENUM_STAGE_GET_FULL_SER_STR_DESC,       /**< Get the full iSerialNumber string descriptor */
    ENUM_STAGE_CHECK_FULL_SER_STR_DESC,     /**< Check and fill the full iSerialNumber string descriptor */
    // Cleanup
    ENUM_STAGE_CLEANUP,                     /**< Clean up after successful enumeration. Adds enumerated device to USBH */
    ENUM_STAGE_CLEANUP_FAILED,              /**< Cleanup failed enumeration. Free device resources */
} enum_stage_t;

const char *const enum_stage_strings[] = {
    "NONE",
    "START",
    "GET_SHORT_DEV_DESC",
    "CHECK_SHORT_DEV_DESC",
    "SECOND_RESET",
    "SET_ADDR",
    "CHECK_ADDR",
    "SET_ADDR_RECOVERY",
    "GET_FULL_DEV_DESC",
    "CHECK_FULL_DEV_DESC",
    "GET_SHORT_CONFIG_DESC",
    "CHECK_SHORT_CONFIG_DESC",
    "GET_FULL_CONFIG_DESC",
    "CHECK_FULL_CONFIG_DESC",
    "SET_CONFIG",
    "CHECK_CONFIG",
    "GET_SHORT_LANGID_TABLE",
    "CHECK_SHORT_LANGID_TABLE",
    "GET_FULL_LANGID_TABLE",
    "CHECK_FULL_LANGID_TABLE",
    "GET_SHORT_MANU_STR_DESC",
    "CHECK_SHORT_MANU_STR_DESC",
    "GET_FULL_MANU_STR_DESC",
    "CHECK_FULL_MANU_STR_DESC",
    "GET_SHORT_PROD_STR_DESC",
    "CHECK_SHORT_PROD_STR_DESC",
    "GET_FULL_PROD_STR_DESC",
    "CHECK_FULL_PROD_STR_DESC",
    "GET_SHORT_SER_STR_DESC",
    "CHECK_SHORT_SER_STR_DESC",
    "GET_FULL_SER_STR_DESC",
    "CHECK_FULL_SER_STR_DESC",
    "CLEANUP",
    "CLEANUP_FAILED",
};

typedef struct {
    // Constant
    urb_t *urb;                     /**< URB used for enumeration control transfers. Max data length of ENUM_CTRL_TRANSFER_MAX_DATA_LEN */
    // Initialized at start of a particular enumeration
    usb_device_handle_t dev_hdl;    /**< Handle of device being enumerated */
    // Updated during enumeration
    enum_stage_t stage;             /**< Current enumeration stage */
    int expect_num_bytes;           /**< Expected number of bytes for IN transfers stages. Set to 0 for OUT transfer */
    uint8_t bMaxPacketSize0;        /**< Max packet size of the device's EP0. Read from bMaxPacketSize0 field of device descriptor */
    uint16_t wTotalLength;          /**< Total length of device's configuration descriptor. Read from wTotalLength field of config descriptor */
    uint8_t iManufacturer;          /**< Index of the Manufacturer string descriptor */
    uint8_t iProduct;               /**< Index of the Product string descriptor */
    uint8_t iSerialNumber;          /**< Index of the Serial Number string descriptor */
    uint8_t str_desc_bLength;       /**< Saved bLength from getting a short string descriptor */
    uint8_t bConfigurationValue;    /**< Device's current configuration number */
    uint8_t enum_config_index;      /**< Configuration index used during enumeration */
#ifdef ENABLE_ENUM_FILTER_CALLBACK
    usb_host_enum_filter_cb_t enum_filter_cb;   /**< Set device configuration callback */
    bool graceful_exit;                         /**< Exit enumeration by user's request from the callback function */
#endif // ENABLE_ENUM_FILTER_CALLBACK
} enum_ctrl_t;

typedef struct {
    // Dynamic members require a critical section
    struct {
        union {
            struct {
                uint32_t actions: 8;
                uint32_t reserved24: 24;
            };
            uint32_t val;
        } flags;
        root_port_state_t root_port_state;
        unsigned int port_reqs;
    } dynamic;
    // Single thread members don't require a critical section so long as they are never accessed from multiple threads
    struct {
        unsigned int root_dev_uid;  // UID of the device connected to root port. 0 if no device connected
        enum_ctrl_t enum_ctrl;
    } single_thread;
    // Constant members do no change after installation thus do not require a critical section
    struct {
        hcd_port_handle_t root_port_hdl;
        usb_proc_req_cb_t proc_req_cb;
        void *proc_req_cb_arg;
        hub_event_cb_t event_cb;
        void *event_cb_arg;
    } constant;
} hub_driver_t;

static hub_driver_t *p_hub_driver_obj = NULL;
static portMUX_TYPE hub_driver_lock = portMUX_INITIALIZER_UNLOCKED;

const char *HUB_DRIVER_TAG = "HUB";

#define HUB_DRIVER_ENTER_CRITICAL_ISR()                 portENTER_CRITICAL_ISR(&hub_driver_lock)
#define HUB_DRIVER_EXIT_CRITICAL_ISR()                  portEXIT_CRITICAL_ISR(&hub_driver_lock)
#define HUB_DRIVER_ENTER_CRITICAL()                     portENTER_CRITICAL(&hub_driver_lock)
#define HUB_DRIVER_EXIT_CRITICAL()                      portEXIT_CRITICAL(&hub_driver_lock)
#define HUB_DRIVER_ENTER_CRITICAL_SAFE()                portENTER_CRITICAL_SAFE(&hub_driver_lock)
#define HUB_DRIVER_EXIT_CRITICAL_SAFE()                 portEXIT_CRITICAL_SAFE(&hub_driver_lock)

#define HUB_DRIVER_CHECK(cond, ret_val) ({              \
            if (!(cond)) {                              \
                return (ret_val);                       \
            }                                           \
})
#define HUB_DRIVER_CHECK_FROM_CRIT(cond, ret_val) ({    \
            if (!(cond)) {                              \
                HUB_DRIVER_EXIT_CRITICAL();             \
                return ret_val;                         \
            }                                           \
})

// ------------------------------------------------- Forward Declare ---------------------------------------------------

/**
 * @brief HCD port callback for the root port
 *
 * - This callback is called from the context of the HCD, so any event handling should be deferred to hub_process()
 * - Under the current HCD implementation, this callback should only be ever be called in an ISR
 * - This callback needs to call proc_req_cb to ensure that hub_process() gets a chance to run
 *
 * @param port_hdl HCD port handle
 * @param port_event HCD port event
 * @param user_arg Callback argument
 * @param in_isr Whether callback is in an ISR context
 * @return Whether a yield is required
 */
static bool root_port_callback(hcd_port_handle_t port_hdl, hcd_port_event_t port_event, void *user_arg, bool in_isr);

/**
 * @brief Control transfer callback used for enumeration
 *
 * @param transfer Transfer object
 */
static void enum_transfer_callback(usb_transfer_t *transfer);

// ------------------------------------------------- Enum Functions ----------------------------------------------------

static bool enum_stage_start(enum_ctrl_t *enum_ctrl)
{
    // Open the newly added device (at address 0)
    ESP_ERROR_CHECK(usbh_devs_open(0, &p_hub_driver_obj->single_thread.enum_ctrl.dev_hdl));

    // Get the speed of the device to set the initial MPS of EP0
    usb_device_info_t dev_info;
    ESP_ERROR_CHECK(usbh_dev_get_info(p_hub_driver_obj->single_thread.enum_ctrl.dev_hdl, &dev_info));
    enum_ctrl->bMaxPacketSize0 = (dev_info.speed == USB_SPEED_LOW) ? ENUM_WORST_CASE_MPS_LS : ENUM_WORST_CASE_MPS_FS;

    // Lock the device for enumeration. This allows us call usbh_dev_set_...() functions during enumeration
    ESP_ERROR_CHECK(usbh_dev_enum_lock(p_hub_driver_obj->single_thread.enum_ctrl.dev_hdl));

    // Flag to gracefully exit the enumeration process if requested by the user in the enumeration filter cb
#ifdef ENABLE_ENUM_FILTER_CALLBACK
    enum_ctrl->graceful_exit = false;
#endif // ENABLE_ENUM_FILTER_CALLBACK
    return true;
}

static bool enum_stage_second_reset(enum_ctrl_t *enum_ctrl)
{
    // Hub Driver currently support only one root port, so the second reset always in root port
    if (hub_port_reset(NULL, 0) != ESP_OK) {
        ESP_LOGE(HUB_DRIVER_TAG, "Failed to issue second reset");
        return false;
    }
    return true;
}

static void get_string_desc_index_and_langid(enum_ctrl_t *enum_ctrl, uint8_t *index, uint16_t *langid)
{
    switch (enum_ctrl->stage) {
    case ENUM_STAGE_GET_SHORT_LANGID_TABLE:
    case ENUM_STAGE_GET_FULL_LANGID_TABLE:
        *index = 0;     // The LANGID table uses an index of 0
        *langid = 0;    // Getting the LANGID table itself should use a LANGID of 0
        break;
    case ENUM_STAGE_GET_SHORT_MANU_STR_DESC:
    case ENUM_STAGE_GET_FULL_MANU_STR_DESC:
        *index = enum_ctrl->iManufacturer;
        *langid = ENUM_LANGID;  // Use the default LANGID
        break;
    case ENUM_STAGE_GET_SHORT_PROD_STR_DESC:
    case ENUM_STAGE_GET_FULL_PROD_STR_DESC:
        *index = enum_ctrl->iProduct;
        *langid = ENUM_LANGID;  // Use the default LANGID
        break;
    case ENUM_STAGE_GET_SHORT_SER_STR_DESC:
    case ENUM_STAGE_GET_FULL_SER_STR_DESC:
        *index = enum_ctrl->iSerialNumber;
        *langid = ENUM_LANGID;  // Use the default LANGID
        break;
    default:
        // Should not occur
        abort();
        break;
    }
}

static bool set_config_index(enum_ctrl_t *enum_ctrl, const usb_device_desc_t *device_desc)
{
#ifdef ENABLE_ENUM_FILTER_CALLBACK
    // Callback enabled in the menuncofig, but the callback function was not defined
    if (enum_ctrl->enum_filter_cb == NULL) {
        enum_ctrl->enum_config_index = ENUM_CONFIG_INDEX_DEFAULT;
        return true;
    }

    uint8_t enum_config_index;
    const bool enum_continue = enum_ctrl->enum_filter_cb(device_desc, &enum_config_index);

    // User's request NOT to enumerate the USB device
    if (!enum_continue) {
        ESP_LOGW(HUB_DRIVER_TAG, "USB device (PID = 0x%x, VID = 0x%x) will not be enumerated", device_desc->idProduct, device_desc->idVendor);
        enum_ctrl->graceful_exit = true;
        return false;
    }

    // Set configuration descriptor
    if ((enum_config_index == 0) || (enum_config_index > device_desc->bNumConfigurations)) {
        ESP_LOGW(HUB_DRIVER_TAG, "bConfigurationValue %d provided by user, device will be configured with configuration descriptor 1", enum_config_index);
        enum_ctrl->enum_config_index = ENUM_CONFIG_INDEX_DEFAULT;
    } else {
        enum_ctrl->enum_config_index = enum_config_index - 1;
    }
#else // ENABLE_ENUM_FILTER_CALLBACK
    enum_ctrl->enum_config_index = ENUM_CONFIG_INDEX_DEFAULT;
#endif // ENABLE_ENUM_FILTER_CALLBACK

    return true;
}

static bool enum_stage_transfer(enum_ctrl_t *enum_ctrl)
{
    usb_transfer_t *transfer = &enum_ctrl->urb->transfer;
    switch (enum_ctrl->stage) {
    case ENUM_STAGE_GET_SHORT_DEV_DESC: {
        // Initialize a short device descriptor request
        USB_SETUP_PACKET_INIT_GET_DEVICE_DESC((usb_setup_packet_t *)transfer->data_buffer);
        ((usb_setup_packet_t *)transfer->data_buffer)->wLength = ENUM_SHORT_DESC_REQ_LEN;
        transfer->num_bytes = sizeof(usb_setup_packet_t) + usb_round_up_to_mps(ENUM_SHORT_DESC_REQ_LEN, enum_ctrl->bMaxPacketSize0);
        // IN data stage should return exactly ENUM_SHORT_DESC_REQ_LEN bytes
        enum_ctrl->expect_num_bytes = sizeof(usb_setup_packet_t) + ENUM_SHORT_DESC_REQ_LEN;
        break;
    }
    case ENUM_STAGE_SET_ADDR: {
        USB_SETUP_PACKET_INIT_SET_ADDR((usb_setup_packet_t *)transfer->data_buffer, ENUM_DEV_ADDR);
        transfer->num_bytes = sizeof(usb_setup_packet_t);   // No data stage
        enum_ctrl->expect_num_bytes = 0;    // OUT transfer. No need to check number of bytes returned
        break;
    }
    case ENUM_STAGE_GET_FULL_DEV_DESC: {
        USB_SETUP_PACKET_INIT_GET_DEVICE_DESC((usb_setup_packet_t *)transfer->data_buffer);
        transfer->num_bytes = sizeof(usb_setup_packet_t) + usb_round_up_to_mps(sizeof(usb_device_desc_t), enum_ctrl->bMaxPacketSize0);
        // IN data stage should return exactly sizeof(usb_device_desc_t) bytes
        enum_ctrl->expect_num_bytes = sizeof(usb_setup_packet_t) + sizeof(usb_device_desc_t);
        break;
    }
    case ENUM_STAGE_GET_SHORT_CONFIG_DESC: {
        // Get a short config descriptor at index 0
        USB_SETUP_PACKET_INIT_GET_CONFIG_DESC((usb_setup_packet_t *)transfer->data_buffer, enum_ctrl->enum_config_index, ENUM_SHORT_DESC_REQ_LEN);
        transfer->num_bytes = sizeof(usb_setup_packet_t) + usb_round_up_to_mps(ENUM_SHORT_DESC_REQ_LEN, enum_ctrl->bMaxPacketSize0);
        // IN data stage should return exactly ENUM_SHORT_DESC_REQ_LEN bytes
        enum_ctrl->expect_num_bytes = sizeof(usb_setup_packet_t) + ENUM_SHORT_DESC_REQ_LEN;
        break;
    }
    case ENUM_STAGE_GET_FULL_CONFIG_DESC: {
        // Get the full configuration descriptor at index 0, requesting its exact length.
        USB_SETUP_PACKET_INIT_GET_CONFIG_DESC((usb_setup_packet_t *)transfer->data_buffer, enum_ctrl->enum_config_index, enum_ctrl->wTotalLength);
        transfer->num_bytes = sizeof(usb_setup_packet_t) + usb_round_up_to_mps(enum_ctrl->wTotalLength, enum_ctrl->bMaxPacketSize0);
        // IN data stage should return exactly wTotalLength bytes
        enum_ctrl->expect_num_bytes = sizeof(usb_setup_packet_t) + enum_ctrl->wTotalLength;
        break;
    }
    case ENUM_STAGE_SET_CONFIG: {
        USB_SETUP_PACKET_INIT_SET_CONFIG((usb_setup_packet_t *)transfer->data_buffer, enum_ctrl->bConfigurationValue);
        transfer->num_bytes = sizeof(usb_setup_packet_t);   // No data stage
        enum_ctrl->expect_num_bytes = 0;    // OUT transfer. No need to check number of bytes returned
        break;
    }
    case ENUM_STAGE_GET_SHORT_LANGID_TABLE:
    case ENUM_STAGE_GET_SHORT_MANU_STR_DESC:
    case ENUM_STAGE_GET_SHORT_PROD_STR_DESC:
    case ENUM_STAGE_GET_SHORT_SER_STR_DESC: {
        uint8_t index;
        uint16_t langid;
        get_string_desc_index_and_langid(enum_ctrl, &index, &langid);
        // Get only the header of the string descriptor
        USB_SETUP_PACKET_INIT_GET_STR_DESC((usb_setup_packet_t *)transfer->data_buffer,
                                           index,
                                           langid,
                                           sizeof(usb_str_desc_t));
        transfer->num_bytes = sizeof(usb_setup_packet_t) + usb_round_up_to_mps(sizeof(usb_str_desc_t), enum_ctrl->bMaxPacketSize0);
        // IN data stage should return exactly sizeof(usb_str_desc_t) bytes
        enum_ctrl->expect_num_bytes = sizeof(usb_setup_packet_t) + sizeof(usb_str_desc_t);
        break;
    }
    case ENUM_STAGE_GET_FULL_LANGID_TABLE:
    case ENUM_STAGE_GET_FULL_MANU_STR_DESC:
    case ENUM_STAGE_GET_FULL_PROD_STR_DESC:
    case ENUM_STAGE_GET_FULL_SER_STR_DESC: {
        uint8_t index;
        uint16_t langid;
        get_string_desc_index_and_langid(enum_ctrl, &index, &langid);
        // Get the full string descriptor at a particular index, requesting the descriptors exact length
        USB_SETUP_PACKET_INIT_GET_STR_DESC((usb_setup_packet_t *)transfer->data_buffer,
                                           index,
                                           langid,
                                           enum_ctrl->str_desc_bLength);
        transfer->num_bytes = sizeof(usb_setup_packet_t) + usb_round_up_to_mps(enum_ctrl->str_desc_bLength, enum_ctrl->bMaxPacketSize0);
        // IN data stage should return exactly str_desc_bLength bytes
        enum_ctrl->expect_num_bytes = sizeof(usb_setup_packet_t) + enum_ctrl->str_desc_bLength;
        break;
    }
    default:    // Should never occur
        abort();
        break;
    }
    if (usbh_dev_submit_ctrl_urb(enum_ctrl->dev_hdl, enum_ctrl->urb) != ESP_OK) {
        ESP_LOGE(HUB_DRIVER_TAG, "Failed to submit: %s", enum_stage_strings[enum_ctrl->stage]);
        return false;
    }
    return true;
}

static bool enum_stage_wait(enum_ctrl_t *enum_ctrl)
{
    switch (enum_ctrl->stage) {
    case ENUM_STAGE_SET_ADDR_RECOVERY: {
        vTaskDelay(pdMS_TO_TICKS(SET_ADDR_RECOVERY_INTERVAL_MS)); // Need a short delay before device is ready. Todo:   IDF-7007
        return true;
    }

    default:    // Should never occur
        abort();
        break;
    }

    return false;
}

static bool enum_stage_transfer_check(enum_ctrl_t *enum_ctrl)
{
    // Check transfer status
    usb_transfer_t *transfer = &enum_ctrl->urb->transfer;
    if (transfer->status != USB_TRANSFER_STATUS_COMPLETED) {
        ESP_LOGE(HUB_DRIVER_TAG, "Bad transfer status %d: %s", transfer->status, enum_stage_strings[enum_ctrl->stage]);
        return false;
    }
    // Check IN transfer returned the expected correct number of bytes
    if (enum_ctrl->expect_num_bytes != 0 && transfer->actual_num_bytes != enum_ctrl->expect_num_bytes) {
        if (transfer->actual_num_bytes > enum_ctrl->expect_num_bytes) {
            // The device returned more bytes than requested.
            // This violates the USB specs chapter 9.3.5, but we can continue
            ESP_LOGW(HUB_DRIVER_TAG, "Incorrect number of bytes returned %d: %s", transfer->actual_num_bytes, enum_stage_strings[enum_ctrl->stage]);
        } else {
            // The device returned less bytes than requested. We cannot continue.
            ESP_LOGE(HUB_DRIVER_TAG, "Incorrect number of bytes returned %d: %s", transfer->actual_num_bytes, enum_stage_strings[enum_ctrl->stage]);
            return false;
        }
    }

    // Stage specific checks and updates
    bool ret;
    switch (enum_ctrl->stage) {
    case ENUM_STAGE_CHECK_SHORT_DEV_DESC: {
        const usb_device_desc_t *device_desc = (usb_device_desc_t *)(transfer->data_buffer + sizeof(usb_setup_packet_t));
        // Check if the returned descriptor is corrupted
        if (device_desc->bDescriptorType != USB_B_DESCRIPTOR_TYPE_DEVICE) {
            ESP_LOGE(HUB_DRIVER_TAG, "Short dev desc corrupt");
            ret = false;
            break;
        }
        // Update and save the MPS of the EP0
        if (usbh_dev_set_ep0_mps(enum_ctrl->dev_hdl, device_desc->bMaxPacketSize0) != ESP_OK) {
            ESP_LOGE(HUB_DRIVER_TAG, "Failed to update MPS");
            ret = false;
            break;
        }
        // Save the actual MPS of EP0
        enum_ctrl->bMaxPacketSize0 = device_desc->bMaxPacketSize0;
        ret = true;
        break;
    }
    case ENUM_STAGE_CHECK_ADDR: {
        // Update the device's address
        ESP_ERROR_CHECK(usbh_dev_set_addr(enum_ctrl->dev_hdl, ENUM_DEV_ADDR));
        ret = true;
        break;
    }
    case ENUM_STAGE_CHECK_FULL_DEV_DESC: {
        // Set the device's descriptor
        const usb_device_desc_t *device_desc = (const usb_device_desc_t *)(transfer->data_buffer + sizeof(usb_setup_packet_t));
        ESP_ERROR_CHECK(usbh_dev_set_desc(enum_ctrl->dev_hdl, device_desc));
        enum_ctrl->iManufacturer = device_desc->iManufacturer;
        enum_ctrl->iProduct = device_desc->iProduct;
        enum_ctrl->iSerialNumber = device_desc->iSerialNumber;
        ret = set_config_index(enum_ctrl, device_desc);
        break;
    }
    case ENUM_STAGE_CHECK_SHORT_CONFIG_DESC: {
        const usb_config_desc_t *config_desc = (usb_config_desc_t *)(transfer->data_buffer + sizeof(usb_setup_packet_t));
        // Check if the returned descriptor is corrupted
        if (config_desc->bDescriptorType != USB_B_DESCRIPTOR_TYPE_CONFIGURATION) {
            ESP_LOGE(HUB_DRIVER_TAG, "Short config desc corrupt");
            ret = false;
            break;
        }
#if (ENUM_CTRL_TRANSFER_MAX_DATA_LEN < UINT16_MAX)  // Suppress -Wtype-limits warning due to uint16_t wTotalLength
        // Check if the descriptor is too long to be supported
        if (config_desc->wTotalLength > ENUM_CTRL_TRANSFER_MAX_DATA_LEN) {
            ESP_LOGE(HUB_DRIVER_TAG, "Configuration descriptor larger than control transfer max length");
            ret = false;
            break;
        }
#endif
        // Save the configuration descriptors full length
        enum_ctrl->wTotalLength = config_desc->wTotalLength;
        ret = true;
        break;
    }
    case ENUM_STAGE_CHECK_FULL_CONFIG_DESC: {
        // Set the device's configuration descriptor
        const usb_config_desc_t *config_desc = (usb_config_desc_t *)(transfer->data_buffer + sizeof(usb_setup_packet_t));
        enum_ctrl->bConfigurationValue = config_desc->bConfigurationValue;
        ESP_ERROR_CHECK(usbh_dev_set_config_desc(enum_ctrl->dev_hdl, config_desc));
        ret = true;
        break;
    }
    case ENUM_STAGE_CHECK_CONFIG: {
        ret = true;
        // Nothing to do
        break;
    }
    case ENUM_STAGE_CHECK_SHORT_LANGID_TABLE:
    case ENUM_STAGE_CHECK_SHORT_MANU_STR_DESC:
    case ENUM_STAGE_CHECK_SHORT_PROD_STR_DESC:
    case ENUM_STAGE_CHECK_SHORT_SER_STR_DESC: {
        const usb_str_desc_t *str_desc = (usb_str_desc_t *)(transfer->data_buffer + sizeof(usb_setup_packet_t));
        // Check if the returned descriptor is supported or corrupted
        if (str_desc->bDescriptorType == 0) {
            ESP_LOGW(HUB_DRIVER_TAG, "String desc not supported");
            ret = false;
            break;
        } else if (str_desc->bDescriptorType != USB_B_DESCRIPTOR_TYPE_STRING) {
            ESP_LOGE(HUB_DRIVER_TAG, "Full string desc corrupt");
            ret = false;
            break;
        }
#if (ENUM_CTRL_TRANSFER_MAX_DATA_LEN < UINT8_MAX)   // Suppress -Wtype-limits warning due to uint8_t bLength
        // Check if the descriptor is too long to be supported
        if (str_desc->bLength > (uint32_t)ENUM_CTRL_TRANSFER_MAX_DATA_LEN) {
            ESP_LOGE(HUB_DRIVER_TAG, "String descriptor larger than control transfer max length");
            ret = false;
            break;
        }
#endif
        // Save the descriptors full length
        enum_ctrl->str_desc_bLength = str_desc->bLength;
        ret = true;
        break;
    }
    case ENUM_STAGE_CHECK_FULL_LANGID_TABLE:
    case ENUM_STAGE_CHECK_FULL_MANU_STR_DESC:
    case ENUM_STAGE_CHECK_FULL_PROD_STR_DESC:
    case ENUM_STAGE_CHECK_FULL_SER_STR_DESC: {
        const usb_str_desc_t *str_desc = (usb_str_desc_t *)(transfer->data_buffer + sizeof(usb_setup_packet_t));
        // Check if the returned descriptor is supported or corrupted
        if (str_desc->bDescriptorType == 0) {
            ESP_LOGW(HUB_DRIVER_TAG, "String desc not supported");
            ret = false;
            break;
        } else if (str_desc->bDescriptorType != USB_B_DESCRIPTOR_TYPE_STRING) {
            ESP_LOGE(HUB_DRIVER_TAG, "Full string desc corrupt");
            ret = false;
            break;
        }
        if (enum_ctrl->stage == ENUM_STAGE_CHECK_FULL_LANGID_TABLE) {
            // Scan the LANGID table for our target LANGID
            bool target_langid_found = false;
            int langid_table_num_entries = (str_desc->bLength - sizeof(usb_str_desc_t)) / 2;  // Each LANGID is 2 bytes
            for (int i = 0; i < langid_table_num_entries; i++) {  // Each LANGID is 2 bytes
                if (str_desc->wData[i] == ENUM_LANGID) {
                    target_langid_found = true;
                    break;
                }
            }
            if (!target_langid_found) {
                ESP_LOGE(HUB_DRIVER_TAG, "LANGID 0x%x not found", ENUM_LANGID);
            }
            ret = target_langid_found;
            break;
        } else {
            // Fill the string descriptor into the device object
            int str_index;
            if (enum_ctrl->stage == ENUM_STAGE_CHECK_FULL_MANU_STR_DESC) {
                str_index = 0;
            } else if (enum_ctrl->stage == ENUM_STAGE_CHECK_FULL_PROD_STR_DESC) {
                str_index = 1;
            } else {    // ENUM_STAGE_CHECK_FULL_PROD_STR_DESC
                str_index = 2;
            }
            ESP_ERROR_CHECK(usbh_dev_set_str_desc(enum_ctrl->dev_hdl, str_desc, str_index));
            ret = true;
            break;
        }
    }
    default:    // Should never occur
        ret = false;
        abort();
        break;
    }
    return ret;
}

static void enum_stage_cleanup(enum_ctrl_t *enum_ctrl)
{
    // Unlock the device as we are done with the enumeration
    ESP_ERROR_CHECK(usbh_dev_enum_unlock(enum_ctrl->dev_hdl));
    // Propagate a new device event
    ESP_ERROR_CHECK(usbh_devs_new_dev_event(enum_ctrl->dev_hdl));
    // We are done with using the device. Close it.
    ESP_ERROR_CHECK(usbh_dev_close(enum_ctrl->dev_hdl));
    // Clear values in enum_ctrl
    enum_ctrl->dev_hdl = NULL;
}

static void enum_stage_cleanup_failed(enum_ctrl_t *enum_ctrl)
{
    if (enum_ctrl->dev_hdl) {
        // Close the device and unlock it as we done with enumeration
        ESP_ERROR_CHECK(usbh_dev_enum_unlock(enum_ctrl->dev_hdl));
        ESP_ERROR_CHECK(usbh_dev_close(enum_ctrl->dev_hdl));
        // We allow this to fail in case the device object was already freed
        usbh_devs_remove(HUB_ROOT_DEV_UID);
    }
    // Clear values in enum_ctrl
    enum_ctrl->dev_hdl = NULL;
}

static enum_stage_t get_next_stage(enum_stage_t old_stage, enum_ctrl_t *enum_ctrl)
{
    enum_stage_t new_stage = old_stage + 1;
    // Skip the GET_DESCRIPTOR string type corresponding stages if a particular index is 0.
    while (((new_stage == ENUM_STAGE_GET_SHORT_MANU_STR_DESC ||
             new_stage == ENUM_STAGE_CHECK_SHORT_MANU_STR_DESC ||
             new_stage == ENUM_STAGE_GET_FULL_MANU_STR_DESC ||
             new_stage == ENUM_STAGE_CHECK_FULL_MANU_STR_DESC) && enum_ctrl->iManufacturer == 0) ||
            ((new_stage == ENUM_STAGE_GET_SHORT_PROD_STR_DESC ||
              new_stage == ENUM_STAGE_CHECK_SHORT_PROD_STR_DESC ||
              new_stage == ENUM_STAGE_GET_FULL_PROD_STR_DESC ||
              new_stage == ENUM_STAGE_CHECK_FULL_PROD_STR_DESC) && enum_ctrl->iProduct == 0) ||
            ((new_stage == ENUM_STAGE_GET_SHORT_SER_STR_DESC ||
              new_stage == ENUM_STAGE_CHECK_SHORT_SER_STR_DESC ||
              new_stage == ENUM_STAGE_GET_FULL_SER_STR_DESC ||
              new_stage == ENUM_STAGE_CHECK_FULL_SER_STR_DESC) && enum_ctrl->iSerialNumber == 0)) {
        new_stage++;
    }
    return new_stage;
}

static void enum_set_next_stage(enum_ctrl_t *enum_ctrl, bool last_stage_pass)
{
    // Set next stage
    if (last_stage_pass) {
        if (enum_ctrl->stage != ENUM_STAGE_NONE &&
                enum_ctrl->stage != ENUM_STAGE_CLEANUP &&
                enum_ctrl->stage != ENUM_STAGE_CLEANUP_FAILED) {
            enum_ctrl->stage = get_next_stage(enum_ctrl->stage, enum_ctrl);
        } else {
            enum_ctrl->stage = ENUM_STAGE_NONE;
        }
    } else {
        switch (enum_ctrl->stage) {
        case ENUM_STAGE_START:
            // Stage failed but clean up not required
            enum_ctrl->stage = ENUM_STAGE_NONE;
            break;
        case ENUM_STAGE_GET_SHORT_LANGID_TABLE:
        case ENUM_STAGE_CHECK_SHORT_LANGID_TABLE:
        case ENUM_STAGE_GET_FULL_LANGID_TABLE:
        case ENUM_STAGE_CHECK_FULL_LANGID_TABLE:
        case ENUM_STAGE_GET_SHORT_MANU_STR_DESC:
        case ENUM_STAGE_CHECK_SHORT_MANU_STR_DESC:
        case ENUM_STAGE_GET_FULL_MANU_STR_DESC:
        case ENUM_STAGE_CHECK_FULL_MANU_STR_DESC:
        case ENUM_STAGE_GET_SHORT_PROD_STR_DESC:
        case ENUM_STAGE_CHECK_SHORT_PROD_STR_DESC:
        case ENUM_STAGE_GET_FULL_PROD_STR_DESC:
        case ENUM_STAGE_CHECK_FULL_PROD_STR_DESC:
        case ENUM_STAGE_GET_SHORT_SER_STR_DESC:
        case ENUM_STAGE_CHECK_SHORT_SER_STR_DESC:
        case ENUM_STAGE_GET_FULL_SER_STR_DESC:
        case ENUM_STAGE_CHECK_FULL_SER_STR_DESC:
            // String descriptor stages are allow to fail. We just don't fetch them and treat enumeration as successful
            enum_ctrl->stage = ENUM_STAGE_CLEANUP;
            break;
        default:
            // Enumeration failed. Go to failure clean up
            enum_ctrl->stage = ENUM_STAGE_CLEANUP_FAILED;
            break;
        }
    }

    // These stages are not waiting for a callback, so we need to re-trigger the enum event
    bool re_trigger;
    switch (enum_ctrl->stage) {
    case ENUM_STAGE_GET_SHORT_DEV_DESC:
    case ENUM_STAGE_SECOND_RESET:
    case ENUM_STAGE_SET_ADDR:
    case ENUM_STAGE_SET_ADDR_RECOVERY:
    case ENUM_STAGE_GET_FULL_DEV_DESC:
    case ENUM_STAGE_GET_SHORT_CONFIG_DESC:
    case ENUM_STAGE_GET_FULL_CONFIG_DESC:
    case ENUM_STAGE_SET_CONFIG:
    case ENUM_STAGE_GET_SHORT_LANGID_TABLE:
    case ENUM_STAGE_GET_FULL_LANGID_TABLE:
    case ENUM_STAGE_GET_SHORT_MANU_STR_DESC:
    case ENUM_STAGE_GET_FULL_MANU_STR_DESC:
    case ENUM_STAGE_GET_SHORT_PROD_STR_DESC:
    case ENUM_STAGE_GET_FULL_PROD_STR_DESC:
    case ENUM_STAGE_GET_SHORT_SER_STR_DESC:
    case ENUM_STAGE_GET_FULL_SER_STR_DESC:
    case ENUM_STAGE_CLEANUP:
    case ENUM_STAGE_CLEANUP_FAILED:
        re_trigger = true;
        break;
    default:
        re_trigger = false;
        break;
    }
    if (re_trigger) {
        HUB_DRIVER_ENTER_CRITICAL();
        p_hub_driver_obj->dynamic.flags.actions |= HUB_DRIVER_FLAG_ACTION_ENUM_EVENT;
        HUB_DRIVER_EXIT_CRITICAL();
    }
}

// ------------------------------------------------- Event Handling ----------------------------------------------------

// ---------------------- Callbacks ------------------------

static bool root_port_callback(hcd_port_handle_t port_hdl, hcd_port_event_t port_event, void *user_arg, bool in_isr)
{
    HUB_DRIVER_ENTER_CRITICAL_SAFE();
    p_hub_driver_obj->dynamic.flags.actions |= HUB_DRIVER_FLAG_ACTION_ROOT_EVENT;
    HUB_DRIVER_EXIT_CRITICAL_SAFE();
    assert(in_isr); // Currently, this callback should only ever be called from an ISR context
    return p_hub_driver_obj->constant.proc_req_cb(USB_PROC_REQ_SOURCE_HUB, in_isr, p_hub_driver_obj->constant.proc_req_cb_arg);
}

static void enum_transfer_callback(usb_transfer_t *transfer)
{
    // We simply trigger a processing request to handle the completed enumeration control transfer
    HUB_DRIVER_ENTER_CRITICAL_SAFE();
    p_hub_driver_obj->dynamic.flags.actions |= HUB_DRIVER_FLAG_ACTION_ENUM_EVENT;
    HUB_DRIVER_EXIT_CRITICAL_SAFE();
    p_hub_driver_obj->constant.proc_req_cb(USB_PROC_REQ_SOURCE_HUB, false, p_hub_driver_obj->constant.proc_req_cb_arg);
}

// ---------------------- Handlers -------------------------

static void root_port_handle_events(hcd_port_handle_t root_port_hdl)
{
    hcd_port_event_t port_event = hcd_port_handle_event(root_port_hdl);
    hub_event_data_t event_data = { 0 };

    switch (port_event) {
    case HCD_PORT_EVENT_NONE:
        // Nothing to do
        break;
    case HCD_PORT_EVENT_CONNECTION: {
        if (hcd_port_command(root_port_hdl, HCD_PORT_CMD_RESET) != ESP_OK) {
            ESP_LOGE(HUB_DRIVER_TAG, "Root port reset failed");
            goto reset_err;
        }
        ESP_LOGD(HUB_DRIVER_TAG, "Root port reset");
        usb_speed_t speed;
        if (hcd_port_get_speed(p_hub_driver_obj->constant.root_port_hdl, &speed) != ESP_OK) {
            goto new_dev_err;
        }

        // Allocate a new device. We use a fixed HUB_ROOT_DEV_UID for now since we only support a single device
        usbh_dev_params_t params = {
            .uid = HUB_ROOT_DEV_UID,
            .speed = speed,
            .root_port_hdl = p_hub_driver_obj->constant.root_port_hdl,
        };

        if (usbh_devs_add(&params) != ESP_OK) {
            ESP_LOGE(HUB_DRIVER_TAG, "Failed to add device");
            goto new_dev_err;
        }
        p_hub_driver_obj->single_thread.root_dev_uid = HUB_ROOT_DEV_UID;

        // Start enumeration
        HUB_DRIVER_ENTER_CRITICAL();
        p_hub_driver_obj->dynamic.flags.actions |= HUB_DRIVER_FLAG_ACTION_ENUM_EVENT;
        p_hub_driver_obj->dynamic.root_port_state = ROOT_PORT_STATE_ENABLED;
        HUB_DRIVER_EXIT_CRITICAL();
        p_hub_driver_obj->single_thread.enum_ctrl.stage = ENUM_STAGE_START;

        event_data.event = HUB_EVENT_CONNECTED;
        event_data.connected.uid = p_hub_driver_obj->single_thread.root_dev_uid;
        p_hub_driver_obj->constant.event_cb(&event_data, p_hub_driver_obj->constant.event_cb_arg);
        break;
new_dev_err:
        // We allow this to fail in case a disconnect/port error happens while disabling.
        hcd_port_command(p_hub_driver_obj->constant.root_port_hdl, HCD_PORT_CMD_DISABLE);
reset_err:
        break;
    }
    case HCD_PORT_EVENT_DISCONNECTION:
    case HCD_PORT_EVENT_ERROR:
    case HCD_PORT_EVENT_OVERCURRENT: {
        bool port_has_device = false;
        HUB_DRIVER_ENTER_CRITICAL();
        switch (p_hub_driver_obj->dynamic.root_port_state) {
        case ROOT_PORT_STATE_POWERED: // This occurred before enumeration
        case ROOT_PORT_STATE_DISABLED: // This occurred after the device has already been disabled
            // Therefore, there's no device object to clean up, and we can go straight to port recovery
            p_hub_driver_obj->dynamic.port_reqs |= PORT_REQ_RECOVER;
            p_hub_driver_obj->dynamic.flags.actions |= HUB_DRIVER_FLAG_ACTION_PORT_REQ;
            break;
        case ROOT_PORT_STATE_ENABLED:
            // There is an enabled (active) device. We need to indicate to USBH that the device is gone
            port_has_device = true;
            break;
        default:
            abort();    // Should never occur
            break;
        }
        p_hub_driver_obj->dynamic.root_port_state = ROOT_PORT_STATE_RECOVERY;
        HUB_DRIVER_EXIT_CRITICAL();
        if (port_has_device) {
            // The port must have a device object
            assert(p_hub_driver_obj->single_thread.root_dev_uid != 0);

            event_data.event = HUB_EVENT_DISCONNECTED;
            event_data.disconnected.uid = p_hub_driver_obj->single_thread.root_dev_uid;
            p_hub_driver_obj->constant.event_cb(&event_data, p_hub_driver_obj->constant.event_cb_arg);
        }
        break;
    }
    default:
        abort();    // Should never occur
        break;
    }
}

static void root_port_req(hcd_port_handle_t root_port_hdl)
{
    unsigned int port_reqs;

    HUB_DRIVER_ENTER_CRITICAL();
    port_reqs = p_hub_driver_obj->dynamic.port_reqs;
    p_hub_driver_obj->dynamic.port_reqs = 0;
    HUB_DRIVER_EXIT_CRITICAL();

    if (port_reqs & PORT_REQ_DISABLE) {
        ESP_LOGD(HUB_DRIVER_TAG, "Disabling root port");
        // We allow this to fail in case a disconnect/port error happens while disabling.
        hcd_port_command(p_hub_driver_obj->constant.root_port_hdl, HCD_PORT_CMD_DISABLE);
    }
    if (port_reqs & PORT_REQ_RECOVER) {
        ESP_LOGD(HUB_DRIVER_TAG, "Recovering root port");
        ESP_ERROR_CHECK(hcd_port_recover(p_hub_driver_obj->constant.root_port_hdl));
        ESP_ERROR_CHECK(hcd_port_command(p_hub_driver_obj->constant.root_port_hdl, HCD_PORT_CMD_POWER_ON));
        HUB_DRIVER_ENTER_CRITICAL();
        p_hub_driver_obj->dynamic.root_port_state = ROOT_PORT_STATE_POWERED;
        HUB_DRIVER_EXIT_CRITICAL();
    }
}

static void enum_handle_events(void)
{
    bool stage_pass;
    enum_ctrl_t *enum_ctrl = &p_hub_driver_obj->single_thread.enum_ctrl;
    switch (enum_ctrl->stage) {
    case ENUM_STAGE_START:
        stage_pass = enum_stage_start(enum_ctrl);
        break;
    case ENUM_STAGE_SECOND_RESET:
        stage_pass = enum_stage_second_reset(enum_ctrl);
        break;
    // Transfer submission stages
    case ENUM_STAGE_GET_SHORT_DEV_DESC:
    case ENUM_STAGE_SET_ADDR:
    case ENUM_STAGE_GET_FULL_DEV_DESC:
    case ENUM_STAGE_GET_SHORT_CONFIG_DESC:
    case ENUM_STAGE_GET_FULL_CONFIG_DESC:
    case ENUM_STAGE_SET_CONFIG:
    case ENUM_STAGE_GET_SHORT_LANGID_TABLE:
    case ENUM_STAGE_GET_FULL_LANGID_TABLE:
    case ENUM_STAGE_GET_SHORT_MANU_STR_DESC:
    case ENUM_STAGE_GET_FULL_MANU_STR_DESC:
    case ENUM_STAGE_GET_SHORT_PROD_STR_DESC:
    case ENUM_STAGE_GET_FULL_PROD_STR_DESC:
    case ENUM_STAGE_GET_SHORT_SER_STR_DESC:
    case ENUM_STAGE_GET_FULL_SER_STR_DESC:
        stage_pass = enum_stage_transfer(enum_ctrl);
        break;
    // Recovery interval
    case ENUM_STAGE_SET_ADDR_RECOVERY:
        stage_pass = enum_stage_wait(enum_ctrl);
        break;
    // Transfer check stages
    case ENUM_STAGE_CHECK_SHORT_DEV_DESC:
    case ENUM_STAGE_CHECK_ADDR:
    case ENUM_STAGE_CHECK_FULL_DEV_DESC:
    case ENUM_STAGE_CHECK_SHORT_CONFIG_DESC:
    case ENUM_STAGE_CHECK_FULL_CONFIG_DESC:
    case ENUM_STAGE_CHECK_CONFIG:
    case ENUM_STAGE_CHECK_SHORT_LANGID_TABLE:
    case ENUM_STAGE_CHECK_FULL_LANGID_TABLE:
    case ENUM_STAGE_CHECK_SHORT_MANU_STR_DESC:
    case ENUM_STAGE_CHECK_FULL_MANU_STR_DESC:
    case ENUM_STAGE_CHECK_SHORT_PROD_STR_DESC:
    case ENUM_STAGE_CHECK_FULL_PROD_STR_DESC:
    case ENUM_STAGE_CHECK_SHORT_SER_STR_DESC:
    case ENUM_STAGE_CHECK_FULL_SER_STR_DESC:
        stage_pass = enum_stage_transfer_check(enum_ctrl);
        break;
    case ENUM_STAGE_CLEANUP:
        enum_stage_cleanup(enum_ctrl);
        stage_pass = true;
        break;
    case ENUM_STAGE_CLEANUP_FAILED:
        enum_stage_cleanup_failed(enum_ctrl);
        stage_pass = true;
        break;
    default:
        stage_pass = true;
        break;
    }
    if (stage_pass) {
        ESP_LOGD(HUB_DRIVER_TAG, "Stage done: %s", enum_stage_strings[enum_ctrl->stage]);
    } else {
#ifdef ENABLE_ENUM_FILTER_CALLBACK
        if (!enum_ctrl->graceful_exit) {
            ESP_LOGE(HUB_DRIVER_TAG, "Stage failed: %s", enum_stage_strings[enum_ctrl->stage]);
        } else {
            ESP_LOGD(HUB_DRIVER_TAG, "Stage done: %s", enum_stage_strings[enum_ctrl->stage]);
        }
#else // ENABLE_ENUM_FILTER_CALLBACK
        ESP_LOGE(HUB_DRIVER_TAG, "Stage failed: %s", enum_stage_strings[enum_ctrl->stage]);
#endif // ENABLE_ENUM_FILTER_CALLBACK
    }
    enum_set_next_stage(enum_ctrl, stage_pass);
}

static esp_err_t root_port_recycle(void)
{
    // Device is free, we can now request its port be recycled
    hcd_port_state_t port_state = hcd_port_get_state(p_hub_driver_obj->constant.root_port_hdl);
    p_hub_driver_obj->single_thread.root_dev_uid = 0;
    HUB_DRIVER_ENTER_CRITICAL();
    // How the port is recycled will depend on the port's state
    switch (port_state) {
    case HCD_PORT_STATE_ENABLED:
        p_hub_driver_obj->dynamic.port_reqs |= PORT_REQ_DISABLE;
        break;
    case HCD_PORT_STATE_RECOVERY:
        p_hub_driver_obj->dynamic.port_reqs |= PORT_REQ_RECOVER;
        break;
    default:
        abort();    // Should never occur
        break;
    }
    p_hub_driver_obj->dynamic.flags.actions |= HUB_DRIVER_FLAG_ACTION_PORT_REQ;
    HUB_DRIVER_EXIT_CRITICAL();

    p_hub_driver_obj->constant.proc_req_cb(USB_PROC_REQ_SOURCE_HUB, false, p_hub_driver_obj->constant.proc_req_cb_arg);

    return ESP_OK;
}

// ---------------------------------------------- Hub Driver Functions -------------------------------------------------

esp_err_t hub_install(hub_config_t *hub_config, void **client_ret)
{
    HUB_DRIVER_ENTER_CRITICAL();
    HUB_DRIVER_CHECK_FROM_CRIT(p_hub_driver_obj == NULL, ESP_ERR_INVALID_STATE);
    HUB_DRIVER_EXIT_CRITICAL();
    esp_err_t ret;

    // Allocate Hub driver object
    hub_driver_t *hub_driver_obj = heap_caps_calloc(1, sizeof(hub_driver_t), MALLOC_CAP_DEFAULT);
    urb_t *enum_urb = urb_alloc(sizeof(usb_setup_packet_t) + ENUM_CTRL_TRANSFER_MAX_DATA_LEN, 0);
    if (hub_driver_obj == NULL || enum_urb == NULL) {
        return ESP_ERR_NO_MEM;
    }
    enum_urb->usb_host_client = (void *)hub_driver_obj;
    enum_urb->transfer.callback = enum_transfer_callback;

    // Install HCD port
    hcd_port_config_t port_config = {
        .fifo_bias = HUB_ROOT_HCD_PORT_FIFO_BIAS,
        .callback = root_port_callback,
        .callback_arg = NULL,
        .context = NULL,
    };
    hcd_port_handle_t root_port_hdl;
    ret = hcd_port_init(HUB_ROOT_PORT_NUM, &port_config, &root_port_hdl);
    if (ret != ESP_OK) {
        goto err;
    }

    // Initialize Hub driver object
    hub_driver_obj->single_thread.enum_ctrl.stage = ENUM_STAGE_NONE;
    hub_driver_obj->single_thread.enum_ctrl.urb = enum_urb;
#ifdef ENABLE_ENUM_FILTER_CALLBACK
    hub_driver_obj->single_thread.enum_ctrl.enum_filter_cb = hub_config->enum_filter_cb;
#endif // ENABLE_ENUM_FILTER_CALLBACK
    hub_driver_obj->constant.root_port_hdl = root_port_hdl;
    hub_driver_obj->constant.proc_req_cb = hub_config->proc_req_cb;
    hub_driver_obj->constant.proc_req_cb_arg = hub_config->proc_req_cb_arg;
    hub_driver_obj->constant.event_cb = hub_config->event_cb;
    hub_driver_obj->constant.event_cb_arg = hub_config->event_cb_arg;

    HUB_DRIVER_ENTER_CRITICAL();
    hub_driver_obj->dynamic.root_port_state = ROOT_PORT_STATE_NOT_POWERED;
    if (p_hub_driver_obj != NULL) {
        HUB_DRIVER_EXIT_CRITICAL();
        ret = ESP_ERR_INVALID_STATE;
        goto assign_err;
    }
    p_hub_driver_obj = hub_driver_obj;
    HUB_DRIVER_EXIT_CRITICAL();

    // Write-back client_ret pointer
    *client_ret = (void *)hub_driver_obj;
    ret = ESP_OK;

    return ret;

assign_err:
    ESP_ERROR_CHECK(hcd_port_deinit(root_port_hdl));
err:
    urb_free(enum_urb);
    heap_caps_free(hub_driver_obj);
    return ret;
}

esp_err_t hub_uninstall(void)
{
    HUB_DRIVER_ENTER_CRITICAL();
    HUB_DRIVER_CHECK_FROM_CRIT(p_hub_driver_obj != NULL, ESP_ERR_INVALID_STATE);
    HUB_DRIVER_CHECK_FROM_CRIT(p_hub_driver_obj->dynamic.root_port_state == ROOT_PORT_STATE_NOT_POWERED, ESP_ERR_INVALID_STATE);
    hub_driver_t *hub_driver_obj = p_hub_driver_obj;
    p_hub_driver_obj = NULL;
    HUB_DRIVER_EXIT_CRITICAL();

    ESP_ERROR_CHECK(hcd_port_deinit(hub_driver_obj->constant.root_port_hdl));
    // Free Hub driver resources
    urb_free(hub_driver_obj->single_thread.enum_ctrl.urb);
    heap_caps_free(hub_driver_obj);
    return ESP_OK;
}

esp_err_t hub_root_start(void)
{
    HUB_DRIVER_ENTER_CRITICAL();
    HUB_DRIVER_CHECK_FROM_CRIT(p_hub_driver_obj != NULL, ESP_ERR_INVALID_STATE);
    HUB_DRIVER_CHECK_FROM_CRIT(p_hub_driver_obj->dynamic.root_port_state == ROOT_PORT_STATE_NOT_POWERED, ESP_ERR_INVALID_STATE);
    HUB_DRIVER_EXIT_CRITICAL();
    // Power ON the root port
    esp_err_t ret;
    ret = hcd_port_command(p_hub_driver_obj->constant.root_port_hdl, HCD_PORT_CMD_POWER_ON);
    if (ret == ESP_OK) {
        HUB_DRIVER_ENTER_CRITICAL();
        p_hub_driver_obj->dynamic.root_port_state = ROOT_PORT_STATE_POWERED;
        HUB_DRIVER_EXIT_CRITICAL();
    }
    return ret;
}

esp_err_t hub_root_stop(void)
{
    HUB_DRIVER_ENTER_CRITICAL();
    HUB_DRIVER_CHECK_FROM_CRIT(p_hub_driver_obj != NULL, ESP_ERR_INVALID_STATE);
    HUB_DRIVER_CHECK_FROM_CRIT(p_hub_driver_obj->dynamic.root_port_state != ROOT_PORT_STATE_NOT_POWERED, ESP_ERR_INVALID_STATE);
    HUB_DRIVER_EXIT_CRITICAL();
    esp_err_t ret;
    ret = hcd_port_command(p_hub_driver_obj->constant.root_port_hdl, HCD_PORT_CMD_POWER_OFF);
    if (ret == ESP_OK) {
        HUB_DRIVER_ENTER_CRITICAL();
        p_hub_driver_obj->dynamic.root_port_state = ROOT_PORT_STATE_NOT_POWERED;
        HUB_DRIVER_EXIT_CRITICAL();
    }
    return ret;
}

esp_err_t hub_port_recycle(usb_device_handle_t parent_dev_hdl, uint8_t parent_port_num, unsigned int dev_uid)
{
    HUB_DRIVER_ENTER_CRITICAL();
    HUB_DRIVER_CHECK_FROM_CRIT(p_hub_driver_obj != NULL, ESP_ERR_INVALID_STATE);
    HUB_DRIVER_EXIT_CRITICAL();

    esp_err_t ret = ESP_FAIL;

    if (parent_port_num == 0) {
        if (p_hub_driver_obj->single_thread.root_dev_uid) {
            // If root port has a device, it should be with correct uid
            assert(dev_uid == p_hub_driver_obj->single_thread.root_dev_uid);
            p_hub_driver_obj->single_thread.root_dev_uid = 0;
        }
        ret = root_port_recycle();
    } else {
        ESP_LOGW(HUB_DRIVER_TAG, "Recycling External Port has not been implemented yet");
        return ESP_ERR_NOT_SUPPORTED;
    }

    return ret;
}

esp_err_t hub_port_reset(usb_device_handle_t parent_dev_hdl, uint8_t parent_port_num)
{
    HUB_DRIVER_ENTER_CRITICAL();
    HUB_DRIVER_CHECK_FROM_CRIT(p_hub_driver_obj != NULL, ESP_ERR_INVALID_STATE);
    HUB_DRIVER_EXIT_CRITICAL();

    esp_err_t ret = ESP_FAIL;

    if (parent_port_num == 0) {
        // The port must have a device object
        assert(p_hub_driver_obj->single_thread.root_dev_uid != 0);

        ret = hcd_port_command(p_hub_driver_obj->constant.root_port_hdl, HCD_PORT_CMD_RESET);
        if (ret != ESP_OK) {
            ESP_LOGE(HUB_DRIVER_TAG, "Failed to issue root port reset");
        }

        hub_event_data_t event_data = {
            .event = HUB_EVENT_RESET_COMPLETED,
            .disconnected = {
                .uid = p_hub_driver_obj->single_thread.root_dev_uid,
            },
        };
        p_hub_driver_obj->constant.event_cb(&event_data, p_hub_driver_obj->constant.event_cb_arg);
    } else {
        ESP_LOGW(HUB_DRIVER_TAG, "Reset External Port has not been implemented yet");
        return ESP_ERR_NOT_SUPPORTED;
    }

    return ret;
}

esp_err_t hub_process(void)
{
    HUB_DRIVER_ENTER_CRITICAL();
    uint32_t action_flags = p_hub_driver_obj->dynamic.flags.actions;
    p_hub_driver_obj->dynamic.flags.actions = 0;
    HUB_DRIVER_EXIT_CRITICAL();

    while (action_flags) {
        if (action_flags & HUB_DRIVER_FLAG_ACTION_ROOT_EVENT) {
            root_port_handle_events(p_hub_driver_obj->constant.root_port_hdl);
        }
        if (action_flags & HUB_DRIVER_FLAG_ACTION_PORT_REQ) {
            root_port_req(p_hub_driver_obj->constant.root_port_hdl);
        }
        if (action_flags & HUB_DRIVER_FLAG_ACTION_ENUM_EVENT) {
            enum_handle_events();
        }

        HUB_DRIVER_ENTER_CRITICAL();
        action_flags = p_hub_driver_obj->dynamic.flags.actions;
        p_hub_driver_obj->dynamic.flags.actions = 0;
        HUB_DRIVER_EXIT_CRITICAL();
    }
    return ESP_OK;
}
