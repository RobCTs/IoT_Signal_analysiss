/**
 * SPDX-FileCopyrightText: 2022-2023 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/** Group: PARL_IO RX  Mode Configuration */
/** Type of rx_mode_cfg register
 *  Parallel RX Sampling mode configuration register.
 */
typedef union {
    struct {
        uint32_t reserved_0:21;
        /** rx_ext_en_sel : R/W; bitpos: [24:21]; default: 7;
         *  Configures rx external enable signal selection from IO PAD.
         */
        uint32_t rx_ext_en_sel:4;
        /** rx_sw_en : R/W; bitpos: [25]; default: 0;
         *  Set this bit to enable data sampling by software.
         */
        uint32_t rx_sw_en:1;
        /** rx_ext_en_inv : R/W; bitpos: [26]; default: 0;
         *  Set this bit to invert the external enable signal.
         */
        uint32_t rx_ext_en_inv:1;
        /** rx_pulse_submode_sel : R/W; bitpos: [29:27]; default: 0;
         *  Configures the rxd pulse sampling submode.
         *  4'd0: positive pulse start(data bit included) &&  positive pulse end(data bit
         *  included)
         *  4'd1: positive pulse start(data bit included) && positive pulse end (data bit
         *  excluded)
         *  4'd2: positive pulse start(data bit excluded) && positive pulse end (data bit
         *  included)
         *  4'd3: positive pulse start(data bit excluded) && positive pulse end (data bit
         *  excluded)
         *  4'd4: positive pulse start(data bit included) && length end
         *  4'd5: positive pulse start(data bit excluded) && length end
         */
        uint32_t rx_pulse_submode_sel:3;
        /** rx_smp_mode_sel : R/W; bitpos: [31:30]; default: 0;
         *  Configures the rxd sampling mode.
         *  2'b00: external level enable mode
         *  2'b01: external pulse enable mode
         *  2'b10: internal software enable mode
         */
        uint32_t rx_smp_mode_sel:2;
    };
    uint32_t val;
} parl_io_rx_mode_cfg_reg_t;


/** Group: PARL_IO RX Data Configuration */
/** Type of rx_data_cfg register
 *  Parallel RX data configuration register.
 */
typedef union {
    struct {
        uint32_t reserved_0:9;
        /** rx_bitlen : R/W; bitpos: [27:9]; default: 0;
         *  Configures expected byte number of received data.
         */
        uint32_t rx_bitlen:19;
        /** rx_data_order_inv : R/W; bitpos: [28]; default: 0;
         *  Set this bit to invert bit order of one byte sent from RX_FIFO to DMA.
         */
        uint32_t rx_data_order_inv:1;
        /** rx_bus_wid_sel : R/W; bitpos: [31:29]; default: 3;
         *  Configures the rxd bus width.
         *  3'd0: bus width is 1.
         *  3'd1: bus width is 2.
         *  3'd2: bus width is 4.
         *  3'd3: bus width is 8.
         */
        uint32_t rx_bus_wid_sel:3;
    };
    uint32_t val;
} parl_io_rx_data_cfg_reg_t;


/** Group: PARL_IO RX General Configuration */
/** Type of rx_genrl_cfg register
 *  Parallel RX general configuration register.
 */
typedef union {
    struct {
        uint32_t reserved_0:12;
        /** rx_gating_en : R/W; bitpos: [12]; default: 0;
         *  Set this bit to enable the clock gating of output rx clock.
         */
        uint32_t rx_gating_en:1;
        /** rx_timeout_thres : R/W; bitpos: [28:13]; default: 4095;
         *  Configures threshold of timeout counter.
         */
        uint32_t rx_timeout_thres:16;
        /** rx_timeout_en : R/W; bitpos: [29]; default: 1;
         *  Set this bit to enable timeout function to generate error eof.
         */
        uint32_t rx_timeout_en:1;
        /** rx_eof_gen_sel : R/W; bitpos: [30]; default: 0;
         *  Configures the DMA eof generated mechanism. 1'b0: eof generated by data byte
         *  length. 1'b1: eof generated by external enable signal.
         */
        uint32_t rx_eof_gen_sel:1;
        uint32_t reserved_31:1;
    };
    uint32_t val;
} parl_io_rx_genrl_cfg_reg_t;


/** Group: PARL_IO RX Start Configuration */
/** Type of rx_start_cfg register
 *  Parallel RX Start configuration register.
 */
