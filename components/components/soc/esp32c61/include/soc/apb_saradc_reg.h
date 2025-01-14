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

/** SARADC_CTRL_REG register
 *  digital saradc configure register
 */
#define SARADC_CTRL_REG (DR_REG_SARADC_BASE + 0x0)
/** SARADC_START_FORCE : R/W; bitpos: [0]; default: 0;
 *  select software enable saradc sample
 */
#define SARADC_START_FORCE    (BIT(0))
#define SARADC_START_FORCE_M  (SARADC_START_FORCE_V << SARADC_START_FORCE_S)
#define SARADC_START_FORCE_V  0x00000001U
#define SARADC_START_FORCE_S  0
/** SARADC_START : R/W; bitpos: [1]; default: 0;
 *  software enable saradc sample
 */
#define SARADC_START    (BIT(1))
#define SARADC_START_M  (SARADC_START_V << SARADC_START_S)
#define SARADC_START_V  0x00000001U
#define SARADC_START_S  1
/** SARADC_SAR_CLK_GATED : R/W; bitpos: [6]; default: 1;
 *  SAR clock gated
 */
#define SARADC_SAR_CLK_GATED    (BIT(6))
#define SARADC_SAR_CLK_GATED_M  (SARADC_SAR_CLK_GATED_V << SARADC_SAR_CLK_GATED_S)
#define SARADC_SAR_CLK_GATED_V  0x00000001U
#define SARADC_SAR_CLK_GATED_S  6
/** SARADC_SAR_CLK_DIV : R/W; bitpos: [14:7]; default: 4;
 *  SAR clock divider
 */
#define SARADC_SAR_CLK_DIV    0x000000FFU
#define SARADC_SAR_CLK_DIV_M  (SARADC_SAR_CLK_DIV_V << SARADC_SAR_CLK_DIV_S)
#define SARADC_SAR_CLK_DIV_V  0x000000FFU
#define SARADC_SAR_CLK_DIV_S  7
/** SARADC_SAR_PATT_LEN : R/W; bitpos: [17:15]; default: 7;
 *  0 ~ 15 means length 1 ~ 16
 */
#define SARADC_SAR_PATT_LEN    0x00000007U
#define SARADC_SAR_PATT_LEN_M  (SARADC_SAR_PATT_LEN_V << SARADC_SAR_PATT_LEN_S)
#define SARADC_SAR_PATT_LEN_V  0x00000007U
#define SARADC_SAR_PATT_LEN_S  15
/** SARADC_SAR_PATT_P_CLEAR : R/W; bitpos: [23]; default: 0;
 *  clear the pointer of pattern table for DIG ADC1 CTRL
 */
#define SARADC_SAR_PATT_P_CLEAR    (BIT(23))
#define SARADC_SAR_PATT_P_CLEAR_M  (SARADC_SAR_PATT_P_CLEAR_V << SARADC_SAR_PATT_P_CLEAR_S)
#define SARADC_SAR_PATT_P_CLEAR_V  0x00000001U
#define SARADC_SAR_PATT_P_CLEAR_S  23
/** SARADC_XPD_SAR_FORCE : R/W; bitpos: [28:27]; default: 0;
 *  force option to xpd sar blocks
 */
#define SARADC_XPD_SAR_FORCE    0x00000003U
#define SARADC_XPD_SAR_FORCE_M  (SARADC_XPD_SAR_FORCE_V << SARADC_XPD_SAR_FORCE_S)
#define SARADC_XPD_SAR_FORCE_V  0x00000003U
#define SARADC_XPD_SAR_FORCE_S  27
/** SARADC_SARADC2_PWDET_DRV : R/W; bitpos: [29]; default: 0;
 *  enable saradc2 power detect driven func.
 */
#define SARADC_SARADC2_PWDET_DRV    (BIT(29))
#define SARADC_SARADC2_PWDET_DRV_M  (SARADC_SARADC2_PWDET_DRV_V << SARADC_SARADC2_PWDET_DRV_S)
#define SARADC_SARADC2_PWDET_DRV_V  0x00000001U
#define SARADC_SARADC2_PWDET_DRV_S  29
/** SARADC_WAIT_ARB_CYCLE : R/W; bitpos: [31:30]; default: 1;
 *  wait arbit signal stable after sar_done
 */
#define SARADC_WAIT_ARB_CYCLE    0x00000003U
#define SARADC_WAIT_ARB_CYCLE_M  (SARADC_WAIT_ARB_CYCLE_V << SARADC_WAIT_ARB_CYCLE_S)
#define SARADC_WAIT_ARB_CYCLE_V  0x00000003U
#define SARADC_WAIT_ARB_CYCLE_S  30

/** SARADC_CTRL2_REG register
 *  digital saradc configure register
 */
#define SARADC_CTRL2_REG (DR_REG_SARADC_BASE + 0x4)
/** SARADC_MEAS_NUM_LIMIT : R/W; bitpos: [0]; default: 0;
 *  enable max meas num
 */
#define SARADC_MEAS_NUM_LIMIT    (BIT(0))
#define SARADC_MEAS_NUM_LIMIT_M  (SARADC_MEAS_NUM_LIMIT_V << SARADC_MEAS_NUM_LIMIT_S)
#define SARADC_MEAS_NUM_LIMIT_V  0x00000001U
#define SARADC_MEAS_NUM_LIMIT_S  0
/** SARADC_MAX_MEAS_NUM : R/W; bitpos: [8:1]; default: 255;
 *  max conversion number
 */
#define SARADC_MAX_MEAS_NUM    0x000000FFU
#define SARADC_MAX_MEAS_NUM_M  (SARADC_MAX_MEAS_NUM_V << SARADC_MAX_MEAS_NUM_S)
#define SARADC_MAX_MEAS_NUM_V  0x000000FFU
#define SARADC_MAX_MEAS_NUM_S  1
/** SARADC_SAR1_INV : R/W; bitpos: [9]; default: 0;
 *  1: data to DIG ADC1 CTRL is inverted, otherwise not
 */
#define SARADC_SAR1_INV    (BIT(9))
#define SARADC_SAR1_INV_M  (SARADC_SAR1_INV_V << SARADC_SAR1_INV_S)
#define SARADC_SAR1_INV_V  0x00000001U
#define SARADC_SAR1_INV_S  9
/** SARADC_SAR2_INV : R/W; bitpos: [10]; default: 0;
 *  1: data to DIG ADC2 CTRL is inverted, otherwise not
 */
#define SARADC_SAR2_INV    (BIT(10))
#define SARADC_SAR2_INV_M  (SARADC_SAR2_INV_V << SARADC_SAR2_INV_S)
#define SARADC_SAR2_INV_V  0x00000001U
#define SARADC_SAR2_INV_S  10
/** SARADC_TIMER_TARGET : R/W; bitpos: [23:12]; default: 10;
 *  to set saradc timer target
 */
#define SARADC_TIMER_TARGET    0x00000FFFU
#define SARADC_TIMER_TARGET_M  (SARADC_TIMER_TARGET_V << SARADC_TIMER_TARGET_S)
#define SARADC_TIMER_TARGET_V  0x00000FFFU
#define SARADC_TIMER_TARGET_S  12
/** SARADC_TIMER_EN : R/W; bitpos: [24]; default: 0;
 *  to enable saradc timer trigger
 */
