/*
 * SPDX-FileCopyrightText: 2016-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "sdkconfig.h"
#include "phy_init_data.h"

const char phy_init_magic_pre[] = PHY_INIT_MAGIC;

/**
 * @brief Structure containing default recommended PHY initialization parameters.
 */
const esp_phy_init_data_t phy_init_data= { {
        0x00,
        0x00,
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x50),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x50),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x50),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x4c),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x4c),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x48),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x4c),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x48),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x48),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x44),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x4a),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x46),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x46),
        LIMIT(CONFIG_ESP_PHY_MAX_TX_POWER * 4, 0, 0x42),
        0x00,
        0x00,
        0x00,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0xff,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0x74
} };

const char phy_init_magic_post[] = PHY_INIT_MAGIC;
