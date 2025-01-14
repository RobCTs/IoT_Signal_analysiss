/**
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** LP_IO_OUT_DATA_REG register
 *  need des
 */
#define LP_IO_OUT_DATA_REG (DR_REG_LP_IO_BASE + 0x0)
/** LP_IO_LP_GPIO_OUT_DATA : R/W/WTC; bitpos: [7:0]; default: 0;
 *  set lp gpio output data
 */
#define LP_IO_LP_GPIO_OUT_DATA    0x000000FFU
#define LP_IO_LP_GPIO_OUT_DATA_M  (LP_IO_LP_GPIO_OUT_DATA_V << LP_IO_LP_GPIO_OUT_DATA_S)
#define LP_IO_LP_GPIO_OUT_DATA_V  0x000000FFU
#define LP_IO_LP_GPIO_OUT_DATA_S  0

/** LP_IO_OUT_DATA_W1TS_REG register
 *  need des
 */
#define LP_IO_OUT_DATA_W1TS_REG (DR_REG_LP_IO_BASE + 0x4)
/** LP_IO_LP_GPIO_OUT_DATA_W1TS : WT; bitpos: [7:0]; default: 0;
 *  set one time output data
 */
#define LP_IO_LP_GPIO_OUT_DATA_W1TS    0x000000FFU
#define LP_IO_LP_GPIO_OUT_DATA_W1TS_M  (LP_IO_LP_GPIO_OUT_DATA_W1TS_V << LP_IO_LP_GPIO_OUT_DATA_W1TS_S)
#define LP_IO_LP_GPIO_OUT_DATA_W1TS_V  0x000000FFU
#define LP_IO_LP_GPIO_OUT_DATA_W1TS_S  0

/** LP_IO_OUT_DATA_W1TC_REG register
 *  need des
 */
#define LP_IO_OUT_DATA_W1TC_REG (DR_REG_LP_IO_BASE + 0x8)
/** LP_IO_LP_GPIO_OUT_DATA_W1TC : WT; bitpos: [7:0]; default: 0;
 *  clear one time output data
 */
#define LP_IO_LP_GPIO_OUT_DATA_W1TC    0x000000FFU
#define LP_IO_LP_GPIO_OUT_DATA_W1TC_M  (LP_IO_LP_GPIO_OUT_DATA_W1TC_V << LP_IO_LP_GPIO_OUT_DATA_W1TC_S)
#define LP_IO_LP_GPIO_OUT_DATA_W1TC_V  0x000000FFU
#define LP_IO_LP_GPIO_OUT_DATA_W1TC_S  0

/** LP_IO_OUT_ENABLE_REG register
 *  need des
 */
#define LP_IO_OUT_ENABLE_REG (DR_REG_LP_IO_BASE + 0xc)
/** LP_IO_LP_GPIO_ENABLE : R/W/WTC; bitpos: [7:0]; default: 0;
 *  set lp gpio output data
 */
#define LP_IO_LP_GPIO_ENABLE    0x000000FFU
#define LP_IO_LP_GPIO_ENABLE_M  (LP_IO_LP_GPIO_ENABLE_V << LP_IO_LP_GPIO_ENABLE_S)
#define LP_IO_LP_GPIO_ENABLE_V  0x000000FFU
#define LP_IO_LP_GPIO_ENABLE_S  0

/** LP_IO_OUT_ENABLE_W1TS_REG register
 *  need des
 */
#define LP_IO_OUT_ENABLE_W1TS_REG (DR_REG_LP_IO_BASE + 0x10)
/** LP_IO_LP_GPIO_ENABLE_W1TS : WT; bitpos: [7:0]; default: 0;
 *  set one time output data
 */
#define LP_IO_LP_GPIO_ENABLE_W1TS    0x000000FFU
#define LP_IO_LP_GPIO_ENABLE_W1TS_M  (LP_IO_LP_GPIO_ENABLE_W1TS_V << LP_IO_LP_GPIO_ENABLE_W1TS_S)
#define LP_IO_LP_GPIO_ENABLE_W1TS_V  0x000000FFU
#define LP_IO_LP_GPIO_ENABLE_W1TS_S  0

/** LP_IO_OUT_ENABLE_W1TC_REG register
 *  need des
 */
#define LP_IO_OUT_ENABLE_W1TC_REG (DR_REG_LP_IO_BASE + 0x14)
/** LP_IO_LP_GPIO_ENABLE_W1TC : WT; bitpos: [7:0]; default: 0;
 *  clear one time output data
 */
#define LP_IO_LP_GPIO_ENABLE_W1TC    0x000000FFU
#define LP_IO_LP_GPIO_ENABLE_W1TC_M  (LP_IO_LP_GPIO_ENABLE_W1TC_V << LP_IO_LP_GPIO_ENABLE_W1TC_S)
#define LP_IO_LP_GPIO_ENABLE_W1TC_V  0x000000FFU
#define LP_IO_LP_GPIO_ENABLE_W1TC_S  0

/** LP_IO_STATUS_REG register
 *  need des
 */
#define LP_IO_STATUS_REG (DR_REG_LP_IO_BASE + 0x18)
/** LP_IO_LP_GPIO_STATUS_INTERRUPT : R/W/WTC; bitpos: [7:0]; default: 0;
 *  set lp gpio output data
 */
#define LP_IO_LP_GPIO_STATUS_INTERRUPT    0x000000FFU
#define LP_IO_LP_GPIO_STATUS_INTERRUPT_M  (LP_IO_LP_GPIO_STATUS_INTERRUPT_V << LP_IO_LP_GPIO_STATUS_INTERRUPT_S)
#define LP_IO_LP_GPIO_STATUS_INTERRUPT_V  0x000000FFU
#define LP_IO_LP_GPIO_STATUS_INTERRUPT_S  0

/** LP_IO_STATUS_W1TS_REG register
 *  need des
 */
#define LP_IO_STATUS_W1TS_REG (DR_REG_LP_IO_BASE + 0x1c)
/** LP_IO_LP_GPIO_STATUS_W1TS : WT; bitpos: [7:0]; default: 0;
 *  set one time output data
 */
#define LP_IO_LP_GPIO_STATUS_W1TS    0x000000FFU
#define LP_IO_LP_GPIO_STATUS_W1TS_M  (LP_IO_LP_GPIO_STATUS_W1TS_V << LP_IO_LP_GPIO_STATUS_W1TS_S)
#define LP_IO_LP_GPIO_STATUS_W1TS_V  0x000000FFU
#define LP_IO_LP_GPIO_STATUS_W1TS_S  0

/** LP_IO_STATUS_W1TC_REG register
 *  need des
 */
#define LP_IO_STATUS_W1TC_REG (DR_REG_LP_IO_BASE + 0x20)
/** LP_IO_LP_GPIO_STATUS_W1TC : WT; bitpos: [7:0]; default: 0;
 *  clear one time output data
 */
#define LP_IO_LP_GPIO_STATUS_W1TC    0x000000FFU
#define LP_IO_LP_GPIO_STATUS_W1TC_M  (LP_IO_LP_GPIO_STATUS_W1TC_V << LP_IO_LP_GPIO_STATUS_W1TC_S)
#define LP_IO_LP_GPIO_STATUS_W1TC_V  0x000000FFU
#define LP_IO_LP_GPIO_STATUS_W1TC_S  0

/** LP_IO_IN_REG register
 *  need des
 */
#define LP_IO_IN_REG (DR_REG_LP_IO_BASE + 0x24)
/** LP_IO_LP_GPIO_IN_DATA_NEXT : RO; bitpos: [7:0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO_IN_DATA_NEXT    0x000000FFU
#define LP_IO_LP_GPIO_IN_DATA_NEXT_M  (LP_IO_LP_GPIO_IN_DATA_NEXT_V << LP_IO_LP_GPIO_IN_DATA_NEXT_S)
#define LP_IO_LP_GPIO_IN_DATA_NEXT_V  0x000000FFU
#define LP_IO_LP_GPIO_IN_DATA_NEXT_S  0

/** LP_IO_PIN0_REG register
 *  need des
 */
#define LP_IO_PIN0_REG (DR_REG_LP_IO_BASE + 0x28)
/** LP_IO_LP_GPIO0_SYNC_BYPASS : R/W; bitpos: [1:0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_SYNC_BYPASS    0x00000003U
#define LP_IO_LP_GPIO0_SYNC_BYPASS_M  (LP_IO_LP_GPIO0_SYNC_BYPASS_V << LP_IO_LP_GPIO0_SYNC_BYPASS_S)
#define LP_IO_LP_GPIO0_SYNC_BYPASS_V  0x00000003U
#define LP_IO_LP_GPIO0_SYNC_BYPASS_S  0
/** LP_IO_LP_GPIO0_PAD_DRIVER : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_PAD_DRIVER    (BIT(2))
#define LP_IO_LP_GPIO0_PAD_DRIVER_M  (LP_IO_LP_GPIO0_PAD_DRIVER_V << LP_IO_LP_GPIO0_PAD_DRIVER_S)
#define LP_IO_LP_GPIO0_PAD_DRIVER_V  0x00000001U
#define LP_IO_LP_GPIO0_PAD_DRIVER_S  2
/** LP_IO_LP_GPIO0_EDGE_WAKEUP_CLR : WT; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_EDGE_WAKEUP_CLR    (BIT(3))
#define LP_IO_LP_GPIO0_EDGE_WAKEUP_CLR_M  (LP_IO_LP_GPIO0_EDGE_WAKEUP_CLR_V << LP_IO_LP_GPIO0_EDGE_WAKEUP_CLR_S)
#define LP_IO_LP_GPIO0_EDGE_WAKEUP_CLR_V  0x00000001U
#define LP_IO_LP_GPIO0_EDGE_WAKEUP_CLR_S  3
/** LP_IO_LP_GPIO0_INT_TYPE : R/W; bitpos: [9:7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_INT_TYPE    0x00000007U
#define LP_IO_LP_GPIO0_INT_TYPE_M  (LP_IO_LP_GPIO0_INT_TYPE_V << LP_IO_LP_GPIO0_INT_TYPE_S)
#define LP_IO_LP_GPIO0_INT_TYPE_V  0x00000007U
#define LP_IO_LP_GPIO0_INT_TYPE_S  7
/** LP_IO_LP_GPIO0_WAKEUP_ENABLE : R/W; bitpos: [10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_WAKEUP_ENABLE    (BIT(10))
#define LP_IO_LP_GPIO0_WAKEUP_ENABLE_M  (LP_IO_LP_GPIO0_WAKEUP_ENABLE_V << LP_IO_LP_GPIO0_WAKEUP_ENABLE_S)
#define LP_IO_LP_GPIO0_WAKEUP_ENABLE_V  0x00000001U
#define LP_IO_LP_GPIO0_WAKEUP_ENABLE_S  10
/** LP_IO_LP_GPIO0_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_FILTER_EN    (BIT(11))
#define LP_IO_LP_GPIO0_FILTER_EN_M  (LP_IO_LP_GPIO0_FILTER_EN_V << LP_IO_LP_GPIO0_FILTER_EN_S)
#define LP_IO_LP_GPIO0_FILTER_EN_V  0x00000001U
#define LP_IO_LP_GPIO0_FILTER_EN_S  11

/** LP_IO_PIN1_REG register
 *  need des
 */