#define SARADC_TIMER_EN    (BIT(24))
#define SARADC_TIMER_EN_M  (SARADC_TIMER_EN_V << SARADC_TIMER_EN_S)
#define SARADC_TIMER_EN_V  0x00000001U
#define SARADC_TIMER_EN_S  24

/** SARADC_FILTER_CTRL1_REG register
 *  digital saradc configure register
 */
#define SARADC_FILTER_CTRL1_REG (DR_REG_SARADC_BASE + 0x8)
/** SARADC_FILTER_FACTOR1 : R/W; bitpos: [28:26]; default: 0;
 *  Factor of saradc filter1
 */
#define SARADC_FILTER_FACTOR1    0x00000007U
#define SARADC_FILTER_FACTOR1_M  (SARADC_FILTER_FACTOR1_V << SARADC_FILTER_FACTOR1_S)
#define SARADC_FILTER_FACTOR1_V  0x00000007U
#define SARADC_FILTER_FACTOR1_S  26
/** SARADC_FILTER_FACTOR0 : R/W; bitpos: [31:29]; default: 0;
 *  Factor of saradc filter0
 */
#define SARADC_FILTER_FACTOR0    0x00000007U
#define SARADC_FILTER_FACTOR0_M  (SARADC_FILTER_FACTOR0_V << SARADC_FILTER_FACTOR0_S)
#define SARADC_FILTER_FACTOR0_V  0x00000007U
#define SARADC_FILTER_FACTOR0_S  29

/** SARADC_FSM_WAIT_REG register
 *  digital saradc configure register
 */
#define SARADC_FSM_WAIT_REG (DR_REG_SARADC_BASE + 0xc)
/** SARADC_XPD_WAIT : R/W; bitpos: [7:0]; default: 8;
 *  saradc_xpd_wait
 */
#define SARADC_XPD_WAIT    0x000000FFU
#define SARADC_XPD_WAIT_M  (SARADC_XPD_WAIT_V << SARADC_XPD_WAIT_S)
#define SARADC_XPD_WAIT_V  0x000000FFU
#define SARADC_XPD_WAIT_S  0
/** SARADC_RSTB_WAIT : R/W; bitpos: [15:8]; default: 8;
 *  saradc_rstb_wait
 */
#define SARADC_RSTB_WAIT    0x000000FFU
#define SARADC_RSTB_WAIT_M  (SARADC_RSTB_WAIT_V << SARADC_RSTB_WAIT_S)
#define SARADC_RSTB_WAIT_V  0x000000FFU
#define SARADC_RSTB_WAIT_S  8
/** SARADC_STANDBY_WAIT : R/W; bitpos: [23:16]; default: 255;
 *  saradc_standby_wait
 */
#define SARADC_STANDBY_WAIT    0x000000FFU
#define SARADC_STANDBY_WAIT_M  (SARADC_STANDBY_WAIT_V << SARADC_STANDBY_WAIT_S)
#define SARADC_STANDBY_WAIT_V  0x000000FFU
#define SARADC_STANDBY_WAIT_S  16

/** SARADC_SAR1_STATUS_REG register
 *  digital saradc configure register
 */
#define SARADC_SAR1_STATUS_REG (DR_REG_SARADC_BASE + 0x10)
/** SARADC_SAR1_STATUS : RO; bitpos: [31:0]; default: 536870912;
 *  saradc1 status about data and channel
 */
#define SARADC_SAR1_STATUS    0xFFFFFFFFU
#define SARADC_SAR1_STATUS_M  (SARADC_SAR1_STATUS_V << SARADC_SAR1_STATUS_S)
#define SARADC_SAR1_STATUS_V  0xFFFFFFFFU
#define SARADC_SAR1_STATUS_S  0

/** SARADC_SAR2_STATUS_REG register
 *  digital saradc configure register
 */
#define SARADC_SAR2_STATUS_REG (DR_REG_SARADC_BASE + 0x14)
/** SARADC_SAR2_STATUS : RO; bitpos: [31:0]; default: 536870912;
 *  saradc2 status about data and channel
 */
#define SARADC_SAR2_STATUS    0xFFFFFFFFU
#define SARADC_SAR2_STATUS_M  (SARADC_SAR2_STATUS_V << SARADC_SAR2_STATUS_S)
#define SARADC_SAR2_STATUS_V  0xFFFFFFFFU
#define SARADC_SAR2_STATUS_S  0

/** SARADC_SAR_PATT_TAB1_REG register
 *  digital saradc configure register
 */
#define SARADC_SAR_PATT_TAB1_REG (DR_REG_SARADC_BASE + 0x18)
/** SARADC_SAR_PATT_TAB1 : R/W; bitpos: [23:0]; default: 16777215;
 *  item 0 ~ 3 for pattern table 1 (each item one byte)
 */
#define SARADC_SAR_PATT_TAB1    0x00FFFFFFU
#define SARADC_SAR_PATT_TAB1_M  (SARADC_SAR_PATT_TAB1_V << SARADC_SAR_PATT_TAB1_S)
#define SARADC_SAR_PATT_TAB1_V  0x00FFFFFFU
#define SARADC_SAR_PATT_TAB1_S  0

/** SARADC_SAR_PATT_TAB2_REG register
 *  digital saradc configure register
 */
#define SARADC_SAR_PATT_TAB2_REG (DR_REG_SARADC_BASE + 0x1c)
/** SARADC_SAR_PATT_TAB2 : R/W; bitpos: [23:0]; default: 16777215;
 *  Item 4 ~ 7 for pattern table 1 (each item one byte)
 */
#define SARADC_SAR_PATT_TAB2    0x00FFFFFFU
#define SARADC_SAR_PATT_TAB2_M  (SARADC_SAR_PATT_TAB2_V << SARADC_SAR_PATT_TAB2_S)
#define SARADC_SAR_PATT_TAB2_V  0x00FFFFFFU
#define SARADC_SAR_PATT_TAB2_S  0

/** SARADC_ONETIME_SAMPLE_REG register
 *  digital saradc configure register
 */
#define SARADC_ONETIME_SAMPLE_REG (DR_REG_SARADC_BASE + 0x20)
/** SARADC_ONETIME_ATTEN : R/W; bitpos: [24:23]; default: 0;
 *  configure onetime atten
 */
#define SARADC_ONETIME_ATTEN    0x00000003U
#define SARADC_ONETIME_ATTEN_M  (SARADC_ONETIME_ATTEN_V << SARADC_ONETIME_ATTEN_S)
#define SARADC_ONETIME_ATTEN_V  0x00000003U
#define SARADC_ONETIME_ATTEN_S  23
/** SARADC_ONETIME_CHANNEL : R/W; bitpos: [28:25]; default: 13;
 *  configure onetime channel
 */
#define SARADC_ONETIME_CHANNEL    0x0000000FU
#define SARADC_ONETIME_CHANNEL_M  (SARADC_ONETIME_CHANNEL_V << SARADC_ONETIME_CHANNEL_S)
#define SARADC_ONETIME_CHANNEL_V  0x0000000FU
#define SARADC_ONETIME_CHANNEL_S  25
/** SARADC_ONETIME_START : R/W; bitpos: [29]; default: 0;
 *  trigger adc onetime sample
 */
#define SARADC_ONETIME_START    (BIT(29))
#define SARADC_ONETIME_START_M  (SARADC_ONETIME_START_V << SARADC_ONETIME_START_S)
#define SARADC_ONETIME_START_V  0x00000001U
#define SARADC_ONETIME_START_S  29
/** SARADC_SARADC2_ONETIME_SAMPLE : R/W; bitpos: [30]; default: 0;
 *  enable adc2 onetime sample
 */
