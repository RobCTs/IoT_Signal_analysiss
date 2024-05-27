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

/** ICM_VER_DATE_REG register
 *  NA
 */
#define ICM_VER_DATE_REG (DR_REG_ICM_BASE + 0x0)
/** ICM_REG_VER_DATE : R/W; bitpos: [31:0]; default: 539165204;
 *  NA
 */
#define ICM_REG_VER_DATE    0xFFFFFFFFU
#define ICM_REG_VER_DATE_M  (ICM_REG_VER_DATE_V << ICM_REG_VER_DATE_S)
#define ICM_REG_VER_DATE_V  0xFFFFFFFFU
#define ICM_REG_VER_DATE_S  0

/** ICM_CLK_EN_REG register
 *  NA
 */
#define ICM_CLK_EN_REG (DR_REG_ICM_BASE + 0x4)
/** ICM_REG_CLK_EN : R/W; bitpos: [0]; default: 0;
 *  NA
 */
#define ICM_REG_CLK_EN    (BIT(0))
#define ICM_REG_CLK_EN_M  (ICM_REG_CLK_EN_V << ICM_REG_CLK_EN_S)
#define ICM_REG_CLK_EN_V  0x00000001U
#define ICM_REG_CLK_EN_S  0

/** ICM_DLOCK_STATUS_REG register
 *  NA
 */
#define ICM_DLOCK_STATUS_REG (DR_REG_ICM_BASE + 0x8)
/** ICM_REG_DLOCK_MST : RO; bitpos: [3:0]; default: 0;
 *  Lowest numbered deadlocked master
 */
#define ICM_REG_DLOCK_MST    0x0000000FU
#define ICM_REG_DLOCK_MST_M  (ICM_REG_DLOCK_MST_V << ICM_REG_DLOCK_MST_S)
#define ICM_REG_DLOCK_MST_V  0x0000000FU
#define ICM_REG_DLOCK_MST_S  0
/** ICM_REG_DLOCK_SLV : RO; bitpos: [6:4]; default: 0;
 *  Slave with which dlock_mst is deadlocked
 */
#define ICM_REG_DLOCK_SLV    0x00000007U
#define ICM_REG_DLOCK_SLV_M  (ICM_REG_DLOCK_SLV_V << ICM_REG_DLOCK_SLV_S)
#define ICM_REG_DLOCK_SLV_V  0x00000007U
#define ICM_REG_DLOCK_SLV_S  4
/** ICM_REG_DLOCK_ID : RO; bitpos: [10:7]; default: 0;
 *  AXI ID of deadlocked transaction
 */
#define ICM_REG_DLOCK_ID    0x0000000FU
#define ICM_REG_DLOCK_ID_M  (ICM_REG_DLOCK_ID_V << ICM_REG_DLOCK_ID_S)
#define ICM_REG_DLOCK_ID_V  0x0000000FU
#define ICM_REG_DLOCK_ID_S  7
/** ICM_REG_DLOCK_WR : RO; bitpos: [11]; default: 0;
 *  Asserted if deadlocked transaction is a write
 */
#define ICM_REG_DLOCK_WR    (BIT(11))
#define ICM_REG_DLOCK_WR_M  (ICM_REG_DLOCK_WR_V << ICM_REG_DLOCK_WR_S)
#define ICM_REG_DLOCK_WR_V  0x00000001U
#define ICM_REG_DLOCK_WR_S  11

/** ICM_INT_RAW_REG register
 *  NA
 */
#define ICM_INT_RAW_REG (DR_REG_ICM_BASE + 0xc)
/** ICM_REG_DLOCK_INT_RAW : R/WTC/SS; bitpos: [0]; default: 0;
 *  NA
 */
#define ICM_REG_DLOCK_INT_RAW    (BIT(0))
#define ICM_REG_DLOCK_INT_RAW_M  (ICM_REG_DLOCK_INT_RAW_V << ICM_REG_DLOCK_INT_RAW_S)
#define ICM_REG_DLOCK_INT_RAW_V  0x00000001U
#define ICM_REG_DLOCK_INT_RAW_S  0
/** ICM_REG_ICM_SYS_ADDRHOLE_INT_RAW : R/WTC/SS; bitpos: [1]; default: 0;
 *  NA
 */
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_RAW    (BIT(1))
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_RAW_M  (ICM_REG_ICM_SYS_ADDRHOLE_INT_RAW_V << ICM_REG_ICM_SYS_ADDRHOLE_INT_RAW_S)
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_RAW_V  0x00000001U
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_RAW_S  1
/** ICM_REG_ICM_CPU_ADDRHOLE_INT_RAW : R/WTC/SS; bitpos: [2]; default: 0;
 *  NA
 */
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_RAW    (BIT(2))
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_RAW_M  (ICM_REG_ICM_CPU_ADDRHOLE_INT_RAW_V << ICM_REG_ICM_CPU_ADDRHOLE_INT_RAW_S)
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_RAW_V  0x00000001U
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_RAW_S  2