typedef union {
    struct {
        uint32_t reserved_0:31;
        /** rx_start : R/W; bitpos: [31]; default: 0;
         *  Set this bit to start rx data sampling.
         */
        uint32_t rx_start:1;
    };
    uint32_t val;
} parl_io_rx_start_cfg_reg_t;


/** Group: PARL_IO TX Data Configuration */
/** Type of tx_data_cfg register
 *  Parallel TX data configuration register.
 */
typedef union {
    struct {
        uint32_t reserved_0:9;
        /** tx_bitlen : R/W; bitpos: [27:9]; default: 0;
         *  Configures expected byte number of sent data.
         */
        uint32_t tx_bitlen:19;
        /** tx_data_order_inv : R/W; bitpos: [28]; default: 0;
         *  Set this bit to invert bit order of one byte sent from TX_FIFO to IO data.
         */
        uint32_t tx_data_order_inv:1;
        /** tx_bus_wid_sel : R/W; bitpos: [31:29]; default: 3;
         *  Configures the txd bus width.
         *  3'd0: bus width is 1.
         *  3'd1: bus width is 2.
         *  3'd2: bus width is 4.
         *  3'd3: bus width is 8.
         */
        uint32_t tx_bus_wid_sel:3;
    };
    uint32_t val;
} parl_io_tx_data_cfg_reg_t;


/** Group: PARL_IO TX Start Configuration */
/** Type of tx_start_cfg register
 *  Parallel TX Start configuration register.
 */
typedef union {
    struct {
        uint32_t reserved_0:31;
        /** tx_start : R/W; bitpos: [31]; default: 0;
         *  Set this bit to start tx data transmit.
         */
        uint32_t tx_start:1;
    };
    uint32_t val;
} parl_io_tx_start_cfg_reg_t;


/** Group: PARL_IO TX General Configuration */
/** Type of tx_genrl_cfg register
 *  Parallel TX general configuration register.
 */
typedef union {
    struct {
        uint32_t reserved_0:14;
        /** tx_idle_value : R/W; bitpos: [29:14]; default: 0;
         *  Configures bus value of transmitter in IDLE state.
         */
        uint32_t tx_idle_value:16;
        /** tx_gating_en : R/W; bitpos: [30]; default: 0;
         *  Set this bit to enable the clock gating of output tx clock.
         */
        uint32_t tx_gating_en:1;
        /** tx_valid_output_en : R/W; bitpos: [31]; default: 0;
         *  Set this bit to enable the output of tx data valid signal.
         */
        uint32_t tx_valid_output_en:1;
    };
    uint32_t val;
} parl_io_tx_genrl_cfg_reg_t;


/** Group: PARL_IO FIFO Configuration */
/** Type of fifo_cfg register
 *  Parallel IO FIFO configuration register.
 */
typedef union {
    struct {
        uint32_t reserved_0:30;
        /** tx_fifo_srst : R/W; bitpos: [30]; default: 0;
         *  Set this bit to reset async fifo in tx module.
         */
        uint32_t tx_fifo_srst:1;
        /** rx_fifo_srst : R/W; bitpos: [31]; default: 0;
         *  Set this bit to reset async fifo in rx module.
         */
        uint32_t rx_fifo_srst:1;
    };
    uint32_t val;
} parl_io_fifo_cfg_reg_t;


/** Group: PARL_IO Register Update Configuration */
/** Type of reg_update register
 *  Parallel IO FIFO configuration register.
 */
typedef union {
    struct {
        uint32_t reserved_0:31;
        /** rx_reg_update : WT; bitpos: [31]; default: 0;
         *  Set this bit to update rx register configuration.
         */
        uint32_t rx_reg_update:1;
    };
    uint32_t val;
} parl_io_reg_update_reg_t;


/** Group: PARL_IO Status */
/** Type of st register
 *  Parallel IO module status register0.
 */
typedef union {
    struct {
        uint32_t reserved_0:31;
        /** tx_ready : RO; bitpos: [31]; default: 0;
         *  Represents the status that tx is ready to transmit.
         */
        uint32_t tx_ready:1;
    };
    uint32_t val;
} parl_io_st_reg_t;


/** Group: PARL_IO Interrupt Configuration and Status */
/** Type of int_ena register
 *  Parallel IO interrupt enable singal configuration register.
 */