#define SARADC_SARADC2_ONETIME_SAMPLE    (BIT(30))
#define SARADC_SARADC2_ONETIME_SAMPLE_M  (SARADC_SARADC2_ONETIME_SAMPLE_V << SARADC_SARADC2_ONETIME_SAMPLE_S)
#define SARADC_SARADC2_ONETIME_SAMPLE_V  0x00000001U
#define SARADC_SARADC2_ONETIME_SAMPLE_S  30
/** SARADC_SARADC1_ONETIME_SAMPLE : R/W; bitpos: [31]; default: 0;
 *  enable adc1 onetime sample
 */
#define SARADC_SARADC1_ONETIME_SAMPLE    (BIT(31))
#define SARADC_SARADC1_ONETIME_SAMPLE_M  (SARADC_SARADC1_ONETIME_SAMPLE_V << SARADC_SARADC1_ONETIME_SAMPLE_S)
#define SARADC_SARADC1_ONETIME_SAMPLE_V  0x00000001U
#define SARADC_SARADC1_ONETIME_SAMPLE_S  31

/** SARADC_ARB_CTRL_REG register
 *  digital saradc configure register
 */
#define SARADC_ARB_CTRL_REG (DR_REG_SARADC_BASE + 0x24)
/** SARADC_ADC_ARB_APB_FORCE : R/W; bitpos: [2]; default: 0;
 *  adc2 arbiter force to enableapb controller
 */
#define SARADC_ADC_ARB_APB_FORCE    (BIT(2))
#define SARADC_ADC_ARB_APB_FORCE_M  (SARADC_ADC_ARB_APB_FORCE_V << SARADC_ADC_ARB_APB_FORCE_S)
#define SARADC_ADC_ARB_APB_FORCE_V  0x00000001U
#define SARADC_ADC_ARB_APB_FORCE_S  2
/** SARADC_ADC_ARB_RTC_FORCE : R/W; bitpos: [3]; default: 0;
 *  adc2 arbiter force to enable rtc controller
 */
#define SARADC_ADC_ARB_RTC_FORCE    (BIT(3))
#define SARADC_ADC_ARB_RTC_FORCE_M  (SARADC_ADC_ARB_RTC_FORCE_V << SARADC_ADC_ARB_RTC_FORCE_S)
#define SARADC_ADC_ARB_RTC_FORCE_V  0x00000001U
#define SARADC_ADC_ARB_RTC_FORCE_S  3
/** SARADC_ADC_ARB_WIFI_FORCE : R/W; bitpos: [4]; default: 0;
 *  adc2 arbiter force to enable wifi controller
 */
#define SARADC_ADC_ARB_WIFI_FORCE    (BIT(4))
#define SARADC_ADC_ARB_WIFI_FORCE_M  (SARADC_ADC_ARB_WIFI_FORCE_V << SARADC_ADC_ARB_WIFI_FORCE_S)
#define SARADC_ADC_ARB_WIFI_FORCE_V  0x00000001U
#define SARADC_ADC_ARB_WIFI_FORCE_S  4
/** SARADC_ADC_ARB_GRANT_FORCE : R/W; bitpos: [5]; default: 0;
 *  adc2 arbiter force grant
 */
#define SARADC_ADC_ARB_GRANT_FORCE    (BIT(5))
#define SARADC_ADC_ARB_GRANT_FORCE_M  (SARADC_ADC_ARB_GRANT_FORCE_V << SARADC_ADC_ARB_GRANT_FORCE_S)
#define SARADC_ADC_ARB_GRANT_FORCE_V  0x00000001U
#define SARADC_ADC_ARB_GRANT_FORCE_S  5
/** SARADC_ADC_ARB_APB_PRIORITY : R/W; bitpos: [7:6]; default: 0;
 *  Set adc2 arbiterapb priority
 */
#define SARADC_ADC_ARB_APB_PRIORITY    0x00000003U
#define SARADC_ADC_ARB_APB_PRIORITY_M  (SARADC_ADC_ARB_APB_PRIORITY_V << SARADC_ADC_ARB_APB_PRIORITY_S)
#define SARADC_ADC_ARB_APB_PRIORITY_V  0x00000003U
#define SARADC_ADC_ARB_APB_PRIORITY_S  6
/** SARADC_ADC_ARB_RTC_PRIORITY : R/W; bitpos: [9:8]; default: 1;
 *  Set adc2 arbiter rtc priority
 */
#define SARADC_ADC_ARB_RTC_PRIORITY    0x00000003U
#define SARADC_ADC_ARB_RTC_PRIORITY_M  (SARADC_ADC_ARB_RTC_PRIORITY_V << SARADC_ADC_ARB_RTC_PRIORITY_S)
#define SARADC_ADC_ARB_RTC_PRIORITY_V  0x00000003U
#define SARADC_ADC_ARB_RTC_PRIORITY_S  8
/** SARADC_ADC_ARB_WIFI_PRIORITY : R/W; bitpos: [11:10]; default: 2;
 *  Set adc2 arbiter wifi priority
 */
#define SARADC_ADC_ARB_WIFI_PRIORITY    0x00000003U
#define SARADC_ADC_ARB_WIFI_PRIORITY_M  (SARADC_ADC_ARB_WIFI_PRIORITY_V << SARADC_ADC_ARB_WIFI_PRIORITY_S)
#define SARADC_ADC_ARB_WIFI_PRIORITY_V  0x00000003U
#define SARADC_ADC_ARB_WIFI_PRIORITY_S  10
/** SARADC_ADC_ARB_FIX_PRIORITY : R/W; bitpos: [12]; default: 0;
 *  adc2 arbiter uses fixed priority
 */
#define SARADC_ADC_ARB_FIX_PRIORITY    (BIT(12))
#define SARADC_ADC_ARB_FIX_PRIORITY_M  (SARADC_ADC_ARB_FIX_PRIORITY_V << SARADC_ADC_ARB_FIX_PRIORITY_S)
#define SARADC_ADC_ARB_FIX_PRIORITY_V  0x00000001U
#define SARADC_ADC_ARB_FIX_PRIORITY_S  12

/** SARADC_FILTER_CTRL0_REG register
 *  digital saradc configure register
 */
#define SARADC_FILTER_CTRL0_REG (DR_REG_SARADC_BASE + 0x28)
/** SARADC_FILTER_CHANNEL1 : R/W; bitpos: [21:18]; default: 13;
 *  configure filter1 to adc channel
 */
#define SARADC_FILTER_CHANNEL1    0x0000000FU
#define SARADC_FILTER_CHANNEL1_M  (SARADC_FILTER_CHANNEL1_V << SARADC_FILTER_CHANNEL1_S)
#define SARADC_FILTER_CHANNEL1_V  0x0000000FU
#define SARADC_FILTER_CHANNEL1_S  18
/** SARADC_FILTER_CHANNEL0 : R/W; bitpos: [25:22]; default: 13;
 *  configure filter0 to adc channel
 */
#define SARADC_FILTER_CHANNEL0    0x0000000FU
#define SARADC_FILTER_CHANNEL0_M  (SARADC_FILTER_CHANNEL0_V << SARADC_FILTER_CHANNEL0_S)
#define SARADC_FILTER_CHANNEL0_V  0x0000000FU
#define SARADC_FILTER_CHANNEL0_S  22
/** SARADC_FILTER_RESET : R/W; bitpos: [31]; default: 0;
 *  enable apb_adc1_filter
 */
