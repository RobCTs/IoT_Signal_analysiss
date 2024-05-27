/**
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** I3C_MST_DEVICE_CTRL_REG register
 *  DEVICE_CTRL register controls the transfer properties and disposition of
 *  controllers capabilities.
 */
#define I3C_MST_DEVICE_CTRL_REG (DR_REG_I3C_MST_BASE + 0x0)
/** I3C_MST_REG_BA_INCLUDE : R/W; bitpos: [1]; default: 0;
 *  This bit is used to include I3C broadcast address(0x7E) for private transfer.(If
 *  I3C broadcast address is not include for the private transfer, In-Band Interrupts
 *  driven from Slaves may not win address arbitration. Hence IBIs will get delayed)
 */
#define I3C_MST_REG_BA_INCLUDE    (BIT(1))
#define I3C_MST_REG_BA_INCLUDE_M  (I3C_MST_REG_BA_INCLUDE_V << I3C_MST_REG_BA_INCLUDE_S)
#define I3C_MST_REG_BA_INCLUDE_V  0x00000001U
#define I3C_MST_REG_BA_INCLUDE_S  1
/** I3C_MST_REG_TRANS_START : R/W; bitpos: [2]; default: 0;
 *  Transfer Start
 */
#define I3C_MST_REG_TRANS_START    (BIT(2))
#define I3C_MST_REG_TRANS_START_M  (I3C_MST_REG_TRANS_START_V << I3C_MST_REG_TRANS_START_S)
#define I3C_MST_REG_TRANS_START_V  0x00000001U
#define I3C_MST_REG_TRANS_START_S  2
/** I3C_MST_REG_CLK_EN : R/W; bitpos: [3]; default: 0;
 *  NA
 */
#define I3C_MST_REG_CLK_EN    (BIT(3))
#define I3C_MST_REG_CLK_EN_M  (I3C_MST_REG_CLK_EN_V << I3C_MST_REG_CLK_EN_S)
#define I3C_MST_REG_CLK_EN_V  0x00000001U
#define I3C_MST_REG_CLK_EN_S  3
/** I3C_MST_REG_IBI_RSTART_TRANS_EN : R/W; bitpos: [4]; default: 0;
 *  NA
 */
#define I3C_MST_REG_IBI_RSTART_TRANS_EN    (BIT(4))
#define I3C_MST_REG_IBI_RSTART_TRANS_EN_M  (I3C_MST_REG_IBI_RSTART_TRANS_EN_V << I3C_MST_REG_IBI_RSTART_TRANS_EN_S)
#define I3C_MST_REG_IBI_RSTART_TRANS_EN_V  0x00000001U
#define I3C_MST_REG_IBI_RSTART_TRANS_EN_S  4
/** I3C_MST_REG_AUTO_DIS_IBI_EN : R/W; bitpos: [5]; default: 1;
 *  NA
 */
#define I3C_MST_REG_AUTO_DIS_IBI_EN    (BIT(5))
#define I3C_MST_REG_AUTO_DIS_IBI_EN_M  (I3C_MST_REG_AUTO_DIS_IBI_EN_V << I3C_MST_REG_AUTO_DIS_IBI_EN_S)
#define I3C_MST_REG_AUTO_DIS_IBI_EN_V  0x00000001U
#define I3C_MST_REG_AUTO_DIS_IBI_EN_S  5
/** I3C_MST_REG_DMA_RX_EN : R/W; bitpos: [6]; default: 0;
 *  NA
 */
#define I3C_MST_REG_DMA_RX_EN    (BIT(6))
#define I3C_MST_REG_DMA_RX_EN_M  (I3C_MST_REG_DMA_RX_EN_V << I3C_MST_REG_DMA_RX_EN_S)
#define I3C_MST_REG_DMA_RX_EN_V  0x00000001U
#define I3C_MST_REG_DMA_RX_EN_S  6
/** I3C_MST_REG_DMA_TX_EN : R/W; bitpos: [7]; default: 0;
 *  NA
 */
#define I3C_MST_REG_DMA_TX_EN    (BIT(7))
#define I3C_MST_REG_DMA_TX_EN_M  (I3C_MST_REG_DMA_TX_EN_V << I3C_MST_REG_DMA_TX_EN_S)
#define I3C_MST_REG_DMA_TX_EN_V  0x00000001U
#define I3C_MST_REG_DMA_TX_EN_S  7
/** I3C_MST_REG_MULTI_SLV_SINGLE_CCC_EN : R/W; bitpos: [8]; default: 0;
 *  0: rx high bit first, 1: rx low bit first
 */
#define I3C_MST_REG_MULTI_SLV_SINGLE_CCC_EN    (BIT(8))
#define I3C_MST_REG_MULTI_SLV_SINGLE_CCC_EN_M  (I3C_MST_REG_MULTI_SLV_SINGLE_CCC_EN_V << I3C_MST_REG_MULTI_SLV_SINGLE_CCC_EN_S)
#define I3C_MST_REG_MULTI_SLV_SINGLE_CCC_EN_V  0x00000001U
#define I3C_MST_REG_MULTI_SLV_SINGLE_CCC_EN_S  8
/** I3C_MST_REG_RX_BIT_ORDER : R/W; bitpos: [9]; default: 0;
 *  0: rx low byte fist, 1: rx high byte first
 */
#define I3C_MST_REG_RX_BIT_ORDER    (BIT(9))
#define I3C_MST_REG_RX_BIT_ORDER_M  (I3C_MST_REG_RX_BIT_ORDER_V << I3C_MST_REG_RX_BIT_ORDER_S)
#define I3C_MST_REG_RX_BIT_ORDER_V  0x00000001U
#define I3C_MST_REG_RX_BIT_ORDER_S  9
/** I3C_MST_REG_RX_BYTE_ORDER : R/W; bitpos: [10]; default: 0;
 *  NA
 */
#define I3C_MST_REG_RX_BYTE_ORDER    (BIT(10))
#define I3C_MST_REG_RX_BYTE_ORDER_M  (I3C_MST_REG_RX_BYTE_ORDER_V << I3C_MST_REG_RX_BYTE_ORDER_S)
#define I3C_MST_REG_RX_BYTE_ORDER_V  0x00000001U
#define I3C_MST_REG_RX_BYTE_ORDER_S  10
/** I3C_MST_REG_SCL_PULLUP_FORCE_EN : R/W; bitpos: [11]; default: 0;
 *  This bit is used to force scl_pullup_en
 */
#define I3C_MST_REG_SCL_PULLUP_FORCE_EN    (BIT(11))
#define I3C_MST_REG_SCL_PULLUP_FORCE_EN_M  (I3C_MST_REG_SCL_PULLUP_FORCE_EN_V << I3C_MST_REG_SCL_PULLUP_FORCE_EN_S)
#define I3C_MST_REG_SCL_PULLUP_FORCE_EN_V  0x00000001U
#define I3C_MST_REG_SCL_PULLUP_FORCE_EN_S  11
/** I3C_MST_REG_SCL_OE_FORCE_EN : R/W; bitpos: [12]; default: 1;
 *  This bit is used to force scl_oe
 */
#define I3C_MST_REG_SCL_OE_FORCE_EN    (BIT(12))
#define I3C_MST_REG_SCL_OE_FORCE_EN_M  (I3C_MST_REG_SCL_OE_FORCE_EN_V << I3C_MST_REG_SCL_OE_FORCE_EN_S)
#define I3C_MST_REG_SCL_OE_FORCE_EN_V  0x00000001U
#define I3C_MST_REG_SCL_OE_FORCE_EN_S  12
/** I3C_MST_REG_SDA_PP_RD_PULLUP_EN : R/W; bitpos: [13]; default: 0;
 *  NA
 */
#define I3C_MST_REG_SDA_PP_RD_PULLUP_EN    (BIT(13))
#define I3C_MST_REG_SDA_PP_RD_PULLUP_EN_M  (I3C_MST_REG_SDA_PP_RD_PULLUP_EN_V << I3C_MST_REG_SDA_PP_RD_PULLUP_EN_S)
#define I3C_MST_REG_SDA_PP_RD_PULLUP_EN_V  0x00000001U
#define I3C_MST_REG_SDA_PP_RD_PULLUP_EN_S  13
/** I3C_MST_REG_SDA_RD_TBIT_HLVL_PULLUP_EN : R/W; bitpos: [14]; default: 0;
 *  NA
 */
#define I3C_MST_REG_SDA_RD_TBIT_HLVL_PULLUP_EN    (BIT(14))
#define I3C_MST_REG_SDA_RD_TBIT_HLVL_PULLUP_EN_M  (I3C_MST_REG_SDA_RD_TBIT_HLVL_PULLUP_EN_V << I3C_MST_REG_SDA_RD_TBIT_HLVL_PULLUP_EN_S)
#define I3C_MST_REG_SDA_RD_TBIT_HLVL_PULLUP_EN_V  0x00000001U
#define I3C_MST_REG_SDA_RD_TBIT_HLVL_PULLUP_EN_S  14
/** I3C_MST_REG_SDA_PP_WR_PULLUP_EN : R/W; bitpos: [15]; default: 0;
 *  NA
 */
#define I3C_MST_REG_SDA_PP_WR_PULLUP_EN    (BIT(15))
#define I3C_MST_REG_SDA_PP_WR_PULLUP_EN_M  (I3C_MST_REG_SDA_PP_WR_PULLUP_EN_V << I3C_MST_REG_SDA_PP_WR_PULLUP_EN_S)
#define I3C_MST_REG_SDA_PP_WR_PULLUP_EN_V  0x00000001U
#define I3C_MST_REG_SDA_PP_WR_PULLUP_EN_S  15
/** I3C_MST_REG_DATA_BYTE_CNT_UNLATCH : R/W; bitpos: [16]; default: 0;
 *  1: read current real-time updated value  0: read latch data byte cnt value
 */
#define I3C_MST_REG_DATA_BYTE_CNT_UNLATCH    (BIT(16))
#define I3C_MST_REG_DATA_BYTE_CNT_UNLATCH_M  (I3C_MST_REG_DATA_BYTE_CNT_UNLATCH_V << I3C_MST_REG_DATA_BYTE_CNT_UNLATCH_S)
#define I3C_MST_REG_DATA_BYTE_CNT_UNLATCH_V  0x00000001U
#define I3C_MST_REG_DATA_BYTE_CNT_UNLATCH_S  16
/** I3C_MST_REG_MEM_CLK_FORCE_ON : R/W; bitpos: [17]; default: 0;
 *  1: dev characteristic and address table memory clk  date force on . 0 :  clock
 *  gating by rd/wr.
 */
#define I3C_MST_REG_MEM_CLK_FORCE_ON    (BIT(17))
#define I3C_MST_REG_MEM_CLK_FORCE_ON_M  (I3C_MST_REG_MEM_CLK_FORCE_ON_V << I3C_MST_REG_MEM_CLK_FORCE_ON_S)
#define I3C_MST_REG_MEM_CLK_FORCE_ON_V  0x00000001U
#define I3C_MST_REG_MEM_CLK_FORCE_ON_S  17

/** I3C_MST_BUFFER_THLD_CTRL_REG register
 *  In-Band Interrupt Status Threshold Value . Every In Band Interrupt received by I3C
 *  controller generates an IBI status. This field controls the number of IBI status
 *  entries in the IBI buffer that trigger the IBI_STATUS_THLD_STAT interrupt.
 */
#define I3C_MST_BUFFER_THLD_CTRL_REG (DR_REG_I3C_MST_BASE + 0x1c)
/** I3C_MST_REG_CMD_BUF_EMPTY_THLD : R/W; bitpos: [3:0]; default: 1;
 *  Command Buffer Empty Threshold Value is used to control the number of empty
 *  locations(or greater) in the Command Buffer that trigger CMD_BUFFER_READY_STAT
 *  interrupt.
 */
#define I3C_MST_REG_CMD_BUF_EMPTY_THLD    0x0000000FU
#define I3C_MST_REG_CMD_BUF_EMPTY_THLD_M  (I3C_MST_REG_CMD_BUF_EMPTY_THLD_V << I3C_MST_REG_CMD_BUF_EMPTY_THLD_S)
#define I3C_MST_REG_CMD_BUF_EMPTY_THLD_V  0x0000000FU
#define I3C_MST_REG_CMD_BUF_EMPTY_THLD_S  0
/** I3C_MST_REG_RESP_BUF_THLD : R/W; bitpos: [8:6]; default: 1;
 *  Response Buffer Threshold Value is used to control the number of entries in the
 *  Response Buffer that trigger the RESP_READY_STAT_INTR.
 */
#define I3C_MST_REG_RESP_BUF_THLD    0x00000007U
#define I3C_MST_REG_RESP_BUF_THLD_M  (I3C_MST_REG_RESP_BUF_THLD_V << I3C_MST_REG_RESP_BUF_THLD_S)
#define I3C_MST_REG_RESP_BUF_THLD_V  0x00000007U
#define I3C_MST_REG_RESP_BUF_THLD_S  6
/** I3C_MST_REG_IBI_DATA_BUF_THLD : R/W; bitpos: [14:12]; default: 1;
 *  In-Band Interrupt Data Threshold Value . Every In Band Interrupt received by I3C
 *  controller generates an IBI status. This field controls the number of IBI data
 *  entries in the IBI buffer that trigger the IBI_DATA_THLD_STAT interrupt.
 */
