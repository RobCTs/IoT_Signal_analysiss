/*
 * SPDX-FileCopyrightText: 2020-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MODEM_CLKRST_CLK_CONF_REG          (DR_REG_MODEM_CLKRST_BASE + 0x0)
/* MODEM_CLKRST_CLK_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_CLKRST_CLK_EN    (BIT(0))
#define MODEM_CLKRST_CLK_EN_M  (BIT(0))
#define MODEM_CLKRST_CLK_EN_V  0x1
#define MODEM_CLKRST_CLK_EN_S  0

#define MODEM_CLKRST_MODEM_LP_TIMER_CONF_REG          (DR_REG_MODEM_CLKRST_BASE + 0x4)
/* MODEM_CLKRST_LP_TIMER_CLK_DIV_NUM : R/W ;bitpos:[11:4] ;default: 8'h0 ; */
/*description: .*/
#define MODEM_CLKRST_LP_TIMER_CLK_DIV_NUM    0x000000FF
#define MODEM_CLKRST_LP_TIMER_CLK_DIV_NUM_M  ((MODEM_CLKRST_LP_TIMER_CLK_DIV_NUM_V)<<(MODEM_CLKRST_LP_TIMER_CLK_DIV_NUM_S))
#define MODEM_CLKRST_LP_TIMER_CLK_DIV_NUM_V  0xFF
#define MODEM_CLKRST_LP_TIMER_CLK_DIV_NUM_S  4
/* MODEM_CLKRST_LP_TIMER_SEL_XTAL32K : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_CLKRST_LP_TIMER_SEL_XTAL32K    (BIT(3))
#define MODEM_CLKRST_LP_TIMER_SEL_XTAL32K_M  (BIT(3))
#define MODEM_CLKRST_LP_TIMER_SEL_XTAL32K_V  0x1
#define MODEM_CLKRST_LP_TIMER_SEL_XTAL32K_S  3
/* MODEM_CLKRST_LP_TIMER_SEL_XTAL : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_CLKRST_LP_TIMER_SEL_XTAL    (BIT(2))
#define MODEM_CLKRST_LP_TIMER_SEL_XTAL_M  (BIT(2))
#define MODEM_CLKRST_LP_TIMER_SEL_XTAL_V  0x1
#define MODEM_CLKRST_LP_TIMER_SEL_XTAL_S  2
/* MODEM_CLKRST_LP_TIMER_SEL_8M : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_CLKRST_LP_TIMER_SEL_8M    (BIT(1))
#define MODEM_CLKRST_LP_TIMER_SEL_8M_M  (BIT(1))
#define MODEM_CLKRST_LP_TIMER_SEL_8M_V  0x1
#define MODEM_CLKRST_LP_TIMER_SEL_8M_S  1
/* MODEM_CLKRST_LP_TIMER_SEL_RTC_SLOW : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_CLKRST_LP_TIMER_SEL_RTC_SLOW    (BIT(0))
#define MODEM_CLKRST_LP_TIMER_SEL_RTC_SLOW_M  (BIT(0))
#define MODEM_CLKRST_LP_TIMER_SEL_RTC_SLOW_V  0x1
#define MODEM_CLKRST_LP_TIMER_SEL_RTC_SLOW_S  0

#define MODEM_CLKRST_COEX_LP_CLK_CONF_REG          (DR_REG_MODEM_CLKRST_BASE + 0x8)
/* MODEM_CLKRST_COEX_LPCLK_DIV_NUM : R/W ;bitpos:[11:4] ;default: 8'h0 ; */
/*description: .*/
#define MODEM_CLKRST_COEX_LPCLK_DIV_NUM    0x000000FF
#define MODEM_CLKRST_COEX_LPCLK_DIV_NUM_M  ((MODEM_CLKRST_COEX_LPCLK_DIV_NUM_V)<<(MODEM_CLKRST_COEX_LPCLK_DIV_NUM_S))
#define MODEM_CLKRST_COEX_LPCLK_DIV_NUM_V  0xFF
#define MODEM_CLKRST_COEX_LPCLK_DIV_NUM_S  4
/* MODEM_CLKRST_COEX_LPCLK_SEL_XTAL32K : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_CLKRST_COEX_LPCLK_SEL_XTAL32K    (BIT(3))
#define MODEM_CLKRST_COEX_LPCLK_SEL_XTAL32K_M  (BIT(3))
#define MODEM_CLKRST_COEX_LPCLK_SEL_XTAL32K_V  0x1
#define MODEM_CLKRST_COEX_LPCLK_SEL_XTAL32K_S  3
/* MODEM_CLKRST_COEX_LPCLK_SEL_XTAL : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_CLKRST_COEX_LPCLK_SEL_XTAL    (BIT(2))
#define MODEM_CLKRST_COEX_LPCLK_SEL_XTAL_M  (BIT(2))
#define MODEM_CLKRST_COEX_LPCLK_SEL_XTAL_V  0x1
#define MODEM_CLKRST_COEX_LPCLK_SEL_XTAL_S  2
/* MODEM_CLKRST_COEX_LPCLK_SEL_8M : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_CLKRST_COEX_LPCLK_SEL_8M    (BIT(1))
#define MODEM_CLKRST_COEX_LPCLK_SEL_8M_M  (BIT(1))
#define MODEM_CLKRST_COEX_LPCLK_SEL_8M_V  0x1
#define MODEM_CLKRST_COEX_LPCLK_SEL_8M_S  1
/* MODEM_CLKRST_COEX_LPCLK_SEL_RTC_SLOW : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_CLKRST_COEX_LPCLK_SEL_RTC_SLOW    (BIT(0))
#define MODEM_CLKRST_COEX_LPCLK_SEL_RTC_SLOW_M  (BIT(0))
#define MODEM_CLKRST_COEX_LPCLK_SEL_RTC_SLOW_V  0x1
#define MODEM_CLKRST_COEX_LPCLK_SEL_RTC_SLOW_S  0

#define MODEM_CLKRST_BLE_TIMER_CLK_CONF_REG          (DR_REG_MODEM_CLKRST_BASE + 0xC)
/* MODEM_CLKRST_BLETIMER_CLK_IS_ACTIVE : R/W ;bitpos:[1] ;default: 1'b1 ; */
/*description: .*/
#define MODEM_CLKRST_BLETIMER_CLK_IS_ACTIVE    (BIT(1))
#define MODEM_CLKRST_BLETIMER_CLK_IS_ACTIVE_M  (BIT(1))
#define MODEM_CLKRST_BLETIMER_CLK_IS_ACTIVE_V  0x1
#define MODEM_CLKRST_BLETIMER_CLK_IS_ACTIVE_S  1
/* MODEM_CLKRST_BLETIMER_USE_XTAL : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: .*/
#define MODEM_CLKRST_BLETIMER_USE_XTAL    (BIT(0))
#define MODEM_CLKRST_BLETIMER_USE_XTAL_M  (BIT(0))
#define MODEM_CLKRST_BLETIMER_USE_XTAL_V  0x1
#define MODEM_CLKRST_BLETIMER_USE_XTAL_S  0