/** ICM_INT_ST_REG register
 *  NA
 */
#define ICM_INT_ST_REG (DR_REG_ICM_BASE + 0x10)
/** ICM_REG_DLOCK_INT_ST : RO; bitpos: [0]; default: 0;
 *  NA
 */
#define ICM_REG_DLOCK_INT_ST    (BIT(0))
#define ICM_REG_DLOCK_INT_ST_M  (ICM_REG_DLOCK_INT_ST_V << ICM_REG_DLOCK_INT_ST_S)
#define ICM_REG_DLOCK_INT_ST_V  0x00000001U
#define ICM_REG_DLOCK_INT_ST_S  0
/** ICM_REG_ICM_SYS_ADDRHOLE_INT_ST : RO; bitpos: [1]; default: 0;
 *  NA
 */
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_ST    (BIT(1))
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_ST_M  (ICM_REG_ICM_SYS_ADDRHOLE_INT_ST_V << ICM_REG_ICM_SYS_ADDRHOLE_INT_ST_S)
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_ST_V  0x00000001U
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_ST_S  1
/** ICM_REG_ICM_CPU_ADDRHOLE_INT_ST : RO; bitpos: [2]; default: 0;
 *  NA
 */
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_ST    (BIT(2))
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_ST_M  (ICM_REG_ICM_CPU_ADDRHOLE_INT_ST_V << ICM_REG_ICM_CPU_ADDRHOLE_INT_ST_S)
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_ST_V  0x00000001U
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_ST_S  2

/** ICM_INT_ENA_REG register
 *  NA
 */
#define ICM_INT_ENA_REG (DR_REG_ICM_BASE + 0x14)
/** ICM_REG_DLOCK_INT_ENA : R/W; bitpos: [0]; default: 1;
 *  NA
 */
#define ICM_REG_DLOCK_INT_ENA    (BIT(0))
#define ICM_REG_DLOCK_INT_ENA_M  (ICM_REG_DLOCK_INT_ENA_V << ICM_REG_DLOCK_INT_ENA_S)
#define ICM_REG_DLOCK_INT_ENA_V  0x00000001U
#define ICM_REG_DLOCK_INT_ENA_S  0
/** ICM_REG_ICM_SYS_ADDRHOLE_INT_ENA : R/W; bitpos: [1]; default: 1;
 *  NA
 */
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_ENA    (BIT(1))
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_ENA_M  (ICM_REG_ICM_SYS_ADDRHOLE_INT_ENA_V << ICM_REG_ICM_SYS_ADDRHOLE_INT_ENA_S)
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_ENA_V  0x00000001U
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_ENA_S  1
/** ICM_REG_ICM_CPU_ADDRHOLE_INT_ENA : R/W; bitpos: [2]; default: 1;
 *  NA
 */
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_ENA    (BIT(2))
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_ENA_M  (ICM_REG_ICM_CPU_ADDRHOLE_INT_ENA_V << ICM_REG_ICM_CPU_ADDRHOLE_INT_ENA_S)
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_ENA_V  0x00000001U
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_ENA_S  2

/** ICM_INT_CLR_REG register
 *  NA
 */
#define ICM_INT_CLR_REG (DR_REG_ICM_BASE + 0x18)
/** ICM_REG_DLOCK_INT_CLR : WT; bitpos: [0]; default: 0;
 *  NA
 */
#define ICM_REG_DLOCK_INT_CLR    (BIT(0))
#define ICM_REG_DLOCK_INT_CLR_M  (ICM_REG_DLOCK_INT_CLR_V << ICM_REG_DLOCK_INT_CLR_S)
#define ICM_REG_DLOCK_INT_CLR_V  0x00000001U
#define ICM_REG_DLOCK_INT_CLR_S  0
/** ICM_REG_ICM_SYS_ADDRHOLE_INT_CLR : WT; bitpos: [1]; default: 0;
 *  NA
 */
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_CLR    (BIT(1))
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_CLR_M  (ICM_REG_ICM_SYS_ADDRHOLE_INT_CLR_V << ICM_REG_ICM_SYS_ADDRHOLE_INT_CLR_S)
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_CLR_V  0x00000001U
#define ICM_REG_ICM_SYS_ADDRHOLE_INT_CLR_S  1
/** ICM_REG_ICM_CPU_ADDRHOLE_INT_CLR : WT; bitpos: [2]; default: 0;
 *  NA
 */
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_CLR    (BIT(2))
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_CLR_M  (ICM_REG_ICM_CPU_ADDRHOLE_INT_CLR_V << ICM_REG_ICM_CPU_ADDRHOLE_INT_CLR_S)
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_CLR_V  0x00000001U
#define ICM_REG_ICM_CPU_ADDRHOLE_INT_CLR_S  2