#define LP_IO_PIN1_REG (DR_REG_LP_IO_BASE + 0x2c)
/** LP_IO_LP_GPIO1_SYNC_BYPASS : R/W; bitpos: [1:0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_SYNC_BYPASS    0x00000003U
#define LP_IO_LP_GPIO1_SYNC_BYPASS_M  (LP_IO_LP_GPIO1_SYNC_BYPASS_V << LP_IO_LP_GPIO1_SYNC_BYPASS_S)
#define LP_IO_LP_GPIO1_SYNC_BYPASS_V  0x00000003U
#define LP_IO_LP_GPIO1_SYNC_BYPASS_S  0
/** LP_IO_LP_GPIO1_PAD_DRIVER : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_PAD_DRIVER    (BIT(2))
#define LP_IO_LP_GPIO1_PAD_DRIVER_M  (LP_IO_LP_GPIO1_PAD_DRIVER_V << LP_IO_LP_GPIO1_PAD_DRIVER_S)
#define LP_IO_LP_GPIO1_PAD_DRIVER_V  0x00000001U
#define LP_IO_LP_GPIO1_PAD_DRIVER_S  2
/** LP_IO_LP_GPIO1_EDGE_WAKEUP_CLR : WT; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_EDGE_WAKEUP_CLR    (BIT(3))
#define LP_IO_LP_GPIO1_EDGE_WAKEUP_CLR_M  (LP_IO_LP_GPIO1_EDGE_WAKEUP_CLR_V << LP_IO_LP_GPIO1_EDGE_WAKEUP_CLR_S)
#define LP_IO_LP_GPIO1_EDGE_WAKEUP_CLR_V  0x00000001U
#define LP_IO_LP_GPIO1_EDGE_WAKEUP_CLR_S  3
/** LP_IO_LP_GPIO1_INT_TYPE : R/W; bitpos: [9:7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_INT_TYPE    0x00000007U
#define LP_IO_LP_GPIO1_INT_TYPE_M  (LP_IO_LP_GPIO1_INT_TYPE_V << LP_IO_LP_GPIO1_INT_TYPE_S)
#define LP_IO_LP_GPIO1_INT_TYPE_V  0x00000007U
#define LP_IO_LP_GPIO1_INT_TYPE_S  7
/** LP_IO_LP_GPIO1_WAKEUP_ENABLE : R/W; bitpos: [10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_WAKEUP_ENABLE    (BIT(10))
#define LP_IO_LP_GPIO1_WAKEUP_ENABLE_M  (LP_IO_LP_GPIO1_WAKEUP_ENABLE_V << LP_IO_LP_GPIO1_WAKEUP_ENABLE_S)
#define LP_IO_LP_GPIO1_WAKEUP_ENABLE_V  0x00000001U
#define LP_IO_LP_GPIO1_WAKEUP_ENABLE_S  10
/** LP_IO_LP_GPIO1_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_FILTER_EN    (BIT(11))
#define LP_IO_LP_GPIO1_FILTER_EN_M  (LP_IO_LP_GPIO1_FILTER_EN_V << LP_IO_LP_GPIO1_FILTER_EN_S)
#define LP_IO_LP_GPIO1_FILTER_EN_V  0x00000001U
#define LP_IO_LP_GPIO1_FILTER_EN_S  11

/** LP_IO_PIN2_REG register
 *  need des
 */
#define LP_IO_PIN2_REG (DR_REG_LP_IO_BASE + 0x30)
/** LP_IO_LP_GPIO2_SYNC_BYPASS : R/W; bitpos: [1:0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_SYNC_BYPASS    0x00000003U
#define LP_IO_LP_GPIO2_SYNC_BYPASS_M  (LP_IO_LP_GPIO2_SYNC_BYPASS_V << LP_IO_LP_GPIO2_SYNC_BYPASS_S)
#define LP_IO_LP_GPIO2_SYNC_BYPASS_V  0x00000003U
#define LP_IO_LP_GPIO2_SYNC_BYPASS_S  0
/** LP_IO_LP_GPIO2_PAD_DRIVER : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_PAD_DRIVER    (BIT(2))
#define LP_IO_LP_GPIO2_PAD_DRIVER_M  (LP_IO_LP_GPIO2_PAD_DRIVER_V << LP_IO_LP_GPIO2_PAD_DRIVER_S)
#define LP_IO_LP_GPIO2_PAD_DRIVER_V  0x00000001U
#define LP_IO_LP_GPIO2_PAD_DRIVER_S  2
/** LP_IO_LP_GPIO2_EDGE_WAKEUP_CLR : WT; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_EDGE_WAKEUP_CLR    (BIT(3))
#define LP_IO_LP_GPIO2_EDGE_WAKEUP_CLR_M  (LP_IO_LP_GPIO2_EDGE_WAKEUP_CLR_V << LP_IO_LP_GPIO2_EDGE_WAKEUP_CLR_S)
#define LP_IO_LP_GPIO2_EDGE_WAKEUP_CLR_V  0x00000001U
#define LP_IO_LP_GPIO2_EDGE_WAKEUP_CLR_S  3
/** LP_IO_LP_GPIO2_INT_TYPE : R/W; bitpos: [9:7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_INT_TYPE    0x00000007U
#define LP_IO_LP_GPIO2_INT_TYPE_M  (LP_IO_LP_GPIO2_INT_TYPE_V << LP_IO_LP_GPIO2_INT_TYPE_S)
#define LP_IO_LP_GPIO2_INT_TYPE_V  0x00000007U
#define LP_IO_LP_GPIO2_INT_TYPE_S  7
/** LP_IO_LP_GPIO2_WAKEUP_ENABLE : R/W; bitpos: [10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_WAKEUP_ENABLE    (BIT(10))
#define LP_IO_LP_GPIO2_WAKEUP_ENABLE_M  (LP_IO_LP_GPIO2_WAKEUP_ENABLE_V << LP_IO_LP_GPIO2_WAKEUP_ENABLE_S)
#define LP_IO_LP_GPIO2_WAKEUP_ENABLE_V  0x00000001U
#define LP_IO_LP_GPIO2_WAKEUP_ENABLE_S  10
/** LP_IO_LP_GPIO2_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_FILTER_EN    (BIT(11))
#define LP_IO_LP_GPIO2_FILTER_EN_M  (LP_IO_LP_GPIO2_FILTER_EN_V << LP_IO_LP_GPIO2_FILTER_EN_S)
#define LP_IO_LP_GPIO2_FILTER_EN_V  0x00000001U
#define LP_IO_LP_GPIO2_FILTER_EN_S  11

/** LP_IO_PIN3_REG register
 *  need des
 */
#define LP_IO_PIN3_REG (DR_REG_LP_IO_BASE + 0x34)
/** LP_IO_LP_GPIO3_SYNC_BYPASS : R/W; bitpos: [1:0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_SYNC_BYPASS    0x00000003U
#define LP_IO_LP_GPIO3_SYNC_BYPASS_M  (LP_IO_LP_GPIO3_SYNC_BYPASS_V << LP_IO_LP_GPIO3_SYNC_BYPASS_S)
#define LP_IO_LP_GPIO3_SYNC_BYPASS_V  0x00000003U
#define LP_IO_LP_GPIO3_SYNC_BYPASS_S  0
/** LP_IO_LP_GPIO3_PAD_DRIVER : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_PAD_DRIVER    (BIT(2))
#define LP_IO_LP_GPIO3_PAD_DRIVER_M  (LP_IO_LP_GPIO3_PAD_DRIVER_V << LP_IO_LP_GPIO3_PAD_DRIVER_S)
#define LP_IO_LP_GPIO3_PAD_DRIVER_V  0x00000001U
#define LP_IO_LP_GPIO3_PAD_DRIVER_S  2
/** LP_IO_LP_GPIO3_EDGE_WAKEUP_CLR : WT; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_EDGE_WAKEUP_CLR    (BIT(3))
#define LP_IO_LP_GPIO3_EDGE_WAKEUP_CLR_M  (LP_IO_LP_GPIO3_EDGE_WAKEUP_CLR_V << LP_IO_LP_GPIO3_EDGE_WAKEUP_CLR_S)
#define LP_IO_LP_GPIO3_EDGE_WAKEUP_CLR_V  0x00000001U
#define LP_IO_LP_GPIO3_EDGE_WAKEUP_CLR_S  3
/** LP_IO_LP_GPIO3_INT_TYPE : R/W; bitpos: [9:7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_INT_TYPE    0x00000007U
#define LP_IO_LP_GPIO3_INT_TYPE_M  (LP_IO_LP_GPIO3_INT_TYPE_V << LP_IO_LP_GPIO3_INT_TYPE_S)
#define LP_IO_LP_GPIO3_INT_TYPE_V  0x00000007U
#define LP_IO_LP_GPIO3_INT_TYPE_S  7
/** LP_IO_LP_GPIO3_WAKEUP_ENABLE : R/W; bitpos: [10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_WAKEUP_ENABLE    (BIT(10))
#define LP_IO_LP_GPIO3_WAKEUP_ENABLE_M  (LP_IO_LP_GPIO3_WAKEUP_ENABLE_V << LP_IO_LP_GPIO3_WAKEUP_ENABLE_S)
#define LP_IO_LP_GPIO3_WAKEUP_ENABLE_V  0x00000001U
#define LP_IO_LP_GPIO3_WAKEUP_ENABLE_S  10
/** LP_IO_LP_GPIO3_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_FILTER_EN    (BIT(11))
#define LP_IO_LP_GPIO3_FILTER_EN_M  (LP_IO_LP_GPIO3_FILTER_EN_V << LP_IO_LP_GPIO3_FILTER_EN_S)
#define LP_IO_LP_GPIO3_FILTER_EN_V  0x00000001U
#define LP_IO_LP_GPIO3_FILTER_EN_S  11

/** LP_IO_PIN4_REG register
 *  need des
 */
