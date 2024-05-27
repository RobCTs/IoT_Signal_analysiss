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

/** GPIO_EXT_SIGMADELTA0_REG register
 *  Duty Cycle Configure Register of SDM0
 */
#define GPIO_EXT_SIGMADELTA0_REG (DR_REG_GPIO_EXT_BASE + 0x0)
/** GPIO_EXT_SD0_IN : R/W; bitpos: [7:0]; default: 0;
 *  This field is used to configure the duty cycle of sigma delta modulation output.
 */
#define GPIO_EXT_SD0_IN    0x000000FFU
#define GPIO_EXT_SD0_IN_M  (GPIO_EXT_SD0_IN_V << GPIO_EXT_SD0_IN_S)
#define GPIO_EXT_SD0_IN_V  0x000000FFU
#define GPIO_EXT_SD0_IN_S  0
/** GPIO_EXT_SD0_PRESCALE : R/W; bitpos: [15:8]; default: 255;
 *  This field is used to set a divider value to divide APB clock.
 */
#define GPIO_EXT_SD0_PRESCALE    0x000000FFU
#define GPIO_EXT_SD0_PRESCALE_M  (GPIO_EXT_SD0_PRESCALE_V << GPIO_EXT_SD0_PRESCALE_S)
#define GPIO_EXT_SD0_PRESCALE_V  0x000000FFU
#define GPIO_EXT_SD0_PRESCALE_S  8

/** GPIO_EXT_SIGMADELTA1_REG register
 *  Duty Cycle Configure Register of SDM1
 */
#define GPIO_EXT_SIGMADELTA1_REG (DR_REG_GPIO_EXT_BASE + 0x4)
/** GPIO_EXT_SD1_IN : R/W; bitpos: [7:0]; default: 0;
 *  This field is used to configure the duty cycle of sigma delta modulation output.
 */
#define GPIO_EXT_SD1_IN    0x000000FFU
#define GPIO_EXT_SD1_IN_M  (GPIO_EXT_SD1_IN_V << GPIO_EXT_SD1_IN_S)
#define GPIO_EXT_SD1_IN_V  0x000000FFU
#define GPIO_EXT_SD1_IN_S  0
/** GPIO_EXT_SD1_PRESCALE : R/W; bitpos: [15:8]; default: 255;
 *  This field is used to set a divider value to divide APB clock.
 */
#define GPIO_EXT_SD1_PRESCALE    0x000000FFU
#define GPIO_EXT_SD1_PRESCALE_M  (GPIO_EXT_SD1_PRESCALE_V << GPIO_EXT_SD1_PRESCALE_S)
#define GPIO_EXT_SD1_PRESCALE_V  0x000000FFU
#define GPIO_EXT_SD1_PRESCALE_S  8

/** GPIO_EXT_SIGMADELTA2_REG register
 *  Duty Cycle Configure Register of SDM2
 */
#define GPIO_EXT_SIGMADELTA2_REG (DR_REG_GPIO_EXT_BASE + 0x8)
/** GPIO_EXT_SD2_IN : R/W; bitpos: [7:0]; default: 0;
 *  This field is used to configure the duty cycle of sigma delta modulation output.
 */
#define GPIO_EXT_SD2_IN    0x000000FFU
#define GPIO_EXT_SD2_IN_M  (GPIO_EXT_SD2_IN_V << GPIO_EXT_SD2_IN_S)
#define GPIO_EXT_SD2_IN_V  0x000000FFU
#define GPIO_EXT_SD2_IN_S  0
/** GPIO_EXT_SD2_PRESCALE : R/W; bitpos: [15:8]; default: 255;
 *  This field is used to set a divider value to divide APB clock.
 */
#define GPIO_EXT_SD2_PRESCALE    0x000000FFU
#define GPIO_EXT_SD2_PRESCALE_M  (GPIO_EXT_SD2_PRESCALE_V << GPIO_EXT_SD2_PRESCALE_S)
#define GPIO_EXT_SD2_PRESCALE_V  0x000000FFU
#define GPIO_EXT_SD2_PRESCALE_S  8

/** GPIO_EXT_SIGMADELTA3_REG register
 *  Duty Cycle Configure Register of SDM3
 */
#define GPIO_EXT_SIGMADELTA3_REG (DR_REG_GPIO_EXT_BASE + 0xc)
/** GPIO_EXT_SD3_IN : R/W; bitpos: [7:0]; default: 0;
 *  This field is used to configure the duty cycle of sigma delta modulation output.
 */
#define GPIO_EXT_SD3_IN    0x000000FFU
#define GPIO_EXT_SD3_IN_M  (GPIO_EXT_SD3_IN_V << GPIO_EXT_SD3_IN_S)
#define GPIO_EXT_SD3_IN_V  0x000000FFU
#define GPIO_EXT_SD3_IN_S  0
/** GPIO_EXT_SD3_PRESCALE : R/W; bitpos: [15:8]; default: 255;
 *  This field is used to set a divider value to divide APB clock.
 */
#define GPIO_EXT_SD3_PRESCALE    0x000000FFU
#define GPIO_EXT_SD3_PRESCALE_M  (GPIO_EXT_SD3_PRESCALE_V << GPIO_EXT_SD3_PRESCALE_S)
#define GPIO_EXT_SD3_PRESCALE_V  0x000000FFU
#define GPIO_EXT_SD3_PRESCALE_S  8

/** GPIO_EXT_SIGMADELTA4_REG register
 *  Duty Cycle Configure Register of SDM4
 */
#define GPIO_EXT_SIGMADELTA4_REG (DR_REG_GPIO_EXT_BASE + 0x10)
/** GPIO_EXT_SD4_IN : R/W; bitpos: [7:0]; default: 0;
 *  This field is used to configure the duty cycle of sigma delta modulation output.
 */
#define GPIO_EXT_SD4_IN    0x000000FFU
#define GPIO_EXT_SD4_IN_M  (GPIO_EXT_SD4_IN_V << GPIO_EXT_SD4_IN_S)
#define GPIO_EXT_SD4_IN_V  0x000000FFU
#define GPIO_EXT_SD4_IN_S  0
/** GPIO_EXT_SD4_PRESCALE : R/W; bitpos: [15:8]; default: 255;
 *  This field is used to set a divider value to divide APB clock.
 */
#define GPIO_EXT_SD4_PRESCALE    0x000000FFU
#define GPIO_EXT_SD4_PRESCALE_M  (GPIO_EXT_SD4_PRESCALE_V << GPIO_EXT_SD4_PRESCALE_S)
#define GPIO_EXT_SD4_PRESCALE_V  0x000000FFU
#define GPIO_EXT_SD4_PRESCALE_S  8

/** GPIO_EXT_SIGMADELTA5_REG register
 *  Duty Cycle Configure Register of SDM5
 */
#define GPIO_EXT_SIGMADELTA5_REG (DR_REG_GPIO_EXT_BASE + 0x14)
/** GPIO_EXT_SD5_IN : R/W; bitpos: [7:0]; default: 0;
 *  This field is used to configure the duty cycle of sigma delta modulation output.
 */
#define GPIO_EXT_SD5_IN    0x000000FFU
#define GPIO_EXT_SD5_IN_M  (GPIO_EXT_SD5_IN_V << GPIO_EXT_SD5_IN_S)
#define GPIO_EXT_SD5_IN_V  0x000000FFU
#define GPIO_EXT_SD5_IN_S  0
/** GPIO_EXT_SD5_PRESCALE : R/W; bitpos: [15:8]; default: 255;
 *  This field is used to set a divider value to divide APB clock.
 */
#define GPIO_EXT_SD5_PRESCALE    0x000000FFU
#define GPIO_EXT_SD5_PRESCALE_M  (GPIO_EXT_SD5_PRESCALE_V << GPIO_EXT_SD5_PRESCALE_S)
#define GPIO_EXT_SD5_PRESCALE_V  0x000000FFU
#define GPIO_EXT_SD5_PRESCALE_S  8

/** GPIO_EXT_SIGMADELTA6_REG register
 *  Duty Cycle Configure Register of SDM6
 */
#define GPIO_EXT_SIGMADELTA6_REG (DR_REG_GPIO_EXT_BASE + 0x18)
/** GPIO_EXT_SD6_IN : R/W; bitpos: [7:0]; default: 0;
 *  This field is used to configure the duty cycle of sigma delta modulation output.
 */
#define GPIO_EXT_SD6_IN    0x000000FFU
#define GPIO_EXT_SD6_IN_M  (GPIO_EXT_SD6_IN_V << GPIO_EXT_SD6_IN_S)
#define GPIO_EXT_SD6_IN_V  0x000000FFU
#define GPIO_EXT_SD6_IN_S  0
/** GPIO_EXT_SD6_PRESCALE : R/W; bitpos: [15:8]; default: 255;
 *  This field is used to set a divider value to divide APB clock.
 */
#define GPIO_EXT_SD6_PRESCALE    0x000000FFU
#define GPIO_EXT_SD6_PRESCALE_M  (GPIO_EXT_SD6_PRESCALE_V << GPIO_EXT_SD6_PRESCALE_S)
#define GPIO_EXT_SD6_PRESCALE_V  0x000000FFU
#define GPIO_EXT_SD6_PRESCALE_S  8