/** ICM_MST_ARB_PRIORITY_REG0_REG register
 *  NA
 */
#define ICM_MST_ARB_PRIORITY_REG0_REG (DR_REG_ICM_BASE + 0x1c)
/** ICM_REG_CPU_PRIORITY : R/W; bitpos: [3:0]; default: 0;
 *  CPU arbitration priority for command channels between masters connected to sys_icm
 */
#define ICM_REG_CPU_PRIORITY    0x0000000FU
#define ICM_REG_CPU_PRIORITY_M  (ICM_REG_CPU_PRIORITY_V << ICM_REG_CPU_PRIORITY_S)
#define ICM_REG_CPU_PRIORITY_V  0x0000000FU
#define ICM_REG_CPU_PRIORITY_S  0
/** ICM_REG_CACHE_PRIORITY : R/W; bitpos: [7:4]; default: 0;
 *  CACHE arbitration priority for command channels between masters connected to sys_icm
 */
#define ICM_REG_CACHE_PRIORITY    0x0000000FU
#define ICM_REG_CACHE_PRIORITY_M  (ICM_REG_CACHE_PRIORITY_V << ICM_REG_CACHE_PRIORITY_S)
#define ICM_REG_CACHE_PRIORITY_V  0x0000000FU
#define ICM_REG_CACHE_PRIORITY_S  4
/** ICM_REG_DMA2D_PRIORITY : R/W; bitpos: [11:8]; default: 0;
 *  GFX arbitration priority for command channels between masters connected to sys_icm
 */
#define ICM_REG_DMA2D_PRIORITY    0x0000000FU
#define ICM_REG_DMA2D_PRIORITY_M  (ICM_REG_DMA2D_PRIORITY_V << ICM_REG_DMA2D_PRIORITY_S)
#define ICM_REG_DMA2D_PRIORITY_V  0x0000000FU
#define ICM_REG_DMA2D_PRIORITY_S  8
/** ICM_REG_GDMA_MST1_PRIORITY : R/W; bitpos: [15:12]; default: 0;
 *  GDMA mst1 arbitration priority for command channels between masters connected to
 *  sys_icm
 */
#define ICM_REG_GDMA_MST1_PRIORITY    0x0000000FU
#define ICM_REG_GDMA_MST1_PRIORITY_M  (ICM_REG_GDMA_MST1_PRIORITY_V << ICM_REG_GDMA_MST1_PRIORITY_S)
#define ICM_REG_GDMA_MST1_PRIORITY_V  0x0000000FU
#define ICM_REG_GDMA_MST1_PRIORITY_S  12
/** ICM_REG_GDMA_MST2_PRIORITY : R/W; bitpos: [19:16]; default: 0;
 *  GDMA mst2 arbitration priority for command channels between masters connected to
 *  sys_icm
 */
#define ICM_REG_GDMA_MST2_PRIORITY    0x0000000FU
#define ICM_REG_GDMA_MST2_PRIORITY_M  (ICM_REG_GDMA_MST2_PRIORITY_V << ICM_REG_GDMA_MST2_PRIORITY_S)
#define ICM_REG_GDMA_MST2_PRIORITY_V  0x0000000FU
#define ICM_REG_GDMA_MST2_PRIORITY_S  16
/** ICM_REG_H264_M1_PRIORITY : R/W; bitpos: [23:20]; default: 0;
 *  H264 mst1 arbitration priority for command channels between masters connected to
 *  sys_icm
 */
#define ICM_REG_H264_M1_PRIORITY    0x0000000FU
#define ICM_REG_H264_M1_PRIORITY_M  (ICM_REG_H264_M1_PRIORITY_V << ICM_REG_H264_M1_PRIORITY_S)
#define ICM_REG_H264_M1_PRIORITY_V  0x0000000FU
#define ICM_REG_H264_M1_PRIORITY_S  20
/** ICM_REG_H264_M2_PRIORITY : R/W; bitpos: [27:24]; default: 0;
 *  H264 mst2 arbitration priority for command channels between masters connected to
 *  sys_icm
 */
#define ICM_REG_H264_M2_PRIORITY    0x0000000FU
#define ICM_REG_H264_M2_PRIORITY_M  (ICM_REG_H264_M2_PRIORITY_V << ICM_REG_H264_M2_PRIORITY_S)
#define ICM_REG_H264_M2_PRIORITY_V  0x0000000FU
#define ICM_REG_H264_M2_PRIORITY_S  24
/** ICM_REG_AXI_PDMA_PRIORITY : R/W; bitpos: [31:28]; default: 0;
 *  AXI PDMA  arbitration priority for command channels between masters connected to
 *  sys_icm
 */