#define LP_IO_PIN4_REG (DR_REG_LP_IO_BASE + 0x38)
/** LP_IO_LP_GPIO4_SYNC_BYPASS : R/W; bitpos: [1:0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_SYNC_BYPASS    0x00000003U
#define LP_IO_LP_GPIO4_SYNC_BYPASS_M  (LP_IO_LP_GPIO4_SYNC_BYPASS_V << LP_IO_LP_GPIO4_SYNC_BYPASS_S)
#define LP_IO_LP_GPIO4_SYNC_BYPASS_V  0x00000003U
#define LP_IO_LP_GPIO4_SYNC_BYPASS_S  0
/** LP_IO_LP_GPIO4_PAD_DRIVER : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_PAD_DRIVER    (BIT(2))
#define LP_IO_LP_GPIO4_PAD_DRIVER_M  (LP_IO_LP_GPIO4_PAD_DRIVER_V << LP_IO_LP_GPIO4_PAD_DRIVER_S)
#define LP_IO_LP_GPIO4_PAD_DRIVER_V  0x00000001U
#define LP_IO_LP_GPIO4_PAD_DRIVER_S  2
/** LP_IO_LP_GPIO4_EDGE_WAKEUP_CLR : WT; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_EDGE_WAKEUP_CLR    (BIT(3))
#define LP_IO_LP_GPIO4_EDGE_WAKEUP_CLR_M  (LP_IO_LP_GPIO4_EDGE_WAKEUP_CLR_V << LP_IO_LP_GPIO4_EDGE_WAKEUP_CLR_S)
#define LP_IO_LP_GPIO4_EDGE_WAKEUP_CLR_V  0x00000001U
#define LP_IO_LP_GPIO4_EDGE_WAKEUP_CLR_S  3
/** LP_IO_LP_GPIO4_INT_TYPE : R/W; bitpos: [9:7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_INT_TYPE    0x00000007U
#define LP_IO_LP_GPIO4_INT_TYPE_M  (LP_IO_LP_GPIO4_INT_TYPE_V << LP_IO_LP_GPIO4_INT_TYPE_S)
#define LP_IO_LP_GPIO4_INT_TYPE_V  0x00000007U
#define LP_IO_LP_GPIO4_INT_TYPE_S  7
/** LP_IO_LP_GPIO4_WAKEUP_ENABLE : R/W; bitpos: [10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_WAKEUP_ENABLE    (BIT(10))
#define LP_IO_LP_GPIO4_WAKEUP_ENABLE_M  (LP_IO_LP_GPIO4_WAKEUP_ENABLE_V << LP_IO_LP_GPIO4_WAKEUP_ENABLE_S)
#define LP_IO_LP_GPIO4_WAKEUP_ENABLE_V  0x00000001U
#define LP_IO_LP_GPIO4_WAKEUP_ENABLE_S  10
/** LP_IO_LP_GPIO4_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_FILTER_EN    (BIT(11))
#define LP_IO_LP_GPIO4_FILTER_EN_M  (LP_IO_LP_GPIO4_FILTER_EN_V << LP_IO_LP_GPIO4_FILTER_EN_S)
#define LP_IO_LP_GPIO4_FILTER_EN_V  0x00000001U
#define LP_IO_LP_GPIO4_FILTER_EN_S  11

/** LP_IO_PIN5_REG register
 *  need des
 */
#define LP_IO_PIN5_REG (DR_REG_LP_IO_BASE + 0x3c)
/** LP_IO_LP_GPIO5_SYNC_BYPASS : R/W; bitpos: [1:0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_SYNC_BYPASS    0x00000003U
#define LP_IO_LP_GPIO5_SYNC_BYPASS_M  (LP_IO_LP_GPIO5_SYNC_BYPASS_V << LP_IO_LP_GPIO5_SYNC_BYPASS_S)
#define LP_IO_LP_GPIO5_SYNC_BYPASS_V  0x00000003U
#define LP_IO_LP_GPIO5_SYNC_BYPASS_S  0
/** LP_IO_LP_GPIO5_PAD_DRIVER : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_PAD_DRIVER    (BIT(2))
#define LP_IO_LP_GPIO5_PAD_DRIVER_M  (LP_IO_LP_GPIO5_PAD_DRIVER_V << LP_IO_LP_GPIO5_PAD_DRIVER_S)
#define LP_IO_LP_GPIO5_PAD_DRIVER_V  0x00000001U
#define LP_IO_LP_GPIO5_PAD_DRIVER_S  2
/** LP_IO_LP_GPIO5_EDGE_WAKEUP_CLR : WT; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_EDGE_WAKEUP_CLR    (BIT(3))
#define LP_IO_LP_GPIO5_EDGE_WAKEUP_CLR_M  (LP_IO_LP_GPIO5_EDGE_WAKEUP_CLR_V << LP_IO_LP_GPIO5_EDGE_WAKEUP_CLR_S)
#define LP_IO_LP_GPIO5_EDGE_WAKEUP_CLR_V  0x00000001U
#define LP_IO_LP_GPIO5_EDGE_WAKEUP_CLR_S  3
/** LP_IO_LP_GPIO5_INT_TYPE : R/W; bitpos: [9:7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_INT_TYPE    0x00000007U
#define LP_IO_LP_GPIO5_INT_TYPE_M  (LP_IO_LP_GPIO5_INT_TYPE_V << LP_IO_LP_GPIO5_INT_TYPE_S)
#define LP_IO_LP_GPIO5_INT_TYPE_V  0x00000007U
#define LP_IO_LP_GPIO5_INT_TYPE_S  7
/** LP_IO_LP_GPIO5_WAKEUP_ENABLE : R/W; bitpos: [10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_WAKEUP_ENABLE    (BIT(10))
#define LP_IO_LP_GPIO5_WAKEUP_ENABLE_M  (LP_IO_LP_GPIO5_WAKEUP_ENABLE_V << LP_IO_LP_GPIO5_WAKEUP_ENABLE_S)
#define LP_IO_LP_GPIO5_WAKEUP_ENABLE_V  0x00000001U
#define LP_IO_LP_GPIO5_WAKEUP_ENABLE_S  10
/** LP_IO_LP_GPIO5_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_FILTER_EN    (BIT(11))
#define LP_IO_LP_GPIO5_FILTER_EN_M  (LP_IO_LP_GPIO5_FILTER_EN_V << LP_IO_LP_GPIO5_FILTER_EN_S)
#define LP_IO_LP_GPIO5_FILTER_EN_V  0x00000001U
#define LP_IO_LP_GPIO5_FILTER_EN_S  11

/** LP_IO_PIN6_REG register
 *  need des
 */
#define LP_IO_PIN6_REG (DR_REG_LP_IO_BASE + 0x40)
/** LP_IO_LP_GPIO6_SYNC_BYPASS : R/W; bitpos: [1:0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_SYNC_BYPASS    0x00000003U
#define LP_IO_LP_GPIO6_SYNC_BYPASS_M  (LP_IO_LP_GPIO6_SYNC_BYPASS_V << LP_IO_LP_GPIO6_SYNC_BYPASS_S)
#define LP_IO_LP_GPIO6_SYNC_BYPASS_V  0x00000003U
#define LP_IO_LP_GPIO6_SYNC_BYPASS_S  0
/** LP_IO_LP_GPIO6_PAD_DRIVER : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_PAD_DRIVER    (BIT(2))
#define LP_IO_LP_GPIO6_PAD_DRIVER_M  (LP_IO_LP_GPIO6_PAD_DRIVER_V << LP_IO_LP_GPIO6_PAD_DRIVER_S)
#define LP_IO_LP_GPIO6_PAD_DRIVER_V  0x00000001U
#define LP_IO_LP_GPIO6_PAD_DRIVER_S  2
/** LP_IO_LP_GPIO6_EDGE_WAKEUP_CLR : WT; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_EDGE_WAKEUP_CLR    (BIT(3))
#define LP_IO_LP_GPIO6_EDGE_WAKEUP_CLR_M  (LP_IO_LP_GPIO6_EDGE_WAKEUP_CLR_V << LP_IO_LP_GPIO6_EDGE_WAKEUP_CLR_S)
#define LP_IO_LP_GPIO6_EDGE_WAKEUP_CLR_V  0x00000001U
#define LP_IO_LP_GPIO6_EDGE_WAKEUP_CLR_S  3
/** LP_IO_LP_GPIO6_INT_TYPE : R/W; bitpos: [9:7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_INT_TYPE    0x00000007U
#define LP_IO_LP_GPIO6_INT_TYPE_M  (LP_IO_LP_GPIO6_INT_TYPE_V << LP_IO_LP_GPIO6_INT_TYPE_S)
#define LP_IO_LP_GPIO6_INT_TYPE_V  0x00000007U
#define LP_IO_LP_GPIO6_INT_TYPE_S  7
/** LP_IO_LP_GPIO6_WAKEUP_ENABLE : R/W; bitpos: [10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_WAKEUP_ENABLE    (BIT(10))
#define LP_IO_LP_GPIO6_WAKEUP_ENABLE_M  (LP_IO_LP_GPIO6_WAKEUP_ENABLE_V << LP_IO_LP_GPIO6_WAKEUP_ENABLE_S)
#define LP_IO_LP_GPIO6_WAKEUP_ENABLE_V  0x00000001U
#define LP_IO_LP_GPIO6_WAKEUP_ENABLE_S  10
/** LP_IO_LP_GPIO6_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_FILTER_EN    (BIT(11))
#define LP_IO_LP_GPIO6_FILTER_EN_M  (LP_IO_LP_GPIO6_FILTER_EN_V << LP_IO_LP_GPIO6_FILTER_EN_S)
#define LP_IO_LP_GPIO6_FILTER_EN_V  0x00000001U
#define LP_IO_LP_GPIO6_FILTER_EN_S  11

/** LP_IO_PIN7_REG register
 *  need des
 */