typedef union {
    struct {
        /** tx_fifo_rempty_int_ena : R/W; bitpos: [0]; default: 0;
         *  Set this bit to enable TX_FIFO_REMPTY_INT.
         */
        uint32_t tx_fifo_rempty_int_ena:1;
        /** rx_fifo_wovf_int_ena : R/W; bitpos: [1]; default: 0;
         *  Set this bit to enable RX_FIFO_WOVF_INT.
         */
        uint32_t rx_fifo_wovf_int_ena:1;
        /** tx_eof_int_ena : R/W; bitpos: [2]; default: 0;
         *  Set this bit to enable TX_EOF_INT.
         */
        uint32_t tx_eof_int_ena:1;
        uint32_t reserved_3:29;
    };
    uint32_t val;
} parl_io_int_ena_reg_t;

/** Type of int_raw register
 *  Parallel IO interrupt raw singal status register.
 */
typedef union {
    struct {
        /** tx_fifo_rempty_int_raw : R/WTC/SS; bitpos: [0]; default: 0;
         *  The raw interrupt status of TX_FIFO_REMPTY_INT.
         */
        uint32_t tx_fifo_rempty_int_raw:1;
        /** rx_fifo_wovf_int_raw : R/WTC/SS; bitpos: [1]; default: 0;
         *  The raw interrupt status of RX_FIFO_WOVF_INT.
         */
        uint32_t rx_fifo_wovf_int_raw:1;
        /** tx_eof_int_raw : R/WTC/SS; bitpos: [2]; default: 0;
         *  The raw interrupt status of TX_EOF_INT.
         */
        uint32_t tx_eof_int_raw:1;
        uint32_t reserved_3:29;
    };
    uint32_t val;
} parl_io_int_raw_reg_t;

/** Type of int_st register
 *  Parallel IO interrupt singal status register.
 */
typedef union {
    struct {
        /** tx_fifo_rempty_int_st : RO; bitpos: [0]; default: 0;
         *  The masked interrupt status of TX_FIFO_REMPTY_INT.
         */
        uint32_t tx_fifo_rempty_int_st:1;
        /** rx_fifo_wovf_int_st : RO; bitpos: [1]; default: 0;
         *  The masked interrupt status of RX_FIFO_WOVF_INT.
         */
        uint32_t rx_fifo_wovf_int_st:1;
        /** tx_eof_int_st : RO; bitpos: [2]; default: 0;
         *  The masked interrupt status of TX_EOF_INT.
         */
        uint32_t tx_eof_int_st:1;
        uint32_t reserved_3:29;
    };
    uint32_t val;
} parl_io_int_st_reg_t;

/** Type of int_clr register
 *  Parallel IO interrupt  clear singal configuration register.
 */
typedef union {
    struct {
        /** tx_fifo_rempty_int_clr : WT; bitpos: [0]; default: 0;
         *  Set this bit to clear TX_FIFO_REMPTY_INT.
         */
        uint32_t tx_fifo_rempty_int_clr:1;
        /** rx_fifo_wovf_int_clr : WT; bitpos: [1]; default: 0;
         *  Set this bit to clear RX_FIFO_WOVF_INT.
         */
        uint32_t rx_fifo_wovf_int_clr:1;
        /** tx_eof_int_clr : WT; bitpos: [2]; default: 0;
         *  Set this bit to clear TX_EOF_INT.
         */
        uint32_t tx_eof_int_clr:1;
        uint32_t reserved_3:29;
    };
    uint32_t val;
} parl_io_int_clr_reg_t;


/** Group: PARL_IO Rx Status0 */
/** Type of rx_st0 register
 *  Parallel IO RX status register0
 */
typedef union {
    struct {
        uint32_t reserved_0:9;
        /** rx_cnt : RO; bitpos: [12:9]; default: 0;
         *  Indicates the cycle number of reading Rx FIFO.
         */
        uint32_t rx_cnt:4;
        /** rx_fifo_wr_bit_cnt : RO; bitpos: [31:13]; default: 0;
         *  Indicates the current written bit number into Rx FIFO.
         */
        uint32_t rx_fifo_wr_bit_cnt:19;
    };
    uint32_t val;
} parl_io_rx_st0_reg_t;


/** Group: PARL_IO Rx Status1 */
/** Type of rx_st1 register
 *  Parallel IO RX status register1
 */
typedef union {
    struct {
        uint32_t reserved_0:13;
        /** rx_fifo_rd_bit_cnt : RO; bitpos: [31:13]; default: 0;
         *  Indicates the current read bit number from Rx FIFO.
         */
        uint32_t rx_fifo_rd_bit_cnt:19;
    };
    uint32_t val;
} parl_io_rx_st1_reg_t;


/** Group: PARL_IO Tx Status0 */
/** Type of tx_st0 register
 *  Parallel IO TX status register0
 */