#define ICM_REG_AXI_PDMA_PRIORITY    0x0000000FU
#define ICM_REG_AXI_PDMA_PRIORITY_M  (ICM_REG_AXI_PDMA_PRIORITY_V << ICM_REG_AXI_PDMA_PRIORITY_S)
#define ICM_REG_AXI_PDMA_PRIORITY_V  0x0000000FU
#define ICM_REG_AXI_PDMA_PRIORITY_S  28

/** ICM_SLV_ARB_PRIORITY_REG register
 *  NA
 */
#define ICM_SLV_ARB_PRIORITY_REG (DR_REG_ICM_BASE + 0x24)
/** ICM_REG_L2MEM_PRIORITY : R/W; bitpos: [5:3]; default: 0;
 *  L2MEM arbitration priority for response channels between slaves connected to sys_icm
 */
#define ICM_REG_L2MEM_PRIORITY    0x00000007U
#define ICM_REG_L2MEM_PRIORITY_M  (ICM_REG_L2MEM_PRIORITY_V << ICM_REG_L2MEM_PRIORITY_S)
#define ICM_REG_L2MEM_PRIORITY_V  0x00000007U
#define ICM_REG_L2MEM_PRIORITY_S  3
/** ICM_REG_FLASH_MSPI_PRIORITY : R/W; bitpos: [14:12]; default: 0;
 *  FLASH MSPI arbitration priority for response channels between slaves connected to
 *  sys_icm
 */
#define ICM_REG_FLASH_MSPI_PRIORITY    0x00000007U
#define ICM_REG_FLASH_MSPI_PRIORITY_M  (ICM_REG_FLASH_MSPI_PRIORITY_V << ICM_REG_FLASH_MSPI_PRIORITY_S)
#define ICM_REG_FLASH_MSPI_PRIORITY_V  0x00000007U
#define ICM_REG_FLASH_MSPI_PRIORITY_S  12
/** ICM_REG_PSRAM_MSPI_PRIORITY : R/W; bitpos: [17:15]; default: 0;
 *  PSRAM MSPI arbitration priority for response channels between slaves connected to
 *  sys_icm
 */
#define ICM_REG_PSRAM_MSPI_PRIORITY    0x00000007U
#define ICM_REG_PSRAM_MSPI_PRIORITY_M  (ICM_REG_PSRAM_MSPI_PRIORITY_V << ICM_REG_PSRAM_MSPI_PRIORITY_S)
#define ICM_REG_PSRAM_MSPI_PRIORITY_V  0x00000007U
#define ICM_REG_PSRAM_MSPI_PRIORITY_S  15
/** ICM_REG_LCD_PRIORITY : R/W; bitpos: [20:18]; default: 0;
 *  MIPI_LCD registers arbitration priority for response channels between slaves
 *  connected to sys_icm
 */
#define ICM_REG_LCD_PRIORITY    0x00000007U
#define ICM_REG_LCD_PRIORITY_M  (ICM_REG_LCD_PRIORITY_V << ICM_REG_LCD_PRIORITY_S)
#define ICM_REG_LCD_PRIORITY_V  0x00000007U
#define ICM_REG_LCD_PRIORITY_S  18
/** ICM_REG_CAM_PRIORITY : R/W; bitpos: [23:21]; default: 0;
 *  MIPI_CAM registers arbitration priority for response channels between slaves
 *  connected to sys_icm
 */
#define ICM_REG_CAM_PRIORITY    0x00000007U
#define ICM_REG_CAM_PRIORITY_M  (ICM_REG_CAM_PRIORITY_V << ICM_REG_CAM_PRIORITY_S)
#define ICM_REG_CAM_PRIORITY_V  0x00000007U
#define ICM_REG_CAM_PRIORITY_S  21

/** ICM_MST_ARQOS_REG0_REG register
 *  NA
 */
#define ICM_MST_ARQOS_REG0_REG (DR_REG_ICM_BASE + 0x28)
/** ICM_REG_CPU_ARQOS : R/W; bitpos: [3:0]; default: 0;
 *  NA
 */
#define ICM_REG_CPU_ARQOS    0x0000000FU
#define ICM_REG_CPU_ARQOS_M  (ICM_REG_CPU_ARQOS_V << ICM_REG_CPU_ARQOS_S)
#define ICM_REG_CPU_ARQOS_V  0x0000000FU
#define ICM_REG_CPU_ARQOS_S  0
/** ICM_REG_CACHE_ARQOS : R/W; bitpos: [7:4]; default: 0;
 *  NA
 */