/** GPIO_EXT_SIGMADELTA7_REG register
 *  Duty Cycle Configure Register of SDM7
 */
#define GPIO_EXT_SIGMADELTA7_REG (DR_REG_GPIO_EXT_BASE + 0x1c)
/** GPIO_EXT_SD7_IN : R/W; bitpos: [7:0]; default: 0;
 *  This field is used to configure the duty cycle of sigma delta modulation output.
 */
#define GPIO_EXT_SD7_IN    0x000000FFU
#define GPIO_EXT_SD7_IN_M  (GPIO_EXT_SD7_IN_V << GPIO_EXT_SD7_IN_S)
#define GPIO_EXT_SD7_IN_V  0x000000FFU
#define GPIO_EXT_SD7_IN_S  0
/** GPIO_EXT_SD7_PRESCALE : R/W; bitpos: [15:8]; default: 255;
 *  This field is used to set a divider value to divide APB clock.
 */
#define GPIO_EXT_SD7_PRESCALE    0x000000FFU
#define GPIO_EXT_SD7_PRESCALE_M  (GPIO_EXT_SD7_PRESCALE_V << GPIO_EXT_SD7_PRESCALE_S)
#define GPIO_EXT_SD7_PRESCALE_V  0x000000FFU
#define GPIO_EXT_SD7_PRESCALE_S  8

/** GPIO_EXT_SIGMADELTA_MISC_REG register
 *  MISC Register
 */
#define GPIO_EXT_SIGMADELTA_MISC_REG (DR_REG_GPIO_EXT_BASE + 0x24)
/** GPIO_EXT_SD_FUNCTION_CLK_EN : R/W; bitpos: [30]; default: 0;
 *  Clock enable bit of sigma delta modulation.
 */
#define GPIO_EXT_SD_FUNCTION_CLK_EN    (BIT(30))
#define GPIO_EXT_SD_FUNCTION_CLK_EN_M  (GPIO_EXT_SD_FUNCTION_CLK_EN_V << GPIO_EXT_SD_FUNCTION_CLK_EN_S)
#define GPIO_EXT_SD_FUNCTION_CLK_EN_V  0x00000001U
#define GPIO_EXT_SD_FUNCTION_CLK_EN_S  30
/** GPIO_EXT_SD_SPI_SWAP : R/W; bitpos: [31]; default: 0;
 *  Reserved.
 */
#define GPIO_EXT_SD_SPI_SWAP    (BIT(31))
#define GPIO_EXT_SD_SPI_SWAP_M  (GPIO_EXT_SD_SPI_SWAP_V << GPIO_EXT_SD_SPI_SWAP_S)
#define GPIO_EXT_SD_SPI_SWAP_V  0x00000001U
#define GPIO_EXT_SD_SPI_SWAP_S  31

/** GPIO_EXT_GLITCH_FILTER_CH0_REG register
 *  Glitch Filter Configure Register of Channel0
 */
#define GPIO_EXT_GLITCH_FILTER_CH0_REG (DR_REG_GPIO_EXT_BASE + 0x30)
/** GPIO_EXT_FILTER_CH0_EN : R/W; bitpos: [0]; default: 0;
 *  Glitch Filter channel enable bit.
 */
#define GPIO_EXT_FILTER_CH0_EN    (BIT(0))
#define GPIO_EXT_FILTER_CH0_EN_M  (GPIO_EXT_FILTER_CH0_EN_V << GPIO_EXT_FILTER_CH0_EN_S)
#define GPIO_EXT_FILTER_CH0_EN_V  0x00000001U
#define GPIO_EXT_FILTER_CH0_EN_S  0
/** GPIO_EXT_FILTER_CH0_INPUT_IO_NUM : R/W; bitpos: [6:1]; default: 0;
 *  Glitch Filter input io number.
 */
#define GPIO_EXT_FILTER_CH0_INPUT_IO_NUM    0x0000003FU
#define GPIO_EXT_FILTER_CH0_INPUT_IO_NUM_M  (GPIO_EXT_FILTER_CH0_INPUT_IO_NUM_V << GPIO_EXT_FILTER_CH0_INPUT_IO_NUM_S)
#define GPIO_EXT_FILTER_CH0_INPUT_IO_NUM_V  0x0000003FU
#define GPIO_EXT_FILTER_CH0_INPUT_IO_NUM_S  1
/** GPIO_EXT_FILTER_CH0_WINDOW_THRES : R/W; bitpos: [12:7]; default: 0;
 *  Glitch Filter window threshold.
 */
#define GPIO_EXT_FILTER_CH0_WINDOW_THRES    0x0000003FU
#define GPIO_EXT_FILTER_CH0_WINDOW_THRES_M  (GPIO_EXT_FILTER_CH0_WINDOW_THRES_V << GPIO_EXT_FILTER_CH0_WINDOW_THRES_S)
#define GPIO_EXT_FILTER_CH0_WINDOW_THRES_V  0x0000003FU
#define GPIO_EXT_FILTER_CH0_WINDOW_THRES_S  7
/** GPIO_EXT_FILTER_CH0_WINDOW_WIDTH : R/W; bitpos: [18:13]; default: 0;
 *  Glitch Filter window width.
 */
#define GPIO_EXT_FILTER_CH0_WINDOW_WIDTH    0x0000003FU
#define GPIO_EXT_FILTER_CH0_WINDOW_WIDTH_M  (GPIO_EXT_FILTER_CH0_WINDOW_WIDTH_V << GPIO_EXT_FILTER_CH0_WINDOW_WIDTH_S)
#define GPIO_EXT_FILTER_CH0_WINDOW_WIDTH_V  0x0000003FU
#define GPIO_EXT_FILTER_CH0_WINDOW_WIDTH_S  13

/** GPIO_EXT_GLITCH_FILTER_CH1_REG register
 *  Glitch Filter Configure Register of Channel1
 */
#define GPIO_EXT_GLITCH_FILTER_CH1_REG (DR_REG_GPIO_EXT_BASE + 0x34)
/** GPIO_EXT_FILTER_CH1_EN : R/W; bitpos: [0]; default: 0;
 *  Glitch Filter channel enable bit.
 */
#define GPIO_EXT_FILTER_CH1_EN    (BIT(0))
#define GPIO_EXT_FILTER_CH1_EN_M  (GPIO_EXT_FILTER_CH1_EN_V << GPIO_EXT_FILTER_CH1_EN_S)
#define GPIO_EXT_FILTER_CH1_EN_V  0x00000001U
#define GPIO_EXT_FILTER_CH1_EN_S  0
/** GPIO_EXT_FILTER_CH1_INPUT_IO_NUM : R/W; bitpos: [6:1]; default: 0;
 *  Glitch Filter input io number.
 */
#define GPIO_EXT_FILTER_CH1_INPUT_IO_NUM    0x0000003FU
#define GPIO_EXT_FILTER_CH1_INPUT_IO_NUM_M  (GPIO_EXT_FILTER_CH1_INPUT_IO_NUM_V << GPIO_EXT_FILTER_CH1_INPUT_IO_NUM_S)
#define GPIO_EXT_FILTER_CH1_INPUT_IO_NUM_V  0x0000003FU
#define GPIO_EXT_FILTER_CH1_INPUT_IO_NUM_S  1
/** GPIO_EXT_FILTER_CH1_WINDOW_THRES : R/W; bitpos: [12:7]; default: 0;
 *  Glitch Filter window threshold.
 */
#define GPIO_EXT_FILTER_CH1_WINDOW_THRES    0x0000003FU
#define GPIO_EXT_FILTER_CH1_WINDOW_THRES_M  (GPIO_EXT_FILTER_CH1_WINDOW_THRES_V << GPIO_EXT_FILTER_CH1_WINDOW_THRES_S)
#define GPIO_EXT_FILTER_CH1_WINDOW_THRES_V  0x0000003FU
#define GPIO_EXT_FILTER_CH1_WINDOW_THRES_S  7
/** GPIO_EXT_FILTER_CH1_WINDOW_WIDTH : R/W; bitpos: [18:13]; default: 0;
 *  Glitch Filter window width.
 */
#define GPIO_EXT_FILTER_CH1_WINDOW_WIDTH    0x0000003FU
#define GPIO_EXT_FILTER_CH1_WINDOW_WIDTH_M  (GPIO_EXT_FILTER_CH1_WINDOW_WIDTH_V << GPIO_EXT_FILTER_CH1_WINDOW_WIDTH_S)
#define GPIO_EXT_FILTER_CH1_WINDOW_WIDTH_V  0x0000003FU
#define GPIO_EXT_FILTER_CH1_WINDOW_WIDTH_S  13

/** GPIO_EXT_GLITCH_FILTER_CH2_REG register
 *  Glitch Filter Configure Register of Channel2
 */
#define GPIO_EXT_GLITCH_FILTER_CH2_REG (DR_REG_GPIO_EXT_BASE + 0x38)
/** GPIO_EXT_FILTER_CH2_EN : R/W; bitpos: [0]; default: 0;
 *  Glitch Filter channel enable bit.
 */