#define I3C_MST_REG_IBI_DATA_BUF_THLD    0x00000007U
#define I3C_MST_REG_IBI_DATA_BUF_THLD_M  (I3C_MST_REG_IBI_DATA_BUF_THLD_V << I3C_MST_REG_IBI_DATA_BUF_THLD_S)
#define I3C_MST_REG_IBI_DATA_BUF_THLD_V  0x00000007U
#define I3C_MST_REG_IBI_DATA_BUF_THLD_S  12
/** I3C_MST_REG_IBI_STATUS_BUF_THLD : R/W; bitpos: [20:18]; default: 1;
 *  NA
 */
#define I3C_MST_REG_IBI_STATUS_BUF_THLD    0x00000007U
#define I3C_MST_REG_IBI_STATUS_BUF_THLD_M  (I3C_MST_REG_IBI_STATUS_BUF_THLD_V << I3C_MST_REG_IBI_STATUS_BUF_THLD_S)
#define I3C_MST_REG_IBI_STATUS_BUF_THLD_V  0x00000007U
#define I3C_MST_REG_IBI_STATUS_BUF_THLD_S  18

/** I3C_MST_DATA_BUFFER_THLD_CTRL_REG register
 *  NA
 */
#define I3C_MST_DATA_BUFFER_THLD_CTRL_REG (DR_REG_I3C_MST_BASE + 0x20)
/** I3C_MST_REG_TX_DATA_BUF_THLD : R/W; bitpos: [2:0]; default: 1;
 *  Transmit Buffer Threshold Value. This field controls the number of empty locations
 *  in the Transmit FIFO that trigger the TX_THLD_STAT interrupt. Supports values:
 *  000:2  001:4  010:8  011:16  100:31, else:31
 */
#define I3C_MST_REG_TX_DATA_BUF_THLD    0x00000007U
#define I3C_MST_REG_TX_DATA_BUF_THLD_M  (I3C_MST_REG_TX_DATA_BUF_THLD_V << I3C_MST_REG_TX_DATA_BUF_THLD_S)
#define I3C_MST_REG_TX_DATA_BUF_THLD_V  0x00000007U
#define I3C_MST_REG_TX_DATA_BUF_THLD_S  0
/** I3C_MST_REG_RX_DATA_BUF_THLD : R/W; bitpos: [5:3]; default: 1;
 *  Receive Buffer Threshold Value. This field controls the number of empty locations
 *  in the Receive FIFO that trigger the RX_THLD_STAT interrupt. Supports: 000:2  001:4
 *  010:8  011:16  100:31, else:31
 */
#define I3C_MST_REG_RX_DATA_BUF_THLD    0x00000007U
#define I3C_MST_REG_RX_DATA_BUF_THLD_M  (I3C_MST_REG_RX_DATA_BUF_THLD_V << I3C_MST_REG_RX_DATA_BUF_THLD_S)
#define I3C_MST_REG_RX_DATA_BUF_THLD_V  0x00000007U
#define I3C_MST_REG_RX_DATA_BUF_THLD_S  3

/** I3C_MST_IBI_NOTIFY_CTRL_REG register
 *  NA
 */
#define I3C_MST_IBI_NOTIFY_CTRL_REG (DR_REG_I3C_MST_BASE + 0x24)
/** I3C_MST_REG_NOTIFY_SIR_REJECTED : R/W; bitpos: [2]; default: 0;
 *  Notify Rejected Slave Interrupt Request Control. This bit is used to suppress
 *  reporting to the application about Slave Interrupt Request. 0:Suppress passing the
 *  IBI Status to the IBI FIFO(hence not notifying the application) when a SIR request
 *  is NACKed and auto-disabled base on the IBI_SIR_REQ_REJECT register. 1: Writes IBI
 *  Status to the IBI FIFO(hence notifying the application) when SIR request is NACKed
 *  and auto-disabled based on the IBI_SIR_REQ_REJECT registerl.
 */
#define I3C_MST_REG_NOTIFY_SIR_REJECTED    (BIT(2))
#define I3C_MST_REG_NOTIFY_SIR_REJECTED_M  (I3C_MST_REG_NOTIFY_SIR_REJECTED_V << I3C_MST_REG_NOTIFY_SIR_REJECTED_S)
#define I3C_MST_REG_NOTIFY_SIR_REJECTED_V  0x00000001U
#define I3C_MST_REG_NOTIFY_SIR_REJECTED_S  2

/** I3C_MST_IBI_SIR_REQ_PAYLOAD_REG register
 *  NA
 */
#define I3C_MST_IBI_SIR_REQ_PAYLOAD_REG (DR_REG_I3C_MST_BASE + 0x28)
/** I3C_MST_REG_SIR_REQ_PAYLOAD : R/W; bitpos: [31:0]; default: 0;
 *  NA
 */
#define I3C_MST_REG_SIR_REQ_PAYLOAD    0xFFFFFFFFU
#define I3C_MST_REG_SIR_REQ_PAYLOAD_M  (I3C_MST_REG_SIR_REQ_PAYLOAD_V << I3C_MST_REG_SIR_REQ_PAYLOAD_S)
#define I3C_MST_REG_SIR_REQ_PAYLOAD_V  0xFFFFFFFFU
#define I3C_MST_REG_SIR_REQ_PAYLOAD_S  0

/** I3C_MST_IBI_SIR_REQ_REJECT_REG register
 *  NA
 */
#define I3C_MST_IBI_SIR_REQ_REJECT_REG (DR_REG_I3C_MST_BASE + 0x2c)
/** I3C_MST_REG_SIR_REQ_REJECT : R/W; bitpos: [31:0]; default: 0;
 *  The application of controller can decide whether to send ACK or NACK for Slave
 *  request received from any I3C device. A device specific response control bit is
 *  provided to select the response option, Master will ACK/NACK the Master Request
 *  based on programming of control bit, corresponding to the interrupting device.
 *  0:ACK the SIR Request  1:NACK and send direct auto disable CCC
 */
#define I3C_MST_REG_SIR_REQ_REJECT    0xFFFFFFFFU
#define I3C_MST_REG_SIR_REQ_REJECT_M  (I3C_MST_REG_SIR_REQ_REJECT_V << I3C_MST_REG_SIR_REQ_REJECT_S)
#define I3C_MST_REG_SIR_REQ_REJECT_V  0xFFFFFFFFU
#define I3C_MST_REG_SIR_REQ_REJECT_S  0

/** I3C_MST_INT_CLR_REG register
 *  NA
 */
#define I3C_MST_INT_CLR_REG (DR_REG_I3C_MST_BASE + 0x30)
/** I3C_MST_TX_DATA_BUF_THLD_INT_CLR : WT; bitpos: [0]; default: 0;
 *  NA
 */
#define I3C_MST_TX_DATA_BUF_THLD_INT_CLR    (BIT(0))
#define I3C_MST_TX_DATA_BUF_THLD_INT_CLR_M  (I3C_MST_TX_DATA_BUF_THLD_INT_CLR_V << I3C_MST_TX_DATA_BUF_THLD_INT_CLR_S)
#define I3C_MST_TX_DATA_BUF_THLD_INT_CLR_V  0x00000001U
#define I3C_MST_TX_DATA_BUF_THLD_INT_CLR_S  0
/** I3C_MST_RX_DATA_BUF_THLD_INT_CLR : WT; bitpos: [1]; default: 0;
 *  NA
 */
#define I3C_MST_RX_DATA_BUF_THLD_INT_CLR    (BIT(1))
#define I3C_MST_RX_DATA_BUF_THLD_INT_CLR_M  (I3C_MST_RX_DATA_BUF_THLD_INT_CLR_V << I3C_MST_RX_DATA_BUF_THLD_INT_CLR_S)
#define I3C_MST_RX_DATA_BUF_THLD_INT_CLR_V  0x00000001U
#define I3C_MST_RX_DATA_BUF_THLD_INT_CLR_S  1
/** I3C_MST_IBI_STATUS_THLD_INT_CLR : WT; bitpos: [2]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_STATUS_THLD_INT_CLR    (BIT(2))
#define I3C_MST_IBI_STATUS_THLD_INT_CLR_M  (I3C_MST_IBI_STATUS_THLD_INT_CLR_V << I3C_MST_IBI_STATUS_THLD_INT_CLR_S)
#define I3C_MST_IBI_STATUS_THLD_INT_CLR_V  0x00000001U
#define I3C_MST_IBI_STATUS_THLD_INT_CLR_S  2
/** I3C_MST_CMD_BUF_EMPTY_THLD_INT_CLR : WT; bitpos: [3]; default: 0;
 *  NA
 */
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_CLR    (BIT(3))
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_CLR_M  (I3C_MST_CMD_BUF_EMPTY_THLD_INT_CLR_V << I3C_MST_CMD_BUF_EMPTY_THLD_INT_CLR_S)
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_CLR_V  0x00000001U
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_CLR_S  3
/** I3C_MST_RESP_READY_INT_CLR : WT; bitpos: [4]; default: 0;
 *  NA
 */
#define I3C_MST_RESP_READY_INT_CLR    (BIT(4))
#define I3C_MST_RESP_READY_INT_CLR_M  (I3C_MST_RESP_READY_INT_CLR_V << I3C_MST_RESP_READY_INT_CLR_S)
#define I3C_MST_RESP_READY_INT_CLR_V  0x00000001U
#define I3C_MST_RESP_READY_INT_CLR_S  4
/** I3C_MST_NXT_CMD_REQ_ERR_INT_CLR : WT; bitpos: [5]; default: 0;
 *  NA
 */
#define I3C_MST_NXT_CMD_REQ_ERR_INT_CLR    (BIT(5))
#define I3C_MST_NXT_CMD_REQ_ERR_INT_CLR_M  (I3C_MST_NXT_CMD_REQ_ERR_INT_CLR_V << I3C_MST_NXT_CMD_REQ_ERR_INT_CLR_S)
#define I3C_MST_NXT_CMD_REQ_ERR_INT_CLR_V  0x00000001U
#define I3C_MST_NXT_CMD_REQ_ERR_INT_CLR_S  5
/** I3C_MST_TRANSFER_ERR_INT_CLR : WT; bitpos: [6]; default: 0;
 *  NA
 */
#define I3C_MST_TRANSFER_ERR_INT_CLR    (BIT(6))
#define I3C_MST_TRANSFER_ERR_INT_CLR_M  (I3C_MST_TRANSFER_ERR_INT_CLR_V << I3C_MST_TRANSFER_ERR_INT_CLR_S)
#define I3C_MST_TRANSFER_ERR_INT_CLR_V  0x00000001U
#define I3C_MST_TRANSFER_ERR_INT_CLR_S  6
/** I3C_MST_TRANSFER_COMPLETE_INT_CLR : WT; bitpos: [7]; default: 0;
 *  NA
 */
#define I3C_MST_TRANSFER_COMPLETE_INT_CLR    (BIT(7))
#define I3C_MST_TRANSFER_COMPLETE_INT_CLR_M  (I3C_MST_TRANSFER_COMPLETE_INT_CLR_V << I3C_MST_TRANSFER_COMPLETE_INT_CLR_S)
#define I3C_MST_TRANSFER_COMPLETE_INT_CLR_V  0x00000001U
#define I3C_MST_TRANSFER_COMPLETE_INT_CLR_S  7
/** I3C_MST_COMMAND_DONE_INT_CLR : WT; bitpos: [8]; default: 0;
 *  NA
 */
#define I3C_MST_COMMAND_DONE_INT_CLR    (BIT(8))
#define I3C_MST_COMMAND_DONE_INT_CLR_M  (I3C_MST_COMMAND_DONE_INT_CLR_V << I3C_MST_COMMAND_DONE_INT_CLR_S)
#define I3C_MST_COMMAND_DONE_INT_CLR_V  0x00000001U
#define I3C_MST_COMMAND_DONE_INT_CLR_S  8
/** I3C_MST_DETECT_START_INT_CLR : WT; bitpos: [9]; default: 0;
 *  NA
 */
#define I3C_MST_DETECT_START_INT_CLR    (BIT(9))
#define I3C_MST_DETECT_START_INT_CLR_M  (I3C_MST_DETECT_START_INT_CLR_V << I3C_MST_DETECT_START_INT_CLR_S)
#define I3C_MST_DETECT_START_INT_CLR_V  0x00000001U
#define I3C_MST_DETECT_START_INT_CLR_S  9
/** I3C_MST_RESP_BUF_OVF_INT_CLR : WT; bitpos: [10]; default: 0;
 *  NA
 */