#define SARADC_FILTER_RESET    (BIT(31))
#define SARADC_FILTER_RESET_M  (SARADC_FILTER_RESET_V << SARADC_FILTER_RESET_S)
#define SARADC_FILTER_RESET_V  0x00000001U
#define SARADC_FILTER_RESET_S  31

/** SARADC_SAR1DATA_STATUS_REG register
 *  digital saradc configure register
 */
#define SARADC_SAR1DATA_STATUS_REG (DR_REG_SARADC_BASE + 0x2c)
/** SARADC_APB_SARADC1_DATA : RO; bitpos: [16:0]; default: 0;
 *  saradc1 data
 */
#define SARADC_APB_SARADC1_DATA    0x0001FFFFU
#define SARADC_APB_SARADC1_DATA_M  (SARADC_APB_SARADC1_DATA_V << SARADC_APB_SARADC1_DATA_S)
#define SARADC_APB_SARADC1_DATA_V  0x0001FFFFU
#define SARADC_APB_SARADC1_DATA_S  0

/** SARADC_SAR2DATA_STATUS_REG register
 *  digital saradc configure register
 */
#define SARADC_SAR2DATA_STATUS_REG (DR_REG_SARADC_BASE + 0x30)
/** SARADC_APB_SARADC2_DATA : RO; bitpos: [16:0]; default: 0;
 *  saradc2 data
 */
#define SARADC_APB_SARADC2_DATA    0x0001FFFFU
#define SARADC_APB_SARADC2_DATA_M  (SARADC_APB_SARADC2_DATA_V << SARADC_APB_SARADC2_DATA_S)
#define SARADC_APB_SARADC2_DATA_V  0x0001FFFFU
#define SARADC_APB_SARADC2_DATA_S  0

/** SARADC_THRES0_CTRL_REG register
 *  digital saradc configure register
 */
#define SARADC_THRES0_CTRL_REG (DR_REG_SARADC_BASE + 0x34)
/** SARADC_THRES0_CHANNEL : R/W; bitpos: [3:0]; default: 13;
 *  configure thres0 to adc channel
 */
#define SARADC_THRES0_CHANNEL    0x0000000FU
#define SARADC_THRES0_CHANNEL_M  (SARADC_THRES0_CHANNEL_V << SARADC_THRES0_CHANNEL_S)
#define SARADC_THRES0_CHANNEL_V  0x0000000FU
#define SARADC_THRES0_CHANNEL_S  0
/** SARADC_THRES0_HIGH : R/W; bitpos: [17:5]; default: 8191;
 *  saradc thres0 monitor thres
 */
#define SARADC_THRES0_HIGH    0x00001FFFU
#define SARADC_THRES0_HIGH_M  (SARADC_THRES0_HIGH_V << SARADC_THRES0_HIGH_S)
#define SARADC_THRES0_HIGH_V  0x00001FFFU
#define SARADC_THRES0_HIGH_S  5
/** SARADC_THRES0_LOW : R/W; bitpos: [30:18]; default: 0;
 *  saradc thres0 monitor thres
 */
#define SARADC_THRES0_LOW    0x00001FFFU
#define SARADC_THRES0_LOW_M  (SARADC_THRES0_LOW_V << SARADC_THRES0_LOW_S)
#define SARADC_THRES0_LOW_V  0x00001FFFU
#define SARADC_THRES0_LOW_S  18

/** SARADC_THRES1_CTRL_REG register
 *  digital saradc configure register
 */
#define SARADC_THRES1_CTRL_REG (DR_REG_SARADC_BASE + 0x38)
/** SARADC_THRES1_CHANNEL : R/W; bitpos: [3:0]; default: 13;
 *  configure thres1 to adc channel
 */
#define SARADC_THRES1_CHANNEL    0x0000000FU
#define SARADC_THRES1_CHANNEL_M  (SARADC_THRES1_CHANNEL_V << SARADC_THRES1_CHANNEL_S)
#define SARADC_THRES1_CHANNEL_V  0x0000000FU
#define SARADC_THRES1_CHANNEL_S  0
/** SARADC_THRES1_HIGH : R/W; bitpos: [17:5]; default: 8191;
 *  saradc thres1 monitor thres
 */
#define SARADC_THRES1_HIGH    0x00001FFFU
#define SARADC_THRES1_HIGH_M  (SARADC_THRES1_HIGH_V << SARADC_THRES1_HIGH_S)
#define SARADC_THRES1_HIGH_V  0x00001FFFU
#define SARADC_THRES1_HIGH_S  5
/** SARADC_THRES1_LOW : R/W; bitpos: [30:18]; default: 0;
 *  saradc thres1 monitor thres
 */
#define SARADC_THRES1_LOW    0x00001FFFU
#define SARADC_THRES1_LOW_M  (SARADC_THRES1_LOW_V << SARADC_THRES1_LOW_S)
#define SARADC_THRES1_LOW_V  0x00001FFFU
#define SARADC_THRES1_LOW_S  18

/** SARADC_THRES_CTRL_REG register
 *  digital saradc configure register
 */
#define SARADC_THRES_CTRL_REG (DR_REG_SARADC_BASE + 0x3c)
/** SARADC_THRES_ALL_EN : R/W; bitpos: [27]; default: 0;
 *  enable thres to all channel
 */
#define SARADC_THRES_ALL_EN    (BIT(27))
#define SARADC_THRES_ALL_EN_M  (SARADC_THRES_ALL_EN_V << SARADC_THRES_ALL_EN_S)
#define SARADC_THRES_ALL_EN_V  0x00000001U
#define SARADC_THRES_ALL_EN_S  27
/** SARADC_THRES1_EN : R/W; bitpos: [30]; default: 0;
 *  enable thres1
 */
#define SARADC_THRES1_EN    (BIT(30))
#define SARADC_THRES1_EN_M  (SARADC_THRES1_EN_V << SARADC_THRES1_EN_S)
#define SARADC_THRES1_EN_V  0x00000001U
#define SARADC_THRES1_EN_S  30
/** SARADC_THRES0_EN : R/W; bitpos: [31]; default: 0;
 *  enable thres0
 */
#define SARADC_THRES0_EN    (BIT(31))
#define SARADC_THRES0_EN_M  (SARADC_THRES0_EN_V << SARADC_THRES0_EN_S)
#define SARADC_THRES0_EN_V  0x00000001U
#define SARADC_THRES0_EN_S  31

/** SARADC_INT_ENA_REG register
 *  digital saradc int register
 */
#define SARADC_INT_ENA_REG (DR_REG_SARADC_BASE + 0x40)
/** SARADC_TSENS_INT_ENA : R/W; bitpos: [25]; default: 0;
 *  tsens low  interrupt enable
 */
#define SARADC_TSENS_INT_ENA    (BIT(25))
#define SARADC_TSENS_INT_ENA_M  (SARADC_TSENS_INT_ENA_V << SARADC_TSENS_INT_ENA_S)
#define SARADC_TSENS_INT_ENA_V  0x00000001U
#define SARADC_TSENS_INT_ENA_S  25
/** SARADC_THRES1_LOW_INT_ENA : R/W; bitpos: [26]; default: 0;
 *  saradc thres1 low  interrupt enable
 */
