/*
 * SPDX-FileCopyrightText: 2015-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "soc/rmt_periph.h"
#include "soc/gpio_sig_map.h"
#include "soc/soc.h"

const rmt_signal_conn_t rmt_periph_signals = {
    .groups = {
        [0] = {
            .irq = ETS_RMT_INTR_SOURCE,
            .channels = {
                [0] = {
                    .tx_sig = RMT_SIG_OUT0_IDX,
                    .rx_sig = RMT_SIG_IN0_IDX
                },
                [1] = {
                    .tx_sig = RMT_SIG_OUT1_IDX,
                    .rx_sig = RMT_SIG_IN1_IDX
                },
                [2] = {
                    .tx_sig = RMT_SIG_OUT2_IDX,
                    .rx_sig = RMT_SIG_IN2_IDX
                },
                [3] = {
                    .tx_sig = RMT_SIG_OUT3_IDX,
                    .rx_sig = RMT_SIG_IN3_IDX
                },
                [4] = {
                    .tx_sig = RMT_SIG_OUT4_IDX,
                    .rx_sig = RMT_SIG_IN4_IDX
                },
                [5] = {
                    .tx_sig = RMT_SIG_OUT5_IDX,
                    .rx_sig = RMT_SIG_IN5_IDX
                },
                [6] = {
                    .tx_sig = RMT_SIG_OUT6_IDX,
                    .rx_sig = RMT_SIG_IN6_IDX
                },
                [7] = {
                    .tx_sig = RMT_SIG_OUT7_IDX,
                    .rx_sig = RMT_SIG_IN7_IDX
                }
            }
        }
    }
};