#define I3C_MST_RESP_BUF_OVF_INT_CLR    (BIT(10))
#define I3C_MST_RESP_BUF_OVF_INT_CLR_M  (I3C_MST_RESP_BUF_OVF_INT_CLR_V << I3C_MST_RESP_BUF_OVF_INT_CLR_S)
#define I3C_MST_RESP_BUF_OVF_INT_CLR_V  0x00000001U
#define I3C_MST_RESP_BUF_OVF_INT_CLR_S  10
/** I3C_MST_IBI_DATA_BUF_OVF_INT_CLR : WT; bitpos: [11]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_DATA_BUF_OVF_INT_CLR    (BIT(11))
#define I3C_MST_IBI_DATA_BUF_OVF_INT_CLR_M  (I3C_MST_IBI_DATA_BUF_OVF_INT_CLR_V << I3C_MST_IBI_DATA_BUF_OVF_INT_CLR_S)
#define I3C_MST_IBI_DATA_BUF_OVF_INT_CLR_V  0x00000001U
#define I3C_MST_IBI_DATA_BUF_OVF_INT_CLR_S  11
/** I3C_MST_IBI_STATUS_BUF_OVF_INT_CLR : WT; bitpos: [12]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_CLR    (BIT(12))
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_CLR_M  (I3C_MST_IBI_STATUS_BUF_OVF_INT_CLR_V << I3C_MST_IBI_STATUS_BUF_OVF_INT_CLR_S)
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_CLR_V  0x00000001U
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_CLR_S  12
/** I3C_MST_IBI_HANDLE_DONE_INT_CLR : WT; bitpos: [13]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_HANDLE_DONE_INT_CLR    (BIT(13))
#define I3C_MST_IBI_HANDLE_DONE_INT_CLR_M  (I3C_MST_IBI_HANDLE_DONE_INT_CLR_V << I3C_MST_IBI_HANDLE_DONE_INT_CLR_S)
#define I3C_MST_IBI_HANDLE_DONE_INT_CLR_V  0x00000001U
#define I3C_MST_IBI_HANDLE_DONE_INT_CLR_S  13
/** I3C_MST_IBI_DETECT_INT_CLR : WT; bitpos: [14]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_DETECT_INT_CLR    (BIT(14))
#define I3C_MST_IBI_DETECT_INT_CLR_M  (I3C_MST_IBI_DETECT_INT_CLR_V << I3C_MST_IBI_DETECT_INT_CLR_S)
#define I3C_MST_IBI_DETECT_INT_CLR_V  0x00000001U
#define I3C_MST_IBI_DETECT_INT_CLR_S  14
/** I3C_MST_CMD_CCC_MISMATCH_INT_CLR : WT; bitpos: [15]; default: 0;
 *  NA
 */
#define I3C_MST_CMD_CCC_MISMATCH_INT_CLR    (BIT(15))
#define I3C_MST_CMD_CCC_MISMATCH_INT_CLR_M  (I3C_MST_CMD_CCC_MISMATCH_INT_CLR_V << I3C_MST_CMD_CCC_MISMATCH_INT_CLR_S)
#define I3C_MST_CMD_CCC_MISMATCH_INT_CLR_V  0x00000001U
#define I3C_MST_CMD_CCC_MISMATCH_INT_CLR_S  15

/** I3C_MST_INT_RAW_REG register
 *  NA
 */
#define I3C_MST_INT_RAW_REG (DR_REG_I3C_MST_BASE + 0x34)
/** I3C_MST_TX_DATA_BUF_THLD_INT_RAW : R/WTC/SS; bitpos: [0]; default: 0;
 *  NA
 */
#define I3C_MST_TX_DATA_BUF_THLD_INT_RAW    (BIT(0))
#define I3C_MST_TX_DATA_BUF_THLD_INT_RAW_M  (I3C_MST_TX_DATA_BUF_THLD_INT_RAW_V << I3C_MST_TX_DATA_BUF_THLD_INT_RAW_S)
#define I3C_MST_TX_DATA_BUF_THLD_INT_RAW_V  0x00000001U
#define I3C_MST_TX_DATA_BUF_THLD_INT_RAW_S  0
/** I3C_MST_RX_DATA_BUF_THLD_INT_RAW : R/WTC/SS; bitpos: [1]; default: 0;
 *  NA
 */
#define I3C_MST_RX_DATA_BUF_THLD_INT_RAW    (BIT(1))
#define I3C_MST_RX_DATA_BUF_THLD_INT_RAW_M  (I3C_MST_RX_DATA_BUF_THLD_INT_RAW_V << I3C_MST_RX_DATA_BUF_THLD_INT_RAW_S)
#define I3C_MST_RX_DATA_BUF_THLD_INT_RAW_V  0x00000001U
#define I3C_MST_RX_DATA_BUF_THLD_INT_RAW_S  1
/** I3C_MST_IBI_STATUS_THLD_INT_RAW : R/WTC/SS; bitpos: [2]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_STATUS_THLD_INT_RAW    (BIT(2))
#define I3C_MST_IBI_STATUS_THLD_INT_RAW_M  (I3C_MST_IBI_STATUS_THLD_INT_RAW_V << I3C_MST_IBI_STATUS_THLD_INT_RAW_S)
#define I3C_MST_IBI_STATUS_THLD_INT_RAW_V  0x00000001U
#define I3C_MST_IBI_STATUS_THLD_INT_RAW_S  2
/** I3C_MST_CMD_BUF_EMPTY_THLD_INT_RAW : R/WTC/SS; bitpos: [3]; default: 1;
 *  NA
 */
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_RAW    (BIT(3))
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_RAW_M  (I3C_MST_CMD_BUF_EMPTY_THLD_INT_RAW_V << I3C_MST_CMD_BUF_EMPTY_THLD_INT_RAW_S)
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_RAW_V  0x00000001U
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_RAW_S  3
/** I3C_MST_RESP_READY_INT_RAW : R/WTC/SS; bitpos: [4]; default: 0;
 *  NA
 */
#define I3C_MST_RESP_READY_INT_RAW    (BIT(4))
#define I3C_MST_RESP_READY_INT_RAW_M  (I3C_MST_RESP_READY_INT_RAW_V << I3C_MST_RESP_READY_INT_RAW_S)
#define I3C_MST_RESP_READY_INT_RAW_V  0x00000001U
#define I3C_MST_RESP_READY_INT_RAW_S  4
/** I3C_MST_NXT_CMD_REQ_ERR_INT_RAW : R/WTC/SS; bitpos: [5]; default: 0;
 *  NA
 */
#define I3C_MST_NXT_CMD_REQ_ERR_INT_RAW    (BIT(5))
#define I3C_MST_NXT_CMD_REQ_ERR_INT_RAW_M  (I3C_MST_NXT_CMD_REQ_ERR_INT_RAW_V << I3C_MST_NXT_CMD_REQ_ERR_INT_RAW_S)
#define I3C_MST_NXT_CMD_REQ_ERR_INT_RAW_V  0x00000001U
#define I3C_MST_NXT_CMD_REQ_ERR_INT_RAW_S  5
/** I3C_MST_TRANSFER_ERR_INT_RAW : R/WTC/SS; bitpos: [6]; default: 0;
 *  NA
 */
#define I3C_MST_TRANSFER_ERR_INT_RAW    (BIT(6))
#define I3C_MST_TRANSFER_ERR_INT_RAW_M  (I3C_MST_TRANSFER_ERR_INT_RAW_V << I3C_MST_TRANSFER_ERR_INT_RAW_S)
#define I3C_MST_TRANSFER_ERR_INT_RAW_V  0x00000001U
#define I3C_MST_TRANSFER_ERR_INT_RAW_S  6
/** I3C_MST_TRANSFER_COMPLETE_INT_RAW : R/WTC/SS; bitpos: [7]; default: 0;
 *  NA
 */
#define I3C_MST_TRANSFER_COMPLETE_INT_RAW    (BIT(7))
#define I3C_MST_TRANSFER_COMPLETE_INT_RAW_M  (I3C_MST_TRANSFER_COMPLETE_INT_RAW_V << I3C_MST_TRANSFER_COMPLETE_INT_RAW_S)
#define I3C_MST_TRANSFER_COMPLETE_INT_RAW_V  0x00000001U
#define I3C_MST_TRANSFER_COMPLETE_INT_RAW_S  7
/** I3C_MST_COMMAND_DONE_INT_RAW : R/WTC/SS; bitpos: [8]; default: 0;
 *  NA
 */
#define I3C_MST_COMMAND_DONE_INT_RAW    (BIT(8))
#define I3C_MST_COMMAND_DONE_INT_RAW_M  (I3C_MST_COMMAND_DONE_INT_RAW_V << I3C_MST_COMMAND_DONE_INT_RAW_S)
#define I3C_MST_COMMAND_DONE_INT_RAW_V  0x00000001U
#define I3C_MST_COMMAND_DONE_INT_RAW_S  8
/** I3C_MST_DETECT_START_INT_RAW : R/WTC/SS; bitpos: [9]; default: 0;
 *  NA
 */
#define I3C_MST_DETECT_START_INT_RAW    (BIT(9))
#define I3C_MST_DETECT_START_INT_RAW_M  (I3C_MST_DETECT_START_INT_RAW_V << I3C_MST_DETECT_START_INT_RAW_S)
#define I3C_MST_DETECT_START_INT_RAW_V  0x00000001U
#define I3C_MST_DETECT_START_INT_RAW_S  9
/** I3C_MST_RESP_BUF_OVF_INT_RAW : R/WTC/SS; bitpos: [10]; default: 0;
 *  NA
 */
#define I3C_MST_RESP_BUF_OVF_INT_RAW    (BIT(10))
#define I3C_MST_RESP_BUF_OVF_INT_RAW_M  (I3C_MST_RESP_BUF_OVF_INT_RAW_V << I3C_MST_RESP_BUF_OVF_INT_RAW_S)
#define I3C_MST_RESP_BUF_OVF_INT_RAW_V  0x00000001U
#define I3C_MST_RESP_BUF_OVF_INT_RAW_S  10
/** I3C_MST_IBI_DATA_BUF_OVF_INT_RAW : R/WTC/SS; bitpos: [11]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_DATA_BUF_OVF_INT_RAW    (BIT(11))
#define I3C_MST_IBI_DATA_BUF_OVF_INT_RAW_M  (I3C_MST_IBI_DATA_BUF_OVF_INT_RAW_V << I3C_MST_IBI_DATA_BUF_OVF_INT_RAW_S)
#define I3C_MST_IBI_DATA_BUF_OVF_INT_RAW_V  0x00000001U
#define I3C_MST_IBI_DATA_BUF_OVF_INT_RAW_S  11
/** I3C_MST_IBI_STATUS_BUF_OVF_INT_RAW : R/WTC/SS; bitpos: [12]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_RAW    (BIT(12))
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_RAW_M  (I3C_MST_IBI_STATUS_BUF_OVF_INT_RAW_V << I3C_MST_IBI_STATUS_BUF_OVF_INT_RAW_S)
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_RAW_V  0x00000001U
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_RAW_S  12
/** I3C_MST_IBI_HANDLE_DONE_INT_RAW : R/WTC/SS; bitpos: [13]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_HANDLE_DONE_INT_RAW    (BIT(13))
#define I3C_MST_IBI_HANDLE_DONE_INT_RAW_M  (I3C_MST_IBI_HANDLE_DONE_INT_RAW_V << I3C_MST_IBI_HANDLE_DONE_INT_RAW_S)
#define I3C_MST_IBI_HANDLE_DONE_INT_RAW_V  0x00000001U
#define I3C_MST_IBI_HANDLE_DONE_INT_RAW_S  13
/** I3C_MST_IBI_DETECT_INT_RAW : R/WTC/SS; bitpos: [14]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_DETECT_INT_RAW    (BIT(14))
#define I3C_MST_IBI_DETECT_INT_RAW_M  (I3C_MST_IBI_DETECT_INT_RAW_V << I3C_MST_IBI_DETECT_INT_RAW_S)
#define I3C_MST_IBI_DETECT_INT_RAW_V  0x00000001U
#define I3C_MST_IBI_DETECT_INT_RAW_S  14
/** I3C_MST_CMD_CCC_MISMATCH_INT_RAW : R/WTC/SS; bitpos: [15]; default: 0;
 *  NA
 */
#define I3C_MST_CMD_CCC_MISMATCH_INT_RAW    (BIT(15))
#define I3C_MST_CMD_CCC_MISMATCH_INT_RAW_M  (I3C_MST_CMD_CCC_MISMATCH_INT_RAW_V << I3C_MST_CMD_CCC_MISMATCH_INT_RAW_S)
#define I3C_MST_CMD_CCC_MISMATCH_INT_RAW_V  0x00000001U
#define I3C_MST_CMD_CCC_MISMATCH_INT_RAW_S  15

/** I3C_MST_INT_ST_REG register
 *  NA
 */
#define I3C_MST_INT_ST_REG (DR_REG_I3C_MST_BASE + 0x38)
/** I3C_MST_TX_DATA_BUF_THLD_INT_ST : RO; bitpos: [0]; default: 0;
 *  This interrupt is generated when number of empty locations in transmit buffer is
 *  greater than or equal to threshold value specified by TX_EMPTY_BUS_THLD field in
 *  DATA_BUFFER_THLD_CTRL register. This interrupt will be cleared automatically when
 *  number of empty locations in transmit buffer is less than threshold value.
 */
