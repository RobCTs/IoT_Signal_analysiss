/**
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** LP_I2C_ANA_MST_I2C0_CTRL_REG register
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C0_CTRL_REG (DR_REG_LP_I2C_ANA_MST_BASE + 0x0)
/** LP_I2C_ANA_MST_I2C0_CTRL : R/W; bitpos: [24:0]; default: 0;
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C0_CTRL    0x01FFFFFFU
#define LP_I2C_ANA_MST_I2C0_CTRL_M  (LP_I2C_ANA_MST_I2C0_CTRL_V << LP_I2C_ANA_MST_I2C0_CTRL_S)
#define LP_I2C_ANA_MST_I2C0_CTRL_V  0x01FFFFFFU
#define LP_I2C_ANA_MST_I2C0_CTRL_S  0
/** LP_I2C_ANA_MST_I2C0_BUSY : RO; bitpos: [25]; default: 0;
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C0_BUSY    (BIT(25))
#define LP_I2C_ANA_MST_I2C0_BUSY_M  (LP_I2C_ANA_MST_I2C0_BUSY_V << LP_I2C_ANA_MST_I2C0_BUSY_S)
#define LP_I2C_ANA_MST_I2C0_BUSY_V  0x00000001U
#define LP_I2C_ANA_MST_I2C0_BUSY_S  25

/** LP_I2C_ANA_MST_I2C0_CONF_REG register
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C0_CONF_REG (DR_REG_LP_I2C_ANA_MST_BASE + 0x4)
/** LP_I2C_ANA_MST_I2C0_CONF : R/W; bitpos: [23:0]; default: 0;
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C0_CONF    0x00FFFFFFU
#define LP_I2C_ANA_MST_I2C0_CONF_M  (LP_I2C_ANA_MST_I2C0_CONF_V << LP_I2C_ANA_MST_I2C0_CONF_S)
#define LP_I2C_ANA_MST_I2C0_CONF_V  0x00FFFFFFU
#define LP_I2C_ANA_MST_I2C0_CONF_S  0
/** LP_I2C_ANA_MST_I2C0_STATUS : RO; bitpos: [31:24]; default: 7;
 *  reserved
 */
#define LP_I2C_ANA_MST_I2C0_STATUS    0x000000FFU
#define LP_I2C_ANA_MST_I2C0_STATUS_M  (LP_I2C_ANA_MST_I2C0_STATUS_V << LP_I2C_ANA_MST_I2C0_STATUS_S)
#define LP_I2C_ANA_MST_I2C0_STATUS_V  0x000000FFU
#define LP_I2C_ANA_MST_I2C0_STATUS_S  24

/** LP_I2C_ANA_MST_I2C0_DATA_REG register
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C0_DATA_REG (DR_REG_LP_I2C_ANA_MST_BASE + 0x8)
/** LP_I2C_ANA_MST_I2C0_RDATA : RO; bitpos: [7:0]; default: 0;
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C0_RDATA    0x000000FFU
#define LP_I2C_ANA_MST_I2C0_RDATA_M  (LP_I2C_ANA_MST_I2C0_RDATA_V << LP_I2C_ANA_MST_I2C0_RDATA_S)
#define LP_I2C_ANA_MST_I2C0_RDATA_V  0x000000FFU
#define LP_I2C_ANA_MST_I2C0_RDATA_S  0
/** LP_I2C_ANA_MST_I2C0_CLK_SEL : R/W; bitpos: [10:8]; default: 1;
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C0_CLK_SEL    0x00000007U
#define LP_I2C_ANA_MST_I2C0_CLK_SEL_M  (LP_I2C_ANA_MST_I2C0_CLK_SEL_V << LP_I2C_ANA_MST_I2C0_CLK_SEL_S)
#define LP_I2C_ANA_MST_I2C0_CLK_SEL_V  0x00000007U
#define LP_I2C_ANA_MST_I2C0_CLK_SEL_S  8
/** LP_I2C_ANA_MST_I2C_MST_SEL : R/W; bitpos: [11]; default: 1;
 *  need  des
 */
#define LP_I2C_ANA_MST_I2C_MST_SEL    (BIT(11))
#define LP_I2C_ANA_MST_I2C_MST_SEL_M  (LP_I2C_ANA_MST_I2C_MST_SEL_V << LP_I2C_ANA_MST_I2C_MST_SEL_S)
#define LP_I2C_ANA_MST_I2C_MST_SEL_V  0x00000001U
#define LP_I2C_ANA_MST_I2C_MST_SEL_S  11

