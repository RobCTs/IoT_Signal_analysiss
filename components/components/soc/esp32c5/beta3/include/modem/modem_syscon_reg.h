/*
 * SPDX-FileCopyrightText: 2017-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_MODEM_SYSCON_REG_H_
#define _SOC_MODEM_SYSCON_REG_H_


#ifdef __cplusplus
extern "C" {
#endif

#include "reg_base.h"

#define MODEM_SYSCON_TEST_CONF_REG          (DR_REG_MODEM_SYSCON_BASE + 0x0)
/* MODEM_SYSCON_MODEM_ANT_FORCE_SEL_WIFI : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_MODEM_ANT_FORCE_SEL_WIFI    (BIT(2))
#define MODEM_SYSCON_MODEM_ANT_FORCE_SEL_WIFI_M  (BIT(2))
#define MODEM_SYSCON_MODEM_ANT_FORCE_SEL_WIFI_V  0x1
#define MODEM_SYSCON_MODEM_ANT_FORCE_SEL_WIFI_S  2
/* MODEM_SYSCON_MODEM_ANT_FORCE_SEL_BT : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_MODEM_ANT_FORCE_SEL_BT    (BIT(1))
#define MODEM_SYSCON_MODEM_ANT_FORCE_SEL_BT_M  (BIT(1))
#define MODEM_SYSCON_MODEM_ANT_FORCE_SEL_BT_V  0x1
#define MODEM_SYSCON_MODEM_ANT_FORCE_SEL_BT_S  1
/* MODEM_SYSCON_CLK_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_EN    (BIT(0))
#define MODEM_SYSCON_CLK_EN_M  (BIT(0))
#define MODEM_SYSCON_CLK_EN_V  0x1
#define MODEM_SYSCON_CLK_EN_S  0

#define MODEM_SYSCON_CLK_CONF_REG          (DR_REG_MODEM_SYSCON_BASE + 0x4)
/* MODEM_SYSCON_CLK_DATA_DUMP_EN : R/W ;bitpos:[31] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_DATA_DUMP_EN    (BIT(31))
#define MODEM_SYSCON_CLK_DATA_DUMP_EN_M  (BIT(31))
#define MODEM_SYSCON_CLK_DATA_DUMP_EN_V  0x1
#define MODEM_SYSCON_CLK_DATA_DUMP_EN_S  31
/* MODEM_SYSCON_CLK_BLE_TIMER_EN : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_BLE_TIMER_EN    (BIT(30))
#define MODEM_SYSCON_CLK_BLE_TIMER_EN_M  (BIT(30))
#define MODEM_SYSCON_CLK_BLE_TIMER_EN_V  0x1
#define MODEM_SYSCON_CLK_BLE_TIMER_EN_S  30
/* MODEM_SYSCON_CLK_MODEM_SEC_EN : R/W ;bitpos:[29] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_MODEM_SEC_EN    (BIT(29))
#define MODEM_SYSCON_CLK_MODEM_SEC_EN_M  (BIT(29))
#define MODEM_SYSCON_CLK_MODEM_SEC_EN_V  0x1
#define MODEM_SYSCON_CLK_MODEM_SEC_EN_S  29
/* MODEM_SYSCON_CLK_MODEM_SEC_APB_EN : R/W ;bitpos:[28] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_MODEM_SEC_APB_EN    (BIT(28))
#define MODEM_SYSCON_CLK_MODEM_SEC_APB_EN_M  (BIT(28))
#define MODEM_SYSCON_CLK_MODEM_SEC_APB_EN_V  0x1
#define MODEM_SYSCON_CLK_MODEM_SEC_APB_EN_S  28
/* MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN : R/W ;bitpos:[27] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN    (BIT(27))
#define MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN_M  (BIT(27))
#define MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN_V  0x1
#define MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN_S  27
/* MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN : R/W ;bitpos:[26] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN    (BIT(26))
#define MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN_M  (BIT(26))
#define MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN_V  0x1
#define MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN_S  26
/* MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN : R/W ;bitpos:[25] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN    (BIT(25))
#define MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN_M  (BIT(25))
#define MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN_V  0x1
#define MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN_S  25
/* MODEM_SYSCON_CLK_ZBMAC_EN : R/W ;bitpos:[24] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_ZBMAC_EN    (BIT(24))
#define MODEM_SYSCON_CLK_ZBMAC_EN_M  (BIT(24))
#define MODEM_SYSCON_CLK_ZBMAC_EN_V  0x1
#define MODEM_SYSCON_CLK_ZBMAC_EN_S  24
/* MODEM_SYSCON_CLK_ZB_APB_EN : R/W ;bitpos:[23] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_ZB_APB_EN    (BIT(23))
#define MODEM_SYSCON_CLK_ZB_APB_EN_M  (BIT(23))
#define MODEM_SYSCON_CLK_ZB_APB_EN_V  0x1
#define MODEM_SYSCON_CLK_ZB_APB_EN_S  23
/* MODEM_SYSCON_CLK_ETM_EN : R/W ;bitpos:[22] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_ETM_EN    (BIT(22))
#define MODEM_SYSCON_CLK_ETM_EN_M  (BIT(22))
#define MODEM_SYSCON_CLK_ETM_EN_V  0x1
#define MODEM_SYSCON_CLK_ETM_EN_S  22
/* MODEM_SYSCON_CLK_DATA_DUMP_MUX : R/W ;bitpos:[21] ;default: 1'b1 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_DATA_DUMP_MUX    (BIT(21))
#define MODEM_SYSCON_CLK_DATA_DUMP_MUX_M  (BIT(21))
#define MODEM_SYSCON_CLK_DATA_DUMP_MUX_V  0x1
#define MODEM_SYSCON_CLK_DATA_DUMP_MUX_S  21

#define MODEM_SYSCON_CLK_CONF_FORCE_ON_REG          (DR_REG_MODEM_SYSCON_BASE + 0x8)
/* MODEM_SYSCON_CLK_DATA_DUMP_FO : R/W ;bitpos:[31] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_DATA_DUMP_FO    (BIT(31))
#define MODEM_SYSCON_CLK_DATA_DUMP_FO_M  (BIT(31))
#define MODEM_SYSCON_CLK_DATA_DUMP_FO_V  0x1
#define MODEM_SYSCON_CLK_DATA_DUMP_FO_S  31
/* MODEM_SYSCON_CLK_BLE_TIMER_FO : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_BLE_TIMER_FO    (BIT(30))
#define MODEM_SYSCON_CLK_BLE_TIMER_FO_M  (BIT(30))
#define MODEM_SYSCON_CLK_BLE_TIMER_FO_V  0x1
#define MODEM_SYSCON_CLK_BLE_TIMER_FO_S  30
/* MODEM_SYSCON_CLK_MODEM_SEC_FO : R/W ;bitpos:[29] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_MODEM_SEC_FO    (BIT(29))
#define MODEM_SYSCON_CLK_MODEM_SEC_FO_M  (BIT(29))
#define MODEM_SYSCON_CLK_MODEM_SEC_FO_V  0x1
#define MODEM_SYSCON_CLK_MODEM_SEC_FO_S  29
/* MODEM_SYSCON_CLK_ETM_FO : R/W ;bitpos:[28] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_ETM_FO    (BIT(28))
#define MODEM_SYSCON_CLK_ETM_FO_M  (BIT(28))
#define MODEM_SYSCON_CLK_ETM_FO_V  0x1
#define MODEM_SYSCON_CLK_ETM_FO_S  28
/* MODEM_SYSCON_CLK_ZBMAC_APB_FO : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_ZBMAC_APB_FO    (BIT(9))
#define MODEM_SYSCON_CLK_ZBMAC_APB_FO_M  (BIT(9))
#define MODEM_SYSCON_CLK_ZBMAC_APB_FO_V  0x1
#define MODEM_SYSCON_CLK_ZBMAC_APB_FO_S  9
/* MODEM_SYSCON_CLK_ZBMAC_FO : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_ZBMAC_FO    (BIT(8))
#define MODEM_SYSCON_CLK_ZBMAC_FO_M  (BIT(8))
#define MODEM_SYSCON_CLK_ZBMAC_FO_V  0x1
#define MODEM_SYSCON_CLK_ZBMAC_FO_S  8
/* MODEM_SYSCON_CLK_BT_APB_FO : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_BT_APB_FO    (BIT(7))
#define MODEM_SYSCON_CLK_BT_APB_FO_M  (BIT(7))
#define MODEM_SYSCON_CLK_BT_APB_FO_V  0x1
#define MODEM_SYSCON_CLK_BT_APB_FO_S  7
/* MODEM_SYSCON_CLK_BTMAC_FO : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_BTMAC_FO    (BIT(6))
#define MODEM_SYSCON_CLK_BTMAC_FO_M  (BIT(6))
#define MODEM_SYSCON_CLK_BTMAC_FO_V  0x1
#define MODEM_SYSCON_CLK_BTMAC_FO_S  6
/* MODEM_SYSCON_CLK_BTBB_FO : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_BTBB_FO    (BIT(5))
#define MODEM_SYSCON_CLK_BTBB_FO_M  (BIT(5))
#define MODEM_SYSCON_CLK_BTBB_FO_V  0x1
#define MODEM_SYSCON_CLK_BTBB_FO_S  5
/* MODEM_SYSCON_CLK_FE_APB_FO : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_FE_APB_FO    (BIT(4))
#define MODEM_SYSCON_CLK_FE_APB_FO_M  (BIT(4))
#define MODEM_SYSCON_CLK_FE_APB_FO_V  0x1
#define MODEM_SYSCON_CLK_FE_APB_FO_S  4
/* MODEM_SYSCON_CLK_FE_FO : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_FE_FO    (BIT(3))
#define MODEM_SYSCON_CLK_FE_FO_M  (BIT(3))
#define MODEM_SYSCON_CLK_FE_FO_V  0x1
#define MODEM_SYSCON_CLK_FE_FO_S  3
/* MODEM_SYSCON_CLK_WIFI_APB_FO : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFI_APB_FO    (BIT(2))
#define MODEM_SYSCON_CLK_WIFI_APB_FO_M  (BIT(2))
#define MODEM_SYSCON_CLK_WIFI_APB_FO_V  0x1
#define MODEM_SYSCON_CLK_WIFI_APB_FO_S  2
/* MODEM_SYSCON_CLK_WIFIMAC_FO : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIMAC_FO    (BIT(1))
#define MODEM_SYSCON_CLK_WIFIMAC_FO_M  (BIT(1))
#define MODEM_SYSCON_CLK_WIFIMAC_FO_V  0x1
#define MODEM_SYSCON_CLK_WIFIMAC_FO_S  1
/* MODEM_SYSCON_CLK_WIFIBB_FO : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIBB_FO    (BIT(0))
#define MODEM_SYSCON_CLK_WIFIBB_FO_M  (BIT(0))
#define MODEM_SYSCON_CLK_WIFIBB_FO_V  0x1
#define MODEM_SYSCON_CLK_WIFIBB_FO_S  0

#define MODEM_SYSCON_CLK_CONF_POWER_ST_REG          (DR_REG_MODEM_SYSCON_BASE + 0xC)
/* MODEM_SYSCON_CLK_MODEM_APB_ST_MAP : R/W ;bitpos:[31:28] ;default: 4'h0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_MODEM_APB_ST_MAP    0x0000000F
#define MODEM_SYSCON_CLK_MODEM_APB_ST_MAP_M  ((MODEM_SYSCON_CLK_MODEM_APB_ST_MAP_V)<<(MODEM_SYSCON_CLK_MODEM_APB_ST_MAP_S))
#define MODEM_SYSCON_CLK_MODEM_APB_ST_MAP_V  0xF
#define MODEM_SYSCON_CLK_MODEM_APB_ST_MAP_S  28
/* MODEM_SYSCON_CLK_MODEM_PERI_ST_MAP : R/W ;bitpos:[27:24] ;default: 4'h0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_MODEM_PERI_ST_MAP    0x0000000F
#define MODEM_SYSCON_CLK_MODEM_PERI_ST_MAP_M  ((MODEM_SYSCON_CLK_MODEM_PERI_ST_MAP_V)<<(MODEM_SYSCON_CLK_MODEM_PERI_ST_MAP_S))
#define MODEM_SYSCON_CLK_MODEM_PERI_ST_MAP_V  0xF
#define MODEM_SYSCON_CLK_MODEM_PERI_ST_MAP_S  24
/* MODEM_SYSCON_CLK_WIFI_ST_MAP : R/W ;bitpos:[23:20] ;default: 4'h0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFI_ST_MAP    0x0000000F
#define MODEM_SYSCON_CLK_WIFI_ST_MAP_M  ((MODEM_SYSCON_CLK_WIFI_ST_MAP_V)<<(MODEM_SYSCON_CLK_WIFI_ST_MAP_S))
#define MODEM_SYSCON_CLK_WIFI_ST_MAP_V  0xF
#define MODEM_SYSCON_CLK_WIFI_ST_MAP_S  20
/* MODEM_SYSCON_CLK_BT_ST_MAP : R/W ;bitpos:[19:16] ;default: 4'h0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_BT_ST_MAP    0x0000000F
#define MODEM_SYSCON_CLK_BT_ST_MAP_M  ((MODEM_SYSCON_CLK_BT_ST_MAP_V)<<(MODEM_SYSCON_CLK_BT_ST_MAP_S))
#define MODEM_SYSCON_CLK_BT_ST_MAP_V  0xF
#define MODEM_SYSCON_CLK_BT_ST_MAP_S  16
/* MODEM_SYSCON_CLK_FE_ST_MAP : R/W ;bitpos:[15:12] ;default: 4'h0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_FE_ST_MAP    0x0000000F
#define MODEM_SYSCON_CLK_FE_ST_MAP_M  ((MODEM_SYSCON_CLK_FE_ST_MAP_V)<<(MODEM_SYSCON_CLK_FE_ST_MAP_S))
#define MODEM_SYSCON_CLK_FE_ST_MAP_V  0xF
#define MODEM_SYSCON_CLK_FE_ST_MAP_S  12
/* MODEM_SYSCON_CLK_ZB_ST_MAP : R/W ;bitpos:[11:8] ;default: 4'h0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_ZB_ST_MAP    0x0000000F
#define MODEM_SYSCON_CLK_ZB_ST_MAP_M  ((MODEM_SYSCON_CLK_ZB_ST_MAP_V)<<(MODEM_SYSCON_CLK_ZB_ST_MAP_S))
#define MODEM_SYSCON_CLK_ZB_ST_MAP_V  0xF
#define MODEM_SYSCON_CLK_ZB_ST_MAP_S  8

#define MODEM_SYSCON_MODEM_RST_CONF_REG          (DR_REG_MODEM_SYSCON_BASE + 0x10)
/* MODEM_SYSCON_RST_DATA_DUMP : R/W ;bitpos:[31] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_DATA_DUMP    (BIT(31))
#define MODEM_SYSCON_RST_DATA_DUMP_M  (BIT(31))
#define MODEM_SYSCON_RST_DATA_DUMP_V  0x1
#define MODEM_SYSCON_RST_DATA_DUMP_S  31
/* MODEM_SYSCON_RST_BLE_TIMER : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_BLE_TIMER    (BIT(30))
#define MODEM_SYSCON_RST_BLE_TIMER_M  (BIT(30))
#define MODEM_SYSCON_RST_BLE_TIMER_V  0x1
#define MODEM_SYSCON_RST_BLE_TIMER_S  30
/* MODEM_SYSCON_RST_MODEM_SEC : R/W ;bitpos:[29] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_MODEM_SEC    (BIT(29))
#define MODEM_SYSCON_RST_MODEM_SEC_M  (BIT(29))
#define MODEM_SYSCON_RST_MODEM_SEC_V  0x1
#define MODEM_SYSCON_RST_MODEM_SEC_S  29
/* MODEM_SYSCON_RST_MODEM_BAH : R/W ;bitpos:[27] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_MODEM_BAH    (BIT(27))
#define MODEM_SYSCON_RST_MODEM_BAH_M  (BIT(27))
#define MODEM_SYSCON_RST_MODEM_BAH_V  0x1
#define MODEM_SYSCON_RST_MODEM_BAH_S  27
/* MODEM_SYSCON_RST_MODEM_CCM : R/W ;bitpos:[26] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_MODEM_CCM    (BIT(26))
#define MODEM_SYSCON_RST_MODEM_CCM_M  (BIT(26))
#define MODEM_SYSCON_RST_MODEM_CCM_V  0x1
#define MODEM_SYSCON_RST_MODEM_CCM_S  26
/* MODEM_SYSCON_RST_MODEM_ECB : R/W ;bitpos:[25] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_MODEM_ECB    (BIT(25))
#define MODEM_SYSCON_RST_MODEM_ECB_M  (BIT(25))
#define MODEM_SYSCON_RST_MODEM_ECB_V  0x1
#define MODEM_SYSCON_RST_MODEM_ECB_S  25
/* MODEM_SYSCON_RST_ZBMAC : R/W ;bitpos:[24] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_ZBMAC    (BIT(24))
#define MODEM_SYSCON_RST_ZBMAC_M  (BIT(24))
#define MODEM_SYSCON_RST_ZBMAC_V  0x1
#define MODEM_SYSCON_RST_ZBMAC_S  24
/* MODEM_SYSCON_RST_ETM : R/W ;bitpos:[22] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_ETM    (BIT(22))
#define MODEM_SYSCON_RST_ETM_M  (BIT(22))
#define MODEM_SYSCON_RST_ETM_V  0x1
#define MODEM_SYSCON_RST_ETM_S  22
/* MODEM_SYSCON_RST_BTBB : R/W ;bitpos:[18] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_BTBB    (BIT(18))
#define MODEM_SYSCON_RST_BTBB_M  (BIT(18))
#define MODEM_SYSCON_RST_BTBB_V  0x1
#define MODEM_SYSCON_RST_BTBB_S  18
/* MODEM_SYSCON_RST_BTBB_APB : R/W ;bitpos:[17] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_BTBB_APB    (BIT(17))
#define MODEM_SYSCON_RST_BTBB_APB_M  (BIT(17))
#define MODEM_SYSCON_RST_BTBB_APB_V  0x1
#define MODEM_SYSCON_RST_BTBB_APB_S  17
/* MODEM_SYSCON_RST_BTMAC : R/W ;bitpos:[16] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_BTMAC    (BIT(16))
#define MODEM_SYSCON_RST_BTMAC_M  (BIT(16))
#define MODEM_SYSCON_RST_BTMAC_V  0x1
#define MODEM_SYSCON_RST_BTMAC_S  16
/* MODEM_SYSCON_RST_BTMAC_APB : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_BTMAC_APB    (BIT(15))
#define MODEM_SYSCON_RST_BTMAC_APB_M  (BIT(15))
#define MODEM_SYSCON_RST_BTMAC_APB_V  0x1
#define MODEM_SYSCON_RST_BTMAC_APB_S  15
/* MODEM_SYSCON_RST_FE : R/W ;bitpos:[14] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_FE    (BIT(14))
#define MODEM_SYSCON_RST_FE_M  (BIT(14))
#define MODEM_SYSCON_RST_FE_V  0x1
#define MODEM_SYSCON_RST_FE_S  14
/* MODEM_SYSCON_RST_FE_AHB : R/W ;bitpos:[13] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_FE_AHB    (BIT(13))
#define MODEM_SYSCON_RST_FE_AHB_M  (BIT(13))
#define MODEM_SYSCON_RST_FE_AHB_V  0x1
#define MODEM_SYSCON_RST_FE_AHB_S  13
/* MODEM_SYSCON_RST_FE_ADC : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_FE_ADC    (BIT(12))
#define MODEM_SYSCON_RST_FE_ADC_M  (BIT(12))
#define MODEM_SYSCON_RST_FE_ADC_V  0x1
#define MODEM_SYSCON_RST_FE_ADC_S  12
/* MODEM_SYSCON_RST_FE_DAC : R/W ;bitpos:[11] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_FE_DAC    (BIT(11))
#define MODEM_SYSCON_RST_FE_DAC_M  (BIT(11))
#define MODEM_SYSCON_RST_FE_DAC_V  0x1
#define MODEM_SYSCON_RST_FE_DAC_S  11
/* MODEM_SYSCON_RST_FE_PWDET_ADC : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_FE_PWDET_ADC    (BIT(10))
#define MODEM_SYSCON_RST_FE_PWDET_ADC_M  (BIT(10))
#define MODEM_SYSCON_RST_FE_PWDET_ADC_V  0x1
#define MODEM_SYSCON_RST_FE_PWDET_ADC_S  10
/* MODEM_SYSCON_RST_WIFIMAC : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_WIFIMAC    (BIT(9))
#define MODEM_SYSCON_RST_WIFIMAC_M  (BIT(9))
#define MODEM_SYSCON_RST_WIFIMAC_V  0x1
#define MODEM_SYSCON_RST_WIFIMAC_S  9
/* MODEM_SYSCON_RST_WIFIBB : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_RST_WIFIBB    (BIT(8))
#define MODEM_SYSCON_RST_WIFIBB_M  (BIT(8))
#define MODEM_SYSCON_RST_WIFIBB_V  0x1
#define MODEM_SYSCON_RST_WIFIBB_S  8

#define MODEM_SYSCON_CLK_CONF1_REG          (DR_REG_MODEM_SYSCON_BASE + 0x14)
/* MODEM_SYSCON_CLK_FE_DAC_EN : R/W ;bitpos:[21] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_FE_DAC_EN    (BIT(21))
#define MODEM_SYSCON_CLK_FE_DAC_EN_M  (BIT(21))
#define MODEM_SYSCON_CLK_FE_DAC_EN_V  0x1
#define MODEM_SYSCON_CLK_FE_DAC_EN_S  21
/* MODEM_SYSCON_CLK_FE_ADC_EN : R/W ;bitpos:[20] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_FE_ADC_EN    (BIT(20))
#define MODEM_SYSCON_CLK_FE_ADC_EN_M  (BIT(20))
#define MODEM_SYSCON_CLK_FE_ADC_EN_V  0x1
#define MODEM_SYSCON_CLK_FE_ADC_EN_S  20
/* MODEM_SYSCON_CLK_FE_PWDET_ADC_EN : R/W ;bitpos:[19] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_FE_PWDET_ADC_EN    (BIT(19))
#define MODEM_SYSCON_CLK_FE_PWDET_ADC_EN_M  (BIT(19))
#define MODEM_SYSCON_CLK_FE_PWDET_ADC_EN_V  0x1
#define MODEM_SYSCON_CLK_FE_PWDET_ADC_EN_S  19
/* MODEM_SYSCON_CLK_BTMAC_EN : R/W ;bitpos:[18] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_BTMAC_EN    (BIT(18))
#define MODEM_SYSCON_CLK_BTMAC_EN_M  (BIT(18))
#define MODEM_SYSCON_CLK_BTMAC_EN_V  0x1
#define MODEM_SYSCON_CLK_BTMAC_EN_S  18
/* MODEM_SYSCON_CLK_BTBB_EN : R/W ;bitpos:[17] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_BTBB_EN    (BIT(17))
#define MODEM_SYSCON_CLK_BTBB_EN_M  (BIT(17))
#define MODEM_SYSCON_CLK_BTBB_EN_V  0x1
#define MODEM_SYSCON_CLK_BTBB_EN_S  17
/* MODEM_SYSCON_CLK_BT_APB_EN : R/W ;bitpos:[16] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_BT_APB_EN    (BIT(16))
#define MODEM_SYSCON_CLK_BT_APB_EN_M  (BIT(16))
#define MODEM_SYSCON_CLK_BT_APB_EN_V  0x1
#define MODEM_SYSCON_CLK_BT_APB_EN_S  16
/* MODEM_SYSCON_CLK_FE_APB_EN : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_FE_APB_EN    (BIT(15))
#define MODEM_SYSCON_CLK_FE_APB_EN_M  (BIT(15))
#define MODEM_SYSCON_CLK_FE_APB_EN_V  0x1
#define MODEM_SYSCON_CLK_FE_APB_EN_S  15
/* MODEM_SYSCON_CLK_FE_160M_EN : R/W ;bitpos:[14] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_FE_160M_EN    (BIT(14))
#define MODEM_SYSCON_CLK_FE_160M_EN_M  (BIT(14))
#define MODEM_SYSCON_CLK_FE_160M_EN_V  0x1
#define MODEM_SYSCON_CLK_FE_160M_EN_S  14
/* MODEM_SYSCON_CLK_FE_80M_EN : R/W ;bitpos:[13] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_FE_80M_EN    (BIT(13))
#define MODEM_SYSCON_CLK_FE_80M_EN_M  (BIT(13))
#define MODEM_SYSCON_CLK_FE_80M_EN_V  0x1
#define MODEM_SYSCON_CLK_FE_80M_EN_S  13
/* MODEM_SYSCON_CLK_FE_40M_EN : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_FE_40M_EN    (BIT(12))
#define MODEM_SYSCON_CLK_FE_40M_EN_M  (BIT(12))
#define MODEM_SYSCON_CLK_FE_40M_EN_V  0x1
#define MODEM_SYSCON_CLK_FE_40M_EN_S  12
/* MODEM_SYSCON_CLK_FE_20M_EN : R/W ;bitpos:[11] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_FE_20M_EN    (BIT(11))
#define MODEM_SYSCON_CLK_FE_20M_EN_M  (BIT(11))
#define MODEM_SYSCON_CLK_FE_20M_EN_V  0x1
#define MODEM_SYSCON_CLK_FE_20M_EN_S  11
/* MODEM_SYSCON_CLK_WIFI_APB_EN : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFI_APB_EN    (BIT(10))
#define MODEM_SYSCON_CLK_WIFI_APB_EN_M  (BIT(10))
#define MODEM_SYSCON_CLK_WIFI_APB_EN_V  0x1
#define MODEM_SYSCON_CLK_WIFI_APB_EN_S  10
/* MODEM_SYSCON_CLK_WIFIMAC_EN : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIMAC_EN    (BIT(9))
#define MODEM_SYSCON_CLK_WIFIMAC_EN_M  (BIT(9))
#define MODEM_SYSCON_CLK_WIFIMAC_EN_V  0x1
#define MODEM_SYSCON_CLK_WIFIMAC_EN_S  9
/* MODEM_SYSCON_CLK_WIFIBB_160X1_EN : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIBB_160X1_EN    (BIT(8))
#define MODEM_SYSCON_CLK_WIFIBB_160X1_EN_M  (BIT(8))
#define MODEM_SYSCON_CLK_WIFIBB_160X1_EN_V  0x1
#define MODEM_SYSCON_CLK_WIFIBB_160X1_EN_S  8
/* MODEM_SYSCON_CLK_WIFIBB_80X1_EN : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIBB_80X1_EN    (BIT(7))
#define MODEM_SYSCON_CLK_WIFIBB_80X1_EN_M  (BIT(7))
#define MODEM_SYSCON_CLK_WIFIBB_80X1_EN_V  0x1
#define MODEM_SYSCON_CLK_WIFIBB_80X1_EN_S  7
/* MODEM_SYSCON_CLK_WIFIBB_40X1_EN : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIBB_40X1_EN    (BIT(6))
#define MODEM_SYSCON_CLK_WIFIBB_40X1_EN_M  (BIT(6))
#define MODEM_SYSCON_CLK_WIFIBB_40X1_EN_V  0x1
#define MODEM_SYSCON_CLK_WIFIBB_40X1_EN_S  6
/* MODEM_SYSCON_CLK_WIFIBB_80X_EN : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIBB_80X_EN    (BIT(5))
#define MODEM_SYSCON_CLK_WIFIBB_80X_EN_M  (BIT(5))
#define MODEM_SYSCON_CLK_WIFIBB_80X_EN_V  0x1
#define MODEM_SYSCON_CLK_WIFIBB_80X_EN_S  5
/* MODEM_SYSCON_CLK_WIFIBB_40X_EN : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIBB_40X_EN    (BIT(4))
#define MODEM_SYSCON_CLK_WIFIBB_40X_EN_M  (BIT(4))
#define MODEM_SYSCON_CLK_WIFIBB_40X_EN_V  0x1
#define MODEM_SYSCON_CLK_WIFIBB_40X_EN_S  4
/* MODEM_SYSCON_CLK_WIFIBB_80M_EN : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIBB_80M_EN    (BIT(3))
#define MODEM_SYSCON_CLK_WIFIBB_80M_EN_M  (BIT(3))
#define MODEM_SYSCON_CLK_WIFIBB_80M_EN_V  0x1
#define MODEM_SYSCON_CLK_WIFIBB_80M_EN_S  3
/* MODEM_SYSCON_CLK_WIFIBB_44M_EN : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIBB_44M_EN    (BIT(2))
#define MODEM_SYSCON_CLK_WIFIBB_44M_EN_M  (BIT(2))
#define MODEM_SYSCON_CLK_WIFIBB_44M_EN_V  0x1
#define MODEM_SYSCON_CLK_WIFIBB_44M_EN_S  2
/* MODEM_SYSCON_CLK_WIFIBB_40M_EN : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIBB_40M_EN    (BIT(1))
#define MODEM_SYSCON_CLK_WIFIBB_40M_EN_M  (BIT(1))
#define MODEM_SYSCON_CLK_WIFIBB_40M_EN_V  0x1
#define MODEM_SYSCON_CLK_WIFIBB_40M_EN_S  1
/* MODEM_SYSCON_CLK_WIFIBB_22M_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_SYSCON_CLK_WIFIBB_22M_EN    (BIT(0))
#define MODEM_SYSCON_CLK_WIFIBB_22M_EN_M  (BIT(0))
#define MODEM_SYSCON_CLK_WIFIBB_22M_EN_V  0x1
#define MODEM_SYSCON_CLK_WIFIBB_22M_EN_S  0

#define MODEM_SYSCON_WIFI_BB_CFG_REG          (DR_REG_MODEM_SYSCON_BASE + 0x18)
/* MODEM_SYSCON_WIFI_BB_CFG : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define MODEM_SYSCON_WIFI_BB_CFG    0xFFFFFFFF
#define MODEM_SYSCON_WIFI_BB_CFG_M  ((MODEM_SYSCON_WIFI_BB_CFG_V)<<(MODEM_SYSCON_WIFI_BB_CFG_S))
#define MODEM_SYSCON_WIFI_BB_CFG_V  0xFFFFFFFF
#define MODEM_SYSCON_WIFI_BB_CFG_S  0

#define MODEM_SYSCON_MEM_RF1_CONF_REG          (DR_REG_MODEM_SYSCON_BASE + 0x1C)
/* MODEM_SYSCON_MODEM_RF1_MEM_AUX_CTRL : R/W ;bitpos:[31:0] ;default: 32'h2070 ; */
/*description: .*/
#define MODEM_SYSCON_MODEM_RF1_MEM_AUX_CTRL    0xFFFFFFFF
#define MODEM_SYSCON_MODEM_RF1_MEM_AUX_CTRL_M  ((MODEM_SYSCON_MODEM_RF1_MEM_AUX_CTRL_V)<<(MODEM_SYSCON_MODEM_RF1_MEM_AUX_CTRL_S))
#define MODEM_SYSCON_MODEM_RF1_MEM_AUX_CTRL_V  0xFFFFFFFF
#define MODEM_SYSCON_MODEM_RF1_MEM_AUX_CTRL_S  0