#define ICM_REG_CACHE_ARQOS    0x0000000FU
#define ICM_REG_CACHE_ARQOS_M  (ICM_REG_CACHE_ARQOS_V << ICM_REG_CACHE_ARQOS_S)
#define ICM_REG_CACHE_ARQOS_V  0x0000000FU
#define ICM_REG_CACHE_ARQOS_S  4
/** ICM_REG_DMA2D_ARQOS : R/W; bitpos: [11:8]; default: 0;
 *  NA
 */
#define ICM_REG_DMA2D_ARQOS    0x0000000FU
#define ICM_REG_DMA2D_ARQOS_M  (ICM_REG_DMA2D_ARQOS_V << ICM_REG_DMA2D_ARQOS_S)
#define ICM_REG_DMA2D_ARQOS_V  0x0000000FU
#define ICM_REG_DMA2D_ARQOS_S  8
/** ICM_REG_GDMA_MST1_ARQOS : R/W; bitpos: [15:12]; default: 0;
 *  NA
 */
#define ICM_REG_GDMA_MST1_ARQOS    0x0000000FU
#define ICM_REG_GDMA_MST1_ARQOS_M  (ICM_REG_GDMA_MST1_ARQOS_V << ICM_REG_GDMA_MST1_ARQOS_S)
#define ICM_REG_GDMA_MST1_ARQOS_V  0x0000000FU
#define ICM_REG_GDMA_MST1_ARQOS_S  12
/** ICM_REG_GDMA_MST2_ARQOS : R/W; bitpos: [19:16]; default: 0;
 *  NA
 */
#define ICM_REG_GDMA_MST2_ARQOS    0x0000000FU
#define ICM_REG_GDMA_MST2_ARQOS_M  (ICM_REG_GDMA_MST2_ARQOS_V << ICM_REG_GDMA_MST2_ARQOS_S)
#define ICM_REG_GDMA_MST2_ARQOS_V  0x0000000FU
#define ICM_REG_GDMA_MST2_ARQOS_S  16
/** ICM_REG_H264_DMA2D_M1_ARQOS : R/W; bitpos: [23:20]; default: 0;
 *  NA
 */
#define ICM_REG_H264_DMA2D_M1_ARQOS    0x0000000FU
#define ICM_REG_H264_DMA2D_M1_ARQOS_M  (ICM_REG_H264_DMA2D_M1_ARQOS_V << ICM_REG_H264_DMA2D_M1_ARQOS_S)
#define ICM_REG_H264_DMA2D_M1_ARQOS_V  0x0000000FU
#define ICM_REG_H264_DMA2D_M1_ARQOS_S  20
/** ICM_REG_H264_DMA2D_M2_ARQOS : R/W; bitpos: [27:24]; default: 0;
 *  NA
 */
#define ICM_REG_H264_DMA2D_M2_ARQOS    0x0000000FU
#define ICM_REG_H264_DMA2D_M2_ARQOS_M  (ICM_REG_H264_DMA2D_M2_ARQOS_V << ICM_REG_H264_DMA2D_M2_ARQOS_S)
#define ICM_REG_H264_DMA2D_M2_ARQOS_V  0x0000000FU
#define ICM_REG_H264_DMA2D_M2_ARQOS_S  24
/** ICM_REG_AXI_PDMA_INT_ARQOS : R/W; bitpos: [31:28]; default: 0;
 *  NA
 */
#define ICM_REG_AXI_PDMA_INT_ARQOS    0x0000000FU
#define ICM_REG_AXI_PDMA_INT_ARQOS_M  (ICM_REG_AXI_PDMA_INT_ARQOS_V << ICM_REG_AXI_PDMA_INT_ARQOS_S)
#define ICM_REG_AXI_PDMA_INT_ARQOS_V  0x0000000FU
#define ICM_REG_AXI_PDMA_INT_ARQOS_S  28

/** ICM_MST_AWQOS_REG0_REG register
 *  NA
 */
#define ICM_MST_AWQOS_REG0_REG (DR_REG_ICM_BASE + 0x30)
/** ICM_REG_CPU_AWQOS : R/W; bitpos: [3:0]; default: 0;
 *  NA
 */
#define ICM_REG_CPU_AWQOS    0x0000000FU
#define ICM_REG_CPU_AWQOS_M  (ICM_REG_CPU_AWQOS_V << ICM_REG_CPU_AWQOS_S)
#define ICM_REG_CPU_AWQOS_V  0x0000000FU
#define ICM_REG_CPU_AWQOS_S  0
/** ICM_REG_CACHE_AWQOS : R/W; bitpos: [7:4]; default: 0;
 *  NA
 */