#define GPIO_EXT_FILTER_CH2_EN    (BIT(0))
#define GPIO_EXT_FILTER_CH2_EN_M  (GPIO_EXT_FILTER_CH2_EN_V << GPIO_EXT_FILTER_CH2_EN_S)
#define GPIO_EXT_FILTER_CH2_EN_V  0x00000001U
#define GPIO_EXT_FILTER_CH2_EN_S  0
/** GPIO_EXT_FILTER_CH2_INPUT_IO_NUM : R/W; bitpos: [6:1]; default: 0;
 *  Glitch Filter input io number.
 */
#define GPIO_EXT_FILTER_CH2_INPUT_IO_NUM    0x0000003FU
#define GPIO_EXT_FILTER_CH2_INPUT_IO_NUM_M  (GPIO_EXT_FILTER_CH2_INPUT_IO_NUM_V << GPIO_EXT_FILTER_CH2_INPUT_IO_NUM_S)
#define GPIO_EXT_FILTER_CH2_INPUT_IO_NUM_V  0x0000003FU
#define GPIO_EXT_FILTER_CH2_INPUT_IO_NUM_S  1
/** GPIO_EXT_FILTER_CH2_WINDOW_THRES : R/W; bitpos: [12:7]; default: 0;
 *  Glitch Filter window threshold.
 */
#define GPIO_EXT_FILTER_CH2_WINDOW_THRES    0x0000003FU
#define GPIO_EXT_FILTER_CH2_WINDOW_THRES_M  (GPIO_EXT_FILTER_CH2_WINDOW_THRES_V << GPIO_EXT_FILTER_CH2_WINDOW_THRES_S)
#define GPIO_EXT_FILTER_CH2_WINDOW_THRES_V  0x0000003FU
#define GPIO_EXT_FILTER_CH2_WINDOW_THRES_S  7
/** GPIO_EXT_FILTER_CH2_WINDOW_WIDTH : R/W; bitpos: [18:13]; default: 0;
 *  Glitch Filter window width.
 */
#define GPIO_EXT_FILTER_CH2_WINDOW_WIDTH    0x0000003FU
#define GPIO_EXT_FILTER_CH2_WINDOW_WIDTH_M  (GPIO_EXT_FILTER_CH2_WINDOW_WIDTH_V << GPIO_EXT_FILTER_CH2_WINDOW_WIDTH_S)
#define GPIO_EXT_FILTER_CH2_WINDOW_WIDTH_V  0x0000003FU
#define GPIO_EXT_FILTER_CH2_WINDOW_WIDTH_S  13

/** GPIO_EXT_GLITCH_FILTER_CH3_REG register
 *  Glitch Filter Configure Register of Channel3
 */
#define GPIO_EXT_GLITCH_FILTER_CH3_REG (DR_REG_GPIO_EXT_BASE + 0x3c)
/** GPIO_EXT_FILTER_CH3_EN : R/W; bitpos: [0]; default: 0;
 *  Glitch Filter channel enable bit.
 */
#define GPIO_EXT_FILTER_CH3_EN    (BIT(0))
#define GPIO_EXT_FILTER_CH3_EN_M  (GPIO_EXT_FILTER_CH3_EN_V << GPIO_EXT_FILTER_CH3_EN_S)
#define GPIO_EXT_FILTER_CH3_EN_V  0x00000001U
#define GPIO_EXT_FILTER_CH3_EN_S  0
/** GPIO_EXT_FILTER_CH3_INPUT_IO_NUM : R/W; bitpos: [6:1]; default: 0;
 *  Glitch Filter input io number.
 */
#define GPIO_EXT_FILTER_CH3_INPUT_IO_NUM    0x0000003FU
#define GPIO_EXT_FILTER_CH3_INPUT_IO_NUM_M  (GPIO_EXT_FILTER_CH3_INPUT_IO_NUM_V << GPIO_EXT_FILTER_CH3_INPUT_IO_NUM_S)
#define GPIO_EXT_FILTER_CH3_INPUT_IO_NUM_V  0x0000003FU
#define GPIO_EXT_FILTER_CH3_INPUT_IO_NUM_S  1
/** GPIO_EXT_FILTER_CH3_WINDOW_THRES : R/W; bitpos: [12:7]; default: 0;
 *  Glitch Filter window threshold.
 */
#define GPIO_EXT_FILTER_CH3_WINDOW_THRES    0x0000003FU
#define GPIO_EXT_FILTER_CH3_WINDOW_THRES_M  (GPIO_EXT_FILTER_CH3_WINDOW_THRES_V << GPIO_EXT_FILTER_CH3_WINDOW_THRES_S)
#define GPIO_EXT_FILTER_CH3_WINDOW_THRES_V  0x0000003FU
#define GPIO_EXT_FILTER_CH3_WINDOW_THRES_S  7
/** GPIO_EXT_FILTER_CH3_WINDOW_WIDTH : R/W; bitpos: [18:13]; default: 0;
 *  Glitch Filter window width.
 */
#define GPIO_EXT_FILTER_CH3_WINDOW_WIDTH    0x0000003FU
#define GPIO_EXT_FILTER_CH3_WINDOW_WIDTH_M  (GPIO_EXT_FILTER_CH3_WINDOW_WIDTH_V << GPIO_EXT_FILTER_CH3_WINDOW_WIDTH_S)
#define GPIO_EXT_FILTER_CH3_WINDOW_WIDTH_V  0x0000003FU
#define GPIO_EXT_FILTER_CH3_WINDOW_WIDTH_S  13

/** GPIO_EXT_GLITCH_FILTER_CH4_REG register
 *  Glitch Filter Configure Register of Channel4
 */
#define GPIO_EXT_GLITCH_FILTER_CH4_REG (DR_REG_GPIO_EXT_BASE + 0x40)
/** GPIO_EXT_FILTER_CH4_EN : R/W; bitpos: [0]; default: 0;
 *  Glitch Filter channel enable bit.
 */
#define GPIO_EXT_FILTER_CH4_EN    (BIT(0))
#define GPIO_EXT_FILTER_CH4_EN_M  (GPIO_EXT_FILTER_CH4_EN_V << GPIO_EXT_FILTER_CH4_EN_S)
#define GPIO_EXT_FILTER_CH4_EN_V  0x00000001U
#define GPIO_EXT_FILTER_CH4_EN_S  0
/** GPIO_EXT_FILTER_CH4_INPUT_IO_NUM : R/W; bitpos: [6:1]; default: 0;
 *  Glitch Filter input io number.
 */
#define GPIO_EXT_FILTER_CH4_INPUT_IO_NUM    0x0000003FU
#define GPIO_EXT_FILTER_CH4_INPUT_IO_NUM_M  (GPIO_EXT_FILTER_CH4_INPUT_IO_NUM_V << GPIO_EXT_FILTER_CH4_INPUT_IO_NUM_S)
#define GPIO_EXT_FILTER_CH4_INPUT_IO_NUM_V  0x0000003FU
#define GPIO_EXT_FILTER_CH4_INPUT_IO_NUM_S  1
/** GPIO_EXT_FILTER_CH4_WINDOW_THRES : R/W; bitpos: [12:7]; default: 0;
 *  Glitch Filter window threshold.
 */
#define GPIO_EXT_FILTER_CH4_WINDOW_THRES    0x0000003FU
#define GPIO_EXT_FILTER_CH4_WINDOW_THRES_M  (GPIO_EXT_FILTER_CH4_WINDOW_THRES_V << GPIO_EXT_FILTER_CH4_WINDOW_THRES_S)
#define GPIO_EXT_FILTER_CH4_WINDOW_THRES_V  0x0000003FU
#define GPIO_EXT_FILTER_CH4_WINDOW_THRES_S  7
/** GPIO_EXT_FILTER_CH4_WINDOW_WIDTH : R/W; bitpos: [18:13]; default: 0;
 *  Glitch Filter window width.
 */
#define GPIO_EXT_FILTER_CH4_WINDOW_WIDTH    0x0000003FU
#define GPIO_EXT_FILTER_CH4_WINDOW_WIDTH_M  (GPIO_EXT_FILTER_CH4_WINDOW_WIDTH_V << GPIO_EXT_FILTER_CH4_WINDOW_WIDTH_S)
#define GPIO_EXT_FILTER_CH4_WINDOW_WIDTH_V  0x0000003FU
#define GPIO_EXT_FILTER_CH4_WINDOW_WIDTH_S  13

/** GPIO_EXT_GLITCH_FILTER_CH5_REG register
 *  Glitch Filter Configure Register of Channel5
 */
#define GPIO_EXT_GLITCH_FILTER_CH5_REG (DR_REG_GPIO_EXT_BASE + 0x44)
/** GPIO_EXT_FILTER_CH5_EN : R/W; bitpos: [0]; default: 0;
 *  Glitch Filter channel enable bit.
 */
#define GPIO_EXT_FILTER_CH5_EN    (BIT(0))
#define GPIO_EXT_FILTER_CH5_EN_M  (GPIO_EXT_FILTER_CH5_EN_V << GPIO_EXT_FILTER_CH5_EN_S)
#define GPIO_EXT_FILTER_CH5_EN_V  0x00000001U
#define GPIO_EXT_FILTER_CH5_EN_S  0
/** GPIO_EXT_FILTER_CH5_INPUT_IO_NUM : R/W; bitpos: [6:1]; default: 0;
 *  Glitch Filter input io number.
 */