#define I3C_MST_TX_DATA_BUF_THLD_INT_ST    (BIT(0))
#define I3C_MST_TX_DATA_BUF_THLD_INT_ST_M  (I3C_MST_TX_DATA_BUF_THLD_INT_ST_V << I3C_MST_TX_DATA_BUF_THLD_INT_ST_S)
#define I3C_MST_TX_DATA_BUF_THLD_INT_ST_V  0x00000001U
#define I3C_MST_TX_DATA_BUF_THLD_INT_ST_S  0
/** I3C_MST_RX_DATA_BUF_THLD_INT_ST : RO; bitpos: [1]; default: 0;
 *  This interrupt is generated when number of entries in receive buffer is greater
 *  than or equal to threshold value specified by RX_BUF_THLD field in
 *  DATA_BUFFER_THLD_CTRL register. This interrupt will be cleared automatically when
 *  number of entries in receive buffer is less than threshold value.
 */
#define I3C_MST_RX_DATA_BUF_THLD_INT_ST    (BIT(1))
#define I3C_MST_RX_DATA_BUF_THLD_INT_ST_M  (I3C_MST_RX_DATA_BUF_THLD_INT_ST_V << I3C_MST_RX_DATA_BUF_THLD_INT_ST_S)
#define I3C_MST_RX_DATA_BUF_THLD_INT_ST_V  0x00000001U
#define I3C_MST_RX_DATA_BUF_THLD_INT_ST_S  1
/** I3C_MST_IBI_STATUS_THLD_INT_ST : RO; bitpos: [2]; default: 0;
 *  Only used in master mode. This interrupt is generated when number of entries in IBI
 *  buffer is greater than or equal to threshold value specified by IBI_BUF_THLD field
 *  in BUFFER_THLD_CTRL register. This interrupt will be cleared automatically when
 *  number of entries in IBI buffer is less than threshold value.
 */
#define I3C_MST_IBI_STATUS_THLD_INT_ST    (BIT(2))
#define I3C_MST_IBI_STATUS_THLD_INT_ST_M  (I3C_MST_IBI_STATUS_THLD_INT_ST_V << I3C_MST_IBI_STATUS_THLD_INT_ST_S)
#define I3C_MST_IBI_STATUS_THLD_INT_ST_V  0x00000001U
#define I3C_MST_IBI_STATUS_THLD_INT_ST_S  2
/** I3C_MST_CMD_BUF_EMPTY_THLD_INT_ST : RO; bitpos: [3]; default: 0;
 *  This interrupt is generated when number of empty locations in command buffer is
 *  greater than or equal to threshold value specified by CMD_EMPTY_BUF_THLD field in
 *  BUFFER_THLD_CTRL register. This interrupt will be cleared automatically when number
 *  of empty locations in command buffer is less than threshold value.
 */
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_ST    (BIT(3))
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_ST_M  (I3C_MST_CMD_BUF_EMPTY_THLD_INT_ST_V << I3C_MST_CMD_BUF_EMPTY_THLD_INT_ST_S)
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_ST_V  0x00000001U
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_ST_S  3
/** I3C_MST_RESP_READY_INT_ST : RO; bitpos: [4]; default: 0;
 *  This interrupt is generated when number of entries in response buffer is greater
 *  than or equal to threshold value specified by RESP_BUF_THLD field in
 *  BUFFER_THLD_CTRL register. This interrupt will be cleared automatically when number
 *  of entries in response buffer is less than threshold value.
 */
#define I3C_MST_RESP_READY_INT_ST    (BIT(4))
#define I3C_MST_RESP_READY_INT_ST_M  (I3C_MST_RESP_READY_INT_ST_V << I3C_MST_RESP_READY_INT_ST_S)
#define I3C_MST_RESP_READY_INT_ST_V  0x00000001U
#define I3C_MST_RESP_READY_INT_ST_S  4
/** I3C_MST_NXT_CMD_REQ_ERR_INT_ST : RO; bitpos: [5]; default: 0;
 *  This interrupt is generated if toc is 0(master will restart next command), but
 *  command buf is empty.
 */
#define I3C_MST_NXT_CMD_REQ_ERR_INT_ST    (BIT(5))
#define I3C_MST_NXT_CMD_REQ_ERR_INT_ST_M  (I3C_MST_NXT_CMD_REQ_ERR_INT_ST_V << I3C_MST_NXT_CMD_REQ_ERR_INT_ST_S)
#define I3C_MST_NXT_CMD_REQ_ERR_INT_ST_V  0x00000001U
#define I3C_MST_NXT_CMD_REQ_ERR_INT_ST_S  5
/** I3C_MST_TRANSFER_ERR_INT_ST : RO; bitpos: [6]; default: 0;
 *  This interrupt is generated if any error occurs during transfer. The error type
 *  will be specified in the response packet associated with the command (in ERR_STATUS
 *  field of RESPONSE_BUFFER_PORT register). This bit can be cleared by writing 1'h1.
 */
#define I3C_MST_TRANSFER_ERR_INT_ST    (BIT(6))
#define I3C_MST_TRANSFER_ERR_INT_ST_M  (I3C_MST_TRANSFER_ERR_INT_ST_V << I3C_MST_TRANSFER_ERR_INT_ST_S)
#define I3C_MST_TRANSFER_ERR_INT_ST_V  0x00000001U
#define I3C_MST_TRANSFER_ERR_INT_ST_S  6
/** I3C_MST_TRANSFER_COMPLETE_INT_ST : RO; bitpos: [7]; default: 0;
 *  NA
 */
#define I3C_MST_TRANSFER_COMPLETE_INT_ST    (BIT(7))
#define I3C_MST_TRANSFER_COMPLETE_INT_ST_M  (I3C_MST_TRANSFER_COMPLETE_INT_ST_V << I3C_MST_TRANSFER_COMPLETE_INT_ST_S)
#define I3C_MST_TRANSFER_COMPLETE_INT_ST_V  0x00000001U
#define I3C_MST_TRANSFER_COMPLETE_INT_ST_S  7
/** I3C_MST_COMMAND_DONE_INT_ST : RO; bitpos: [8]; default: 0;
 *  NA
 */
#define I3C_MST_COMMAND_DONE_INT_ST    (BIT(8))
#define I3C_MST_COMMAND_DONE_INT_ST_M  (I3C_MST_COMMAND_DONE_INT_ST_V << I3C_MST_COMMAND_DONE_INT_ST_S)
#define I3C_MST_COMMAND_DONE_INT_ST_V  0x00000001U
#define I3C_MST_COMMAND_DONE_INT_ST_S  8
/** I3C_MST_DETECT_START_INT_ST : RO; bitpos: [9]; default: 0;
 *  NA
 */
#define I3C_MST_DETECT_START_INT_ST    (BIT(9))
#define I3C_MST_DETECT_START_INT_ST_M  (I3C_MST_DETECT_START_INT_ST_V << I3C_MST_DETECT_START_INT_ST_S)
#define I3C_MST_DETECT_START_INT_ST_V  0x00000001U
#define I3C_MST_DETECT_START_INT_ST_S  9
/** I3C_MST_RESP_BUF_OVF_INT_ST : RO; bitpos: [10]; default: 0;
 *  NA
 */
#define I3C_MST_RESP_BUF_OVF_INT_ST    (BIT(10))
#define I3C_MST_RESP_BUF_OVF_INT_ST_M  (I3C_MST_RESP_BUF_OVF_INT_ST_V << I3C_MST_RESP_BUF_OVF_INT_ST_S)
#define I3C_MST_RESP_BUF_OVF_INT_ST_V  0x00000001U
#define I3C_MST_RESP_BUF_OVF_INT_ST_S  10
/** I3C_MST_IBI_DATA_BUF_OVF_INT_ST : RO; bitpos: [11]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_DATA_BUF_OVF_INT_ST    (BIT(11))
#define I3C_MST_IBI_DATA_BUF_OVF_INT_ST_M  (I3C_MST_IBI_DATA_BUF_OVF_INT_ST_V << I3C_MST_IBI_DATA_BUF_OVF_INT_ST_S)
#define I3C_MST_IBI_DATA_BUF_OVF_INT_ST_V  0x00000001U
#define I3C_MST_IBI_DATA_BUF_OVF_INT_ST_S  11
/** I3C_MST_IBI_STATUS_BUF_OVF_INT_ST : RO; bitpos: [12]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_ST    (BIT(12))
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_ST_M  (I3C_MST_IBI_STATUS_BUF_OVF_INT_ST_V << I3C_MST_IBI_STATUS_BUF_OVF_INT_ST_S)
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_ST_V  0x00000001U
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_ST_S  12
/** I3C_MST_IBI_HANDLE_DONE_INT_ST : RO; bitpos: [13]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_HANDLE_DONE_INT_ST    (BIT(13))
#define I3C_MST_IBI_HANDLE_DONE_INT_ST_M  (I3C_MST_IBI_HANDLE_DONE_INT_ST_V << I3C_MST_IBI_HANDLE_DONE_INT_ST_S)
#define I3C_MST_IBI_HANDLE_DONE_INT_ST_V  0x00000001U
#define I3C_MST_IBI_HANDLE_DONE_INT_ST_S  13
/** I3C_MST_IBI_DETECT_INT_ST : RO; bitpos: [14]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_DETECT_INT_ST    (BIT(14))
#define I3C_MST_IBI_DETECT_INT_ST_M  (I3C_MST_IBI_DETECT_INT_ST_V << I3C_MST_IBI_DETECT_INT_ST_S)
#define I3C_MST_IBI_DETECT_INT_ST_V  0x00000001U
#define I3C_MST_IBI_DETECT_INT_ST_S  14
/** I3C_MST_CMD_CCC_MISMATCH_INT_ST : RO; bitpos: [15]; default: 0;
 *  NA
 */
#define I3C_MST_CMD_CCC_MISMATCH_INT_ST    (BIT(15))
#define I3C_MST_CMD_CCC_MISMATCH_INT_ST_M  (I3C_MST_CMD_CCC_MISMATCH_INT_ST_V << I3C_MST_CMD_CCC_MISMATCH_INT_ST_S)
#define I3C_MST_CMD_CCC_MISMATCH_INT_ST_V  0x00000001U
#define I3C_MST_CMD_CCC_MISMATCH_INT_ST_S  15

/** I3C_MST_INT_ST_ENA_REG register
 *  The Interrupt status will be updated in INTR_STATUS register if corresponding
 *  Status Enable bit set.
 */
#define I3C_MST_INT_ST_ENA_REG (DR_REG_I3C_MST_BASE + 0x3c)
/** I3C_MST_TX_DATA_BUF_THLD_INT_ENA : R/W; bitpos: [0]; default: 0;
 *  Transmit Buffer threshold status enable.
 */
#define I3C_MST_TX_DATA_BUF_THLD_INT_ENA    (BIT(0))
#define I3C_MST_TX_DATA_BUF_THLD_INT_ENA_M  (I3C_MST_TX_DATA_BUF_THLD_INT_ENA_V << I3C_MST_TX_DATA_BUF_THLD_INT_ENA_S)
#define I3C_MST_TX_DATA_BUF_THLD_INT_ENA_V  0x00000001U
#define I3C_MST_TX_DATA_BUF_THLD_INT_ENA_S  0
/** I3C_MST_RX_DATA_BUF_THLD_INT_ENA : R/W; bitpos: [1]; default: 0;
 *  Receive Buffer threshold status enable.
 */
#define I3C_MST_RX_DATA_BUF_THLD_INT_ENA    (BIT(1))
#define I3C_MST_RX_DATA_BUF_THLD_INT_ENA_M  (I3C_MST_RX_DATA_BUF_THLD_INT_ENA_V << I3C_MST_RX_DATA_BUF_THLD_INT_ENA_S)
#define I3C_MST_RX_DATA_BUF_THLD_INT_ENA_V  0x00000001U
#define I3C_MST_RX_DATA_BUF_THLD_INT_ENA_S  1
/** I3C_MST_IBI_STATUS_THLD_INT_ENA : R/W; bitpos: [2]; default: 0;
 *  Only used in master mode. IBI Buffer threshold status enable.
 */
#define I3C_MST_IBI_STATUS_THLD_INT_ENA    (BIT(2))
#define I3C_MST_IBI_STATUS_THLD_INT_ENA_M  (I3C_MST_IBI_STATUS_THLD_INT_ENA_V << I3C_MST_IBI_STATUS_THLD_INT_ENA_S)
#define I3C_MST_IBI_STATUS_THLD_INT_ENA_V  0x00000001U
#define I3C_MST_IBI_STATUS_THLD_INT_ENA_S  2
/** I3C_MST_CMD_BUF_EMPTY_THLD_INT_ENA : R/W; bitpos: [3]; default: 0;
 *  Command buffer ready status enable.
 */
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_ENA    (BIT(3))
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_ENA_M  (I3C_MST_CMD_BUF_EMPTY_THLD_INT_ENA_V << I3C_MST_CMD_BUF_EMPTY_THLD_INT_ENA_S)
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_ENA_V  0x00000001U
#define I3C_MST_CMD_BUF_EMPTY_THLD_INT_ENA_S  3
/** I3C_MST_RESP_READY_INT_ENA : R/W; bitpos: [4]; default: 0;
 *  Response buffer ready status enable.
 */
#define I3C_MST_RESP_READY_INT_ENA    (BIT(4))
#define I3C_MST_RESP_READY_INT_ENA_M  (I3C_MST_RESP_READY_INT_ENA_V << I3C_MST_RESP_READY_INT_ENA_S)
#define I3C_MST_RESP_READY_INT_ENA_V  0x00000001U
#define I3C_MST_RESP_READY_INT_ENA_S  4
/** I3C_MST_NXT_CMD_REQ_ERR_INT_ENA : R/W; bitpos: [5]; default: 0;
 *  next command request error status enable
 */