#define ICM_REG_CACHE_AWQOS    0x0000000FU
#define ICM_REG_CACHE_AWQOS_M  (ICM_REG_CACHE_AWQOS_V << ICM_REG_CACHE_AWQOS_S)
#define ICM_REG_CACHE_AWQOS_V  0x0000000FU
#define ICM_REG_CACHE_AWQOS_S  4
/** ICM_REG_DMA2D_AWQOS : R/W; bitpos: [11:8]; default: 0;
 *  NA
 */
#define ICM_REG_DMA2D_AWQOS    0x0000000FU
#define ICM_REG_DMA2D_AWQOS_M  (ICM_REG_DMA2D_AWQOS_V << ICM_REG_DMA2D_AWQOS_S)
#define ICM_REG_DMA2D_AWQOS_V  0x0000000FU
#define ICM_REG_DMA2D_AWQOS_S  8
/** ICM_REG_GDMA_MST1_AWQOS : R/W; bitpos: [15:12]; default: 0;
 *  NA
 */
#define ICM_REG_GDMA_MST1_AWQOS    0x0000000FU
#define ICM_REG_GDMA_MST1_AWQOS_M  (ICM_REG_GDMA_MST1_AWQOS_V << ICM_REG_GDMA_MST1_AWQOS_S)
#define ICM_REG_GDMA_MST1_AWQOS_V  0x0000000FU
#define ICM_REG_GDMA_MST1_AWQOS_S  12
/** ICM_REG_GDMA_MST2_AWQOS : R/W; bitpos: [19:16]; default: 0;
 *  NA
 */
#define ICM_REG_GDMA_MST2_AWQOS    0x0000000FU
#define ICM_REG_GDMA_MST2_AWQOS_M  (ICM_REG_GDMA_MST2_AWQOS_V << ICM_REG_GDMA_MST2_AWQOS_S)
#define ICM_REG_GDMA_MST2_AWQOS_V  0x0000000FU
#define ICM_REG_GDMA_MST2_AWQOS_S  16
/** ICM_REG_H264_DMA2D_M1_AWQOS : R/W; bitpos: [23:20]; default: 0;
 *  NA
 */
#define ICM_REG_H264_DMA2D_M1_AWQOS    0x0000000FU
#define ICM_REG_H264_DMA2D_M1_AWQOS_M  (ICM_REG_H264_DMA2D_M1_AWQOS_V << ICM_REG_H264_DMA2D_M1_AWQOS_S)
#define ICM_REG_H264_DMA2D_M1_AWQOS_V  0x0000000FU
#define ICM_REG_H264_DMA2D_M1_AWQOS_S  20
/** ICM_REG_H264_DMA2D_M2_AWQOS : R/W; bitpos: [27:24]; default: 0;
 *  NA
 */
#define ICM_REG_H264_DMA2D_M2_AWQOS    0x0000000FU
#define ICM_REG_H264_DMA2D_M2_AWQOS_M  (ICM_REG_H264_DMA2D_M2_AWQOS_V << ICM_REG_H264_DMA2D_M2_AWQOS_S)
#define ICM_REG_H264_DMA2D_M2_AWQOS_V  0x0000000FU
#define ICM_REG_H264_DMA2D_M2_AWQOS_S  24
/** ICM_REG_PDMA_INT_AWQOS : R/W; bitpos: [31:28]; default: 0;
 *  NA
 */
#define ICM_REG_PDMA_INT_AWQOS    0x0000000FU
#define ICM_REG_PDMA_INT_AWQOS_M  (ICM_REG_PDMA_INT_AWQOS_V << ICM_REG_PDMA_INT_AWQOS_S)
#define ICM_REG_PDMA_INT_AWQOS_V  0x0000000FU
#define ICM_REG_PDMA_INT_AWQOS_S  28

/** ICM_SYS_ADDRHOLE_ADDR_REG register
 *  icm sys addr hole address registers
 */
#define ICM_SYS_ADDRHOLE_ADDR_REG (DR_REG_ICM_BASE + 0x38)
/** ICM_REG_ICM_SYS_ADDRHOLE_ADDR : RO; bitpos: [31:0]; default: 0;
 *  NA
 */
#define ICM_REG_ICM_SYS_ADDRHOLE_ADDR    0xFFFFFFFFU
#define ICM_REG_ICM_SYS_ADDRHOLE_ADDR_M  (ICM_REG_ICM_SYS_ADDRHOLE_ADDR_V << ICM_REG_ICM_SYS_ADDRHOLE_ADDR_S)
#define ICM_REG_ICM_SYS_ADDRHOLE_ADDR_V  0xFFFFFFFFU
#define ICM_REG_ICM_SYS_ADDRHOLE_ADDR_S  0

/** ICM_SYS_ADDRHOLE_INFO_REG register
 *  NA
 */
