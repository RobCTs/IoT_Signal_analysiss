/*
 * SPDX-FileCopyrightText: 2018-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <protocomm_security.h>

#ifdef __cplusplus
extern "C" {
#endif

#if CONFIG_ESP_PROTOCOMM_SUPPORT_SECURITY_VERSION_1
/**
 * @brief   Protocomm security version 1 implementation
 *
 * This is a full fledged security implementation using
 * Curve25519 key exchange and AES-256-CTR encryption
 */
extern const protocomm_security_t protocomm_security1;
#endif

#ifdef __cplusplus
}
#endif