/** LP_I2C_ANA_MST_ANA_CONF1_REG register
 *  need_des
 */
#define LP_I2C_ANA_MST_ANA_CONF1_REG (DR_REG_LP_I2C_ANA_MST_BASE + 0xc)
/** LP_I2C_ANA_MST_ANA_CONF1 : R/W; bitpos: [23:0]; default: 0;
 *  need_des
 */
#define LP_I2C_ANA_MST_ANA_CONF1    0x00FFFFFFU
#define LP_I2C_ANA_MST_ANA_CONF1_M  (LP_I2C_ANA_MST_ANA_CONF1_V << LP_I2C_ANA_MST_ANA_CONF1_S)
#define LP_I2C_ANA_MST_ANA_CONF1_V  0x00FFFFFFU
#define LP_I2C_ANA_MST_ANA_CONF1_S  0

/** LP_I2C_ANA_MST_NOUSE_REG register
 *  need_des
 */
#define LP_I2C_ANA_MST_NOUSE_REG (DR_REG_LP_I2C_ANA_MST_BASE + 0x10)
/** LP_I2C_ANA_MST_I2C_MST_NOUSE : R/W; bitpos: [31:0]; default: 0;
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C_MST_NOUSE    0xFFFFFFFFU
#define LP_I2C_ANA_MST_I2C_MST_NOUSE_M  (LP_I2C_ANA_MST_I2C_MST_NOUSE_V << LP_I2C_ANA_MST_I2C_MST_NOUSE_S)
#define LP_I2C_ANA_MST_I2C_MST_NOUSE_V  0xFFFFFFFFU
#define LP_I2C_ANA_MST_I2C_MST_NOUSE_S  0

/** LP_I2C_ANA_MST_DEVICE_EN_REG register
 *  need_des
 */
#define LP_I2C_ANA_MST_DEVICE_EN_REG (DR_REG_LP_I2C_ANA_MST_BASE + 0x14)
/** LP_I2C_ANA_MST_I2C_DEVICE_EN : R/W; bitpos: [11:0]; default: 0;
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C_DEVICE_EN    0x00000FFFU
#define LP_I2C_ANA_MST_I2C_DEVICE_EN_M  (LP_I2C_ANA_MST_I2C_DEVICE_EN_V << LP_I2C_ANA_MST_I2C_DEVICE_EN_S)
#define LP_I2C_ANA_MST_I2C_DEVICE_EN_V  0x00000FFFU
#define LP_I2C_ANA_MST_I2C_DEVICE_EN_S  0

/** LP_I2C_ANA_MST_DATE_REG register
 *  need_des
 */
#define LP_I2C_ANA_MST_DATE_REG (DR_REG_LP_I2C_ANA_MST_BASE + 0x3fc)
/** LP_I2C_ANA_MST_I2C_MAT_DATE : R/W; bitpos: [27:0]; default: 33583873;
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C_MAT_DATE    0x0FFFFFFFU
#define LP_I2C_ANA_MST_I2C_MAT_DATE_M  (LP_I2C_ANA_MST_I2C_MAT_DATE_V << LP_I2C_ANA_MST_I2C_MAT_DATE_S)
#define LP_I2C_ANA_MST_I2C_MAT_DATE_V  0x0FFFFFFFU
#define LP_I2C_ANA_MST_I2C_MAT_DATE_S  0
/** LP_I2C_ANA_MST_I2C_MAT_CLK_EN : R/W; bitpos: [28]; default: 0;
 *  need_des
 */
#define LP_I2C_ANA_MST_I2C_MAT_CLK_EN    (BIT(28))
#define LP_I2C_ANA_MST_I2C_MAT_CLK_EN_M  (LP_I2C_ANA_MST_I2C_MAT_CLK_EN_V << LP_I2C_ANA_MST_I2C_MAT_CLK_EN_S)
#define LP_I2C_ANA_MST_I2C_MAT_CLK_EN_V  0x00000001U
#define LP_I2C_ANA_MST_I2C_MAT_CLK_EN_S  28

#ifdef __cplusplus
}
#endif
