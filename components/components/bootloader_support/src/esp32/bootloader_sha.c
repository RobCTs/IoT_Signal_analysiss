/*
 * SPDX-FileCopyrightText: 2017-2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include "bootloader_sha.h"
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <sys/param.h>

#include "esp32/rom/sha.h"
#include "soc/dport_reg.h"
#include "soc/hwcrypto_periph.h"

static uint32_t words_hashed;

// Words per SHA256 block
static const size_t BLOCK_WORDS = (64 / sizeof(uint32_t));
// Words in final SHA256 digest
static const size_t DIGEST_WORDS = (32 / sizeof(uint32_t));

bootloader_sha256_handle_t bootloader_sha256_start(void)
{
    // Enable SHA hardware
    ets_sha_enable();
    words_hashed = 0;
    return (bootloader_sha256_handle_t)&words_hashed; // Meaningless non-NULL value
}

void bootloader_sha256_data(bootloader_sha256_handle_t handle, const void *data, size_t data_len)
{
    assert(handle != NULL);
    assert(data_len % 4 == 0);

    const uint32_t *w = (const uint32_t *)data;
    size_t word_len = data_len / 4;
    uint32_t *sha_text_reg = (uint32_t *)(SHA_TEXT_BASE);

    while (word_len > 0) {
        size_t block_count = words_hashed % BLOCK_WORDS;
        size_t copy_words = (BLOCK_WORDS - block_count);

        copy_words = MIN(word_len, copy_words);

        // Wait for SHA engine idle
        while (_DPORT_REG_READ(SHA_256_BUSY_REG) != 0) { }

        // Copy to memory block
        for (size_t i = 0; i < copy_words; i++) {
            sha_text_reg[block_count + i] = __builtin_bswap32(w[i]);
        }
        asm volatile ("memw");

        // Update counters
        words_hashed += copy_words;
        block_count += copy_words;
        word_len -= copy_words;
        w += copy_words;

        // If we loaded a full block, run the SHA engine
        if (block_count == BLOCK_WORDS) {
            if (words_hashed == BLOCK_WORDS) {
                _DPORT_REG_WRITE(SHA_256_START_REG, 1);
            } else {
                _DPORT_REG_WRITE(SHA_256_CONTINUE_REG, 1);
            }
            block_count = 0;
        }
    }
}

void bootloader_sha256_finish(bootloader_sha256_handle_t handle, uint8_t *digest)
{
    assert(handle != NULL);

    if (digest == NULL) {
        return; // We'd free resources here, but there are none to free
    }

    uint32_t data_words = words_hashed;

    // Pad to a 55 byte long block loaded in the engine
    // (leaving 1 byte 0x80 plus variable padding plus 8 bytes of length,
    // to fill a 64 byte block.)
    int block_bytes = (words_hashed % BLOCK_WORDS) * 4;
    int pad_bytes = 55 - block_bytes;
    if (pad_bytes < 0) {
        pad_bytes += 64;
    }
    static const uint8_t padding[64] = { 0x80, 0, };

    pad_bytes += 5; // 1 byte for 0x80 plus first 4 bytes of the 64-bit length
    assert(pad_bytes % 4 == 0); // should be, as (block_bytes % 4 == 0)

    bootloader_sha256_data(handle, padding, pad_bytes);

    assert(words_hashed % BLOCK_WORDS == 60 / 4); // 32-bits left in block

    // Calculate 32-bit length for final 32 bits of data
    uint32_t bit_count = __builtin_bswap32( data_words * 32 );
    bootloader_sha256_data(handle, &bit_count, sizeof(bit_count));

    assert(words_hashed % BLOCK_WORDS == 0);

    while (_DPORT_REG_READ(SHA_256_BUSY_REG) == 1) { }
    _DPORT_REG_WRITE(SHA_256_LOAD_REG, 1);
    while (_DPORT_REG_READ(SHA_256_BUSY_REG) == 1) { }

    uint32_t *digest_words = (uint32_t *)digest;
    uint32_t *sha_text_reg = (uint32_t *)(SHA_TEXT_BASE);
    for (size_t i = 0; i < DIGEST_WORDS; i++) {
        digest_words[i] = __builtin_bswap32(sha_text_reg[i]);
    }
    asm volatile ("memw");
}