#define LP_IO_PIN7_REG (DR_REG_LP_IO_BASE + 0x44)
/** LP_IO_LP_GPIO7_SYNC_BYPASS : R/W; bitpos: [1:0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_SYNC_BYPASS    0x00000003U
#define LP_IO_LP_GPIO7_SYNC_BYPASS_M  (LP_IO_LP_GPIO7_SYNC_BYPASS_V << LP_IO_LP_GPIO7_SYNC_BYPASS_S)
#define LP_IO_LP_GPIO7_SYNC_BYPASS_V  0x00000003U
#define LP_IO_LP_GPIO7_SYNC_BYPASS_S  0
/** LP_IO_LP_GPIO7_PAD_DRIVER : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_PAD_DRIVER    (BIT(2))
#define LP_IO_LP_GPIO7_PAD_DRIVER_M  (LP_IO_LP_GPIO7_PAD_DRIVER_V << LP_IO_LP_GPIO7_PAD_DRIVER_S)
#define LP_IO_LP_GPIO7_PAD_DRIVER_V  0x00000001U
#define LP_IO_LP_GPIO7_PAD_DRIVER_S  2
/** LP_IO_LP_GPIO7_EDGE_WAKEUP_CLR : WT; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_EDGE_WAKEUP_CLR    (BIT(3))
#define LP_IO_LP_GPIO7_EDGE_WAKEUP_CLR_M  (LP_IO_LP_GPIO7_EDGE_WAKEUP_CLR_V << LP_IO_LP_GPIO7_EDGE_WAKEUP_CLR_S)
#define LP_IO_LP_GPIO7_EDGE_WAKEUP_CLR_V  0x00000001U
#define LP_IO_LP_GPIO7_EDGE_WAKEUP_CLR_S  3
/** LP_IO_LP_GPIO7_INT_TYPE : R/W; bitpos: [9:7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_INT_TYPE    0x00000007U
#define LP_IO_LP_GPIO7_INT_TYPE_M  (LP_IO_LP_GPIO7_INT_TYPE_V << LP_IO_LP_GPIO7_INT_TYPE_S)
#define LP_IO_LP_GPIO7_INT_TYPE_V  0x00000007U
#define LP_IO_LP_GPIO7_INT_TYPE_S  7
/** LP_IO_LP_GPIO7_WAKEUP_ENABLE : R/W; bitpos: [10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_WAKEUP_ENABLE    (BIT(10))
#define LP_IO_LP_GPIO7_WAKEUP_ENABLE_M  (LP_IO_LP_GPIO7_WAKEUP_ENABLE_V << LP_IO_LP_GPIO7_WAKEUP_ENABLE_S)
#define LP_IO_LP_GPIO7_WAKEUP_ENABLE_V  0x00000001U
#define LP_IO_LP_GPIO7_WAKEUP_ENABLE_S  10
/** LP_IO_LP_GPIO7_FILTER_EN : R/W; bitpos: [11]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_FILTER_EN    (BIT(11))
#define LP_IO_LP_GPIO7_FILTER_EN_M  (LP_IO_LP_GPIO7_FILTER_EN_V << LP_IO_LP_GPIO7_FILTER_EN_S)
#define LP_IO_LP_GPIO7_FILTER_EN_V  0x00000001U
#define LP_IO_LP_GPIO7_FILTER_EN_S  11

/** LP_IO_GPIO0_REG register
 *  need des
 */
#define LP_IO_GPIO0_REG (DR_REG_LP_IO_BASE + 0x48)
/** LP_IO_LP_GPIO0_MCU_OE : R/W; bitpos: [0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_MCU_OE    (BIT(0))
#define LP_IO_LP_GPIO0_MCU_OE_M  (LP_IO_LP_GPIO0_MCU_OE_V << LP_IO_LP_GPIO0_MCU_OE_S)
#define LP_IO_LP_GPIO0_MCU_OE_V  0x00000001U
#define LP_IO_LP_GPIO0_MCU_OE_S  0
/** LP_IO_LP_GPIO0_SLP_SEL : R/W; bitpos: [1]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_SLP_SEL    (BIT(1))
#define LP_IO_LP_GPIO0_SLP_SEL_M  (LP_IO_LP_GPIO0_SLP_SEL_V << LP_IO_LP_GPIO0_SLP_SEL_S)
#define LP_IO_LP_GPIO0_SLP_SEL_V  0x00000001U
#define LP_IO_LP_GPIO0_SLP_SEL_S  1
/** LP_IO_LP_GPIO0_MCU_WPD : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_MCU_WPD    (BIT(2))
#define LP_IO_LP_GPIO0_MCU_WPD_M  (LP_IO_LP_GPIO0_MCU_WPD_V << LP_IO_LP_GPIO0_MCU_WPD_S)
#define LP_IO_LP_GPIO0_MCU_WPD_V  0x00000001U
#define LP_IO_LP_GPIO0_MCU_WPD_S  2
/** LP_IO_LP_GPIO0_MCU_WPU : R/W; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_MCU_WPU    (BIT(3))
#define LP_IO_LP_GPIO0_MCU_WPU_M  (LP_IO_LP_GPIO0_MCU_WPU_V << LP_IO_LP_GPIO0_MCU_WPU_S)
#define LP_IO_LP_GPIO0_MCU_WPU_V  0x00000001U
#define LP_IO_LP_GPIO0_MCU_WPU_S  3
/** LP_IO_LP_GPIO0_MCU_IE : R/W; bitpos: [4]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_MCU_IE    (BIT(4))
#define LP_IO_LP_GPIO0_MCU_IE_M  (LP_IO_LP_GPIO0_MCU_IE_V << LP_IO_LP_GPIO0_MCU_IE_S)
#define LP_IO_LP_GPIO0_MCU_IE_V  0x00000001U
#define LP_IO_LP_GPIO0_MCU_IE_S  4
/** LP_IO_LP_GPIO0_MCU_DRV : R/W; bitpos: [6:5]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_MCU_DRV    0x00000003U
#define LP_IO_LP_GPIO0_MCU_DRV_M  (LP_IO_LP_GPIO0_MCU_DRV_V << LP_IO_LP_GPIO0_MCU_DRV_S)
#define LP_IO_LP_GPIO0_MCU_DRV_V  0x00000003U
#define LP_IO_LP_GPIO0_MCU_DRV_S  5
/** LP_IO_LP_GPIO0_FUN_WPD : R/W; bitpos: [7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_FUN_WPD    (BIT(7))
#define LP_IO_LP_GPIO0_FUN_WPD_M  (LP_IO_LP_GPIO0_FUN_WPD_V << LP_IO_LP_GPIO0_FUN_WPD_S)
#define LP_IO_LP_GPIO0_FUN_WPD_V  0x00000001U
#define LP_IO_LP_GPIO0_FUN_WPD_S  7
/** LP_IO_LP_GPIO0_FUN_WPU : R/W; bitpos: [8]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_FUN_WPU    (BIT(8))
#define LP_IO_LP_GPIO0_FUN_WPU_M  (LP_IO_LP_GPIO0_FUN_WPU_V << LP_IO_LP_GPIO0_FUN_WPU_S)
#define LP_IO_LP_GPIO0_FUN_WPU_V  0x00000001U
#define LP_IO_LP_GPIO0_FUN_WPU_S  8
/** LP_IO_LP_GPIO0_FUN_IE : R/W; bitpos: [9]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_FUN_IE    (BIT(9))
#define LP_IO_LP_GPIO0_FUN_IE_M  (LP_IO_LP_GPIO0_FUN_IE_V << LP_IO_LP_GPIO0_FUN_IE_S)
#define LP_IO_LP_GPIO0_FUN_IE_V  0x00000001U
#define LP_IO_LP_GPIO0_FUN_IE_S  9
/** LP_IO_LP_GPIO0_FUN_DRV : R/W; bitpos: [11:10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_FUN_DRV    0x00000003U
#define LP_IO_LP_GPIO0_FUN_DRV_M  (LP_IO_LP_GPIO0_FUN_DRV_V << LP_IO_LP_GPIO0_FUN_DRV_S)
#define LP_IO_LP_GPIO0_FUN_DRV_V  0x00000003U
#define LP_IO_LP_GPIO0_FUN_DRV_S  10
/** LP_IO_LP_GPIO0_MCU_SEL : R/W; bitpos: [14:12]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO0_MCU_SEL    0x00000007U
#define LP_IO_LP_GPIO0_MCU_SEL_M  (LP_IO_LP_GPIO0_MCU_SEL_V << LP_IO_LP_GPIO0_MCU_SEL_S)
#define LP_IO_LP_GPIO0_MCU_SEL_V  0x00000007U
#define LP_IO_LP_GPIO0_MCU_SEL_S  12

/** LP_IO_GPIO1_REG register
 *  need des
 */