#define GPIO_EXT_FILTER_CH5_INPUT_IO_NUM    0x0000003FU
#define GPIO_EXT_FILTER_CH5_INPUT_IO_NUM_M  (GPIO_EXT_FILTER_CH5_INPUT_IO_NUM_V << GPIO_EXT_FILTER_CH5_INPUT_IO_NUM_S)
#define GPIO_EXT_FILTER_CH5_INPUT_IO_NUM_V  0x0000003FU
#define GPIO_EXT_FILTER_CH5_INPUT_IO_NUM_S  1
/** GPIO_EXT_FILTER_CH5_WINDOW_THRES : R/W; bitpos: [12:7]; default: 0;
 *  Glitch Filter window threshold.
 */
#define GPIO_EXT_FILTER_CH5_WINDOW_THRES    0x0000003FU
#define GPIO_EXT_FILTER_CH5_WINDOW_THRES_M  (GPIO_EXT_FILTER_CH5_WINDOW_THRES_V << GPIO_EXT_FILTER_CH5_WINDOW_THRES_S)
#define GPIO_EXT_FILTER_CH5_WINDOW_THRES_V  0x0000003FU
#define GPIO_EXT_FILTER_CH5_WINDOW_THRES_S  7
/** GPIO_EXT_FILTER_CH5_WINDOW_WIDTH : R/W; bitpos: [18:13]; default: 0;
 *  Glitch Filter window width.
 */
#define GPIO_EXT_FILTER_CH5_WINDOW_WIDTH    0x0000003FU
#define GPIO_EXT_FILTER_CH5_WINDOW_WIDTH_M  (GPIO_EXT_FILTER_CH5_WINDOW_WIDTH_V << GPIO_EXT_FILTER_CH5_WINDOW_WIDTH_S)
#define GPIO_EXT_FILTER_CH5_WINDOW_WIDTH_V  0x0000003FU
#define GPIO_EXT_FILTER_CH5_WINDOW_WIDTH_S  13

/** GPIO_EXT_GLITCH_FILTER_CH6_REG register
 *  Glitch Filter Configure Register of Channel6
 */
#define GPIO_EXT_GLITCH_FILTER_CH6_REG (DR_REG_GPIO_EXT_BASE + 0x48)
/** GPIO_EXT_FILTER_CH6_EN : R/W; bitpos: [0]; default: 0;
 *  Glitch Filter channel enable bit.
 */
#define GPIO_EXT_FILTER_CH6_EN    (BIT(0))
#define GPIO_EXT_FILTER_CH6_EN_M  (GPIO_EXT_FILTER_CH6_EN_V << GPIO_EXT_FILTER_CH6_EN_S)
#define GPIO_EXT_FILTER_CH6_EN_V  0x00000001U
#define GPIO_EXT_FILTER_CH6_EN_S  0
/** GPIO_EXT_FILTER_CH6_INPUT_IO_NUM : R/W; bitpos: [6:1]; default: 0;
 *  Glitch Filter input io number.
 */
#define GPIO_EXT_FILTER_CH6_INPUT_IO_NUM    0x0000003FU
#define GPIO_EXT_FILTER_CH6_INPUT_IO_NUM_M  (GPIO_EXT_FILTER_CH6_INPUT_IO_NUM_V << GPIO_EXT_FILTER_CH6_INPUT_IO_NUM_S)
#define GPIO_EXT_FILTER_CH6_INPUT_IO_NUM_V  0x0000003FU
#define GPIO_EXT_FILTER_CH6_INPUT_IO_NUM_S  1
/** GPIO_EXT_FILTER_CH6_WINDOW_THRES : R/W; bitpos: [12:7]; default: 0;
 *  Glitch Filter window threshold.
 */
#define GPIO_EXT_FILTER_CH6_WINDOW_THRES    0x0000003FU
#define GPIO_EXT_FILTER_CH6_WINDOW_THRES_M  (GPIO_EXT_FILTER_CH6_WINDOW_THRES_V << GPIO_EXT_FILTER_CH6_WINDOW_THRES_S)
#define GPIO_EXT_FILTER_CH6_WINDOW_THRES_V  0x0000003FU
#define GPIO_EXT_FILTER_CH6_WINDOW_THRES_S  7
/** GPIO_EXT_FILTER_CH6_WINDOW_WIDTH : R/W; bitpos: [18:13]; default: 0;
 *  Glitch Filter window width.
 */
#define GPIO_EXT_FILTER_CH6_WINDOW_WIDTH    0x0000003FU
#define GPIO_EXT_FILTER_CH6_WINDOW_WIDTH_M  (GPIO_EXT_FILTER_CH6_WINDOW_WIDTH_V << GPIO_EXT_FILTER_CH6_WINDOW_WIDTH_S)
#define GPIO_EXT_FILTER_CH6_WINDOW_WIDTH_V  0x0000003FU
#define GPIO_EXT_FILTER_CH6_WINDOW_WIDTH_S  13

/** GPIO_EXT_GLITCH_FILTER_CH7_REG register
 *  Glitch Filter Configure Register of Channel7
 */
#define GPIO_EXT_GLITCH_FILTER_CH7_REG (DR_REG_GPIO_EXT_BASE + 0x4c)
/** GPIO_EXT_FILTER_CH7_EN : R/W; bitpos: [0]; default: 0;
 *  Glitch Filter channel enable bit.
 */
#define GPIO_EXT_FILTER_CH7_EN    (BIT(0))
#define GPIO_EXT_FILTER_CH7_EN_M  (GPIO_EXT_FILTER_CH7_EN_V << GPIO_EXT_FILTER_CH7_EN_S)
#define GPIO_EXT_FILTER_CH7_EN_V  0x00000001U
#define GPIO_EXT_FILTER_CH7_EN_S  0
/** GPIO_EXT_FILTER_CH7_INPUT_IO_NUM : R/W; bitpos: [6:1]; default: 0;
 *  Glitch Filter input io number.
 */
#define GPIO_EXT_FILTER_CH7_INPUT_IO_NUM    0x0000003FU
#define GPIO_EXT_FILTER_CH7_INPUT_IO_NUM_M  (GPIO_EXT_FILTER_CH7_INPUT_IO_NUM_V << GPIO_EXT_FILTER_CH7_INPUT_IO_NUM_S)
#define GPIO_EXT_FILTER_CH7_INPUT_IO_NUM_V  0x0000003FU
#define GPIO_EXT_FILTER_CH7_INPUT_IO_NUM_S  1
/** GPIO_EXT_FILTER_CH7_WINDOW_THRES : R/W; bitpos: [12:7]; default: 0;
 *  Glitch Filter window threshold.
 */
#define GPIO_EXT_FILTER_CH7_WINDOW_THRES    0x0000003FU
#define GPIO_EXT_FILTER_CH7_WINDOW_THRES_M  (GPIO_EXT_FILTER_CH7_WINDOW_THRES_V << GPIO_EXT_FILTER_CH7_WINDOW_THRES_S)
#define GPIO_EXT_FILTER_CH7_WINDOW_THRES_V  0x0000003FU
#define GPIO_EXT_FILTER_CH7_WINDOW_THRES_S  7
/** GPIO_EXT_FILTER_CH7_WINDOW_WIDTH : R/W; bitpos: [18:13]; default: 0;
 *  Glitch Filter window width.
 */
#define GPIO_EXT_FILTER_CH7_WINDOW_WIDTH    0x0000003FU
#define GPIO_EXT_FILTER_CH7_WINDOW_WIDTH_M  (GPIO_EXT_FILTER_CH7_WINDOW_WIDTH_V << GPIO_EXT_FILTER_CH7_WINDOW_WIDTH_S)
#define GPIO_EXT_FILTER_CH7_WINDOW_WIDTH_V  0x0000003FU
#define GPIO_EXT_FILTER_CH7_WINDOW_WIDTH_S  13

/** GPIO_EXT_ETM_EVENT_CH0_CFG_REG register
 *  Etm Config register of Channel0
 */
#define GPIO_EXT_ETM_EVENT_CH0_CFG_REG (DR_REG_GPIO_EXT_BASE + 0x60)
/** GPIO_EXT_ETM_CH0_EVENT_SEL : R/W; bitpos: [5:0]; default: 0;
 *  Etm event channel select gpio.
 */
#define GPIO_EXT_ETM_CH0_EVENT_SEL    0x0000003FU
#define GPIO_EXT_ETM_CH0_EVENT_SEL_M  (GPIO_EXT_ETM_CH0_EVENT_SEL_V << GPIO_EXT_ETM_CH0_EVENT_SEL_S)
#define GPIO_EXT_ETM_CH0_EVENT_SEL_V  0x0000003FU
#define GPIO_EXT_ETM_CH0_EVENT_SEL_S  0
/** GPIO_EXT_ETM_CH0_EVENT_EN : R/W; bitpos: [7]; default: 0;
 *  Etm event send enable bit.
 */
#define GPIO_EXT_ETM_CH0_EVENT_EN    (BIT(7))
#define GPIO_EXT_ETM_CH0_EVENT_EN_M  (GPIO_EXT_ETM_CH0_EVENT_EN_V << GPIO_EXT_ETM_CH0_EVENT_EN_S)
#define GPIO_EXT_ETM_CH0_EVENT_EN_V  0x00000001U
#define GPIO_EXT_ETM_CH0_EVENT_EN_S  7