#define ICM_SYS_ADDRHOLE_INFO_REG (DR_REG_ICM_BASE + 0x3c)
/** ICM_REG_ICM_SYS_ADDRHOLE_ID : RO; bitpos: [7:0]; default: 0;
 *  master id = 4-bit CID + 4-bit  UID(refer to related IP) . CID is used to verfiy
 *  master in icm. CID: 4'h1: cache, 4'h5 gdma mst1, 4'h6: gdma mst2, 4'h8: axi pdma,
 *  4'ha: dma2d, 4'hb: h264 mst1, 4'hc: h264 mst2.
 */
#define ICM_REG_ICM_SYS_ADDRHOLE_ID    0x000000FFU
#define ICM_REG_ICM_SYS_ADDRHOLE_ID_M  (ICM_REG_ICM_SYS_ADDRHOLE_ID_V << ICM_REG_ICM_SYS_ADDRHOLE_ID_S)
#define ICM_REG_ICM_SYS_ADDRHOLE_ID_V  0x000000FFU
#define ICM_REG_ICM_SYS_ADDRHOLE_ID_S  0
/** ICM_REG_ICM_SYS_ADDRHOLE_WR : RO; bitpos: [8]; default: 0;
 *  1: illegal address access, 0: access without permission
 */
#define ICM_REG_ICM_SYS_ADDRHOLE_WR    (BIT(8))
#define ICM_REG_ICM_SYS_ADDRHOLE_WR_M  (ICM_REG_ICM_SYS_ADDRHOLE_WR_V << ICM_REG_ICM_SYS_ADDRHOLE_WR_S)
#define ICM_REG_ICM_SYS_ADDRHOLE_WR_V  0x00000001U
#define ICM_REG_ICM_SYS_ADDRHOLE_WR_S  8
/** ICM_REG_ICM_SYS_ADDRHOLE_SECURE : RO; bitpos: [9]; default: 0;
 *  It is illegall access address if reg_icm_cpu_addrhole_secure is 1, Otherwise, it
 *  the address without permission to access.
 */
#define ICM_REG_ICM_SYS_ADDRHOLE_SECURE    (BIT(9))
#define ICM_REG_ICM_SYS_ADDRHOLE_SECURE_M  (ICM_REG_ICM_SYS_ADDRHOLE_SECURE_V << ICM_REG_ICM_SYS_ADDRHOLE_SECURE_S)
#define ICM_REG_ICM_SYS_ADDRHOLE_SECURE_V  0x00000001U
#define ICM_REG_ICM_SYS_ADDRHOLE_SECURE_S  9

/** ICM_CPU_ADDRHOLE_ADDR_REG register
 *  icm cpu addr hole address registers
 */
#define ICM_CPU_ADDRHOLE_ADDR_REG (DR_REG_ICM_BASE + 0x40)
/** ICM_REG_ICM_CPU_ADDRHOLE_ADDR : RO; bitpos: [31:0]; default: 0;
 *  It is illegall access address if reg_icm_cpu_addrhole_secure is 1. Otherwise, it
 *  the address without permission to access.
 */
#define ICM_REG_ICM_CPU_ADDRHOLE_ADDR    0xFFFFFFFFU
#define ICM_REG_ICM_CPU_ADDRHOLE_ADDR_M  (ICM_REG_ICM_CPU_ADDRHOLE_ADDR_V << ICM_REG_ICM_CPU_ADDRHOLE_ADDR_S)
#define ICM_REG_ICM_CPU_ADDRHOLE_ADDR_V  0xFFFFFFFFU
#define ICM_REG_ICM_CPU_ADDRHOLE_ADDR_S  0

/** ICM_CPU_ADDRHOLE_INFO_REG register
 *  NA
 */
#define ICM_CPU_ADDRHOLE_INFO_REG (DR_REG_ICM_BASE + 0x44)
/** ICM_REG_ICM_CPU_ADDRHOLE_ID : RO; bitpos: [4:0]; default: 0;
 *  master id: 5'h0: hp core0, 5'h1:hp core1, 5'h2:lp core, 5'h3:usb otg11, 5'h4:
 *  regdma, 5'h5: gmac, 5'h5 sdmmc, 5'h7: usbotg20, 5'h8: trace0, 5'h9: trace1, 5'ha
 *  tcm monitor, 5'hb: l2mem monitor. 5'h10~5'h1f: ahb pdma.
 */
#define ICM_REG_ICM_CPU_ADDRHOLE_ID    0x0000001FU
#define ICM_REG_ICM_CPU_ADDRHOLE_ID_M  (ICM_REG_ICM_CPU_ADDRHOLE_ID_V << ICM_REG_ICM_CPU_ADDRHOLE_ID_S)
#define ICM_REG_ICM_CPU_ADDRHOLE_ID_V  0x0000001FU
#define ICM_REG_ICM_CPU_ADDRHOLE_ID_S  0
/** ICM_REG_ICM_CPU_ADDRHOLE_WR : RO; bitpos: [8]; default: 0;
 *  1:write trans, 0: read trans.
 */