#define SARADC_THRES1_LOW_INT_ENA    (BIT(26))
#define SARADC_THRES1_LOW_INT_ENA_M  (SARADC_THRES1_LOW_INT_ENA_V << SARADC_THRES1_LOW_INT_ENA_S)
#define SARADC_THRES1_LOW_INT_ENA_V  0x00000001U
#define SARADC_THRES1_LOW_INT_ENA_S  26
/** SARADC_THRES0_LOW_INT_ENA : R/W; bitpos: [27]; default: 0;
 *  saradc thres0 low interrupt enable
 */
#define SARADC_THRES0_LOW_INT_ENA    (BIT(27))
#define SARADC_THRES0_LOW_INT_ENA_M  (SARADC_THRES0_LOW_INT_ENA_V << SARADC_THRES0_LOW_INT_ENA_S)
#define SARADC_THRES0_LOW_INT_ENA_V  0x00000001U
#define SARADC_THRES0_LOW_INT_ENA_S  27
/** SARADC_THRES1_HIGH_INT_ENA : R/W; bitpos: [28]; default: 0;
 *  saradc thres1 high interrupt enable
 */
#define SARADC_THRES1_HIGH_INT_ENA    (BIT(28))
#define SARADC_THRES1_HIGH_INT_ENA_M  (SARADC_THRES1_HIGH_INT_ENA_V << SARADC_THRES1_HIGH_INT_ENA_S)
#define SARADC_THRES1_HIGH_INT_ENA_V  0x00000001U
#define SARADC_THRES1_HIGH_INT_ENA_S  28
/** SARADC_THRES0_HIGH_INT_ENA : R/W; bitpos: [29]; default: 0;
 *  saradc thres0 high interrupt enable
 */
#define SARADC_THRES0_HIGH_INT_ENA    (BIT(29))
#define SARADC_THRES0_HIGH_INT_ENA_M  (SARADC_THRES0_HIGH_INT_ENA_V << SARADC_THRES0_HIGH_INT_ENA_S)
#define SARADC_THRES0_HIGH_INT_ENA_V  0x00000001U
#define SARADC_THRES0_HIGH_INT_ENA_S  29
/** SARADC_APB_SARADC2_DONE_INT_ENA : R/W; bitpos: [30]; default: 0;
 *  saradc2 done interrupt enable
 */
#define SARADC_APB_SARADC2_DONE_INT_ENA    (BIT(30))
#define SARADC_APB_SARADC2_DONE_INT_ENA_M  (SARADC_APB_SARADC2_DONE_INT_ENA_V << SARADC_APB_SARADC2_DONE_INT_ENA_S)
#define SARADC_APB_SARADC2_DONE_INT_ENA_V  0x00000001U
#define SARADC_APB_SARADC2_DONE_INT_ENA_S  30
/** SARADC_APB_SARADC1_DONE_INT_ENA : R/W; bitpos: [31]; default: 0;
 *  saradc1 done interrupt enable
 */
#define SARADC_APB_SARADC1_DONE_INT_ENA    (BIT(31))
#define SARADC_APB_SARADC1_DONE_INT_ENA_M  (SARADC_APB_SARADC1_DONE_INT_ENA_V << SARADC_APB_SARADC1_DONE_INT_ENA_S)
#define SARADC_APB_SARADC1_DONE_INT_ENA_V  0x00000001U
#define SARADC_APB_SARADC1_DONE_INT_ENA_S  31

/** SARADC_INT_RAW_REG register
 *  digital saradc int register
 */
#define SARADC_INT_RAW_REG (DR_REG_SARADC_BASE + 0x44)
/** SARADC_TSENS_INT_RAW : R/WTC/SS; bitpos: [25]; default: 0;
 *  saradc tsens  interrupt raw
 */
#define SARADC_TSENS_INT_RAW    (BIT(25))
#define SARADC_TSENS_INT_RAW_M  (SARADC_TSENS_INT_RAW_V << SARADC_TSENS_INT_RAW_S)
#define SARADC_TSENS_INT_RAW_V  0x00000001U
#define SARADC_TSENS_INT_RAW_S  25
/** SARADC_THRES1_LOW_INT_RAW : R/WTC/SS; bitpos: [26]; default: 0;
 *  saradc thres1 low  interrupt raw
 */
#define SARADC_THRES1_LOW_INT_RAW    (BIT(26))
#define SARADC_THRES1_LOW_INT_RAW_M  (SARADC_THRES1_LOW_INT_RAW_V << SARADC_THRES1_LOW_INT_RAW_S)
#define SARADC_THRES1_LOW_INT_RAW_V  0x00000001U
#define SARADC_THRES1_LOW_INT_RAW_S  26
/** SARADC_THRES0_LOW_INT_RAW : R/WTC/SS; bitpos: [27]; default: 0;
 *  saradc thres0 low interrupt raw
 */
#define SARADC_THRES0_LOW_INT_RAW    (BIT(27))
#define SARADC_THRES0_LOW_INT_RAW_M  (SARADC_THRES0_LOW_INT_RAW_V << SARADC_THRES0_LOW_INT_RAW_S)
#define SARADC_THRES0_LOW_INT_RAW_V  0x00000001U
#define SARADC_THRES0_LOW_INT_RAW_S  27
/** SARADC_THRES1_HIGH_INT_RAW : R/WTC/SS; bitpos: [28]; default: 0;
 *  saradc thres1 high interrupt raw
 */
#define SARADC_THRES1_HIGH_INT_RAW    (BIT(28))
#define SARADC_THRES1_HIGH_INT_RAW_M  (SARADC_THRES1_HIGH_INT_RAW_V << SARADC_THRES1_HIGH_INT_RAW_S)
#define SARADC_THRES1_HIGH_INT_RAW_V  0x00000001U
#define SARADC_THRES1_HIGH_INT_RAW_S  28
/** SARADC_THRES0_HIGH_INT_RAW : R/WTC/SS; bitpos: [29]; default: 0;
 *  saradc thres0 high interrupt raw
 */
#define SARADC_THRES0_HIGH_INT_RAW    (BIT(29))
#define SARADC_THRES0_HIGH_INT_RAW_M  (SARADC_THRES0_HIGH_INT_RAW_V << SARADC_THRES0_HIGH_INT_RAW_S)
#define SARADC_THRES0_HIGH_INT_RAW_V  0x00000001U
#define SARADC_THRES0_HIGH_INT_RAW_S  29
/** SARADC_APB_SARADC2_DONE_INT_RAW : R/WTC/SS; bitpos: [30]; default: 0;
 *  saradc2 done interrupt raw
 */
#define SARADC_APB_SARADC2_DONE_INT_RAW    (BIT(30))
#define SARADC_APB_SARADC2_DONE_INT_RAW_M  (SARADC_APB_SARADC2_DONE_INT_RAW_V << SARADC_APB_SARADC2_DONE_INT_RAW_S)
#define SARADC_APB_SARADC2_DONE_INT_RAW_V  0x00000001U
#define SARADC_APB_SARADC2_DONE_INT_RAW_S  30
/** SARADC_APB_SARADC1_DONE_INT_RAW : R/WTC/SS; bitpos: [31]; default: 0;
 *  saradc1 done interrupt raw
 */