#define I3C_MST_NXT_CMD_REQ_ERR_INT_ENA    (BIT(5))
#define I3C_MST_NXT_CMD_REQ_ERR_INT_ENA_M  (I3C_MST_NXT_CMD_REQ_ERR_INT_ENA_V << I3C_MST_NXT_CMD_REQ_ERR_INT_ENA_S)
#define I3C_MST_NXT_CMD_REQ_ERR_INT_ENA_V  0x00000001U
#define I3C_MST_NXT_CMD_REQ_ERR_INT_ENA_S  5
/** I3C_MST_TRANSFER_ERR_INT_ENA : R/W; bitpos: [6]; default: 0;
 *  Transfer error status enable
 */
#define I3C_MST_TRANSFER_ERR_INT_ENA    (BIT(6))
#define I3C_MST_TRANSFER_ERR_INT_ENA_M  (I3C_MST_TRANSFER_ERR_INT_ENA_V << I3C_MST_TRANSFER_ERR_INT_ENA_S)
#define I3C_MST_TRANSFER_ERR_INT_ENA_V  0x00000001U
#define I3C_MST_TRANSFER_ERR_INT_ENA_S  6
/** I3C_MST_TRANSFER_COMPLETE_INT_ENA : R/W; bitpos: [7]; default: 0;
 *  NA
 */
#define I3C_MST_TRANSFER_COMPLETE_INT_ENA    (BIT(7))
#define I3C_MST_TRANSFER_COMPLETE_INT_ENA_M  (I3C_MST_TRANSFER_COMPLETE_INT_ENA_V << I3C_MST_TRANSFER_COMPLETE_INT_ENA_S)
#define I3C_MST_TRANSFER_COMPLETE_INT_ENA_V  0x00000001U
#define I3C_MST_TRANSFER_COMPLETE_INT_ENA_S  7
/** I3C_MST_COMMAND_DONE_INT_ENA : R/W; bitpos: [8]; default: 0;
 *  NA
 */
#define I3C_MST_COMMAND_DONE_INT_ENA    (BIT(8))
#define I3C_MST_COMMAND_DONE_INT_ENA_M  (I3C_MST_COMMAND_DONE_INT_ENA_V << I3C_MST_COMMAND_DONE_INT_ENA_S)
#define I3C_MST_COMMAND_DONE_INT_ENA_V  0x00000001U
#define I3C_MST_COMMAND_DONE_INT_ENA_S  8
/** I3C_MST_DETECT_START_INT_ENA : R/W; bitpos: [9]; default: 0;
 *  NA
 */
#define I3C_MST_DETECT_START_INT_ENA    (BIT(9))
#define I3C_MST_DETECT_START_INT_ENA_M  (I3C_MST_DETECT_START_INT_ENA_V << I3C_MST_DETECT_START_INT_ENA_S)
#define I3C_MST_DETECT_START_INT_ENA_V  0x00000001U
#define I3C_MST_DETECT_START_INT_ENA_S  9
/** I3C_MST_RESP_BUF_OVF_INT_ENA : R/W; bitpos: [10]; default: 0;
 *  NA
 */
#define I3C_MST_RESP_BUF_OVF_INT_ENA    (BIT(10))
#define I3C_MST_RESP_BUF_OVF_INT_ENA_M  (I3C_MST_RESP_BUF_OVF_INT_ENA_V << I3C_MST_RESP_BUF_OVF_INT_ENA_S)
#define I3C_MST_RESP_BUF_OVF_INT_ENA_V  0x00000001U
#define I3C_MST_RESP_BUF_OVF_INT_ENA_S  10
/** I3C_MST_IBI_DATA_BUF_OVF_INT_ENA : R/W; bitpos: [11]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_DATA_BUF_OVF_INT_ENA    (BIT(11))
#define I3C_MST_IBI_DATA_BUF_OVF_INT_ENA_M  (I3C_MST_IBI_DATA_BUF_OVF_INT_ENA_V << I3C_MST_IBI_DATA_BUF_OVF_INT_ENA_S)
#define I3C_MST_IBI_DATA_BUF_OVF_INT_ENA_V  0x00000001U
#define I3C_MST_IBI_DATA_BUF_OVF_INT_ENA_S  11
/** I3C_MST_IBI_STATUS_BUF_OVF_INT_ENA : R/W; bitpos: [12]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_ENA    (BIT(12))
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_ENA_M  (I3C_MST_IBI_STATUS_BUF_OVF_INT_ENA_V << I3C_MST_IBI_STATUS_BUF_OVF_INT_ENA_S)
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_ENA_V  0x00000001U
#define I3C_MST_IBI_STATUS_BUF_OVF_INT_ENA_S  12
/** I3C_MST_IBI_HANDLE_DONE_INT_ENA : R/W; bitpos: [13]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_HANDLE_DONE_INT_ENA    (BIT(13))
#define I3C_MST_IBI_HANDLE_DONE_INT_ENA_M  (I3C_MST_IBI_HANDLE_DONE_INT_ENA_V << I3C_MST_IBI_HANDLE_DONE_INT_ENA_S)
#define I3C_MST_IBI_HANDLE_DONE_INT_ENA_V  0x00000001U
#define I3C_MST_IBI_HANDLE_DONE_INT_ENA_S  13
/** I3C_MST_IBI_DETECT_INT_ENA : R/W; bitpos: [14]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_DETECT_INT_ENA    (BIT(14))
#define I3C_MST_IBI_DETECT_INT_ENA_M  (I3C_MST_IBI_DETECT_INT_ENA_V << I3C_MST_IBI_DETECT_INT_ENA_S)
#define I3C_MST_IBI_DETECT_INT_ENA_V  0x00000001U
#define I3C_MST_IBI_DETECT_INT_ENA_S  14
/** I3C_MST_CMD_CCC_MISMATCH_INT_ENA : R/W; bitpos: [15]; default: 0;
 *  NA
 */
#define I3C_MST_CMD_CCC_MISMATCH_INT_ENA    (BIT(15))
#define I3C_MST_CMD_CCC_MISMATCH_INT_ENA_M  (I3C_MST_CMD_CCC_MISMATCH_INT_ENA_V << I3C_MST_CMD_CCC_MISMATCH_INT_ENA_S)
#define I3C_MST_CMD_CCC_MISMATCH_INT_ENA_V  0x00000001U
#define I3C_MST_CMD_CCC_MISMATCH_INT_ENA_S  15

/** I3C_MST_RESET_CTRL_REG register
 *  NA
 */
#define I3C_MST_RESET_CTRL_REG (DR_REG_I3C_MST_BASE + 0x44)
/** I3C_MST_REG_CORE_SOFT_RST : WT; bitpos: [0]; default: 0;
 *  NA
 */
#define I3C_MST_REG_CORE_SOFT_RST    (BIT(0))
#define I3C_MST_REG_CORE_SOFT_RST_M  (I3C_MST_REG_CORE_SOFT_RST_V << I3C_MST_REG_CORE_SOFT_RST_S)
#define I3C_MST_REG_CORE_SOFT_RST_V  0x00000001U
#define I3C_MST_REG_CORE_SOFT_RST_S  0
/** I3C_MST_REG_CMD_BUF_RST : R/W; bitpos: [1]; default: 0;
 *  NA
 */
#define I3C_MST_REG_CMD_BUF_RST    (BIT(1))
#define I3C_MST_REG_CMD_BUF_RST_M  (I3C_MST_REG_CMD_BUF_RST_V << I3C_MST_REG_CMD_BUF_RST_S)
#define I3C_MST_REG_CMD_BUF_RST_V  0x00000001U
#define I3C_MST_REG_CMD_BUF_RST_S  1
/** I3C_MST_REG_RESP_BUF_RST : R/W; bitpos: [2]; default: 0;
 *  NA
 */
#define I3C_MST_REG_RESP_BUF_RST    (BIT(2))
#define I3C_MST_REG_RESP_BUF_RST_M  (I3C_MST_REG_RESP_BUF_RST_V << I3C_MST_REG_RESP_BUF_RST_S)
#define I3C_MST_REG_RESP_BUF_RST_V  0x00000001U
#define I3C_MST_REG_RESP_BUF_RST_S  2
/** I3C_MST_REG_TX_DATA_BUF_BUF_RST : R/W; bitpos: [3]; default: 0;
 *  NA
 */
#define I3C_MST_REG_TX_DATA_BUF_BUF_RST    (BIT(3))
#define I3C_MST_REG_TX_DATA_BUF_BUF_RST_M  (I3C_MST_REG_TX_DATA_BUF_BUF_RST_V << I3C_MST_REG_TX_DATA_BUF_BUF_RST_S)
#define I3C_MST_REG_TX_DATA_BUF_BUF_RST_V  0x00000001U
#define I3C_MST_REG_TX_DATA_BUF_BUF_RST_S  3
/** I3C_MST_REG_RX_DATA_BUF_RST : R/W; bitpos: [4]; default: 0;
 *  NA
 */
#define I3C_MST_REG_RX_DATA_BUF_RST    (BIT(4))
#define I3C_MST_REG_RX_DATA_BUF_RST_M  (I3C_MST_REG_RX_DATA_BUF_RST_V << I3C_MST_REG_RX_DATA_BUF_RST_S)
#define I3C_MST_REG_RX_DATA_BUF_RST_V  0x00000001U
#define I3C_MST_REG_RX_DATA_BUF_RST_S  4
/** I3C_MST_REG_IBI_DATA_BUF_RST : R/W; bitpos: [5]; default: 0;
 *  NA
 */
#define I3C_MST_REG_IBI_DATA_BUF_RST    (BIT(5))
#define I3C_MST_REG_IBI_DATA_BUF_RST_M  (I3C_MST_REG_IBI_DATA_BUF_RST_V << I3C_MST_REG_IBI_DATA_BUF_RST_S)
#define I3C_MST_REG_IBI_DATA_BUF_RST_V  0x00000001U
#define I3C_MST_REG_IBI_DATA_BUF_RST_S  5
/** I3C_MST_REG_IBI_STATUS_BUF_RST : R/W; bitpos: [6]; default: 0;
 *  NA
 */
#define I3C_MST_REG_IBI_STATUS_BUF_RST    (BIT(6))
#define I3C_MST_REG_IBI_STATUS_BUF_RST_M  (I3C_MST_REG_IBI_STATUS_BUF_RST_V << I3C_MST_REG_IBI_STATUS_BUF_RST_S)
#define I3C_MST_REG_IBI_STATUS_BUF_RST_V  0x00000001U
#define I3C_MST_REG_IBI_STATUS_BUF_RST_S  6

/** I3C_MST_BUFFER_STATUS_LEVEL_REG register
 *  BUFFER_STATUS_LEVEL reflects the status level of Buffers in the controller.
 */
#define I3C_MST_BUFFER_STATUS_LEVEL_REG (DR_REG_I3C_MST_BASE + 0x48)
/** I3C_MST_CMD_BUF_EMPTY_CNT : RO; bitpos: [4:0]; default: 16;
 *  Command Buffer Empty Locations contains the number of empty locations in the
 *  command buffer.
 */
#define I3C_MST_CMD_BUF_EMPTY_CNT    0x0000001FU
#define I3C_MST_CMD_BUF_EMPTY_CNT_M  (I3C_MST_CMD_BUF_EMPTY_CNT_V << I3C_MST_CMD_BUF_EMPTY_CNT_S)
#define I3C_MST_CMD_BUF_EMPTY_CNT_V  0x0000001FU
#define I3C_MST_CMD_BUF_EMPTY_CNT_S  0
/** I3C_MST_RESP_BUF_CNT : RO; bitpos: [11:8]; default: 0;
 *  Response Buffer Level Value contains the number of valid data entries in the
 *  response buffer.
 */
#define I3C_MST_RESP_BUF_CNT    0x0000000FU
#define I3C_MST_RESP_BUF_CNT_M  (I3C_MST_RESP_BUF_CNT_V << I3C_MST_RESP_BUF_CNT_S)
#define I3C_MST_RESP_BUF_CNT_V  0x0000000FU
#define I3C_MST_RESP_BUF_CNT_S  8
/** I3C_MST_IBI_DATA_BUF_CNT : RO; bitpos: [19:16]; default: 0;
 *  IBI Buffer Level Value contains the number of valid entries in the IBI Buffer. This
 *  is field is used in master mode.
 */
#define I3C_MST_IBI_DATA_BUF_CNT    0x0000000FU
#define I3C_MST_IBI_DATA_BUF_CNT_M  (I3C_MST_IBI_DATA_BUF_CNT_V << I3C_MST_IBI_DATA_BUF_CNT_S)
#define I3C_MST_IBI_DATA_BUF_CNT_V  0x0000000FU
#define I3C_MST_IBI_DATA_BUF_CNT_S  16
/** I3C_MST_IBI_STATUS_BUF_CNT : RO; bitpos: [27:24]; default: 0;
 *  IBI Buffer Status Count contains the number of IBI status entries in the IBI
 *  Buffer. This field is used in master mode.
 */
