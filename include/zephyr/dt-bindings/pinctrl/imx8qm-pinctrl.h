/*
 * Copyright 2023 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_PINCTRL_IMX8QM_PINCTRL_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_PINCTRL_IMX8QM_PINCTRL_H_

/* values for pad field */
#define SC_P_UART0_RTS_B 23
#define SC_P_UART0_CTS_B 24

/* mux values */
#define IMX8QM_DMA_LPUART2_RX_UART0_RTS_B 2 /* UART0_RTS_B ---> DMA_LPUART2_RX */
#define IMX8QM_DMA_LPUART2_TX_UART0_CTS_B 2 /* DMA_LPUART2_TX ---> UART0_CTS_B */

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_PINCTRL_IMX8QM_PINCTRL_H_ */