#define SARADC_APB_SARADC1_DONE_INT_RAW    (BIT(31))
#define SARADC_APB_SARADC1_DONE_INT_RAW_M  (SARADC_APB_SARADC1_DONE_INT_RAW_V << SARADC_APB_SARADC1_DONE_INT_RAW_S)
#define SARADC_APB_SARADC1_DONE_INT_RAW_V  0x00000001U
#define SARADC_APB_SARADC1_DONE_INT_RAW_S  31

/** SARADC_INT_ST_REG register
 *  digital saradc int register
 */
#define SARADC_INT_ST_REG (DR_REG_SARADC_BASE + 0x48)
/** SARADC_TSENS_INT_ST : RO; bitpos: [25]; default: 0;
 *  saradc tsens  interrupt state
 */
#define SARADC_TSENS_INT_ST    (BIT(25))
#define SARADC_TSENS_INT_ST_M  (SARADC_TSENS_INT_ST_V << SARADC_TSENS_INT_ST_S)
#define SARADC_TSENS_INT_ST_V  0x00000001U
#define SARADC_TSENS_INT_ST_S  25
/** SARADC_THRES1_LOW_INT_ST : RO; bitpos: [26]; default: 0;
 *  saradc thres1 low  interrupt state
 */
#define SARADC_THRES1_LOW_INT_ST    (BIT(26))
#define SARADC_THRES1_LOW_INT_ST_M  (SARADC_THRES1_LOW_INT_ST_V << SARADC_THRES1_LOW_INT_ST_S)
#define SARADC_THRES1_LOW_INT_ST_V  0x00000001U
#define SARADC_THRES1_LOW_INT_ST_S  26
/** SARADC_THRES0_LOW_INT_ST : RO; bitpos: [27]; default: 0;
 *  saradc thres0 low interrupt state
 */
#define SARADC_THRES0_LOW_INT_ST    (BIT(27))
#define SARADC_THRES0_LOW_INT_ST_M  (SARADC_THRES0_LOW_INT_ST_V << SARADC_THRES0_LOW_INT_ST_S)
#define SARADC_THRES0_LOW_INT_ST_V  0x00000001U
#define SARADC_THRES0_LOW_INT_ST_S  27
/** SARADC_THRES1_HIGH_INT_ST : RO; bitpos: [28]; default: 0;
 *  saradc thres1 high interrupt state
 */
#define SARADC_THRES1_HIGH_INT_ST    (BIT(28))
#define SARADC_THRES1_HIGH_INT_ST_M  (SARADC_THRES1_HIGH_INT_ST_V << SARADC_THRES1_HIGH_INT_ST_S)
#define SARADC_THRES1_HIGH_INT_ST_V  0x00000001U
#define SARADC_THRES1_HIGH_INT_ST_S  28
/** SARADC_THRES0_HIGH_INT_ST : RO; bitpos: [29]; default: 0;
 *  saradc thres0 high interrupt state
 */
#define SARADC_THRES0_HIGH_INT_ST    (BIT(29))
#define SARADC_THRES0_HIGH_INT_ST_M  (SARADC_THRES0_HIGH_INT_ST_V << SARADC_THRES0_HIGH_INT_ST_S)
#define SARADC_THRES0_HIGH_INT_ST_V  0x00000001U
#define SARADC_THRES0_HIGH_INT_ST_S  29
/** SARADC_APB_SARADC2_DONE_INT_ST : RO; bitpos: [30]; default: 0;
 *  saradc2 done interrupt state
 */
#define SARADC_APB_SARADC2_DONE_INT_ST    (BIT(30))
#define SARADC_APB_SARADC2_DONE_INT_ST_M  (SARADC_APB_SARADC2_DONE_INT_ST_V << SARADC_APB_SARADC2_DONE_INT_ST_S)
#define SARADC_APB_SARADC2_DONE_INT_ST_V  0x00000001U
#define SARADC_APB_SARADC2_DONE_INT_ST_S  30
/** SARADC_APB_SARADC1_DONE_INT_ST : RO; bitpos: [31]; default: 0;
 *  saradc1 done interrupt state
 */
#define SARADC_APB_SARADC1_DONE_INT_ST    (BIT(31))
#define SARADC_APB_SARADC1_DONE_INT_ST_M  (SARADC_APB_SARADC1_DONE_INT_ST_V << SARADC_APB_SARADC1_DONE_INT_ST_S)
#define SARADC_APB_SARADC1_DONE_INT_ST_V  0x00000001U
#define SARADC_APB_SARADC1_DONE_INT_ST_S  31

/** SARADC_INT_CLR_REG register
 *  digital saradc int register
 */
#define SARADC_INT_CLR_REG (DR_REG_SARADC_BASE + 0x4c)
/** SARADC_TSENS_INT_CLR : WT; bitpos: [25]; default: 0;
 *  saradc tsens  interrupt clear
 */
#define SARADC_TSENS_INT_CLR    (BIT(25))
#define SARADC_TSENS_INT_CLR_M  (SARADC_TSENS_INT_CLR_V << SARADC_TSENS_INT_CLR_S)
#define SARADC_TSENS_INT_CLR_V  0x00000001U
#define SARADC_TSENS_INT_CLR_S  25
/** SARADC_THRES1_LOW_INT_CLR : WT; bitpos: [26]; default: 0;
 *  saradc thres1 low  interrupt clear
 */
#define SARADC_THRES1_LOW_INT_CLR    (BIT(26))
#define SARADC_THRES1_LOW_INT_CLR_M  (SARADC_THRES1_LOW_INT_CLR_V << SARADC_THRES1_LOW_INT_CLR_S)
#define SARADC_THRES1_LOW_INT_CLR_V  0x00000001U
#define SARADC_THRES1_LOW_INT_CLR_S  26
/** SARADC_THRES0_LOW_INT_CLR : WT; bitpos: [27]; default: 0;
 *  saradc thres0 low interrupt clear
 */
#define SARADC_THRES0_LOW_INT_CLR    (BIT(27))
#define SARADC_THRES0_LOW_INT_CLR_M  (SARADC_THRES0_LOW_INT_CLR_V << SARADC_THRES0_LOW_INT_CLR_S)
#define SARADC_THRES0_LOW_INT_CLR_V  0x00000001U
#define SARADC_THRES0_LOW_INT_CLR_S  27
/** SARADC_THRES1_HIGH_INT_CLR : WT; bitpos: [28]; default: 0;
 *  saradc thres1 high interrupt clear
 */
#define SARADC_THRES1_HIGH_INT_CLR    (BIT(28))
#define SARADC_THRES1_HIGH_INT_CLR_M  (SARADC_THRES1_HIGH_INT_CLR_V << SARADC_THRES1_HIGH_INT_CLR_S)
#define SARADC_THRES1_HIGH_INT_CLR_V  0x00000001U
#define SARADC_THRES1_HIGH_INT_CLR_S  28
/** SARADC_THRES0_HIGH_INT_CLR : WT; bitpos: [29]; default: 0;
 *  saradc thres0 high interrupt clear
 */
#define SARADC_THRES0_HIGH_INT_CLR    (BIT(29))
#define SARADC_THRES0_HIGH_INT_CLR_M  (SARADC_THRES0_HIGH_INT_CLR_V << SARADC_THRES0_HIGH_INT_CLR_S)
#define SARADC_THRES0_HIGH_INT_CLR_V  0x00000001U
#define SARADC_THRES0_HIGH_INT_CLR_S  29
/** SARADC_APB_SARADC2_DONE_INT_CLR : WT; bitpos: [30]; default: 0;
 *  saradc2 done interrupt clear
 */