typedef union {
    struct {
        uint32_t reserved_0:6;
        /** tx_cnt : RO; bitpos: [12:6]; default: 0;
         *  Indicates the cycle number of reading Tx FIFO.
         */
        uint32_t tx_cnt:7;
        /** tx_fifo_rd_bit_cnt : RO; bitpos: [31:13]; default: 0;
         *  Indicates the current read bit number from Tx FIFO.
         */
        uint32_t tx_fifo_rd_bit_cnt:19;
    };
    uint32_t val;
} parl_io_tx_st0_reg_t;


/** Group: PARL_IO Rx Clock Configuration */
/** Type of rx_clk_cfg register
 *  Parallel IO RX clk configuration register
 */
typedef union {
    struct {
        uint32_t reserved_0:30;
        /** rx_clk_i_inv : R/W; bitpos: [30]; default: 0;
         *  Set this bit to invert the input Rx core clock.
         */
        uint32_t rx_clk_i_inv:1;
        /** rx_clk_o_inv : R/W; bitpos: [31]; default: 0;
         *  Set this bit to invert the output Rx core clock.
         */
        uint32_t rx_clk_o_inv:1;
    };
    uint32_t val;
} parl_io_rx_clk_cfg_reg_t;


/** Group: PARL_IO Tx Clock Configuration */
/** Type of tx_clk_cfg register
 *  Parallel IO TX clk configuration register
 */
typedef union {
    struct {
        uint32_t reserved_0:30;
        /** tx_clk_i_inv : R/W; bitpos: [30]; default: 0;
         *  Set this bit to invert the input Tx core clock.
         */
        uint32_t tx_clk_i_inv:1;
        /** tx_clk_o_inv : R/W; bitpos: [31]; default: 0;
         *  Set this bit to invert the output Tx core clock.
         */
        uint32_t tx_clk_o_inv:1;
    };
    uint32_t val;
} parl_io_tx_clk_cfg_reg_t;


/** Group: PARL_IO Clock Configuration */
/** Type of clk register
 *  Parallel IO clk configuration register
 */
typedef union {
    struct {
        uint32_t reserved_0:31;
        /** clk_en : R/W; bitpos: [31]; default: 0;
         *  Force clock on for this register file
         */
        uint32_t clk_en:1;
    };
    uint32_t val;
} parl_io_clk_reg_t;


/** Group: PARL_IO Version Register */
/** Type of version register
 *  Version register.
 */
typedef union {
    struct {
        /** date : R/W; bitpos: [27:0]; default: 35684928;
         *  Version of this register file
         */
        uint32_t date:28;
        uint32_t reserved_28:4;
    };
    uint32_t val;
} parl_io_version_reg_t;


typedef struct parl_io_dev_t {
    volatile parl_io_rx_mode_cfg_reg_t rx_mode_cfg;
    volatile parl_io_rx_data_cfg_reg_t rx_data_cfg;
    volatile parl_io_rx_genrl_cfg_reg_t rx_genrl_cfg;
    volatile parl_io_rx_start_cfg_reg_t rx_start_cfg;
    volatile parl_io_tx_data_cfg_reg_t tx_data_cfg;
    volatile parl_io_tx_start_cfg_reg_t tx_start_cfg;
    volatile parl_io_tx_genrl_cfg_reg_t tx_genrl_cfg;
    volatile parl_io_fifo_cfg_reg_t fifo_cfg;
    volatile parl_io_reg_update_reg_t reg_update;
    volatile parl_io_st_reg_t st;
    volatile parl_io_int_ena_reg_t int_ena;
    volatile parl_io_int_raw_reg_t int_raw;
    volatile parl_io_int_st_reg_t int_st;
    volatile parl_io_int_clr_reg_t int_clr;
    volatile parl_io_rx_st0_reg_t rx_st0;
    volatile parl_io_rx_st1_reg_t rx_st1;
    volatile parl_io_tx_st0_reg_t tx_st0;
    volatile parl_io_rx_clk_cfg_reg_t rx_clk_cfg;
    volatile parl_io_tx_clk_cfg_reg_t tx_clk_cfg;
    uint32_t reserved_04c[53];
    volatile parl_io_clk_reg_t clk;
    uint32_t reserved_124[182];
    volatile parl_io_version_reg_t version;
} parl_io_dev_t;

extern parl_io_dev_t PARL_IO;

#ifndef __cplusplus
_Static_assert(sizeof(parl_io_dev_t) == 0x400, "Invalid size of parl_io_dev_t structure");
#endif

#ifdef __cplusplus
}
#endif