#define LP_IO_GPIO1_REG (DR_REG_LP_IO_BASE + 0x4c)
/** LP_IO_LP_GPIO1_MCU_OE : R/W; bitpos: [0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_MCU_OE    (BIT(0))
#define LP_IO_LP_GPIO1_MCU_OE_M  (LP_IO_LP_GPIO1_MCU_OE_V << LP_IO_LP_GPIO1_MCU_OE_S)
#define LP_IO_LP_GPIO1_MCU_OE_V  0x00000001U
#define LP_IO_LP_GPIO1_MCU_OE_S  0
/** LP_IO_LP_GPIO1_SLP_SEL : R/W; bitpos: [1]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_SLP_SEL    (BIT(1))
#define LP_IO_LP_GPIO1_SLP_SEL_M  (LP_IO_LP_GPIO1_SLP_SEL_V << LP_IO_LP_GPIO1_SLP_SEL_S)
#define LP_IO_LP_GPIO1_SLP_SEL_V  0x00000001U
#define LP_IO_LP_GPIO1_SLP_SEL_S  1
/** LP_IO_LP_GPIO1_MCU_WPD : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_MCU_WPD    (BIT(2))
#define LP_IO_LP_GPIO1_MCU_WPD_M  (LP_IO_LP_GPIO1_MCU_WPD_V << LP_IO_LP_GPIO1_MCU_WPD_S)
#define LP_IO_LP_GPIO1_MCU_WPD_V  0x00000001U
#define LP_IO_LP_GPIO1_MCU_WPD_S  2
/** LP_IO_LP_GPIO1_MCU_WPU : R/W; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_MCU_WPU    (BIT(3))
#define LP_IO_LP_GPIO1_MCU_WPU_M  (LP_IO_LP_GPIO1_MCU_WPU_V << LP_IO_LP_GPIO1_MCU_WPU_S)
#define LP_IO_LP_GPIO1_MCU_WPU_V  0x00000001U
#define LP_IO_LP_GPIO1_MCU_WPU_S  3
/** LP_IO_LP_GPIO1_MCU_IE : R/W; bitpos: [4]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_MCU_IE    (BIT(4))
#define LP_IO_LP_GPIO1_MCU_IE_M  (LP_IO_LP_GPIO1_MCU_IE_V << LP_IO_LP_GPIO1_MCU_IE_S)
#define LP_IO_LP_GPIO1_MCU_IE_V  0x00000001U
#define LP_IO_LP_GPIO1_MCU_IE_S  4
/** LP_IO_LP_GPIO1_MCU_DRV : R/W; bitpos: [6:5]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_MCU_DRV    0x00000003U
#define LP_IO_LP_GPIO1_MCU_DRV_M  (LP_IO_LP_GPIO1_MCU_DRV_V << LP_IO_LP_GPIO1_MCU_DRV_S)
#define LP_IO_LP_GPIO1_MCU_DRV_V  0x00000003U
#define LP_IO_LP_GPIO1_MCU_DRV_S  5
/** LP_IO_LP_GPIO1_FUN_WPD : R/W; bitpos: [7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_FUN_WPD    (BIT(7))
#define LP_IO_LP_GPIO1_FUN_WPD_M  (LP_IO_LP_GPIO1_FUN_WPD_V << LP_IO_LP_GPIO1_FUN_WPD_S)
#define LP_IO_LP_GPIO1_FUN_WPD_V  0x00000001U
#define LP_IO_LP_GPIO1_FUN_WPD_S  7
/** LP_IO_LP_GPIO1_FUN_WPU : R/W; bitpos: [8]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_FUN_WPU    (BIT(8))
#define LP_IO_LP_GPIO1_FUN_WPU_M  (LP_IO_LP_GPIO1_FUN_WPU_V << LP_IO_LP_GPIO1_FUN_WPU_S)
#define LP_IO_LP_GPIO1_FUN_WPU_V  0x00000001U
#define LP_IO_LP_GPIO1_FUN_WPU_S  8
/** LP_IO_LP_GPIO1_FUN_IE : R/W; bitpos: [9]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_FUN_IE    (BIT(9))
#define LP_IO_LP_GPIO1_FUN_IE_M  (LP_IO_LP_GPIO1_FUN_IE_V << LP_IO_LP_GPIO1_FUN_IE_S)
#define LP_IO_LP_GPIO1_FUN_IE_V  0x00000001U
#define LP_IO_LP_GPIO1_FUN_IE_S  9
/** LP_IO_LP_GPIO1_FUN_DRV : R/W; bitpos: [11:10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_FUN_DRV    0x00000003U
#define LP_IO_LP_GPIO1_FUN_DRV_M  (LP_IO_LP_GPIO1_FUN_DRV_V << LP_IO_LP_GPIO1_FUN_DRV_S)
#define LP_IO_LP_GPIO1_FUN_DRV_V  0x00000003U
#define LP_IO_LP_GPIO1_FUN_DRV_S  10
/** LP_IO_LP_GPIO1_MCU_SEL : R/W; bitpos: [14:12]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO1_MCU_SEL    0x00000007U
#define LP_IO_LP_GPIO1_MCU_SEL_M  (LP_IO_LP_GPIO1_MCU_SEL_V << LP_IO_LP_GPIO1_MCU_SEL_S)
#define LP_IO_LP_GPIO1_MCU_SEL_V  0x00000007U
#define LP_IO_LP_GPIO1_MCU_SEL_S  12

/** LP_IO_GPIO2_REG register
 *  need des
 */
#define LP_IO_GPIO2_REG (DR_REG_LP_IO_BASE + 0x50)
/** LP_IO_LP_GPIO2_MCU_OE : R/W; bitpos: [0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_MCU_OE    (BIT(0))
#define LP_IO_LP_GPIO2_MCU_OE_M  (LP_IO_LP_GPIO2_MCU_OE_V << LP_IO_LP_GPIO2_MCU_OE_S)
#define LP_IO_LP_GPIO2_MCU_OE_V  0x00000001U
#define LP_IO_LP_GPIO2_MCU_OE_S  0
/** LP_IO_LP_GPIO2_SLP_SEL : R/W; bitpos: [1]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_SLP_SEL    (BIT(1))
#define LP_IO_LP_GPIO2_SLP_SEL_M  (LP_IO_LP_GPIO2_SLP_SEL_V << LP_IO_LP_GPIO2_SLP_SEL_S)
#define LP_IO_LP_GPIO2_SLP_SEL_V  0x00000001U
#define LP_IO_LP_GPIO2_SLP_SEL_S  1
/** LP_IO_LP_GPIO2_MCU_WPD : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_MCU_WPD    (BIT(2))
#define LP_IO_LP_GPIO2_MCU_WPD_M  (LP_IO_LP_GPIO2_MCU_WPD_V << LP_IO_LP_GPIO2_MCU_WPD_S)
#define LP_IO_LP_GPIO2_MCU_WPD_V  0x00000001U
#define LP_IO_LP_GPIO2_MCU_WPD_S  2
/** LP_IO_LP_GPIO2_MCU_WPU : R/W; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_MCU_WPU    (BIT(3))
#define LP_IO_LP_GPIO2_MCU_WPU_M  (LP_IO_LP_GPIO2_MCU_WPU_V << LP_IO_LP_GPIO2_MCU_WPU_S)
#define LP_IO_LP_GPIO2_MCU_WPU_V  0x00000001U
#define LP_IO_LP_GPIO2_MCU_WPU_S  3
/** LP_IO_LP_GPIO2_MCU_IE : R/W; bitpos: [4]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_MCU_IE    (BIT(4))
#define LP_IO_LP_GPIO2_MCU_IE_M  (LP_IO_LP_GPIO2_MCU_IE_V << LP_IO_LP_GPIO2_MCU_IE_S)
#define LP_IO_LP_GPIO2_MCU_IE_V  0x00000001U
#define LP_IO_LP_GPIO2_MCU_IE_S  4
/** LP_IO_LP_GPIO2_MCU_DRV : R/W; bitpos: [6:5]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_MCU_DRV    0x00000003U
#define LP_IO_LP_GPIO2_MCU_DRV_M  (LP_IO_LP_GPIO2_MCU_DRV_V << LP_IO_LP_GPIO2_MCU_DRV_S)
#define LP_IO_LP_GPIO2_MCU_DRV_V  0x00000003U
#define LP_IO_LP_GPIO2_MCU_DRV_S  5
/** LP_IO_LP_GPIO2_FUN_WPD : R/W; bitpos: [7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_FUN_WPD    (BIT(7))
#define LP_IO_LP_GPIO2_FUN_WPD_M  (LP_IO_LP_GPIO2_FUN_WPD_V << LP_IO_LP_GPIO2_FUN_WPD_S)
#define LP_IO_LP_GPIO2_FUN_WPD_V  0x00000001U
#define LP_IO_LP_GPIO2_FUN_WPD_S  7
/** LP_IO_LP_GPIO2_FUN_WPU : R/W; bitpos: [8]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_FUN_WPU    (BIT(8))
#define LP_IO_LP_GPIO2_FUN_WPU_M  (LP_IO_LP_GPIO2_FUN_WPU_V << LP_IO_LP_GPIO2_FUN_WPU_S)
#define LP_IO_LP_GPIO2_FUN_WPU_V  0x00000001U
#define LP_IO_LP_GPIO2_FUN_WPU_S  8
/** LP_IO_LP_GPIO2_FUN_IE : R/W; bitpos: [9]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_FUN_IE    (BIT(9))
#define LP_IO_LP_GPIO2_FUN_IE_M  (LP_IO_LP_GPIO2_FUN_IE_V << LP_IO_LP_GPIO2_FUN_IE_S)
#define LP_IO_LP_GPIO2_FUN_IE_V  0x00000001U
#define LP_IO_LP_GPIO2_FUN_IE_S  9
/** LP_IO_LP_GPIO2_FUN_DRV : R/W; bitpos: [11:10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_FUN_DRV    0x00000003U
#define LP_IO_LP_GPIO2_FUN_DRV_M  (LP_IO_LP_GPIO2_FUN_DRV_V << LP_IO_LP_GPIO2_FUN_DRV_S)
#define LP_IO_LP_GPIO2_FUN_DRV_V  0x00000003U
#define LP_IO_LP_GPIO2_FUN_DRV_S  10
/** LP_IO_LP_GPIO2_MCU_SEL : R/W; bitpos: [14:12]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO2_MCU_SEL    0x00000007U
#define LP_IO_LP_GPIO2_MCU_SEL_M  (LP_IO_LP_GPIO2_MCU_SEL_V << LP_IO_LP_GPIO2_MCU_SEL_S)
#define LP_IO_LP_GPIO2_MCU_SEL_V  0x00000007U
#define LP_IO_LP_GPIO2_MCU_SEL_S  12

/** LP_IO_GPIO3_REG register
 *  need des
 */