/** GPIO_EXT_ETM_EVENT_CH1_CFG_REG register
 *  Etm Config register of Channel1
 */
#define GPIO_EXT_ETM_EVENT_CH1_CFG_REG (DR_REG_GPIO_EXT_BASE + 0x64)
/** GPIO_EXT_ETM_CH1_EVENT_SEL : R/W; bitpos: [5:0]; default: 0;
 *  Etm event channel select gpio.
 */
#define GPIO_EXT_ETM_CH1_EVENT_SEL    0x0000003FU
#define GPIO_EXT_ETM_CH1_EVENT_SEL_M  (GPIO_EXT_ETM_CH1_EVENT_SEL_V << GPIO_EXT_ETM_CH1_EVENT_SEL_S)
#define GPIO_EXT_ETM_CH1_EVENT_SEL_V  0x0000003FU
#define GPIO_EXT_ETM_CH1_EVENT_SEL_S  0
/** GPIO_EXT_ETM_CH1_EVENT_EN : R/W; bitpos: [7]; default: 0;
 *  Etm event send enable bit.
 */
#define GPIO_EXT_ETM_CH1_EVENT_EN    (BIT(7))
#define GPIO_EXT_ETM_CH1_EVENT_EN_M  (GPIO_EXT_ETM_CH1_EVENT_EN_V << GPIO_EXT_ETM_CH1_EVENT_EN_S)
#define GPIO_EXT_ETM_CH1_EVENT_EN_V  0x00000001U
#define GPIO_EXT_ETM_CH1_EVENT_EN_S  7

/** GPIO_EXT_ETM_EVENT_CH2_CFG_REG register
 *  Etm Config register of Channel2
 */
#define GPIO_EXT_ETM_EVENT_CH2_CFG_REG (DR_REG_GPIO_EXT_BASE + 0x68)
/** GPIO_EXT_ETM_CH2_EVENT_SEL : R/W; bitpos: [5:0]; default: 0;
 *  Etm event channel select gpio.
 */
#define GPIO_EXT_ETM_CH2_EVENT_SEL    0x0000003FU
#define GPIO_EXT_ETM_CH2_EVENT_SEL_M  (GPIO_EXT_ETM_CH2_EVENT_SEL_V << GPIO_EXT_ETM_CH2_EVENT_SEL_S)
#define GPIO_EXT_ETM_CH2_EVENT_SEL_V  0x0000003FU
#define GPIO_EXT_ETM_CH2_EVENT_SEL_S  0
/** GPIO_EXT_ETM_CH2_EVENT_EN : R/W; bitpos: [7]; default: 0;
 *  Etm event send enable bit.
 */
#define GPIO_EXT_ETM_CH2_EVENT_EN    (BIT(7))
#define GPIO_EXT_ETM_CH2_EVENT_EN_M  (GPIO_EXT_ETM_CH2_EVENT_EN_V << GPIO_EXT_ETM_CH2_EVENT_EN_S)
#define GPIO_EXT_ETM_CH2_EVENT_EN_V  0x00000001U
#define GPIO_EXT_ETM_CH2_EVENT_EN_S  7

/** GPIO_EXT_ETM_EVENT_CH3_CFG_REG register
 *  Etm Config register of Channel3
 */
#define GPIO_EXT_ETM_EVENT_CH3_CFG_REG (DR_REG_GPIO_EXT_BASE + 0x6c)
/** GPIO_EXT_ETM_CH3_EVENT_SEL : R/W; bitpos: [5:0]; default: 0;
 *  Etm event channel select gpio.
 */
#define GPIO_EXT_ETM_CH3_EVENT_SEL    0x0000003FU
#define GPIO_EXT_ETM_CH3_EVENT_SEL_M  (GPIO_EXT_ETM_CH3_EVENT_SEL_V << GPIO_EXT_ETM_CH3_EVENT_SEL_S)
#define GPIO_EXT_ETM_CH3_EVENT_SEL_V  0x0000003FU
#define GPIO_EXT_ETM_CH3_EVENT_SEL_S  0
/** GPIO_EXT_ETM_CH3_EVENT_EN : R/W; bitpos: [7]; default: 0;
 *  Etm event send enable bit.
 */
#define GPIO_EXT_ETM_CH3_EVENT_EN    (BIT(7))
#define GPIO_EXT_ETM_CH3_EVENT_EN_M  (GPIO_EXT_ETM_CH3_EVENT_EN_V << GPIO_EXT_ETM_CH3_EVENT_EN_S)
#define GPIO_EXT_ETM_CH3_EVENT_EN_V  0x00000001U
#define GPIO_EXT_ETM_CH3_EVENT_EN_S  7

/** GPIO_EXT_ETM_EVENT_CH4_CFG_REG register
 *  Etm Config register of Channel4
 */
#define GPIO_EXT_ETM_EVENT_CH4_CFG_REG (DR_REG_GPIO_EXT_BASE + 0x70)
/** GPIO_EXT_ETM_CH4_EVENT_SEL : R/W; bitpos: [5:0]; default: 0;
 *  Etm event channel select gpio.
 */
#define GPIO_EXT_ETM_CH4_EVENT_SEL    0x0000003FU
#define GPIO_EXT_ETM_CH4_EVENT_SEL_M  (GPIO_EXT_ETM_CH4_EVENT_SEL_V << GPIO_EXT_ETM_CH4_EVENT_SEL_S)
#define GPIO_EXT_ETM_CH4_EVENT_SEL_V  0x0000003FU
#define GPIO_EXT_ETM_CH4_EVENT_SEL_S  0
/** GPIO_EXT_ETM_CH4_EVENT_EN : R/W; bitpos: [7]; default: 0;
 *  Etm event send enable bit.
 */
#define GPIO_EXT_ETM_CH4_EVENT_EN    (BIT(7))
#define GPIO_EXT_ETM_CH4_EVENT_EN_M  (GPIO_EXT_ETM_CH4_EVENT_EN_V << GPIO_EXT_ETM_CH4_EVENT_EN_S)
#define GPIO_EXT_ETM_CH4_EVENT_EN_V  0x00000001U
#define GPIO_EXT_ETM_CH4_EVENT_EN_S  7

/** GPIO_EXT_ETM_EVENT_CH5_CFG_REG register
 *  Etm Config register of Channel5
 */
#define GPIO_EXT_ETM_EVENT_CH5_CFG_REG (DR_REG_GPIO_EXT_BASE + 0x74)
/** GPIO_EXT_ETM_CH5_EVENT_SEL : R/W; bitpos: [5:0]; default: 0;
 *  Etm event channel select gpio.
 */
#define GPIO_EXT_ETM_CH5_EVENT_SEL    0x0000003FU
#define GPIO_EXT_ETM_CH5_EVENT_SEL_M  (GPIO_EXT_ETM_CH5_EVENT_SEL_V << GPIO_EXT_ETM_CH5_EVENT_SEL_S)
#define GPIO_EXT_ETM_CH5_EVENT_SEL_V  0x0000003FU
#define GPIO_EXT_ETM_CH5_EVENT_SEL_S  0
/** GPIO_EXT_ETM_CH5_EVENT_EN : R/W; bitpos: [7]; default: 0;
 *  Etm event send enable bit.
 */
#define GPIO_EXT_ETM_CH5_EVENT_EN    (BIT(7))
#define GPIO_EXT_ETM_CH5_EVENT_EN_M  (GPIO_EXT_ETM_CH5_EVENT_EN_V << GPIO_EXT_ETM_CH5_EVENT_EN_S)
#define GPIO_EXT_ETM_CH5_EVENT_EN_V  0x00000001U
#define GPIO_EXT_ETM_CH5_EVENT_EN_S  7

/** GPIO_EXT_ETM_EVENT_CH6_CFG_REG register
 *  Etm Config register of Channel6
 */
#define GPIO_EXT_ETM_EVENT_CH6_CFG_REG (DR_REG_GPIO_EXT_BASE + 0x78)
/** GPIO_EXT_ETM_CH6_EVENT_SEL : R/W; bitpos: [5:0]; default: 0;
 *  Etm event channel select gpio.
 */
#define GPIO_EXT_ETM_CH6_EVENT_SEL    0x0000003FU
#define GPIO_EXT_ETM_CH6_EVENT_SEL_M  (GPIO_EXT_ETM_CH6_EVENT_SEL_V << GPIO_EXT_ETM_CH6_EVENT_SEL_S)
#define GPIO_EXT_ETM_CH6_EVENT_SEL_V  0x0000003FU
#define GPIO_EXT_ETM_CH6_EVENT_SEL_S  0
/** GPIO_EXT_ETM_CH6_EVENT_EN : R/W; bitpos: [7]; default: 0;
 *  Etm event send enable bit.
 */
#define GPIO_EXT_ETM_CH6_EVENT_EN    (BIT(7))
#define GPIO_EXT_ETM_CH6_EVENT_EN_M  (GPIO_EXT_ETM_CH6_EVENT_EN_V << GPIO_EXT_ETM_CH6_EVENT_EN_S)
#define GPIO_EXT_ETM_CH6_EVENT_EN_V  0x00000001U
#define GPIO_EXT_ETM_CH6_EVENT_EN_S  7