#define MODEM_CLKRST_ETM_CLK_CONF_REG          (DR_REG_MODEM_CLKRST_BASE + 0x10)
/* MODEM_CLKRST_ETM_CLK_ACTIVE : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_CLKRST_ETM_CLK_ACTIVE    (BIT(1))
#define MODEM_CLKRST_ETM_CLK_ACTIVE_M  (BIT(1))
#define MODEM_CLKRST_ETM_CLK_ACTIVE_V  0x1
#define MODEM_CLKRST_ETM_CLK_ACTIVE_S  1
/* MODEM_CLKRST_ETM_CLK_SEL : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_CLKRST_ETM_CLK_SEL    (BIT(0))
#define MODEM_CLKRST_ETM_CLK_SEL_M  (BIT(0))
#define MODEM_CLKRST_ETM_CLK_SEL_V  0x1
#define MODEM_CLKRST_ETM_CLK_SEL_S  0

#define MODEM_CLKRST_DATE_REG          (DR_REG_MODEM_CLKRST_BASE + 0xC)
/* MODEM_CLKRST_DATE : R/W ;bitpos:[27:0] ;default: 28'h2107270 ; */
/*description: .*/
#define MODEM_CLKRST_DATE    0x0FFFFFFF
#define MODEM_CLKRST_DATE_M  ((MODEM_CLKRST_DATE_V)<<(MODEM_CLKRST_DATE_S))
#define MODEM_CLKRST_DATE_V  0xFFFFFFF
#define MODEM_CLKRST_DATE_S  0


#ifdef __cplusplus
}
#endif