#define LP_IO_GPIO3_REG (DR_REG_LP_IO_BASE + 0x54)
/** LP_IO_LP_GPIO3_MCU_OE : R/W; bitpos: [0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_MCU_OE    (BIT(0))
#define LP_IO_LP_GPIO3_MCU_OE_M  (LP_IO_LP_GPIO3_MCU_OE_V << LP_IO_LP_GPIO3_MCU_OE_S)
#define LP_IO_LP_GPIO3_MCU_OE_V  0x00000001U
#define LP_IO_LP_GPIO3_MCU_OE_S  0
/** LP_IO_LP_GPIO3_SLP_SEL : R/W; bitpos: [1]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_SLP_SEL    (BIT(1))
#define LP_IO_LP_GPIO3_SLP_SEL_M  (LP_IO_LP_GPIO3_SLP_SEL_V << LP_IO_LP_GPIO3_SLP_SEL_S)
#define LP_IO_LP_GPIO3_SLP_SEL_V  0x00000001U
#define LP_IO_LP_GPIO3_SLP_SEL_S  1
/** LP_IO_LP_GPIO3_MCU_WPD : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_MCU_WPD    (BIT(2))
#define LP_IO_LP_GPIO3_MCU_WPD_M  (LP_IO_LP_GPIO3_MCU_WPD_V << LP_IO_LP_GPIO3_MCU_WPD_S)
#define LP_IO_LP_GPIO3_MCU_WPD_V  0x00000001U
#define LP_IO_LP_GPIO3_MCU_WPD_S  2
/** LP_IO_LP_GPIO3_MCU_WPU : R/W; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_MCU_WPU    (BIT(3))
#define LP_IO_LP_GPIO3_MCU_WPU_M  (LP_IO_LP_GPIO3_MCU_WPU_V << LP_IO_LP_GPIO3_MCU_WPU_S)
#define LP_IO_LP_GPIO3_MCU_WPU_V  0x00000001U
#define LP_IO_LP_GPIO3_MCU_WPU_S  3
/** LP_IO_LP_GPIO3_MCU_IE : R/W; bitpos: [4]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_MCU_IE    (BIT(4))
#define LP_IO_LP_GPIO3_MCU_IE_M  (LP_IO_LP_GPIO3_MCU_IE_V << LP_IO_LP_GPIO3_MCU_IE_S)
#define LP_IO_LP_GPIO3_MCU_IE_V  0x00000001U
#define LP_IO_LP_GPIO3_MCU_IE_S  4
/** LP_IO_LP_GPIO3_MCU_DRV : R/W; bitpos: [6:5]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_MCU_DRV    0x00000003U
#define LP_IO_LP_GPIO3_MCU_DRV_M  (LP_IO_LP_GPIO3_MCU_DRV_V << LP_IO_LP_GPIO3_MCU_DRV_S)
#define LP_IO_LP_GPIO3_MCU_DRV_V  0x00000003U
#define LP_IO_LP_GPIO3_MCU_DRV_S  5
/** LP_IO_LP_GPIO3_FUN_WPD : R/W; bitpos: [7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_FUN_WPD    (BIT(7))
#define LP_IO_LP_GPIO3_FUN_WPD_M  (LP_IO_LP_GPIO3_FUN_WPD_V << LP_IO_LP_GPIO3_FUN_WPD_S)
#define LP_IO_LP_GPIO3_FUN_WPD_V  0x00000001U
#define LP_IO_LP_GPIO3_FUN_WPD_S  7
/** LP_IO_LP_GPIO3_FUN_WPU : R/W; bitpos: [8]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_FUN_WPU    (BIT(8))
#define LP_IO_LP_GPIO3_FUN_WPU_M  (LP_IO_LP_GPIO3_FUN_WPU_V << LP_IO_LP_GPIO3_FUN_WPU_S)
#define LP_IO_LP_GPIO3_FUN_WPU_V  0x00000001U
#define LP_IO_LP_GPIO3_FUN_WPU_S  8
/** LP_IO_LP_GPIO3_FUN_IE : R/W; bitpos: [9]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_FUN_IE    (BIT(9))
#define LP_IO_LP_GPIO3_FUN_IE_M  (LP_IO_LP_GPIO3_FUN_IE_V << LP_IO_LP_GPIO3_FUN_IE_S)
#define LP_IO_LP_GPIO3_FUN_IE_V  0x00000001U
#define LP_IO_LP_GPIO3_FUN_IE_S  9
/** LP_IO_LP_GPIO3_FUN_DRV : R/W; bitpos: [11:10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_FUN_DRV    0x00000003U
#define LP_IO_LP_GPIO3_FUN_DRV_M  (LP_IO_LP_GPIO3_FUN_DRV_V << LP_IO_LP_GPIO3_FUN_DRV_S)
#define LP_IO_LP_GPIO3_FUN_DRV_V  0x00000003U
#define LP_IO_LP_GPIO3_FUN_DRV_S  10
/** LP_IO_LP_GPIO3_MCU_SEL : R/W; bitpos: [14:12]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO3_MCU_SEL    0x00000007U
#define LP_IO_LP_GPIO3_MCU_SEL_M  (LP_IO_LP_GPIO3_MCU_SEL_V << LP_IO_LP_GPIO3_MCU_SEL_S)
#define LP_IO_LP_GPIO3_MCU_SEL_V  0x00000007U
#define LP_IO_LP_GPIO3_MCU_SEL_S  12

/** LP_IO_GPIO4_REG register
 *  need des
 */
#define LP_IO_GPIO4_REG (DR_REG_LP_IO_BASE + 0x58)
/** LP_IO_LP_GPIO4_MCU_OE : R/W; bitpos: [0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_MCU_OE    (BIT(0))
#define LP_IO_LP_GPIO4_MCU_OE_M  (LP_IO_LP_GPIO4_MCU_OE_V << LP_IO_LP_GPIO4_MCU_OE_S)
#define LP_IO_LP_GPIO4_MCU_OE_V  0x00000001U
#define LP_IO_LP_GPIO4_MCU_OE_S  0
/** LP_IO_LP_GPIO4_SLP_SEL : R/W; bitpos: [1]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_SLP_SEL    (BIT(1))
#define LP_IO_LP_GPIO4_SLP_SEL_M  (LP_IO_LP_GPIO4_SLP_SEL_V << LP_IO_LP_GPIO4_SLP_SEL_S)
#define LP_IO_LP_GPIO4_SLP_SEL_V  0x00000001U
#define LP_IO_LP_GPIO4_SLP_SEL_S  1
/** LP_IO_LP_GPIO4_MCU_WPD : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_MCU_WPD    (BIT(2))
#define LP_IO_LP_GPIO4_MCU_WPD_M  (LP_IO_LP_GPIO4_MCU_WPD_V << LP_IO_LP_GPIO4_MCU_WPD_S)
#define LP_IO_LP_GPIO4_MCU_WPD_V  0x00000001U
#define LP_IO_LP_GPIO4_MCU_WPD_S  2
/** LP_IO_LP_GPIO4_MCU_WPU : R/W; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_MCU_WPU    (BIT(3))
#define LP_IO_LP_GPIO4_MCU_WPU_M  (LP_IO_LP_GPIO4_MCU_WPU_V << LP_IO_LP_GPIO4_MCU_WPU_S)
#define LP_IO_LP_GPIO4_MCU_WPU_V  0x00000001U
#define LP_IO_LP_GPIO4_MCU_WPU_S  3
/** LP_IO_LP_GPIO4_MCU_IE : R/W; bitpos: [4]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_MCU_IE    (BIT(4))
#define LP_IO_LP_GPIO4_MCU_IE_M  (LP_IO_LP_GPIO4_MCU_IE_V << LP_IO_LP_GPIO4_MCU_IE_S)
#define LP_IO_LP_GPIO4_MCU_IE_V  0x00000001U
#define LP_IO_LP_GPIO4_MCU_IE_S  4
/** LP_IO_LP_GPIO4_MCU_DRV : R/W; bitpos: [6:5]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_MCU_DRV    0x00000003U
#define LP_IO_LP_GPIO4_MCU_DRV_M  (LP_IO_LP_GPIO4_MCU_DRV_V << LP_IO_LP_GPIO4_MCU_DRV_S)
#define LP_IO_LP_GPIO4_MCU_DRV_V  0x00000003U
#define LP_IO_LP_GPIO4_MCU_DRV_S  5
/** LP_IO_LP_GPIO4_FUN_WPD : R/W; bitpos: [7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_FUN_WPD    (BIT(7))
#define LP_IO_LP_GPIO4_FUN_WPD_M  (LP_IO_LP_GPIO4_FUN_WPD_V << LP_IO_LP_GPIO4_FUN_WPD_S)
#define LP_IO_LP_GPIO4_FUN_WPD_V  0x00000001U
#define LP_IO_LP_GPIO4_FUN_WPD_S  7
/** LP_IO_LP_GPIO4_FUN_WPU : R/W; bitpos: [8]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_FUN_WPU    (BIT(8))
#define LP_IO_LP_GPIO4_FUN_WPU_M  (LP_IO_LP_GPIO4_FUN_WPU_V << LP_IO_LP_GPIO4_FUN_WPU_S)
#define LP_IO_LP_GPIO4_FUN_WPU_V  0x00000001U
#define LP_IO_LP_GPIO4_FUN_WPU_S  8
/** LP_IO_LP_GPIO4_FUN_IE : R/W; bitpos: [9]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_FUN_IE    (BIT(9))
#define LP_IO_LP_GPIO4_FUN_IE_M  (LP_IO_LP_GPIO4_FUN_IE_V << LP_IO_LP_GPIO4_FUN_IE_S)
#define LP_IO_LP_GPIO4_FUN_IE_V  0x00000001U
#define LP_IO_LP_GPIO4_FUN_IE_S  9
/** LP_IO_LP_GPIO4_FUN_DRV : R/W; bitpos: [11:10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_FUN_DRV    0x00000003U
#define LP_IO_LP_GPIO4_FUN_DRV_M  (LP_IO_LP_GPIO4_FUN_DRV_V << LP_IO_LP_GPIO4_FUN_DRV_S)
#define LP_IO_LP_GPIO4_FUN_DRV_V  0x00000003U
#define LP_IO_LP_GPIO4_FUN_DRV_S  10
/** LP_IO_LP_GPIO4_MCU_SEL : R/W; bitpos: [14:12]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO4_MCU_SEL    0x00000007U
#define LP_IO_LP_GPIO4_MCU_SEL_M  (LP_IO_LP_GPIO4_MCU_SEL_V << LP_IO_LP_GPIO4_MCU_SEL_S)
#define LP_IO_LP_GPIO4_MCU_SEL_V  0x00000007U
#define LP_IO_LP_GPIO4_MCU_SEL_S  12

/** LP_IO_GPIO5_REG register
 *  need des
 */