/** GPIO_EXT_ETM_EVENT_CH7_CFG_REG register
 *  Etm Config register of Channel7
 */
#define GPIO_EXT_ETM_EVENT_CH7_CFG_REG (DR_REG_GPIO_EXT_BASE + 0x7c)
/** GPIO_EXT_ETM_CH7_EVENT_SEL : R/W; bitpos: [5:0]; default: 0;
 *  Etm event channel select gpio.
 */
#define GPIO_EXT_ETM_CH7_EVENT_SEL    0x0000003FU
#define GPIO_EXT_ETM_CH7_EVENT_SEL_M  (GPIO_EXT_ETM_CH7_EVENT_SEL_V << GPIO_EXT_ETM_CH7_EVENT_SEL_S)
#define GPIO_EXT_ETM_CH7_EVENT_SEL_V  0x0000003FU
#define GPIO_EXT_ETM_CH7_EVENT_SEL_S  0
/** GPIO_EXT_ETM_CH7_EVENT_EN : R/W; bitpos: [7]; default: 0;
 *  Etm event send enable bit.
 */
#define GPIO_EXT_ETM_CH7_EVENT_EN    (BIT(7))
#define GPIO_EXT_ETM_CH7_EVENT_EN_M  (GPIO_EXT_ETM_CH7_EVENT_EN_V << GPIO_EXT_ETM_CH7_EVENT_EN_S)
#define GPIO_EXT_ETM_CH7_EVENT_EN_V  0x00000001U
#define GPIO_EXT_ETM_CH7_EVENT_EN_S  7