#define ICM_REG_ICM_CPU_ADDRHOLE_WR    (BIT(8))
#define ICM_REG_ICM_CPU_ADDRHOLE_WR_M  (ICM_REG_ICM_CPU_ADDRHOLE_WR_V << ICM_REG_ICM_CPU_ADDRHOLE_WR_S)
#define ICM_REG_ICM_CPU_ADDRHOLE_WR_V  0x00000001U
#define ICM_REG_ICM_CPU_ADDRHOLE_WR_S  8
/** ICM_REG_ICM_CPU_ADDRHOLE_SECURE : RO; bitpos: [9]; default: 0;
 *  1: illegal address access, 0: access without permission
 */
#define ICM_REG_ICM_CPU_ADDRHOLE_SECURE    (BIT(9))
#define ICM_REG_ICM_CPU_ADDRHOLE_SECURE_M  (ICM_REG_ICM_CPU_ADDRHOLE_SECURE_V << ICM_REG_ICM_CPU_ADDRHOLE_SECURE_S)
#define ICM_REG_ICM_CPU_ADDRHOLE_SECURE_V  0x00000001U
#define ICM_REG_ICM_CPU_ADDRHOLE_SECURE_S  9

/** ICM_DLOCK_TIMEOUT_REG register
 *  NA
 */
#define ICM_DLOCK_TIMEOUT_REG (DR_REG_ICM_BASE + 0x48)
/** ICM_REG_DLOCK_TIMEOUT : R/W; bitpos: [12:0]; default: 2048;
 *  if no response until reg_dlock_timeout bus clock cycle, deadlock will happen
 */
#define ICM_REG_DLOCK_TIMEOUT    0x00001FFFU
#define ICM_REG_DLOCK_TIMEOUT_M  (ICM_REG_DLOCK_TIMEOUT_V << ICM_REG_DLOCK_TIMEOUT_S)
#define ICM_REG_DLOCK_TIMEOUT_V  0x00001FFFU
#define ICM_REG_DLOCK_TIMEOUT_S  0

/** ICM_RDN_ECO_CS_REG register
 *  NA
 */
#define ICM_RDN_ECO_CS_REG (DR_REG_ICM_BASE + 0x50)
/** ICM_REG_RDN_ECO_EN : R/W; bitpos: [0]; default: 0;
 *  NA
 */
#define ICM_REG_RDN_ECO_EN    (BIT(0))
#define ICM_REG_RDN_ECO_EN_M  (ICM_REG_RDN_ECO_EN_V << ICM_REG_RDN_ECO_EN_S)
#define ICM_REG_RDN_ECO_EN_V  0x00000001U
#define ICM_REG_RDN_ECO_EN_S  0
/** ICM_REG_RDN_ECO_RESULT : RO; bitpos: [1]; default: 0;
 *  NA
 */
#define ICM_REG_RDN_ECO_RESULT    (BIT(1))
#define ICM_REG_RDN_ECO_RESULT_M  (ICM_REG_RDN_ECO_RESULT_V << ICM_REG_RDN_ECO_RESULT_S)
#define ICM_REG_RDN_ECO_RESULT_V  0x00000001U
#define ICM_REG_RDN_ECO_RESULT_S  1

/** ICM_RDN_ECO_LOW_REG register
 *  NA
 */
#define ICM_RDN_ECO_LOW_REG (DR_REG_ICM_BASE + 0x54)
/** ICM_RDN_ECO_LOW : R/W; bitpos: [31:0]; default: 0;
 *  NA
 */
#define ICM_RDN_ECO_LOW    0xFFFFFFFFU
#define ICM_RDN_ECO_LOW_M  (ICM_RDN_ECO_LOW_V << ICM_RDN_ECO_LOW_S)
#define ICM_RDN_ECO_LOW_V  0xFFFFFFFFU
#define ICM_RDN_ECO_LOW_S  0

/** ICM_RDN_ECO_HIGH_REG register
 *  NA
 */
#define ICM_RDN_ECO_HIGH_REG (DR_REG_ICM_BASE + 0x58)
/** ICM_RDN_ECO_HIGH : R/W; bitpos: [31:0]; default: 4294967295;
 *  NA
 */
#define ICM_RDN_ECO_HIGH    0xFFFFFFFFU
#define ICM_RDN_ECO_HIGH_M  (ICM_RDN_ECO_HIGH_V << ICM_RDN_ECO_HIGH_S)
#define ICM_RDN_ECO_HIGH_V  0xFFFFFFFFU
#define ICM_RDN_ECO_HIGH_S  0

#ifdef __cplusplus
}
#endif