#define LP_IO_GPIO5_REG (DR_REG_LP_IO_BASE + 0x5c)
/** LP_IO_LP_GPIO5_MCU_OE : R/W; bitpos: [0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_MCU_OE    (BIT(0))
#define LP_IO_LP_GPIO5_MCU_OE_M  (LP_IO_LP_GPIO5_MCU_OE_V << LP_IO_LP_GPIO5_MCU_OE_S)
#define LP_IO_LP_GPIO5_MCU_OE_V  0x00000001U
#define LP_IO_LP_GPIO5_MCU_OE_S  0
/** LP_IO_LP_GPIO5_SLP_SEL : R/W; bitpos: [1]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_SLP_SEL    (BIT(1))
#define LP_IO_LP_GPIO5_SLP_SEL_M  (LP_IO_LP_GPIO5_SLP_SEL_V << LP_IO_LP_GPIO5_SLP_SEL_S)
#define LP_IO_LP_GPIO5_SLP_SEL_V  0x00000001U
#define LP_IO_LP_GPIO5_SLP_SEL_S  1
/** LP_IO_LP_GPIO5_MCU_WPD : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_MCU_WPD    (BIT(2))
#define LP_IO_LP_GPIO5_MCU_WPD_M  (LP_IO_LP_GPIO5_MCU_WPD_V << LP_IO_LP_GPIO5_MCU_WPD_S)
#define LP_IO_LP_GPIO5_MCU_WPD_V  0x00000001U
#define LP_IO_LP_GPIO5_MCU_WPD_S  2
/** LP_IO_LP_GPIO5_MCU_WPU : R/W; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_MCU_WPU    (BIT(3))
#define LP_IO_LP_GPIO5_MCU_WPU_M  (LP_IO_LP_GPIO5_MCU_WPU_V << LP_IO_LP_GPIO5_MCU_WPU_S)
#define LP_IO_LP_GPIO5_MCU_WPU_V  0x00000001U
#define LP_IO_LP_GPIO5_MCU_WPU_S  3
/** LP_IO_LP_GPIO5_MCU_IE : R/W; bitpos: [4]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_MCU_IE    (BIT(4))
#define LP_IO_LP_GPIO5_MCU_IE_M  (LP_IO_LP_GPIO5_MCU_IE_V << LP_IO_LP_GPIO5_MCU_IE_S)
#define LP_IO_LP_GPIO5_MCU_IE_V  0x00000001U
#define LP_IO_LP_GPIO5_MCU_IE_S  4
/** LP_IO_LP_GPIO5_MCU_DRV : R/W; bitpos: [6:5]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_MCU_DRV    0x00000003U
#define LP_IO_LP_GPIO5_MCU_DRV_M  (LP_IO_LP_GPIO5_MCU_DRV_V << LP_IO_LP_GPIO5_MCU_DRV_S)
#define LP_IO_LP_GPIO5_MCU_DRV_V  0x00000003U
#define LP_IO_LP_GPIO5_MCU_DRV_S  5
/** LP_IO_LP_GPIO5_FUN_WPD : R/W; bitpos: [7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_FUN_WPD    (BIT(7))
#define LP_IO_LP_GPIO5_FUN_WPD_M  (LP_IO_LP_GPIO5_FUN_WPD_V << LP_IO_LP_GPIO5_FUN_WPD_S)
#define LP_IO_LP_GPIO5_FUN_WPD_V  0x00000001U
#define LP_IO_LP_GPIO5_FUN_WPD_S  7
/** LP_IO_LP_GPIO5_FUN_WPU : R/W; bitpos: [8]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_FUN_WPU    (BIT(8))
#define LP_IO_LP_GPIO5_FUN_WPU_M  (LP_IO_LP_GPIO5_FUN_WPU_V << LP_IO_LP_GPIO5_FUN_WPU_S)
#define LP_IO_LP_GPIO5_FUN_WPU_V  0x00000001U
#define LP_IO_LP_GPIO5_FUN_WPU_S  8
/** LP_IO_LP_GPIO5_FUN_IE : R/W; bitpos: [9]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_FUN_IE    (BIT(9))
#define LP_IO_LP_GPIO5_FUN_IE_M  (LP_IO_LP_GPIO5_FUN_IE_V << LP_IO_LP_GPIO5_FUN_IE_S)
#define LP_IO_LP_GPIO5_FUN_IE_V  0x00000001U
#define LP_IO_LP_GPIO5_FUN_IE_S  9
/** LP_IO_LP_GPIO5_FUN_DRV : R/W; bitpos: [11:10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_FUN_DRV    0x00000003U
#define LP_IO_LP_GPIO5_FUN_DRV_M  (LP_IO_LP_GPIO5_FUN_DRV_V << LP_IO_LP_GPIO5_FUN_DRV_S)
#define LP_IO_LP_GPIO5_FUN_DRV_V  0x00000003U
#define LP_IO_LP_GPIO5_FUN_DRV_S  10
/** LP_IO_LP_GPIO5_MCU_SEL : R/W; bitpos: [14:12]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO5_MCU_SEL    0x00000007U
#define LP_IO_LP_GPIO5_MCU_SEL_M  (LP_IO_LP_GPIO5_MCU_SEL_V << LP_IO_LP_GPIO5_MCU_SEL_S)
#define LP_IO_LP_GPIO5_MCU_SEL_V  0x00000007U
#define LP_IO_LP_GPIO5_MCU_SEL_S  12

/** LP_IO_GPIO6_REG register
 *  need des
 */
#define LP_IO_GPIO6_REG (DR_REG_LP_IO_BASE + 0x60)
/** LP_IO_LP_GPIO6_MCU_OE : R/W; bitpos: [0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_MCU_OE    (BIT(0))
#define LP_IO_LP_GPIO6_MCU_OE_M  (LP_IO_LP_GPIO6_MCU_OE_V << LP_IO_LP_GPIO6_MCU_OE_S)
#define LP_IO_LP_GPIO6_MCU_OE_V  0x00000001U
#define LP_IO_LP_GPIO6_MCU_OE_S  0
/** LP_IO_LP_GPIO6_SLP_SEL : R/W; bitpos: [1]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_SLP_SEL    (BIT(1))
#define LP_IO_LP_GPIO6_SLP_SEL_M  (LP_IO_LP_GPIO6_SLP_SEL_V << LP_IO_LP_GPIO6_SLP_SEL_S)
#define LP_IO_LP_GPIO6_SLP_SEL_V  0x00000001U
#define LP_IO_LP_GPIO6_SLP_SEL_S  1
/** LP_IO_LP_GPIO6_MCU_WPD : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_MCU_WPD    (BIT(2))
#define LP_IO_LP_GPIO6_MCU_WPD_M  (LP_IO_LP_GPIO6_MCU_WPD_V << LP_IO_LP_GPIO6_MCU_WPD_S)
#define LP_IO_LP_GPIO6_MCU_WPD_V  0x00000001U
#define LP_IO_LP_GPIO6_MCU_WPD_S  2
/** LP_IO_LP_GPIO6_MCU_WPU : R/W; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_MCU_WPU    (BIT(3))
#define LP_IO_LP_GPIO6_MCU_WPU_M  (LP_IO_LP_GPIO6_MCU_WPU_V << LP_IO_LP_GPIO6_MCU_WPU_S)
#define LP_IO_LP_GPIO6_MCU_WPU_V  0x00000001U
#define LP_IO_LP_GPIO6_MCU_WPU_S  3
/** LP_IO_LP_GPIO6_MCU_IE : R/W; bitpos: [4]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_MCU_IE    (BIT(4))
#define LP_IO_LP_GPIO6_MCU_IE_M  (LP_IO_LP_GPIO6_MCU_IE_V << LP_IO_LP_GPIO6_MCU_IE_S)
#define LP_IO_LP_GPIO6_MCU_IE_V  0x00000001U
#define LP_IO_LP_GPIO6_MCU_IE_S  4
/** LP_IO_LP_GPIO6_MCU_DRV : R/W; bitpos: [6:5]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_MCU_DRV    0x00000003U
#define LP_IO_LP_GPIO6_MCU_DRV_M  (LP_IO_LP_GPIO6_MCU_DRV_V << LP_IO_LP_GPIO6_MCU_DRV_S)
#define LP_IO_LP_GPIO6_MCU_DRV_V  0x00000003U
#define LP_IO_LP_GPIO6_MCU_DRV_S  5
/** LP_IO_LP_GPIO6_FUN_WPD : R/W; bitpos: [7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_FUN_WPD    (BIT(7))
#define LP_IO_LP_GPIO6_FUN_WPD_M  (LP_IO_LP_GPIO6_FUN_WPD_V << LP_IO_LP_GPIO6_FUN_WPD_S)
#define LP_IO_LP_GPIO6_FUN_WPD_V  0x00000001U
#define LP_IO_LP_GPIO6_FUN_WPD_S  7
/** LP_IO_LP_GPIO6_FUN_WPU : R/W; bitpos: [8]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_FUN_WPU    (BIT(8))
#define LP_IO_LP_GPIO6_FUN_WPU_M  (LP_IO_LP_GPIO6_FUN_WPU_V << LP_IO_LP_GPIO6_FUN_WPU_S)
#define LP_IO_LP_GPIO6_FUN_WPU_V  0x00000001U
#define LP_IO_LP_GPIO6_FUN_WPU_S  8
/** LP_IO_LP_GPIO6_FUN_IE : R/W; bitpos: [9]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_FUN_IE    (BIT(9))
#define LP_IO_LP_GPIO6_FUN_IE_M  (LP_IO_LP_GPIO6_FUN_IE_V << LP_IO_LP_GPIO6_FUN_IE_S)
#define LP_IO_LP_GPIO6_FUN_IE_V  0x00000001U
#define LP_IO_LP_GPIO6_FUN_IE_S  9
/** LP_IO_LP_GPIO6_FUN_DRV : R/W; bitpos: [11:10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_FUN_DRV    0x00000003U
#define LP_IO_LP_GPIO6_FUN_DRV_M  (LP_IO_LP_GPIO6_FUN_DRV_V << LP_IO_LP_GPIO6_FUN_DRV_S)
#define LP_IO_LP_GPIO6_FUN_DRV_V  0x00000003U
#define LP_IO_LP_GPIO6_FUN_DRV_S  10
/** LP_IO_LP_GPIO6_MCU_SEL : R/W; bitpos: [14:12]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO6_MCU_SEL    0x00000007U
#define LP_IO_LP_GPIO6_MCU_SEL_M  (LP_IO_LP_GPIO6_MCU_SEL_V << LP_IO_LP_GPIO6_MCU_SEL_S)
#define LP_IO_LP_GPIO6_MCU_SEL_V  0x00000007U
#define LP_IO_LP_GPIO6_MCU_SEL_S  12

/** LP_IO_GPIO7_REG register
 *  need des
 */