#define I3C_MST_IBI_STATUS_BUF_CNT    0x0000000FU
#define I3C_MST_IBI_STATUS_BUF_CNT_M  (I3C_MST_IBI_STATUS_BUF_CNT_V << I3C_MST_IBI_STATUS_BUF_CNT_S)
#define I3C_MST_IBI_STATUS_BUF_CNT_V  0x0000000FU
#define I3C_MST_IBI_STATUS_BUF_CNT_S  24

/** I3C_MST_DATA_BUFFER_STATUS_LEVEL_REG register
 *  DATA_BUFFER_STATUS_LEVEL reflects the status level of the Buffers in the controller.
 */
#define I3C_MST_DATA_BUFFER_STATUS_LEVEL_REG (DR_REG_I3C_MST_BASE + 0x4c)
/** I3C_MST_TX_DATA_BUF_EMPTY_CNT : RO; bitpos: [5:0]; default: 32;
 *  Transmit Buffer Empty Level Value contains the number of empty locations in the
 *  transmit Buffer.
 */
#define I3C_MST_TX_DATA_BUF_EMPTY_CNT    0x0000003FU
#define I3C_MST_TX_DATA_BUF_EMPTY_CNT_M  (I3C_MST_TX_DATA_BUF_EMPTY_CNT_V << I3C_MST_TX_DATA_BUF_EMPTY_CNT_S)
#define I3C_MST_TX_DATA_BUF_EMPTY_CNT_V  0x0000003FU
#define I3C_MST_TX_DATA_BUF_EMPTY_CNT_S  0
/** I3C_MST_RX_DATA_BUF_CNT : RO; bitpos: [21:16]; default: 0;
 *  Receive Buffer Level value contains the number of valid data entries in the receive
 *  buffer.
 */
#define I3C_MST_RX_DATA_BUF_CNT    0x0000003FU
#define I3C_MST_RX_DATA_BUF_CNT_M  (I3C_MST_RX_DATA_BUF_CNT_V << I3C_MST_RX_DATA_BUF_CNT_S)
#define I3C_MST_RX_DATA_BUF_CNT_V  0x0000003FU
#define I3C_MST_RX_DATA_BUF_CNT_S  16

/** I3C_MST_PRESENT_STATE0_REG register
 *  NA
 */
#define I3C_MST_PRESENT_STATE0_REG (DR_REG_I3C_MST_BASE + 0x50)
/** I3C_MST_SDA_LVL : RO; bitpos: [0]; default: 1;
 *  This bit is used to check the SCL line level to recover from error and  for
 *  debugging. This bit reflects the value of synchronized scl_in_a.
 */
#define I3C_MST_SDA_LVL    (BIT(0))
#define I3C_MST_SDA_LVL_M  (I3C_MST_SDA_LVL_V << I3C_MST_SDA_LVL_S)
#define I3C_MST_SDA_LVL_V  0x00000001U
#define I3C_MST_SDA_LVL_S  0
/** I3C_MST_SCL_LVL : RO; bitpos: [1]; default: 1;
 *  This bit is used to check the SDA line level to recover from error and  for
 *  debugging. This bit reflects the value of synchronized sda_in_a.
 */
#define I3C_MST_SCL_LVL    (BIT(1))
#define I3C_MST_SCL_LVL_M  (I3C_MST_SCL_LVL_V << I3C_MST_SCL_LVL_S)
#define I3C_MST_SCL_LVL_V  0x00000001U
#define I3C_MST_SCL_LVL_S  1
/** I3C_MST_BUS_BUSY : RO; bitpos: [2]; default: 0;
 *  NA
 */
#define I3C_MST_BUS_BUSY    (BIT(2))
#define I3C_MST_BUS_BUSY_M  (I3C_MST_BUS_BUSY_V << I3C_MST_BUS_BUSY_S)
#define I3C_MST_BUS_BUSY_V  0x00000001U
#define I3C_MST_BUS_BUSY_S  2
/** I3C_MST_BUS_FREE : RO; bitpos: [3]; default: 0;
 *  NA
 */
#define I3C_MST_BUS_FREE    (BIT(3))
#define I3C_MST_BUS_FREE_M  (I3C_MST_BUS_FREE_V << I3C_MST_BUS_FREE_S)
#define I3C_MST_BUS_FREE_V  0x00000001U
#define I3C_MST_BUS_FREE_S  3
/** I3C_MST_CMD_TID : RO; bitpos: [12:9]; default: 0;
 *  NA
 */
#define I3C_MST_CMD_TID    0x0000000FU
#define I3C_MST_CMD_TID_M  (I3C_MST_CMD_TID_V << I3C_MST_CMD_TID_S)
#define I3C_MST_CMD_TID_V  0x0000000FU
#define I3C_MST_CMD_TID_S  9
/** I3C_MST_SCL_GEN_FSM_STATE : RO; bitpos: [15:13]; default: 0;
 *  NA
 */
#define I3C_MST_SCL_GEN_FSM_STATE    0x00000007U
#define I3C_MST_SCL_GEN_FSM_STATE_M  (I3C_MST_SCL_GEN_FSM_STATE_V << I3C_MST_SCL_GEN_FSM_STATE_S)
#define I3C_MST_SCL_GEN_FSM_STATE_V  0x00000007U
#define I3C_MST_SCL_GEN_FSM_STATE_S  13
/** I3C_MST_IBI_EV_HANDLE_FSM_STATE : RO; bitpos: [18:16]; default: 0;
 *  NA
 */
#define I3C_MST_IBI_EV_HANDLE_FSM_STATE    0x00000007U
#define I3C_MST_IBI_EV_HANDLE_FSM_STATE_M  (I3C_MST_IBI_EV_HANDLE_FSM_STATE_V << I3C_MST_IBI_EV_HANDLE_FSM_STATE_S)
#define I3C_MST_IBI_EV_HANDLE_FSM_STATE_V  0x00000007U
#define I3C_MST_IBI_EV_HANDLE_FSM_STATE_S  16
/** I3C_MST_I2C_MODE_FSM_STATE : RO; bitpos: [21:19]; default: 0;
 *  NA
 */
#define I3C_MST_I2C_MODE_FSM_STATE    0x00000007U
#define I3C_MST_I2C_MODE_FSM_STATE_M  (I3C_MST_I2C_MODE_FSM_STATE_V << I3C_MST_I2C_MODE_FSM_STATE_S)
#define I3C_MST_I2C_MODE_FSM_STATE_V  0x00000007U
#define I3C_MST_I2C_MODE_FSM_STATE_S  19
/** I3C_MST_SDR_MODE_FSM_STATE : RO; bitpos: [25:22]; default: 0;
 *  NA
 */
#define I3C_MST_SDR_MODE_FSM_STATE    0x0000000FU
#define I3C_MST_SDR_MODE_FSM_STATE_M  (I3C_MST_SDR_MODE_FSM_STATE_V << I3C_MST_SDR_MODE_FSM_STATE_S)
#define I3C_MST_SDR_MODE_FSM_STATE_V  0x0000000FU
#define I3C_MST_SDR_MODE_FSM_STATE_S  22
/** I3C_MST_DAA_MODE_FSM_STATE : RO; bitpos: [28:26]; default: 0;
 *  Reflects whether the Master Controller is in IDLE or not. This bit will be set when
 *  all the buffer(Command, Response, IBI, Transmit, Receive) are empty along with the
 *  Master State machine is in idle state. 0X0: not in idle  0x1: in idle
 */
#define I3C_MST_DAA_MODE_FSM_STATE    0x00000007U
#define I3C_MST_DAA_MODE_FSM_STATE_M  (I3C_MST_DAA_MODE_FSM_STATE_V << I3C_MST_DAA_MODE_FSM_STATE_S)
#define I3C_MST_DAA_MODE_FSM_STATE_V  0x00000007U
#define I3C_MST_DAA_MODE_FSM_STATE_S  26
/** I3C_MST_MAIN_FSM_STATE : RO; bitpos: [31:29]; default: 0;
 *  NA
 */
#define I3C_MST_MAIN_FSM_STATE    0x00000007U
#define I3C_MST_MAIN_FSM_STATE_M  (I3C_MST_MAIN_FSM_STATE_V << I3C_MST_MAIN_FSM_STATE_S)
#define I3C_MST_MAIN_FSM_STATE_V  0x00000007U
#define I3C_MST_MAIN_FSM_STATE_S  29

/** I3C_MST_PRESENT_STATE1_REG register
 *  NA
 */
#define I3C_MST_PRESENT_STATE1_REG (DR_REG_I3C_MST_BASE + 0x54)
/** I3C_MST_DATA_BYTE_CNT : RO; bitpos: [15:0]; default: 0;
 *  Present transfer data byte cnt: tx data byte cnt if write  rx data byte cnt if read
 *  ibi data byte cnt if IBI handle.
 */
#define I3C_MST_DATA_BYTE_CNT    0x0000FFFFU
#define I3C_MST_DATA_BYTE_CNT_M  (I3C_MST_DATA_BYTE_CNT_V << I3C_MST_DATA_BYTE_CNT_S)
#define I3C_MST_DATA_BYTE_CNT_V  0x0000FFFFU
#define I3C_MST_DATA_BYTE_CNT_S  0

/** I3C_MST_DEVICE_TABLE_REG register
 *  Pointer for Device Address Table
 */
#define I3C_MST_DEVICE_TABLE_REG (DR_REG_I3C_MST_BASE + 0x58)
/** I3C_MST_REG_DCT_DAA_INIT_INDEX : R/W; bitpos: [3:0]; default: 0;
 *  Reserved
 */
#define I3C_MST_REG_DCT_DAA_INIT_INDEX    0x0000000FU
#define I3C_MST_REG_DCT_DAA_INIT_INDEX_M  (I3C_MST_REG_DCT_DAA_INIT_INDEX_V << I3C_MST_REG_DCT_DAA_INIT_INDEX_S)
#define I3C_MST_REG_DCT_DAA_INIT_INDEX_V  0x0000000FU
#define I3C_MST_REG_DCT_DAA_INIT_INDEX_S  0
/** I3C_MST_REG_DAT_DAA_INIT_INDEX : R/W; bitpos: [7:4]; default: 0;
 *  NA
 */
#define I3C_MST_REG_DAT_DAA_INIT_INDEX    0x0000000FU
#define I3C_MST_REG_DAT_DAA_INIT_INDEX_M  (I3C_MST_REG_DAT_DAA_INIT_INDEX_V << I3C_MST_REG_DAT_DAA_INIT_INDEX_S)
#define I3C_MST_REG_DAT_DAA_INIT_INDEX_V  0x0000000FU
#define I3C_MST_REG_DAT_DAA_INIT_INDEX_S  4
/** I3C_MST_PRESENT_DCT_INDEX : RO; bitpos: [11:8]; default: 0;
 *  NA
 */
#define I3C_MST_PRESENT_DCT_INDEX    0x0000000FU
#define I3C_MST_PRESENT_DCT_INDEX_M  (I3C_MST_PRESENT_DCT_INDEX_V << I3C_MST_PRESENT_DCT_INDEX_S)
#define I3C_MST_PRESENT_DCT_INDEX_V  0x0000000FU
#define I3C_MST_PRESENT_DCT_INDEX_S  8
/** I3C_MST_PRESENT_DAT_INDEX : RO; bitpos: [15:12]; default: 0;
 *  NA
 */
#define I3C_MST_PRESENT_DAT_INDEX    0x0000000FU
#define I3C_MST_PRESENT_DAT_INDEX_M  (I3C_MST_PRESENT_DAT_INDEX_V << I3C_MST_PRESENT_DAT_INDEX_S)
#define I3C_MST_PRESENT_DAT_INDEX_V  0x0000000FU
#define I3C_MST_PRESENT_DAT_INDEX_S  12

/** I3C_MST_TIME_OUT_VALUE_REG register
 *  NA
 */
#define I3C_MST_TIME_OUT_VALUE_REG (DR_REG_I3C_MST_BASE + 0x5c)
/** I3C_MST_REG_RESP_BUF_TO_VALUE : R/W; bitpos: [4:0]; default: 16;
 *  NA
 */
#define I3C_MST_REG_RESP_BUF_TO_VALUE    0x0000001FU
#define I3C_MST_REG_RESP_BUF_TO_VALUE_M  (I3C_MST_REG_RESP_BUF_TO_VALUE_V << I3C_MST_REG_RESP_BUF_TO_VALUE_S)
#define I3C_MST_REG_RESP_BUF_TO_VALUE_V  0x0000001FU
#define I3C_MST_REG_RESP_BUF_TO_VALUE_S  0
/** I3C_MST_REG_RESP_BUF_TO_EN : R/W; bitpos: [5]; default: 0;
 *  NA
 */
#define I3C_MST_REG_RESP_BUF_TO_EN    (BIT(5))
#define I3C_MST_REG_RESP_BUF_TO_EN_M  (I3C_MST_REG_RESP_BUF_TO_EN_V << I3C_MST_REG_RESP_BUF_TO_EN_S)
#define I3C_MST_REG_RESP_BUF_TO_EN_V  0x00000001U
#define I3C_MST_REG_RESP_BUF_TO_EN_S  5
/** I3C_MST_REG_IBI_DATA_BUF_TO_VALUE : R/W; bitpos: [10:6]; default: 16;
 *  NA
 */