/** GPIO_EXT_ETM_TASK_P0_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P0_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xa0)
/** GPIO_EXT_ETM_TASK_GPIO0_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO0_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO0_EN_M  (GPIO_EXT_ETM_TASK_GPIO0_EN_V << GPIO_EXT_ETM_TASK_GPIO0_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO0_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO0_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO0_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO0_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO0_SEL_M  (GPIO_EXT_ETM_TASK_GPIO0_SEL_V << GPIO_EXT_ETM_TASK_GPIO0_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO0_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO0_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO1_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO1_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO1_EN_M  (GPIO_EXT_ETM_TASK_GPIO1_EN_V << GPIO_EXT_ETM_TASK_GPIO1_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO1_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO1_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO1_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO1_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO1_SEL_M  (GPIO_EXT_ETM_TASK_GPIO1_SEL_V << GPIO_EXT_ETM_TASK_GPIO1_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO1_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO1_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO2_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO2_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO2_EN_M  (GPIO_EXT_ETM_TASK_GPIO2_EN_V << GPIO_EXT_ETM_TASK_GPIO2_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO2_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO2_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO2_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO2_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO2_SEL_M  (GPIO_EXT_ETM_TASK_GPIO2_SEL_V << GPIO_EXT_ETM_TASK_GPIO2_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO2_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO2_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO3_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO3_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO3_EN_M  (GPIO_EXT_ETM_TASK_GPIO3_EN_V << GPIO_EXT_ETM_TASK_GPIO3_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO3_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO3_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO3_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO3_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO3_SEL_M  (GPIO_EXT_ETM_TASK_GPIO3_SEL_V << GPIO_EXT_ETM_TASK_GPIO3_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO3_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO3_SEL_S  25

/** GPIO_EXT_ETM_TASK_P1_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P1_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xa4)
/** GPIO_EXT_ETM_TASK_GPIO4_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO4_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO4_EN_M  (GPIO_EXT_ETM_TASK_GPIO4_EN_V << GPIO_EXT_ETM_TASK_GPIO4_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO4_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO4_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO4_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO4_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO4_SEL_M  (GPIO_EXT_ETM_TASK_GPIO4_SEL_V << GPIO_EXT_ETM_TASK_GPIO4_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO4_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO4_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO5_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO5_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO5_EN_M  (GPIO_EXT_ETM_TASK_GPIO5_EN_V << GPIO_EXT_ETM_TASK_GPIO5_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO5_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO5_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO5_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO5_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO5_SEL_M  (GPIO_EXT_ETM_TASK_GPIO5_SEL_V << GPIO_EXT_ETM_TASK_GPIO5_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO5_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO5_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO6_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO6_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO6_EN_M  (GPIO_EXT_ETM_TASK_GPIO6_EN_V << GPIO_EXT_ETM_TASK_GPIO6_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO6_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO6_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO6_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO6_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO6_SEL_M  (GPIO_EXT_ETM_TASK_GPIO6_SEL_V << GPIO_EXT_ETM_TASK_GPIO6_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO6_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO6_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO7_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO7_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO7_EN_M  (GPIO_EXT_ETM_TASK_GPIO7_EN_V << GPIO_EXT_ETM_TASK_GPIO7_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO7_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO7_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO7_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO7_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO7_SEL_M  (GPIO_EXT_ETM_TASK_GPIO7_SEL_V << GPIO_EXT_ETM_TASK_GPIO7_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO7_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO7_SEL_S  25

/** GPIO_EXT_ETM_TASK_P2_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P2_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xa8)
/** GPIO_EXT_ETM_TASK_GPIO8_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO8_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO8_EN_M  (GPIO_EXT_ETM_TASK_GPIO8_EN_V << GPIO_EXT_ETM_TASK_GPIO8_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO8_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO8_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO8_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO8_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO8_SEL_M  (GPIO_EXT_ETM_TASK_GPIO8_SEL_V << GPIO_EXT_ETM_TASK_GPIO8_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO8_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO8_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO9_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO9_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO9_EN_M  (GPIO_EXT_ETM_TASK_GPIO9_EN_V << GPIO_EXT_ETM_TASK_GPIO9_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO9_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO9_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO9_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO9_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO9_SEL_M  (GPIO_EXT_ETM_TASK_GPIO9_SEL_V << GPIO_EXT_ETM_TASK_GPIO9_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO9_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO9_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO10_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO10_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO10_EN_M  (GPIO_EXT_ETM_TASK_GPIO10_EN_V << GPIO_EXT_ETM_TASK_GPIO10_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO10_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO10_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO10_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO10_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO10_SEL_M  (GPIO_EXT_ETM_TASK_GPIO10_SEL_V << GPIO_EXT_ETM_TASK_GPIO10_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO10_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO10_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO11_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO11_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO11_EN_M  (GPIO_EXT_ETM_TASK_GPIO11_EN_V << GPIO_EXT_ETM_TASK_GPIO11_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO11_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO11_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO11_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO11_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO11_SEL_M  (GPIO_EXT_ETM_TASK_GPIO11_SEL_V << GPIO_EXT_ETM_TASK_GPIO11_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO11_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO11_SEL_S  25

/** GPIO_EXT_ETM_TASK_P3_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P3_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xac)
/** GPIO_EXT_ETM_TASK_GPIO12_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO12_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO12_EN_M  (GPIO_EXT_ETM_TASK_GPIO12_EN_V << GPIO_EXT_ETM_TASK_GPIO12_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO12_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO12_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO12_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO12_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO12_SEL_M  (GPIO_EXT_ETM_TASK_GPIO12_SEL_V << GPIO_EXT_ETM_TASK_GPIO12_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO12_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO12_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO13_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO13_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO13_EN_M  (GPIO_EXT_ETM_TASK_GPIO13_EN_V << GPIO_EXT_ETM_TASK_GPIO13_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO13_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO13_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO13_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO13_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO13_SEL_M  (GPIO_EXT_ETM_TASK_GPIO13_SEL_V << GPIO_EXT_ETM_TASK_GPIO13_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO13_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO13_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO14_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO14_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO14_EN_M  (GPIO_EXT_ETM_TASK_GPIO14_EN_V << GPIO_EXT_ETM_TASK_GPIO14_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO14_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO14_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO14_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO14_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO14_SEL_M  (GPIO_EXT_ETM_TASK_GPIO14_SEL_V << GPIO_EXT_ETM_TASK_GPIO14_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO14_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO14_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO15_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO15_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO15_EN_M  (GPIO_EXT_ETM_TASK_GPIO15_EN_V << GPIO_EXT_ETM_TASK_GPIO15_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO15_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO15_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO15_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO15_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO15_SEL_M  (GPIO_EXT_ETM_TASK_GPIO15_SEL_V << GPIO_EXT_ETM_TASK_GPIO15_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO15_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO15_SEL_S  25

/** GPIO_EXT_ETM_TASK_P4_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P4_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xb0)
/** GPIO_EXT_ETM_TASK_GPIO16_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO16_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO16_EN_M  (GPIO_EXT_ETM_TASK_GPIO16_EN_V << GPIO_EXT_ETM_TASK_GPIO16_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO16_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO16_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO16_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO16_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO16_SEL_M  (GPIO_EXT_ETM_TASK_GPIO16_SEL_V << GPIO_EXT_ETM_TASK_GPIO16_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO16_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO16_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO17_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO17_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO17_EN_M  (GPIO_EXT_ETM_TASK_GPIO17_EN_V << GPIO_EXT_ETM_TASK_GPIO17_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO17_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO17_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO17_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO17_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO17_SEL_M  (GPIO_EXT_ETM_TASK_GPIO17_SEL_V << GPIO_EXT_ETM_TASK_GPIO17_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO17_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO17_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO18_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO18_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO18_EN_M  (GPIO_EXT_ETM_TASK_GPIO18_EN_V << GPIO_EXT_ETM_TASK_GPIO18_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO18_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO18_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO18_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO18_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO18_SEL_M  (GPIO_EXT_ETM_TASK_GPIO18_SEL_V << GPIO_EXT_ETM_TASK_GPIO18_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO18_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO18_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO19_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO19_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO19_EN_M  (GPIO_EXT_ETM_TASK_GPIO19_EN_V << GPIO_EXT_ETM_TASK_GPIO19_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO19_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO19_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO19_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO19_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO19_SEL_M  (GPIO_EXT_ETM_TASK_GPIO19_SEL_V << GPIO_EXT_ETM_TASK_GPIO19_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO19_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO19_SEL_S  25

/** GPIO_EXT_ETM_TASK_P5_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P5_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xb4)
/** GPIO_EXT_ETM_TASK_GPIO20_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO20_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO20_EN_M  (GPIO_EXT_ETM_TASK_GPIO20_EN_V << GPIO_EXT_ETM_TASK_GPIO20_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO20_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO20_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO20_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO20_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO20_SEL_M  (GPIO_EXT_ETM_TASK_GPIO20_SEL_V << GPIO_EXT_ETM_TASK_GPIO20_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO20_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO20_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO21_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO21_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO21_EN_M  (GPIO_EXT_ETM_TASK_GPIO21_EN_V << GPIO_EXT_ETM_TASK_GPIO21_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO21_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO21_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO21_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO21_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO21_SEL_M  (GPIO_EXT_ETM_TASK_GPIO21_SEL_V << GPIO_EXT_ETM_TASK_GPIO21_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO21_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO21_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO22_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO22_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO22_EN_M  (GPIO_EXT_ETM_TASK_GPIO22_EN_V << GPIO_EXT_ETM_TASK_GPIO22_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO22_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO22_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO22_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO22_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO22_SEL_M  (GPIO_EXT_ETM_TASK_GPIO22_SEL_V << GPIO_EXT_ETM_TASK_GPIO22_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO22_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO22_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO23_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO23_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO23_EN_M  (GPIO_EXT_ETM_TASK_GPIO23_EN_V << GPIO_EXT_ETM_TASK_GPIO23_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO23_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO23_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO23_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO23_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO23_SEL_M  (GPIO_EXT_ETM_TASK_GPIO23_SEL_V << GPIO_EXT_ETM_TASK_GPIO23_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO23_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO23_SEL_S  25

/** GPIO_EXT_ETM_TASK_P6_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P6_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xb8)
/** GPIO_EXT_ETM_TASK_GPIO24_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO24_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO24_EN_M  (GPIO_EXT_ETM_TASK_GPIO24_EN_V << GPIO_EXT_ETM_TASK_GPIO24_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO24_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO24_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO24_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO24_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO24_SEL_M  (GPIO_EXT_ETM_TASK_GPIO24_SEL_V << GPIO_EXT_ETM_TASK_GPIO24_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO24_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO24_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO25_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO25_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO25_EN_M  (GPIO_EXT_ETM_TASK_GPIO25_EN_V << GPIO_EXT_ETM_TASK_GPIO25_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO25_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO25_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO25_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO25_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO25_SEL_M  (GPIO_EXT_ETM_TASK_GPIO25_SEL_V << GPIO_EXT_ETM_TASK_GPIO25_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO25_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO25_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO26_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO26_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO26_EN_M  (GPIO_EXT_ETM_TASK_GPIO26_EN_V << GPIO_EXT_ETM_TASK_GPIO26_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO26_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO26_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO26_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO26_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO26_SEL_M  (GPIO_EXT_ETM_TASK_GPIO26_SEL_V << GPIO_EXT_ETM_TASK_GPIO26_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO26_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO26_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO27_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO27_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO27_EN_M  (GPIO_EXT_ETM_TASK_GPIO27_EN_V << GPIO_EXT_ETM_TASK_GPIO27_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO27_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO27_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO27_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO27_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO27_SEL_M  (GPIO_EXT_ETM_TASK_GPIO27_SEL_V << GPIO_EXT_ETM_TASK_GPIO27_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO27_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO27_SEL_S  25

/** GPIO_EXT_ETM_TASK_P7_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P7_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xbc)
/** GPIO_EXT_ETM_TASK_GPIO28_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO28_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO28_EN_M  (GPIO_EXT_ETM_TASK_GPIO28_EN_V << GPIO_EXT_ETM_TASK_GPIO28_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO28_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO28_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO28_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO28_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO28_SEL_M  (GPIO_EXT_ETM_TASK_GPIO28_SEL_V << GPIO_EXT_ETM_TASK_GPIO28_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO28_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO28_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO29_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO29_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO29_EN_M  (GPIO_EXT_ETM_TASK_GPIO29_EN_V << GPIO_EXT_ETM_TASK_GPIO29_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO29_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO29_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO29_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO29_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO29_SEL_M  (GPIO_EXT_ETM_TASK_GPIO29_SEL_V << GPIO_EXT_ETM_TASK_GPIO29_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO29_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO29_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO30_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO30_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO30_EN_M  (GPIO_EXT_ETM_TASK_GPIO30_EN_V << GPIO_EXT_ETM_TASK_GPIO30_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO30_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO30_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO30_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO30_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO30_SEL_M  (GPIO_EXT_ETM_TASK_GPIO30_SEL_V << GPIO_EXT_ETM_TASK_GPIO30_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO30_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO30_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO31_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO31_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO31_EN_M  (GPIO_EXT_ETM_TASK_GPIO31_EN_V << GPIO_EXT_ETM_TASK_GPIO31_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO31_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO31_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO31_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO31_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO31_SEL_M  (GPIO_EXT_ETM_TASK_GPIO31_SEL_V << GPIO_EXT_ETM_TASK_GPIO31_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO31_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO31_SEL_S  25

/** GPIO_EXT_ETM_TASK_P8_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P8_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xc0)
/** GPIO_EXT_ETM_TASK_GPIO32_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO32_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO32_EN_M  (GPIO_EXT_ETM_TASK_GPIO32_EN_V << GPIO_EXT_ETM_TASK_GPIO32_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO32_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO32_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO32_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO32_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO32_SEL_M  (GPIO_EXT_ETM_TASK_GPIO32_SEL_V << GPIO_EXT_ETM_TASK_GPIO32_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO32_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO32_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO33_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO33_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO33_EN_M  (GPIO_EXT_ETM_TASK_GPIO33_EN_V << GPIO_EXT_ETM_TASK_GPIO33_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO33_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO33_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO33_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO33_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO33_SEL_M  (GPIO_EXT_ETM_TASK_GPIO33_SEL_V << GPIO_EXT_ETM_TASK_GPIO33_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO33_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO33_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO34_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO34_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO34_EN_M  (GPIO_EXT_ETM_TASK_GPIO34_EN_V << GPIO_EXT_ETM_TASK_GPIO34_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO34_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO34_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO34_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO34_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO34_SEL_M  (GPIO_EXT_ETM_TASK_GPIO34_SEL_V << GPIO_EXT_ETM_TASK_GPIO34_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO34_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO34_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO35_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO35_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO35_EN_M  (GPIO_EXT_ETM_TASK_GPIO35_EN_V << GPIO_EXT_ETM_TASK_GPIO35_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO35_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO35_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO35_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO35_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO35_SEL_M  (GPIO_EXT_ETM_TASK_GPIO35_SEL_V << GPIO_EXT_ETM_TASK_GPIO35_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO35_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO35_SEL_S  25

/** GPIO_EXT_ETM_TASK_P9_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P9_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xc4)
/** GPIO_EXT_ETM_TASK_GPIO36_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO36_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO36_EN_M  (GPIO_EXT_ETM_TASK_GPIO36_EN_V << GPIO_EXT_ETM_TASK_GPIO36_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO36_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO36_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO36_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO36_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO36_SEL_M  (GPIO_EXT_ETM_TASK_GPIO36_SEL_V << GPIO_EXT_ETM_TASK_GPIO36_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO36_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO36_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO37_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO37_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO37_EN_M  (GPIO_EXT_ETM_TASK_GPIO37_EN_V << GPIO_EXT_ETM_TASK_GPIO37_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO37_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO37_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO37_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO37_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO37_SEL_M  (GPIO_EXT_ETM_TASK_GPIO37_SEL_V << GPIO_EXT_ETM_TASK_GPIO37_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO37_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO37_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO38_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO38_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO38_EN_M  (GPIO_EXT_ETM_TASK_GPIO38_EN_V << GPIO_EXT_ETM_TASK_GPIO38_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO38_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO38_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO38_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO38_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO38_SEL_M  (GPIO_EXT_ETM_TASK_GPIO38_SEL_V << GPIO_EXT_ETM_TASK_GPIO38_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO38_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO38_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO39_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO39_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO39_EN_M  (GPIO_EXT_ETM_TASK_GPIO39_EN_V << GPIO_EXT_ETM_TASK_GPIO39_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO39_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO39_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO39_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO39_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO39_SEL_M  (GPIO_EXT_ETM_TASK_GPIO39_SEL_V << GPIO_EXT_ETM_TASK_GPIO39_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO39_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO39_SEL_S  25

/** GPIO_EXT_ETM_TASK_P10_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P10_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xc8)
/** GPIO_EXT_ETM_TASK_GPIO40_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO40_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO40_EN_M  (GPIO_EXT_ETM_TASK_GPIO40_EN_V << GPIO_EXT_ETM_TASK_GPIO40_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO40_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO40_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO40_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO40_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO40_SEL_M  (GPIO_EXT_ETM_TASK_GPIO40_SEL_V << GPIO_EXT_ETM_TASK_GPIO40_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO40_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO40_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO41_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO41_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO41_EN_M  (GPIO_EXT_ETM_TASK_GPIO41_EN_V << GPIO_EXT_ETM_TASK_GPIO41_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO41_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO41_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO41_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO41_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO41_SEL_M  (GPIO_EXT_ETM_TASK_GPIO41_SEL_V << GPIO_EXT_ETM_TASK_GPIO41_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO41_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO41_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO42_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO42_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO42_EN_M  (GPIO_EXT_ETM_TASK_GPIO42_EN_V << GPIO_EXT_ETM_TASK_GPIO42_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO42_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO42_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO42_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO42_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO42_SEL_M  (GPIO_EXT_ETM_TASK_GPIO42_SEL_V << GPIO_EXT_ETM_TASK_GPIO42_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO42_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO42_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO43_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO43_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO43_EN_M  (GPIO_EXT_ETM_TASK_GPIO43_EN_V << GPIO_EXT_ETM_TASK_GPIO43_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO43_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO43_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO43_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO43_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO43_SEL_M  (GPIO_EXT_ETM_TASK_GPIO43_SEL_V << GPIO_EXT_ETM_TASK_GPIO43_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO43_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO43_SEL_S  25

/** GPIO_EXT_ETM_TASK_P11_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P11_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xcc)
/** GPIO_EXT_ETM_TASK_GPIO44_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO44_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO44_EN_M  (GPIO_EXT_ETM_TASK_GPIO44_EN_V << GPIO_EXT_ETM_TASK_GPIO44_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO44_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO44_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO44_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO44_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO44_SEL_M  (GPIO_EXT_ETM_TASK_GPIO44_SEL_V << GPIO_EXT_ETM_TASK_GPIO44_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO44_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO44_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO45_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO45_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO45_EN_M  (GPIO_EXT_ETM_TASK_GPIO45_EN_V << GPIO_EXT_ETM_TASK_GPIO45_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO45_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO45_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO45_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO45_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO45_SEL_M  (GPIO_EXT_ETM_TASK_GPIO45_SEL_V << GPIO_EXT_ETM_TASK_GPIO45_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO45_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO45_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO46_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO46_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO46_EN_M  (GPIO_EXT_ETM_TASK_GPIO46_EN_V << GPIO_EXT_ETM_TASK_GPIO46_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO46_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO46_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO46_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO46_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO46_SEL_M  (GPIO_EXT_ETM_TASK_GPIO46_SEL_V << GPIO_EXT_ETM_TASK_GPIO46_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO46_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO46_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO47_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO47_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO47_EN_M  (GPIO_EXT_ETM_TASK_GPIO47_EN_V << GPIO_EXT_ETM_TASK_GPIO47_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO47_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO47_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO47_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO47_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO47_SEL_M  (GPIO_EXT_ETM_TASK_GPIO47_SEL_V << GPIO_EXT_ETM_TASK_GPIO47_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO47_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO47_SEL_S  25

/** GPIO_EXT_ETM_TASK_P12_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P12_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xd0)
/** GPIO_EXT_ETM_TASK_GPIO48_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO48_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO48_EN_M  (GPIO_EXT_ETM_TASK_GPIO48_EN_V << GPIO_EXT_ETM_TASK_GPIO48_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO48_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO48_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO48_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO48_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO48_SEL_M  (GPIO_EXT_ETM_TASK_GPIO48_SEL_V << GPIO_EXT_ETM_TASK_GPIO48_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO48_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO48_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO49_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO49_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO49_EN_M  (GPIO_EXT_ETM_TASK_GPIO49_EN_V << GPIO_EXT_ETM_TASK_GPIO49_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO49_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO49_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO49_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO49_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO49_SEL_M  (GPIO_EXT_ETM_TASK_GPIO49_SEL_V << GPIO_EXT_ETM_TASK_GPIO49_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO49_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO49_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO50_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO50_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO50_EN_M  (GPIO_EXT_ETM_TASK_GPIO50_EN_V << GPIO_EXT_ETM_TASK_GPIO50_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO50_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO50_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO50_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO50_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO50_SEL_M  (GPIO_EXT_ETM_TASK_GPIO50_SEL_V << GPIO_EXT_ETM_TASK_GPIO50_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO50_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO50_SEL_S  17
/** GPIO_EXT_ETM_TASK_GPIO51_EN : R/W; bitpos: [24]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO51_EN    (BIT(24))
#define GPIO_EXT_ETM_TASK_GPIO51_EN_M  (GPIO_EXT_ETM_TASK_GPIO51_EN_V << GPIO_EXT_ETM_TASK_GPIO51_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO51_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO51_EN_S  24
/** GPIO_EXT_ETM_TASK_GPIO51_SEL : R/W; bitpos: [27:25]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO51_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO51_SEL_M  (GPIO_EXT_ETM_TASK_GPIO51_SEL_V << GPIO_EXT_ETM_TASK_GPIO51_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO51_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO51_SEL_S  25

/** GPIO_EXT_ETM_TASK_P13_CFG_REG register
 *  Etm Configure Register to decide which GPIO been chosen
 */