#define MODEM_SYSCON_MEM_RF2_CONF_REG          (DR_REG_MODEM_SYSCON_BASE + 0x20)
/* MODEM_SYSCON_MODEM_RF2_MEM_AUX_CTRL : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define MODEM_SYSCON_MODEM_RF2_MEM_AUX_CTRL    0xFFFFFFFF
#define MODEM_SYSCON_MODEM_RF2_MEM_AUX_CTRL_M  ((MODEM_SYSCON_MODEM_RF2_MEM_AUX_CTRL_V)<<(MODEM_SYSCON_MODEM_RF2_MEM_AUX_CTRL_S))
#define MODEM_SYSCON_MODEM_RF2_MEM_AUX_CTRL_V  0xFFFFFFFF
#define MODEM_SYSCON_MODEM_RF2_MEM_AUX_CTRL_S  0

#define MODEM_SYSCON_DATE_REG          (DR_REG_MODEM_SYSCON_BASE + 0x24)
/* MODEM_SYSCON_DATE : R/W ;bitpos:[27:0] ;default: 28'h2304170 ; */
/*description: .*/
#define MODEM_SYSCON_DATE    0x0FFFFFFF
#define MODEM_SYSCON_DATE_M  ((MODEM_SYSCON_DATE_V)<<(MODEM_SYSCON_DATE_S))
#define MODEM_SYSCON_DATE_V  0xFFFFFFF
#define MODEM_SYSCON_DATE_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_MODEM_SYSCON_REG_H_ */