#define I3C_MST_REG_IBI_DATA_BUF_TO_VALUE    0x0000001FU
#define I3C_MST_REG_IBI_DATA_BUF_TO_VALUE_M  (I3C_MST_REG_IBI_DATA_BUF_TO_VALUE_V << I3C_MST_REG_IBI_DATA_BUF_TO_VALUE_S)
#define I3C_MST_REG_IBI_DATA_BUF_TO_VALUE_V  0x0000001FU
#define I3C_MST_REG_IBI_DATA_BUF_TO_VALUE_S  6
/** I3C_MST_REG_IBI_DATA_BUF_TO_EN : R/W; bitpos: [11]; default: 0;
 *  NA
 */
#define I3C_MST_REG_IBI_DATA_BUF_TO_EN    (BIT(11))
#define I3C_MST_REG_IBI_DATA_BUF_TO_EN_M  (I3C_MST_REG_IBI_DATA_BUF_TO_EN_V << I3C_MST_REG_IBI_DATA_BUF_TO_EN_S)
#define I3C_MST_REG_IBI_DATA_BUF_TO_EN_V  0x00000001U
#define I3C_MST_REG_IBI_DATA_BUF_TO_EN_S  11
/** I3C_MST_REG_IBI_STATUS_BUF_TO_VALUE : R/W; bitpos: [16:12]; default: 16;
 *  NA
 */
#define I3C_MST_REG_IBI_STATUS_BUF_TO_VALUE    0x0000001FU
#define I3C_MST_REG_IBI_STATUS_BUF_TO_VALUE_M  (I3C_MST_REG_IBI_STATUS_BUF_TO_VALUE_V << I3C_MST_REG_IBI_STATUS_BUF_TO_VALUE_S)
#define I3C_MST_REG_IBI_STATUS_BUF_TO_VALUE_V  0x0000001FU
#define I3C_MST_REG_IBI_STATUS_BUF_TO_VALUE_S  12
/** I3C_MST_REG_IBI_STATUS_BUF_TO_EN : R/W; bitpos: [17]; default: 0;
 *  NA
 */
#define I3C_MST_REG_IBI_STATUS_BUF_TO_EN    (BIT(17))
#define I3C_MST_REG_IBI_STATUS_BUF_TO_EN_M  (I3C_MST_REG_IBI_STATUS_BUF_TO_EN_V << I3C_MST_REG_IBI_STATUS_BUF_TO_EN_S)
#define I3C_MST_REG_IBI_STATUS_BUF_TO_EN_V  0x00000001U
#define I3C_MST_REG_IBI_STATUS_BUF_TO_EN_S  17
/** I3C_MST_REG_RX_DATA_BUF_TO_VALUE : R/W; bitpos: [22:18]; default: 16;
 *  NA
 */
#define I3C_MST_REG_RX_DATA_BUF_TO_VALUE    0x0000001FU
#define I3C_MST_REG_RX_DATA_BUF_TO_VALUE_M  (I3C_MST_REG_RX_DATA_BUF_TO_VALUE_V << I3C_MST_REG_RX_DATA_BUF_TO_VALUE_S)
#define I3C_MST_REG_RX_DATA_BUF_TO_VALUE_V  0x0000001FU
#define I3C_MST_REG_RX_DATA_BUF_TO_VALUE_S  18
/** I3C_MST_REG_RX_DATA_BUF_TO_EN : R/W; bitpos: [23]; default: 0;
 *  NA
 */
#define I3C_MST_REG_RX_DATA_BUF_TO_EN    (BIT(23))
#define I3C_MST_REG_RX_DATA_BUF_TO_EN_M  (I3C_MST_REG_RX_DATA_BUF_TO_EN_V << I3C_MST_REG_RX_DATA_BUF_TO_EN_S)
#define I3C_MST_REG_RX_DATA_BUF_TO_EN_V  0x00000001U
#define I3C_MST_REG_RX_DATA_BUF_TO_EN_S  23

/** I3C_MST_SCL_I3C_MST_OD_TIME_REG register
 *  NA
 */
#define I3C_MST_SCL_I3C_MST_OD_TIME_REG (DR_REG_I3C_MST_BASE + 0x60)
/** I3C_MST_REG_I3C_MST_OD_LOW_PERIOD : R/W; bitpos: [15:0]; default: 25;
 *  SCL Open-Drain low count for I3C transfers targeted to I3C devices.
 */
#define I3C_MST_REG_I3C_MST_OD_LOW_PERIOD    0x0000FFFFU
#define I3C_MST_REG_I3C_MST_OD_LOW_PERIOD_M  (I3C_MST_REG_I3C_MST_OD_LOW_PERIOD_V << I3C_MST_REG_I3C_MST_OD_LOW_PERIOD_S)
#define I3C_MST_REG_I3C_MST_OD_LOW_PERIOD_V  0x0000FFFFU
#define I3C_MST_REG_I3C_MST_OD_LOW_PERIOD_S  0
/** I3C_MST_REG_I3C_MST_OD_HIGH_PERIOD : R/W; bitpos: [31:16]; default: 5;
 *  SCL Open-Drain High count for I3C transfers targeted to I3C devices.
 */
#define I3C_MST_REG_I3C_MST_OD_HIGH_PERIOD    0x0000FFFFU
#define I3C_MST_REG_I3C_MST_OD_HIGH_PERIOD_M  (I3C_MST_REG_I3C_MST_OD_HIGH_PERIOD_V << I3C_MST_REG_I3C_MST_OD_HIGH_PERIOD_S)
#define I3C_MST_REG_I3C_MST_OD_HIGH_PERIOD_V  0x0000FFFFU
#define I3C_MST_REG_I3C_MST_OD_HIGH_PERIOD_S  16

/** I3C_MST_SCL_I3C_MST_PP_TIME_REG register
 *  NA
 */
#define I3C_MST_SCL_I3C_MST_PP_TIME_REG (DR_REG_I3C_MST_BASE + 0x64)
/** I3C_MST_REG_I3C_MST_PP_LOW_PERIOD : R/W; bitpos: [7:0]; default: 5;
 *  NA
 */
#define I3C_MST_REG_I3C_MST_PP_LOW_PERIOD    0x000000FFU
#define I3C_MST_REG_I3C_MST_PP_LOW_PERIOD_M  (I3C_MST_REG_I3C_MST_PP_LOW_PERIOD_V << I3C_MST_REG_I3C_MST_PP_LOW_PERIOD_S)
#define I3C_MST_REG_I3C_MST_PP_LOW_PERIOD_V  0x000000FFU
#define I3C_MST_REG_I3C_MST_PP_LOW_PERIOD_S  0
/** I3C_MST_REG_I3C_MST_PP_HIGH_PERIOD : R/W; bitpos: [23:16]; default: 5;
 *  NA
 */
#define I3C_MST_REG_I3C_MST_PP_HIGH_PERIOD    0x000000FFU
#define I3C_MST_REG_I3C_MST_PP_HIGH_PERIOD_M  (I3C_MST_REG_I3C_MST_PP_HIGH_PERIOD_V << I3C_MST_REG_I3C_MST_PP_HIGH_PERIOD_S)
#define I3C_MST_REG_I3C_MST_PP_HIGH_PERIOD_V  0x000000FFU
#define I3C_MST_REG_I3C_MST_PP_HIGH_PERIOD_S  16

/** I3C_MST_SCL_I2C_FM_TIME_REG register
 *  NA
 */
#define I3C_MST_SCL_I2C_FM_TIME_REG (DR_REG_I3C_MST_BASE + 0x68)
/** I3C_MST_REG_I2C_FM_LOW_PERIOD : R/W; bitpos: [15:0]; default: 163;
 *  NA
 */
#define I3C_MST_REG_I2C_FM_LOW_PERIOD    0x0000FFFFU
#define I3C_MST_REG_I2C_FM_LOW_PERIOD_M  (I3C_MST_REG_I2C_FM_LOW_PERIOD_V << I3C_MST_REG_I2C_FM_LOW_PERIOD_S)
#define I3C_MST_REG_I2C_FM_LOW_PERIOD_V  0x0000FFFFU
#define I3C_MST_REG_I2C_FM_LOW_PERIOD_S  0
/** I3C_MST_REG_I2C_FM_HIGH_PERIOD : R/W; bitpos: [31:16]; default: 75;
 *  The SCL open-drain low count timing for I2C Fast Mode transfers.
 */
#define I3C_MST_REG_I2C_FM_HIGH_PERIOD    0x0000FFFFU
#define I3C_MST_REG_I2C_FM_HIGH_PERIOD_M  (I3C_MST_REG_I2C_FM_HIGH_PERIOD_V << I3C_MST_REG_I2C_FM_HIGH_PERIOD_S)
#define I3C_MST_REG_I2C_FM_HIGH_PERIOD_V  0x0000FFFFU
#define I3C_MST_REG_I2C_FM_HIGH_PERIOD_S  16

/** I3C_MST_SCL_I2C_FMP_TIME_REG register
 *  NA
 */
#define I3C_MST_SCL_I2C_FMP_TIME_REG (DR_REG_I3C_MST_BASE + 0x6c)
/** I3C_MST_REG_I2C_FMP_LOW_PERIOD : R/W; bitpos: [15:0]; default: 63;
 *  NA
 */
#define I3C_MST_REG_I2C_FMP_LOW_PERIOD    0x0000FFFFU
#define I3C_MST_REG_I2C_FMP_LOW_PERIOD_M  (I3C_MST_REG_I2C_FMP_LOW_PERIOD_V << I3C_MST_REG_I2C_FMP_LOW_PERIOD_S)
#define I3C_MST_REG_I2C_FMP_LOW_PERIOD_V  0x0000FFFFU
#define I3C_MST_REG_I2C_FMP_LOW_PERIOD_S  0
/** I3C_MST_REG_I2C_FMP_HIGH_PERIOD : R/W; bitpos: [23:16]; default: 33;
 *  NA
 */
#define I3C_MST_REG_I2C_FMP_HIGH_PERIOD    0x000000FFU
#define I3C_MST_REG_I2C_FMP_HIGH_PERIOD_M  (I3C_MST_REG_I2C_FMP_HIGH_PERIOD_V << I3C_MST_REG_I2C_FMP_HIGH_PERIOD_S)
#define I3C_MST_REG_I2C_FMP_HIGH_PERIOD_V  0x000000FFU
#define I3C_MST_REG_I2C_FMP_HIGH_PERIOD_S  16

/** I3C_MST_SCL_EXT_LOW_TIME_REG register
 *  NA
 */
#define I3C_MST_SCL_EXT_LOW_TIME_REG (DR_REG_I3C_MST_BASE + 0x70)
/** I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD1 : R/W; bitpos: [7:0]; default: 0;
 *  NA
 */
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD1    0x000000FFU
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD1_M  (I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD1_V << I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD1_S)
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD1_V  0x000000FFU
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD1_S  0
/** I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD2 : R/W; bitpos: [15:8]; default: 0;
 *  NA
 */
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD2    0x000000FFU
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD2_M  (I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD2_V << I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD2_S)
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD2_V  0x000000FFU
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD2_S  8
/** I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD3 : R/W; bitpos: [23:16]; default: 0;
 *  NA
 */
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD3    0x000000FFU
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD3_M  (I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD3_V << I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD3_S)
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD3_V  0x000000FFU
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD3_S  16
/** I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD4 : R/W; bitpos: [31:24]; default: 0;
 *  NA
 */
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD4    0x000000FFU
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD4_M  (I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD4_V << I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD4_S)
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD4_V  0x000000FFU
#define I3C_MST_REG_I3C_MST_EXT_LOW_PERIOD4_S  24

/** I3C_MST_SDA_SAMPLE_TIME_REG register
 *  NA
 */
#define I3C_MST_SDA_SAMPLE_TIME_REG (DR_REG_I3C_MST_BASE + 0x74)
/** I3C_MST_REG_SDA_OD_SAMPLE_TIME : R/W; bitpos: [8:0]; default: 0;
 *  It is used to adjust sda sample point when scl high under open drain speed
 */
#define I3C_MST_REG_SDA_OD_SAMPLE_TIME    0x000001FFU
#define I3C_MST_REG_SDA_OD_SAMPLE_TIME_M  (I3C_MST_REG_SDA_OD_SAMPLE_TIME_V << I3C_MST_REG_SDA_OD_SAMPLE_TIME_S)
#define I3C_MST_REG_SDA_OD_SAMPLE_TIME_V  0x000001FFU
#define I3C_MST_REG_SDA_OD_SAMPLE_TIME_S  0
/** I3C_MST_REG_SDA_PP_SAMPLE_TIME : R/W; bitpos: [13:9]; default: 0;
 *  It is used to adjust sda sample point when scl high under push pull speed
 */
#define I3C_MST_REG_SDA_PP_SAMPLE_TIME    0x0000001FU
#define I3C_MST_REG_SDA_PP_SAMPLE_TIME_M  (I3C_MST_REG_SDA_PP_SAMPLE_TIME_V << I3C_MST_REG_SDA_PP_SAMPLE_TIME_S)
#define I3C_MST_REG_SDA_PP_SAMPLE_TIME_V  0x0000001FU
#define I3C_MST_REG_SDA_PP_SAMPLE_TIME_S  9