#define GPIO_EXT_ETM_TASK_P13_CFG_REG (DR_REG_GPIO_EXT_BASE + 0xd4)
/** GPIO_EXT_ETM_TASK_GPIO52_EN : R/W; bitpos: [0]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO52_EN    (BIT(0))
#define GPIO_EXT_ETM_TASK_GPIO52_EN_M  (GPIO_EXT_ETM_TASK_GPIO52_EN_V << GPIO_EXT_ETM_TASK_GPIO52_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO52_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO52_EN_S  0
/** GPIO_EXT_ETM_TASK_GPIO52_SEL : R/W; bitpos: [3:1]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO52_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO52_SEL_M  (GPIO_EXT_ETM_TASK_GPIO52_SEL_V << GPIO_EXT_ETM_TASK_GPIO52_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO52_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO52_SEL_S  1
/** GPIO_EXT_ETM_TASK_GPIO53_EN : R/W; bitpos: [8]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO53_EN    (BIT(8))
#define GPIO_EXT_ETM_TASK_GPIO53_EN_M  (GPIO_EXT_ETM_TASK_GPIO53_EN_V << GPIO_EXT_ETM_TASK_GPIO53_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO53_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO53_EN_S  8
/** GPIO_EXT_ETM_TASK_GPIO53_SEL : R/W; bitpos: [11:9]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO53_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO53_SEL_M  (GPIO_EXT_ETM_TASK_GPIO53_SEL_V << GPIO_EXT_ETM_TASK_GPIO53_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO53_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO53_SEL_S  9
/** GPIO_EXT_ETM_TASK_GPIO54_EN : R/W; bitpos: [16]; default: 0;
 *  Enable bit of GPIO response etm task.
 */
#define GPIO_EXT_ETM_TASK_GPIO54_EN    (BIT(16))
#define GPIO_EXT_ETM_TASK_GPIO54_EN_M  (GPIO_EXT_ETM_TASK_GPIO54_EN_V << GPIO_EXT_ETM_TASK_GPIO54_EN_S)
#define GPIO_EXT_ETM_TASK_GPIO54_EN_V  0x00000001U
#define GPIO_EXT_ETM_TASK_GPIO54_EN_S  16
/** GPIO_EXT_ETM_TASK_GPIO54_SEL : R/W; bitpos: [19:17]; default: 0;
 *  GPIO choose a etm task channel.
 */
#define GPIO_EXT_ETM_TASK_GPIO54_SEL    0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO54_SEL_M  (GPIO_EXT_ETM_TASK_GPIO54_SEL_V << GPIO_EXT_ETM_TASK_GPIO54_SEL_S)
#define GPIO_EXT_ETM_TASK_GPIO54_SEL_V  0x00000007U
#define GPIO_EXT_ETM_TASK_GPIO54_SEL_S  17

/** GPIO_EXT_VERSION_REG register
 *  Version Control Register
 */
#define GPIO_EXT_VERSION_REG (DR_REG_GPIO_EXT_BASE + 0xfc)
/** GPIO_EXT_GPIO_SD_DATE : R/W; bitpos: [27:0]; default: 35663952;
 *  Version control register.
 */
#define GPIO_EXT_DATE    0x0FFFFFFFU
#define GPIO_EXT_DATE_M  (GPIO_EXT_DATE_V << GPIO_EXT_DATE_S)
#define GPIO_EXT_DATE_V  0x0FFFFFFFU
#define GPIO_EXT_DATE_S  0

#ifdef __cplusplus
}
#endif
