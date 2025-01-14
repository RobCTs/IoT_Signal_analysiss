/*
 * SPDX-FileCopyrightText: 2022-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdio.h>
#include <string.h>
#include "unity.h"
#include "esp_random.h"

/* Note: these are just sanity tests, the implementation of esp_random() relies on getentropy() on Linux.
*/

const size_t NUM_RANDOM = 128; /* in most cases this is massive overkill */

TEST_CASE("call esp_random()", "[random]")
{
    uint32_t zeroes = UINT32_MAX;
    uint32_t ones = 0;
    for (int i = 0; i < NUM_RANDOM - 1; i++) {
        uint32_t r = esp_random();
        ones |= r;
        zeroes &= ~r;
    }

    /* assuming a 'white' random distribution, we can expect
       usually at least one time each bit will be zero and at
       least one time each will be one. Statistically this
       can still fail, just *very* unlikely to. */
    TEST_ASSERT_EQUAL_HEX32(0, zeroes);
    TEST_ASSERT_EQUAL_HEX32(UINT32_MAX, ones);
}

TEST_CASE("call esp_fill_random()", "[random]")
{
    const size_t NUM_BUF = 200;
    const size_t BUF_SZ = 16;
    uint8_t buf[NUM_BUF][BUF_SZ];
    uint8_t zero_buf[BUF_SZ];
    uint8_t one_buf[BUF_SZ];

    bzero(buf, sizeof(buf));
    bzero(one_buf, sizeof(zero_buf));
    memset(zero_buf, 0xFF, sizeof(one_buf));

    for (int i = 0; i < NUM_BUF; i++) {
        esp_fill_random(buf[i], BUF_SZ);
    }
    /* No two 128-bit buffers should be the same
       (again, statistically this could happen but it's very unlikely) */
    for (int i = 0; i < NUM_BUF; i++) {
        for (int j = 0; j < NUM_BUF; j++) {
            if (i != j) {
                TEST_ASSERT_NOT_EQUAL(0, memcmp(buf[i], buf[j], BUF_SZ));
            }
        }
    }

    /* Do the same all bits are zero and one at least once test across the buffers */
    for (int i = 0; i < NUM_BUF; i++) {
        for (int x = 0; x < BUF_SZ; x++) {
            zero_buf[x] &= ~buf[i][x];
            one_buf[x] |= buf[i][x];
        }
    }
    for (int x = 0; x < BUF_SZ; x++) {
        TEST_ASSERT_EQUAL_HEX8(0, zero_buf[x]);
        TEST_ASSERT_EQUAL_HEX8(0xFF, one_buf[x]);
    }
}

TEST_CASE("esp_fill_random() fills exactly one byte", "[random]")
{
    const size_t BUF_SZ = 2;
    uint8_t buf[BUF_SZ];
    uint8_t one_buf[BUF_SZ];
    bzero(one_buf, BUF_SZ);
    for (size_t i = 0; i < NUM_RANDOM - 1; i++) {
        esp_fill_random(buf, BUF_SZ - 1);
        for (size_t j = 0; j < BUF_SZ - 1; j++) {
            one_buf[j] |= buf[j];
        }
    }

    TEST_ASSERT_EQUAL(0, one_buf[BUF_SZ - 1]);
    TEST_ASSERT_GREATER_THAN(0, one_buf[BUF_SZ - 2]);
}

// The underlying system call accepts max 256 bytes, test that esp_fill_random() can read more
TEST_CASE("esp_fill_random() fills exactly 256 bytes", "[random]")
{
    const size_t BUF_SZ = 257;
    uint8_t buf[BUF_SZ];
    uint8_t one_buf[BUF_SZ];
    bzero(one_buf, BUF_SZ);
    for (size_t i = 0; i < NUM_RANDOM - 1; i++) {
        esp_fill_random(buf, BUF_SZ - 1);
        for (size_t j = 0; j < BUF_SZ - 1; j++) {
            one_buf[j] |= buf[j];
        }
    }

    TEST_ASSERT_EQUAL(0, one_buf[BUF_SZ - 1]);
    TEST_ASSERT_GREATER_THAN(0, one_buf[BUF_SZ - 2]);
    TEST_ASSERT_GREATER_THAN(0, one_buf[0]);
}

TEST_CASE("esp_fill_random() fills exactly 257 bytes", "[random]")
{
    const size_t BUF_SZ = 258;
    uint8_t buf[BUF_SZ];
    uint8_t one_buf[BUF_SZ];
    bzero(one_buf, BUF_SZ);
    for (size_t i = 0; i < NUM_RANDOM - 1; i++) {
        esp_fill_random(buf, BUF_SZ - 1);
        for (size_t j = 0; j < BUF_SZ - 1; j++) {
            one_buf[j] |= buf[j];
        }
    }

    TEST_ASSERT_EQUAL(0, one_buf[BUF_SZ - 1]);
    TEST_ASSERT_GREATER_THAN(0, one_buf[BUF_SZ - 2]);
    TEST_ASSERT_GREATER_THAN(0, one_buf[0]);
}

void app_main(void)
{
    printf("Running hw support linux API host test app");
    unity_run_menu();
}