/** I3C_MST_SDA_HOLD_TIME_REG register
 *  NA
 */
#define I3C_MST_SDA_HOLD_TIME_REG (DR_REG_I3C_MST_BASE + 0x78)
/** I3C_MST_REG_SDA_OD_TX_HOLD_TIME : R/W; bitpos: [8:0]; default: 1;
 *  It is used to adjust sda drive point after scl neg under open drain speed
 */
#define I3C_MST_REG_SDA_OD_TX_HOLD_TIME    0x000001FFU
#define I3C_MST_REG_SDA_OD_TX_HOLD_TIME_M  (I3C_MST_REG_SDA_OD_TX_HOLD_TIME_V << I3C_MST_REG_SDA_OD_TX_HOLD_TIME_S)
#define I3C_MST_REG_SDA_OD_TX_HOLD_TIME_V  0x000001FFU
#define I3C_MST_REG_SDA_OD_TX_HOLD_TIME_S  0
/** I3C_MST_REG_SDA_PP_TX_HOLD_TIME : R/W; bitpos: [13:9]; default: 0;
 *  It is used to adjust sda dirve point after scl neg under push pull speed
 */
#define I3C_MST_REG_SDA_PP_TX_HOLD_TIME    0x0000001FU
#define I3C_MST_REG_SDA_PP_TX_HOLD_TIME_M  (I3C_MST_REG_SDA_PP_TX_HOLD_TIME_V << I3C_MST_REG_SDA_PP_TX_HOLD_TIME_S)
#define I3C_MST_REG_SDA_PP_TX_HOLD_TIME_V  0x0000001FU
#define I3C_MST_REG_SDA_PP_TX_HOLD_TIME_S  9

/** I3C_MST_SCL_START_HOLD_REG register
 *  NA
 */
#define I3C_MST_SCL_START_HOLD_REG (DR_REG_I3C_MST_BASE + 0x7c)
/** I3C_MST_REG_SCL_START_HOLD_TIME : R/W; bitpos: [8:0]; default: 8;
 *  I2C_SCL_START_HOLD_TIME
 */
#define I3C_MST_REG_SCL_START_HOLD_TIME    0x000001FFU
#define I3C_MST_REG_SCL_START_HOLD_TIME_M  (I3C_MST_REG_SCL_START_HOLD_TIME_V << I3C_MST_REG_SCL_START_HOLD_TIME_S)
#define I3C_MST_REG_SCL_START_HOLD_TIME_V  0x000001FFU
#define I3C_MST_REG_SCL_START_HOLD_TIME_S  0
/** I3C_MST_REG_START_DET_HOLD_TIME : R/W; bitpos: [10:9]; default: 0;
 *  NA
 */
#define I3C_MST_REG_START_DET_HOLD_TIME    0x00000003U
#define I3C_MST_REG_START_DET_HOLD_TIME_M  (I3C_MST_REG_START_DET_HOLD_TIME_V << I3C_MST_REG_START_DET_HOLD_TIME_S)
#define I3C_MST_REG_START_DET_HOLD_TIME_V  0x00000003U
#define I3C_MST_REG_START_DET_HOLD_TIME_S  9

/** I3C_MST_SCL_RSTART_SETUP_REG register
 *  NA
 */
#define I3C_MST_SCL_RSTART_SETUP_REG (DR_REG_I3C_MST_BASE + 0x80)
/** I3C_MST_REG_SCL_RSTART_SETUP_TIME : R/W; bitpos: [8:0]; default: 8;
 *  I2C_SCL_RSTART_SETUP_TIME
 */
#define I3C_MST_REG_SCL_RSTART_SETUP_TIME    0x000001FFU
#define I3C_MST_REG_SCL_RSTART_SETUP_TIME_M  (I3C_MST_REG_SCL_RSTART_SETUP_TIME_V << I3C_MST_REG_SCL_RSTART_SETUP_TIME_S)
#define I3C_MST_REG_SCL_RSTART_SETUP_TIME_V  0x000001FFU
#define I3C_MST_REG_SCL_RSTART_SETUP_TIME_S  0

/** I3C_MST_SCL_STOP_HOLD_REG register
 *  NA
 */
#define I3C_MST_SCL_STOP_HOLD_REG (DR_REG_I3C_MST_BASE + 0x84)
/** I3C_MST_REG_SCL_STOP_HOLD_TIME : R/W; bitpos: [8:0]; default: 8;
 *  I2C_SCL_STOP_HOLD_TIME
 */
#define I3C_MST_REG_SCL_STOP_HOLD_TIME    0x000001FFU
#define I3C_MST_REG_SCL_STOP_HOLD_TIME_M  (I3C_MST_REG_SCL_STOP_HOLD_TIME_V << I3C_MST_REG_SCL_STOP_HOLD_TIME_S)
#define I3C_MST_REG_SCL_STOP_HOLD_TIME_V  0x000001FFU
#define I3C_MST_REG_SCL_STOP_HOLD_TIME_S  0

/** I3C_MST_SCL_STOP_SETUP_REG register
 *  NA
 */
#define I3C_MST_SCL_STOP_SETUP_REG (DR_REG_I3C_MST_BASE + 0x88)
/** I3C_MST_REG_SCL_STOP_SETUP_TIME : R/W; bitpos: [8:0]; default: 8;
 *  I2C_SCL_STOP_SETUP_TIME
 */
#define I3C_MST_REG_SCL_STOP_SETUP_TIME    0x000001FFU
#define I3C_MST_REG_SCL_STOP_SETUP_TIME_M  (I3C_MST_REG_SCL_STOP_SETUP_TIME_V << I3C_MST_REG_SCL_STOP_SETUP_TIME_S)
#define I3C_MST_REG_SCL_STOP_SETUP_TIME_V  0x000001FFU
#define I3C_MST_REG_SCL_STOP_SETUP_TIME_S  0

/** I3C_MST_BUS_FREE_TIME_REG register
 *  NA
 */
#define I3C_MST_BUS_FREE_TIME_REG (DR_REG_I3C_MST_BASE + 0x90)
/** I3C_MST_REG_BUS_FREE_TIME : R/W; bitpos: [15:0]; default: 5;
 *  I3C Bus Free Count Value. This field is used only in Master mode. In pure Bus
 *  System, this field represents tCAS.  In Mixed Bus System, this field is expected to
 *  be programmed to tLOW of I2C Timing.
 */
#define I3C_MST_REG_BUS_FREE_TIME    0x0000FFFFU
#define I3C_MST_REG_BUS_FREE_TIME_M  (I3C_MST_REG_BUS_FREE_TIME_V << I3C_MST_REG_BUS_FREE_TIME_S)
#define I3C_MST_REG_BUS_FREE_TIME_V  0x0000FFFFU
#define I3C_MST_REG_BUS_FREE_TIME_S  0

/** I3C_MST_SCL_TERMN_T_EXT_LOW_TIME_REG register
 *  NA
 */
#define I3C_MST_SCL_TERMN_T_EXT_LOW_TIME_REG (DR_REG_I3C_MST_BASE + 0x94)
/** I3C_MST_REG_I3C_MST_TERMN_T_EXT_LOW_TIME : R/W; bitpos: [7:0]; default: 2;
 *  NA
 */
#define I3C_MST_REG_I3C_MST_TERMN_T_EXT_LOW_TIME    0x000000FFU
#define I3C_MST_REG_I3C_MST_TERMN_T_EXT_LOW_TIME_M  (I3C_MST_REG_I3C_MST_TERMN_T_EXT_LOW_TIME_V << I3C_MST_REG_I3C_MST_TERMN_T_EXT_LOW_TIME_S)
#define I3C_MST_REG_I3C_MST_TERMN_T_EXT_LOW_TIME_V  0x000000FFU
#define I3C_MST_REG_I3C_MST_TERMN_T_EXT_LOW_TIME_S  0

/** I3C_MST_VER_ID_REG register
 *  NA
 */
#define I3C_MST_VER_ID_REG (DR_REG_I3C_MST_BASE + 0xa0)
/** I3C_MST_REG_I3C_MST_VER_ID : R/W; bitpos: [31:0]; default: 539165956;
 *  This field indicates the controller current release number that is read by an
 *  application.
 */
#define I3C_MST_REG_I3C_MST_VER_ID    0xFFFFFFFFU
#define I3C_MST_REG_I3C_MST_VER_ID_M  (I3C_MST_REG_I3C_MST_VER_ID_V << I3C_MST_REG_I3C_MST_VER_ID_S)
#define I3C_MST_REG_I3C_MST_VER_ID_V  0xFFFFFFFFU
#define I3C_MST_REG_I3C_MST_VER_ID_S  0

/** I3C_MST_VER_TYPE_REG register
 *  NA
 */
#define I3C_MST_VER_TYPE_REG (DR_REG_I3C_MST_BASE + 0xa4)
/** I3C_MST_REG_I3C_MST_VER_TYPE : R/W; bitpos: [31:0]; default: 0;
 *  This field indicates the controller current release type that is read by an
 *  application.
 */
#define I3C_MST_REG_I3C_MST_VER_TYPE    0xFFFFFFFFU
#define I3C_MST_REG_I3C_MST_VER_TYPE_M  (I3C_MST_REG_I3C_MST_VER_TYPE_V << I3C_MST_REG_I3C_MST_VER_TYPE_S)
#define I3C_MST_REG_I3C_MST_VER_TYPE_V  0xFFFFFFFFU
#define I3C_MST_REG_I3C_MST_VER_TYPE_S  0

/** I3C_MST_FPGA_DEBUG_PROBE_REG register
 *  NA
 */
#define I3C_MST_FPGA_DEBUG_PROBE_REG (DR_REG_I3C_MST_BASE + 0xac)
/** I3C_MST_REG_I3C_MST_FPGA_DEBUG_PROBE : R/W; bitpos: [31:0]; default: 1;
 *  For Debug Probe Test on FPGA
 */
#define I3C_MST_REG_I3C_MST_FPGA_DEBUG_PROBE    0xFFFFFFFFU
#define I3C_MST_REG_I3C_MST_FPGA_DEBUG_PROBE_M  (I3C_MST_REG_I3C_MST_FPGA_DEBUG_PROBE_V << I3C_MST_REG_I3C_MST_FPGA_DEBUG_PROBE_S)
#define I3C_MST_REG_I3C_MST_FPGA_DEBUG_PROBE_V  0xFFFFFFFFU
#define I3C_MST_REG_I3C_MST_FPGA_DEBUG_PROBE_S  0

/** I3C_MST_RND_ECO_CS_REG register
 *  NA
 */
#define I3C_MST_RND_ECO_CS_REG (DR_REG_I3C_MST_BASE + 0xb0)
/** I3C_MST_REG_RND_ECO_EN : R/W; bitpos: [0]; default: 0;
 *  NA
 */
#define I3C_MST_REG_RND_ECO_EN    (BIT(0))
#define I3C_MST_REG_RND_ECO_EN_M  (I3C_MST_REG_RND_ECO_EN_V << I3C_MST_REG_RND_ECO_EN_S)
#define I3C_MST_REG_RND_ECO_EN_V  0x00000001U
#define I3C_MST_REG_RND_ECO_EN_S  0
/** I3C_MST_RND_ECO_RESULT : RO; bitpos: [1]; default: 0;
 *  NA
 */
#define I3C_MST_RND_ECO_RESULT    (BIT(1))
#define I3C_MST_RND_ECO_RESULT_M  (I3C_MST_RND_ECO_RESULT_V << I3C_MST_RND_ECO_RESULT_S)
#define I3C_MST_RND_ECO_RESULT_V  0x00000001U
#define I3C_MST_RND_ECO_RESULT_S  1

/** I3C_MST_RND_ECO_LOW_REG register
 *  NA
 */
#define I3C_MST_RND_ECO_LOW_REG (DR_REG_I3C_MST_BASE + 0xb4)
/** I3C_MST_REG_RND_ECO_LOW : R/W; bitpos: [31:0]; default: 0;
 *  NA
 */
#define I3C_MST_REG_RND_ECO_LOW    0xFFFFFFFFU
#define I3C_MST_REG_RND_ECO_LOW_M  (I3C_MST_REG_RND_ECO_LOW_V << I3C_MST_REG_RND_ECO_LOW_S)
#define I3C_MST_REG_RND_ECO_LOW_V  0xFFFFFFFFU
#define I3C_MST_REG_RND_ECO_LOW_S  0

/** I3C_MST_RND_ECO_HIGH_REG register
 *  NA
 */
#define I3C_MST_RND_ECO_HIGH_REG (DR_REG_I3C_MST_BASE + 0xb8)
/** I3C_MST_REG_RND_ECO_HIGH : R/W; bitpos: [31:0]; default: 65535;
 *  NA
 */
#define I3C_MST_REG_RND_ECO_HIGH    0xFFFFFFFFU
#define I3C_MST_REG_RND_ECO_HIGH_M  (I3C_MST_REG_RND_ECO_HIGH_V << I3C_MST_REG_RND_ECO_HIGH_S)
#define I3C_MST_REG_RND_ECO_HIGH_V  0xFFFFFFFFU
#define I3C_MST_REG_RND_ECO_HIGH_S  0

#ifdef __cplusplus
}
#endif
