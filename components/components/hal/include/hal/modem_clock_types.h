/*
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    MODEM_CLOCK_DOMAIN_MODEM_APB = 0,
    MODEM_CLOCK_DOMAIN_MODEM_PERIPH,
    MODEM_CLOCK_DOMAIN_WIFI,
    MODEM_CLOCK_DOMAIN_BT,
    MODEM_CLOCK_DOMAIN_MODEM_FE,
    MODEM_CLOCK_DOMAIN_IEEE802154,
    MODEM_CLOCK_DOMAIN_LP_APB,
    MODEM_CLOCK_DOMAIN_I2C_MASTER,
    MODEM_CLOCK_DOMAIN_COEX,
    MODEM_CLOCK_DOMAIN_WIFIPWR,
    MODEM_CLOCK_DOMAIN_MAX
} modem_clock_domain_t;

typedef enum {
    MODEM_CLOCK_LPCLK_SRC_INVALID = -1,
    MODEM_CLOCK_LPCLK_SRC_RC_SLOW = 0,
    MODEM_CLOCK_LPCLK_SRC_RC_FAST,
    MODEM_CLOCK_LPCLK_SRC_MAIN_XTAL,
    MODEM_CLOCK_LPCLK_SRC_RC32K,
    MODEM_CLOCK_LPCLK_SRC_XTAL32K,
    MODEM_CLOCK_LPCLK_SRC_EXT32K,
    MODEM_CLOCK_LPCLK_SRC_MAX
} modem_clock_lpclk_src_t;

#ifdef __cplusplus
}
#endif