#define SARADC_APB_SARADC2_DONE_INT_CLR    (BIT(30))
#define SARADC_APB_SARADC2_DONE_INT_CLR_M  (SARADC_APB_SARADC2_DONE_INT_CLR_V << SARADC_APB_SARADC2_DONE_INT_CLR_S)
#define SARADC_APB_SARADC2_DONE_INT_CLR_V  0x00000001U
#define SARADC_APB_SARADC2_DONE_INT_CLR_S  30
/** SARADC_APB_SARADC1_DONE_INT_CLR : WT; bitpos: [31]; default: 0;
 *  saradc1 done interrupt clear
 */
#define SARADC_APB_SARADC1_DONE_INT_CLR    (BIT(31))
#define SARADC_APB_SARADC1_DONE_INT_CLR_M  (SARADC_APB_SARADC1_DONE_INT_CLR_V << SARADC_APB_SARADC1_DONE_INT_CLR_S)
#define SARADC_APB_SARADC1_DONE_INT_CLR_V  0x00000001U
#define SARADC_APB_SARADC1_DONE_INT_CLR_S  31

/** SARADC_DMA_CONF_REG register
 *  digital saradc configure register
 */
#define SARADC_DMA_CONF_REG (DR_REG_SARADC_BASE + 0x50)
/** SARADC_APB_ADC_EOF_NUM : R/W; bitpos: [15:0]; default: 255;
 *  the dma_in_suc_eof gen when sample cnt = spi_eof_num
 */
#define SARADC_APB_ADC_EOF_NUM    0x0000FFFFU
#define SARADC_APB_ADC_EOF_NUM_M  (SARADC_APB_ADC_EOF_NUM_V << SARADC_APB_ADC_EOF_NUM_S)
#define SARADC_APB_ADC_EOF_NUM_V  0x0000FFFFU
#define SARADC_APB_ADC_EOF_NUM_S  0
/** SARADC_APB_ADC_RESET_FSM : R/W; bitpos: [30]; default: 0;
 *  reset_apb_adc_state
 */
#define SARADC_APB_ADC_RESET_FSM    (BIT(30))
#define SARADC_APB_ADC_RESET_FSM_M  (SARADC_APB_ADC_RESET_FSM_V << SARADC_APB_ADC_RESET_FSM_S)
#define SARADC_APB_ADC_RESET_FSM_V  0x00000001U
#define SARADC_APB_ADC_RESET_FSM_S  30
/** SARADC_APB_ADC_TRANS : R/W; bitpos: [31]; default: 0;
 *  enable apb_adc use spi_dma
 */
#define SARADC_APB_ADC_TRANS    (BIT(31))
#define SARADC_APB_ADC_TRANS_M  (SARADC_APB_ADC_TRANS_V << SARADC_APB_ADC_TRANS_S)
#define SARADC_APB_ADC_TRANS_V  0x00000001U
#define SARADC_APB_ADC_TRANS_S  31

/** SARADC_CLKM_CONF_REG register
 *  digital saradc configure register
 */
#define SARADC_CLKM_CONF_REG (DR_REG_SARADC_BASE + 0x54)
/** SARADC_CLKM_DIV_NUM : R/W; bitpos: [7:0]; default: 4;
 *  Integral I2S clock divider value
 */
#define SARADC_CLKM_DIV_NUM    0x000000FFU
#define SARADC_CLKM_DIV_NUM_M  (SARADC_CLKM_DIV_NUM_V << SARADC_CLKM_DIV_NUM_S)
#define SARADC_CLKM_DIV_NUM_V  0x000000FFU
#define SARADC_CLKM_DIV_NUM_S  0
/** SARADC_CLKM_DIV_B : R/W; bitpos: [13:8]; default: 0;
 *  Fractional clock divider numerator value
 */
#define SARADC_CLKM_DIV_B    0x0000003FU
#define SARADC_CLKM_DIV_B_M  (SARADC_CLKM_DIV_B_V << SARADC_CLKM_DIV_B_S)
#define SARADC_CLKM_DIV_B_V  0x0000003FU
#define SARADC_CLKM_DIV_B_S  8
/** SARADC_CLKM_DIV_A : R/W; bitpos: [19:14]; default: 0;
 *  Fractional clock divider denominator value
 */
#define SARADC_CLKM_DIV_A    0x0000003FU
#define SARADC_CLKM_DIV_A_M  (SARADC_CLKM_DIV_A_V << SARADC_CLKM_DIV_A_S)
#define SARADC_CLKM_DIV_A_V  0x0000003FU
#define SARADC_CLKM_DIV_A_S  14
/** SARADC_CLK_EN : R/W; bitpos: [20]; default: 0;
 *  reg clk en
 */
#define SARADC_CLK_EN    (BIT(20))
#define SARADC_CLK_EN_M  (SARADC_CLK_EN_V << SARADC_CLK_EN_S)
#define SARADC_CLK_EN_V  0x00000001U
#define SARADC_CLK_EN_S  20
/** SARADC_CLK_SEL : R/W; bitpos: [22:21]; default: 0;
 *  Set this bit to enable clk_apll
 */
#define SARADC_CLK_SEL    0x00000003U
#define SARADC_CLK_SEL_M  (SARADC_CLK_SEL_V << SARADC_CLK_SEL_S)
#define SARADC_CLK_SEL_V  0x00000003U
#define SARADC_CLK_SEL_S  21

/** SARADC_APB_TSENS_CTRL_REG register
 *  digital tsens configure register
 */
#define SARADC_APB_TSENS_CTRL_REG (DR_REG_SARADC_BASE + 0x58)
/** SARADC_TSENS_OUT : RO; bitpos: [7:0]; default: 128;
 *  temperature sensor data out
 */
#define SARADC_TSENS_OUT    0x000000FFU
#define SARADC_TSENS_OUT_M  (SARADC_TSENS_OUT_V << SARADC_TSENS_OUT_S)
#define SARADC_TSENS_OUT_V  0x000000FFU
#define SARADC_TSENS_OUT_S  0
/** SARADC_TSENS_IN_INV : R/W; bitpos: [13]; default: 0;
 *  invert temperature sensor data
 */
#define SARADC_TSENS_IN_INV    (BIT(13))
#define SARADC_TSENS_IN_INV_M  (SARADC_TSENS_IN_INV_V << SARADC_TSENS_IN_INV_S)
#define SARADC_TSENS_IN_INV_V  0x00000001U
#define SARADC_TSENS_IN_INV_S  13
/** SARADC_TSENS_CLK_DIV : R/W; bitpos: [21:14]; default: 6;
 *  temperature sensor clock divider
 */
#define SARADC_TSENS_CLK_DIV    0x000000FFU
#define SARADC_TSENS_CLK_DIV_M  (SARADC_TSENS_CLK_DIV_V << SARADC_TSENS_CLK_DIV_S)
#define SARADC_TSENS_CLK_DIV_V  0x000000FFU
#define SARADC_TSENS_CLK_DIV_S  14
/** SARADC_TSENS_PU : R/W; bitpos: [22]; default: 0;
 *  temperature sensor power up
 */
#define SARADC_TSENS_PU    (BIT(22))
#define SARADC_TSENS_PU_M  (SARADC_TSENS_PU_V << SARADC_TSENS_PU_S)
#define SARADC_TSENS_PU_V  0x00000001U
#define SARADC_TSENS_PU_S  22