#define LP_IO_GPIO7_REG (DR_REG_LP_IO_BASE + 0x64)
/** LP_IO_LP_GPIO7_MCU_OE : R/W; bitpos: [0]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_MCU_OE    (BIT(0))
#define LP_IO_LP_GPIO7_MCU_OE_M  (LP_IO_LP_GPIO7_MCU_OE_V << LP_IO_LP_GPIO7_MCU_OE_S)
#define LP_IO_LP_GPIO7_MCU_OE_V  0x00000001U
#define LP_IO_LP_GPIO7_MCU_OE_S  0
/** LP_IO_LP_GPIO7_SLP_SEL : R/W; bitpos: [1]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_SLP_SEL    (BIT(1))
#define LP_IO_LP_GPIO7_SLP_SEL_M  (LP_IO_LP_GPIO7_SLP_SEL_V << LP_IO_LP_GPIO7_SLP_SEL_S)
#define LP_IO_LP_GPIO7_SLP_SEL_V  0x00000001U
#define LP_IO_LP_GPIO7_SLP_SEL_S  1
/** LP_IO_LP_GPIO7_MCU_WPD : R/W; bitpos: [2]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_MCU_WPD    (BIT(2))
#define LP_IO_LP_GPIO7_MCU_WPD_M  (LP_IO_LP_GPIO7_MCU_WPD_V << LP_IO_LP_GPIO7_MCU_WPD_S)
#define LP_IO_LP_GPIO7_MCU_WPD_V  0x00000001U
#define LP_IO_LP_GPIO7_MCU_WPD_S  2
/** LP_IO_LP_GPIO7_MCU_WPU : R/W; bitpos: [3]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_MCU_WPU    (BIT(3))
#define LP_IO_LP_GPIO7_MCU_WPU_M  (LP_IO_LP_GPIO7_MCU_WPU_V << LP_IO_LP_GPIO7_MCU_WPU_S)
#define LP_IO_LP_GPIO7_MCU_WPU_V  0x00000001U
#define LP_IO_LP_GPIO7_MCU_WPU_S  3
/** LP_IO_LP_GPIO7_MCU_IE : R/W; bitpos: [4]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_MCU_IE    (BIT(4))
#define LP_IO_LP_GPIO7_MCU_IE_M  (LP_IO_LP_GPIO7_MCU_IE_V << LP_IO_LP_GPIO7_MCU_IE_S)
#define LP_IO_LP_GPIO7_MCU_IE_V  0x00000001U
#define LP_IO_LP_GPIO7_MCU_IE_S  4
/** LP_IO_LP_GPIO7_MCU_DRV : R/W; bitpos: [6:5]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_MCU_DRV    0x00000003U
#define LP_IO_LP_GPIO7_MCU_DRV_M  (LP_IO_LP_GPIO7_MCU_DRV_V << LP_IO_LP_GPIO7_MCU_DRV_S)
#define LP_IO_LP_GPIO7_MCU_DRV_V  0x00000003U
#define LP_IO_LP_GPIO7_MCU_DRV_S  5
/** LP_IO_LP_GPIO7_FUN_WPD : R/W; bitpos: [7]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_FUN_WPD    (BIT(7))
#define LP_IO_LP_GPIO7_FUN_WPD_M  (LP_IO_LP_GPIO7_FUN_WPD_V << LP_IO_LP_GPIO7_FUN_WPD_S)
#define LP_IO_LP_GPIO7_FUN_WPD_V  0x00000001U
#define LP_IO_LP_GPIO7_FUN_WPD_S  7
/** LP_IO_LP_GPIO7_FUN_WPU : R/W; bitpos: [8]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_FUN_WPU    (BIT(8))
#define LP_IO_LP_GPIO7_FUN_WPU_M  (LP_IO_LP_GPIO7_FUN_WPU_V << LP_IO_LP_GPIO7_FUN_WPU_S)
#define LP_IO_LP_GPIO7_FUN_WPU_V  0x00000001U
#define LP_IO_LP_GPIO7_FUN_WPU_S  8
/** LP_IO_LP_GPIO7_FUN_IE : R/W; bitpos: [9]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_FUN_IE    (BIT(9))
#define LP_IO_LP_GPIO7_FUN_IE_M  (LP_IO_LP_GPIO7_FUN_IE_V << LP_IO_LP_GPIO7_FUN_IE_S)
#define LP_IO_LP_GPIO7_FUN_IE_V  0x00000001U
#define LP_IO_LP_GPIO7_FUN_IE_S  9
/** LP_IO_LP_GPIO7_FUN_DRV : R/W; bitpos: [11:10]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_FUN_DRV    0x00000003U
#define LP_IO_LP_GPIO7_FUN_DRV_M  (LP_IO_LP_GPIO7_FUN_DRV_V << LP_IO_LP_GPIO7_FUN_DRV_S)
#define LP_IO_LP_GPIO7_FUN_DRV_V  0x00000003U
#define LP_IO_LP_GPIO7_FUN_DRV_S  10
/** LP_IO_LP_GPIO7_MCU_SEL : R/W; bitpos: [14:12]; default: 0;
 *  need des
 */
#define LP_IO_LP_GPIO7_MCU_SEL    0x00000007U
#define LP_IO_LP_GPIO7_MCU_SEL_M  (LP_IO_LP_GPIO7_MCU_SEL_V << LP_IO_LP_GPIO7_MCU_SEL_S)
#define LP_IO_LP_GPIO7_MCU_SEL_V  0x00000007U
#define LP_IO_LP_GPIO7_MCU_SEL_S  12

/** LP_IO_STATUS_INTERRUPT_REG register
 *  need des
 */
#define LP_IO_STATUS_INTERRUPT_REG (DR_REG_LP_IO_BASE + 0x68)
/** LP_IO_STATUS_INTERRUPT_NEXT : RO; bitpos: [7:0]; default: 0;
 *  need des
 */
#define LP_IO_STATUS_INTERRUPT_NEXT    0x000000FFU
#define LP_IO_STATUS_INTERRUPT_NEXT_M  (LP_IO_STATUS_INTERRUPT_NEXT_V << LP_IO_STATUS_INTERRUPT_NEXT_S)
#define LP_IO_STATUS_INTERRUPT_NEXT_V  0x000000FFU
#define LP_IO_STATUS_INTERRUPT_NEXT_S  0

/** LP_IO_DEBUG_SEL0_REG register
 *  need des
 */
#define LP_IO_DEBUG_SEL0_REG (DR_REG_LP_IO_BASE + 0x6c)
/** LP_IO_LP_DEBUG_SEL0 : R/W; bitpos: [6:0]; default: 0;
 *  need des
 */
#define LP_IO_LP_DEBUG_SEL0    0x0000007FU
#define LP_IO_LP_DEBUG_SEL0_M  (LP_IO_LP_DEBUG_SEL0_V << LP_IO_LP_DEBUG_SEL0_S)
#define LP_IO_LP_DEBUG_SEL0_V  0x0000007FU
#define LP_IO_LP_DEBUG_SEL0_S  0
/** LP_IO_LP_DEBUG_SEL1 : R/W; bitpos: [13:7]; default: 0;
 *  need des
 */
#define LP_IO_LP_DEBUG_SEL1    0x0000007FU
#define LP_IO_LP_DEBUG_SEL1_M  (LP_IO_LP_DEBUG_SEL1_V << LP_IO_LP_DEBUG_SEL1_S)
#define LP_IO_LP_DEBUG_SEL1_V  0x0000007FU
#define LP_IO_LP_DEBUG_SEL1_S  7
/** LP_IO_LP_DEBUG_SEL2 : R/W; bitpos: [20:14]; default: 0;
 *  need des
 */
#define LP_IO_LP_DEBUG_SEL2    0x0000007FU
#define LP_IO_LP_DEBUG_SEL2_M  (LP_IO_LP_DEBUG_SEL2_V << LP_IO_LP_DEBUG_SEL2_S)
#define LP_IO_LP_DEBUG_SEL2_V  0x0000007FU
#define LP_IO_LP_DEBUG_SEL2_S  14
/** LP_IO_LP_DEBUG_SEL3 : R/W; bitpos: [27:21]; default: 0;
 *  need des
 */
#define LP_IO_LP_DEBUG_SEL3    0x0000007FU
#define LP_IO_LP_DEBUG_SEL3_M  (LP_IO_LP_DEBUG_SEL3_V << LP_IO_LP_DEBUG_SEL3_S)
#define LP_IO_LP_DEBUG_SEL3_V  0x0000007FU
#define LP_IO_LP_DEBUG_SEL3_S  21

/** LP_IO_DEBUG_SEL1_REG register
 *  need des
 */
#define LP_IO_DEBUG_SEL1_REG (DR_REG_LP_IO_BASE + 0x70)
/** LP_IO_LP_DEBUG_SEL4 : R/W; bitpos: [6:0]; default: 0;
 *  need des
 */
#define LP_IO_LP_DEBUG_SEL4    0x0000007FU
#define LP_IO_LP_DEBUG_SEL4_M  (LP_IO_LP_DEBUG_SEL4_V << LP_IO_LP_DEBUG_SEL4_S)
#define LP_IO_LP_DEBUG_SEL4_V  0x0000007FU
#define LP_IO_LP_DEBUG_SEL4_S  0

/** LP_IO_LPI2C_REG register
 *  need des
 */
#define LP_IO_LPI2C_REG (DR_REG_LP_IO_BASE + 0x74)
/** LP_IO_LP_I2C_SDA_IE : R/W; bitpos: [30]; default: 1;
 *  need des
 */
#define LP_IO_LP_I2C_SDA_IE    (BIT(30))
#define LP_IO_LP_I2C_SDA_IE_M  (LP_IO_LP_I2C_SDA_IE_V << LP_IO_LP_I2C_SDA_IE_S)
#define LP_IO_LP_I2C_SDA_IE_V  0x00000001U
#define LP_IO_LP_I2C_SDA_IE_S  30
/** LP_IO_LP_I2C_SCL_IE : R/W; bitpos: [31]; default: 1;
 *  need des
 */
#define LP_IO_LP_I2C_SCL_IE    (BIT(31))
#define LP_IO_LP_I2C_SCL_IE_M  (LP_IO_LP_I2C_SCL_IE_V << LP_IO_LP_I2C_SCL_IE_S)
#define LP_IO_LP_I2C_SCL_IE_V  0x00000001U
#define LP_IO_LP_I2C_SCL_IE_S  31

/** LP_IO_DATE_REG register
 *  need des
 */
#define LP_IO_DATE_REG (DR_REG_LP_IO_BASE + 0x3fc)
/** LP_IO_LP_IO_DATE : R/W; bitpos: [30:0]; default: 35660032;
 *  need des
 */
#define LP_IO_LP_IO_DATE    0x7FFFFFFFU
#define LP_IO_LP_IO_DATE_M  (LP_IO_LP_IO_DATE_V << LP_IO_LP_IO_DATE_S)
#define LP_IO_LP_IO_DATE_V  0x7FFFFFFFU
#define LP_IO_LP_IO_DATE_S  0
/** LP_IO_CLK_EN : R/W; bitpos: [31]; default: 0;
 *  need des
 */
#define LP_IO_CLK_EN    (BIT(31))
#define LP_IO_CLK_EN_M  (LP_IO_CLK_EN_V << LP_IO_CLK_EN_S)
#define LP_IO_CLK_EN_V  0x00000001U
#define LP_IO_CLK_EN_S  31

#ifdef __cplusplus
}
#endif