/** SARADC_TSENS_CTRL2_REG register
 *  digital tsens configure register
 */
#define SARADC_TSENS_CTRL2_REG (DR_REG_SARADC_BASE + 0x5c)
/** SARADC_TSENS_XPD_WAIT : R/W; bitpos: [11:0]; default: 2;
 *  the time that power up tsens need wait
 */
#define SARADC_TSENS_XPD_WAIT    0x00000FFFU
#define SARADC_TSENS_XPD_WAIT_M  (SARADC_TSENS_XPD_WAIT_V << SARADC_TSENS_XPD_WAIT_S)
#define SARADC_TSENS_XPD_WAIT_V  0x00000FFFU
#define SARADC_TSENS_XPD_WAIT_S  0
/** SARADC_TSENS_XPD_FORCE : R/W; bitpos: [13:12]; default: 0;
 *  force power up tsens
 */
#define SARADC_TSENS_XPD_FORCE    0x00000003U
#define SARADC_TSENS_XPD_FORCE_M  (SARADC_TSENS_XPD_FORCE_V << SARADC_TSENS_XPD_FORCE_S)
#define SARADC_TSENS_XPD_FORCE_V  0x00000003U
#define SARADC_TSENS_XPD_FORCE_S  12
/** SARADC_TSENS_CLK_INV : R/W; bitpos: [14]; default: 1;
 *  inv tsens clk
 */
#define SARADC_TSENS_CLK_INV    (BIT(14))
#define SARADC_TSENS_CLK_INV_M  (SARADC_TSENS_CLK_INV_V << SARADC_TSENS_CLK_INV_S)
#define SARADC_TSENS_CLK_INV_V  0x00000001U
#define SARADC_TSENS_CLK_INV_S  14
/** SARADC_TSENS_CLK_SEL : R/W; bitpos: [15]; default: 0;
 *  tsens clk select
 */
#define SARADC_TSENS_CLK_SEL    (BIT(15))
#define SARADC_TSENS_CLK_SEL_M  (SARADC_TSENS_CLK_SEL_V << SARADC_TSENS_CLK_SEL_S)
#define SARADC_TSENS_CLK_SEL_V  0x00000001U
#define SARADC_TSENS_CLK_SEL_S  15

/** SARADC_CALI_REG register
 *  digital saradc configure register
 */
#define SARADC_CALI_REG (DR_REG_SARADC_BASE + 0x60)
/** SARADC_CALI_CFG : R/W; bitpos: [16:0]; default: 32768;
 *  saradc cali factor
 */
#define SARADC_CALI_CFG    0x0001FFFFU
#define SARADC_CALI_CFG_M  (SARADC_CALI_CFG_V << SARADC_CALI_CFG_S)
#define SARADC_CALI_CFG_V  0x0001FFFFU
#define SARADC_CALI_CFG_S  0

/** APB_TSENS_WAKE_REG register
 *  digital tsens configure register
 */
#define APB_TSENS_WAKE_REG (DR_REG_SARADC_BASE + 0x64)
/** SARADC_WAKEUP_TH_LOW : R/W; bitpos: [7:0]; default: 0;
 *  reg_wakeup_th_low
 */
#define SARADC_WAKEUP_TH_LOW    0x000000FFU
#define SARADC_WAKEUP_TH_LOW_M  (SARADC_WAKEUP_TH_LOW_V << SARADC_WAKEUP_TH_LOW_S)
#define SARADC_WAKEUP_TH_LOW_V  0x000000FFU
#define SARADC_WAKEUP_TH_LOW_S  0
/** SARADC_WAKEUP_TH_HIGH : R/W; bitpos: [15:8]; default: 255;
 *  reg_wakeup_th_high
 */
#define SARADC_WAKEUP_TH_HIGH    0x000000FFU
#define SARADC_WAKEUP_TH_HIGH_M  (SARADC_WAKEUP_TH_HIGH_V << SARADC_WAKEUP_TH_HIGH_S)
#define SARADC_WAKEUP_TH_HIGH_V  0x000000FFU
#define SARADC_WAKEUP_TH_HIGH_S  8
/** SARADC_WAKEUP_OVER_UPPER_TH : RO; bitpos: [16]; default: 0;
 *  reg_wakeup_over_upper_th
 */
#define SARADC_WAKEUP_OVER_UPPER_TH    (BIT(16))
#define SARADC_WAKEUP_OVER_UPPER_TH_M  (SARADC_WAKEUP_OVER_UPPER_TH_V << SARADC_WAKEUP_OVER_UPPER_TH_S)
#define SARADC_WAKEUP_OVER_UPPER_TH_V  0x00000001U
#define SARADC_WAKEUP_OVER_UPPER_TH_S  16
/** SARADC_WAKEUP_MODE : R/W; bitpos: [17]; default: 0;
 *  reg_wakeup_mode
 */
#define SARADC_WAKEUP_MODE    (BIT(17))
#define SARADC_WAKEUP_MODE_M  (SARADC_WAKEUP_MODE_V << SARADC_WAKEUP_MODE_S)
#define SARADC_WAKEUP_MODE_V  0x00000001U
#define SARADC_WAKEUP_MODE_S  17
/** SARADC_WAKEUP_EN : R/W; bitpos: [18]; default: 0;
 *  reg_wakeup_en
 */
#define SARADC_WAKEUP_EN    (BIT(18))
#define SARADC_WAKEUP_EN_M  (SARADC_WAKEUP_EN_V << SARADC_WAKEUP_EN_S)
#define SARADC_WAKEUP_EN_V  0x00000001U
#define SARADC_WAKEUP_EN_S  18

/** APB_TSENS_SAMPLE_REG register
 *  digital tsens configure register
 */
#define APB_TSENS_SAMPLE_REG (DR_REG_SARADC_BASE + 0x68)
/** SARADC_TSENS_SAMPLE_RATE : R/W; bitpos: [15:0]; default: 20;
 *  HW sample rate
 */
#define SARADC_TSENS_SAMPLE_RATE    0x0000FFFFU
#define SARADC_TSENS_SAMPLE_RATE_M  (SARADC_TSENS_SAMPLE_RATE_V << SARADC_TSENS_SAMPLE_RATE_S)
#define SARADC_TSENS_SAMPLE_RATE_V  0x0000FFFFU
#define SARADC_TSENS_SAMPLE_RATE_S  0
/** SARADC_TSENS_SAMPLE_EN : R/W; bitpos: [16]; default: 0;
 *  HW sample en
 */
#define SARADC_TSENS_SAMPLE_EN    (BIT(16))
#define SARADC_TSENS_SAMPLE_EN_M  (SARADC_TSENS_SAMPLE_EN_V << SARADC_TSENS_SAMPLE_EN_S)
#define SARADC_TSENS_SAMPLE_EN_V  0x00000001U
#define SARADC_TSENS_SAMPLE_EN_S  16

/** SARADC_CTRL_DATE_REG register
 *  version
 */
#define SARADC_CTRL_DATE_REG (DR_REG_SARADC_BASE + 0x3fc)
/** SARADC_DATE : R/W; bitpos: [31:0]; default: 35676736;
 *  version
 */
#define SARADC_DATE    0xFFFFFFFFU
#define SARADC_DATE_M  (SARADC_DATE_V << SARADC_DATE_S)
#define SARADC_DATE_V  0xFFFFFFFFU
#define SARADC_DATE_S  0

#ifdef __cplusplus
}
#endif
