/** \file hdr_usart.h
 * \brief Header with definition of bits in USART control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
* chip: STM32F10x
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
******************************************************************************/

#ifndef HDR_USART_H_
#define HDR_USART_H_

#include "hdr/hdr_bitband.h"

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| USART_SR - Status register
+-----------------------------------------------------------------------------+
*/

#define USART_SR_CTS_bit					9
#define USART_SR_LBD_bit					8
#define USART_SR_TXE_bit					7
#define USART_SR_TC_bit						6
#define USART_SR_RXNE_bit					5
#define USART_SR_IDLE_bit					4
#define USART_SR_ORE_bit					3
#define USART_SR_NE_bit						2
#define USART_SR_FE_bit						1
#define USART_SR_PE_bit						0

#define USART1_SR_CTS_bb					bitband_t m_BITBAND_PERIPH(&USART1->SR, USART_SR_CTS_bit)
#define USART1_SR_LBD_bb					bitband_t m_BITBAND_PERIPH(&USART1->SR, USART_SR_LBD_bit)
#define USART1_SR_TXE_bb					bitband_t m_BITBAND_PERIPH(&USART1->SR, USART_SR_TXE_bit)
#define USART1_SR_TC_bb						bitband_t m_BITBAND_PERIPH(&USART1->SR, USART_SR_TC_bit)
#define USART1_SR_RXNE_bb					bitband_t m_BITBAND_PERIPH(&USART1->SR, USART_SR_RXNE_bit)
#define USART1_SR_IDLE_bb					bitband_t m_BITBAND_PERIPH(&USART1->SR, USART_SR_IDLE_bit)
#define USART1_SR_ORE_bb					bitband_t m_BITBAND_PERIPH(&USART1->SR, USART_SR_ORE_bit)
#define USART1_SR_NE_bb						bitband_t m_BITBAND_PERIPH(&USART1->SR, USART_SR_NE_bit)
#define USART1_SR_FE_bb						bitband_t m_BITBAND_PERIPH(&USART1->SR, USART_SR_FE_bit)
#define USART1_SR_PE_bb						bitband_t m_BITBAND_PERIPH(&USART1->SR, USART_SR_PE_bit)

#define USART2_SR_CTS_bb					bitband_t m_BITBAND_PERIPH(&USART2->SR, USART_SR_CTS_bit)
#define USART2_SR_LBD_bb					bitband_t m_BITBAND_PERIPH(&USART2->SR, USART_SR_LBD_bit)
#define USART2_SR_TXE_bb					bitband_t m_BITBAND_PERIPH(&USART2->SR, USART_SR_TXE_bit)
#define USART2_SR_TC_bb						bitband_t m_BITBAND_PERIPH(&USART2->SR, USART_SR_TC_bit)
#define USART2_SR_RXNE_bb					bitband_t m_BITBAND_PERIPH(&USART2->SR, USART_SR_RXNE_bit)
#define USART2_SR_IDLE_bb					bitband_t m_BITBAND_PERIPH(&USART2->SR, USART_SR_IDLE_bit)
#define USART2_SR_ORE_bb					bitband_t m_BITBAND_PERIPH(&USART2->SR, USART_SR_ORE_bit)
#define USART2_SR_NE_bb						bitband_t m_BITBAND_PERIPH(&USART2->SR, USART_SR_NE_bit)
#define USART2_SR_FE_bb						bitband_t m_BITBAND_PERIPH(&USART2->SR, USART_SR_FE_bit)
#define USART2_SR_PE_bb						bitband_t m_BITBAND_PERIPH(&USART2->SR, USART_SR_PE_bit)

#define USART3_SR_CTS_bb					bitband_t m_BITBAND_PERIPH(&USART3->SR, USART_SR_CTS_bit)
#define USART3_SR_LBD_bb					bitband_t m_BITBAND_PERIPH(&USART3->SR, USART_SR_LBD_bit)
#define USART3_SR_TXE_bb					bitband_t m_BITBAND_PERIPH(&USART3->SR, USART_SR_TXE_bit)
#define USART3_SR_TC_bb						bitband_t m_BITBAND_PERIPH(&USART3->SR, USART_SR_TC_bit)
#define USART3_SR_RXNE_bb					bitband_t m_BITBAND_PERIPH(&USART3->SR, USART_SR_RXNE_bit)
#define USART3_SR_IDLE_bb					bitband_t m_BITBAND_PERIPH(&USART3->SR, USART_SR_IDLE_bit)
#define USART3_SR_ORE_bb					bitband_t m_BITBAND_PERIPH(&USART3->SR, USART_SR_ORE_bit)
#define USART3_SR_NE_bb						bitband_t m_BITBAND_PERIPH(&USART3->SR, USART_SR_NE_bit)
#define USART3_SR_FE_bb						bitband_t m_BITBAND_PERIPH(&USART3->SR, USART_SR_FE_bit)
#define USART3_SR_PE_bb						bitband_t m_BITBAND_PERIPH(&USART3->SR, USART_SR_PE_bit)

#define UART4_SR_CTS_bb						bitband_t m_BITBAND_PERIPH(&UART4->SR, USART_SR_CTS_bit)
#define UART4_SR_LBD_bb						bitband_t m_BITBAND_PERIPH(&UART4->SR, USART_SR_LBD_bit)
#define UART4_SR_TXE_bb						bitband_t m_BITBAND_PERIPH(&UART4->SR, USART_SR_TXE_bit)
#define UART4_SR_TC_bb						bitband_t m_BITBAND_PERIPH(&UART4->SR, USART_SR_TC_bit)
#define UART4_SR_RXNE_bb					bitband_t m_BITBAND_PERIPH(&UART4->SR, USART_SR_RXNE_bit)
#define UART4_SR_IDLE_bb					bitband_t m_BITBAND_PERIPH(&UART4->SR, USART_SR_IDLE_bit)
#define UART4_SR_ORE_bb						bitband_t m_BITBAND_PERIPH(&UART4->SR, USART_SR_ORE_bit)
#define UART4_SR_NE_bb						bitband_t m_BITBAND_PERIPH(&UART4->SR, USART_SR_NE_bit)
#define UART4_SR_FE_bb						bitband_t m_BITBAND_PERIPH(&UART4->SR, USART_SR_FE_bit)
#define UART4_SR_PE_bb						bitband_t m_BITBAND_PERIPH(&UART4->SR, USART_SR_PE_bit)

#define UART5_SR_CTS_bb						bitband_t m_BITBAND_PERIPH(&UART5->SR, USART_SR_CTS_bit)
#define UART5_SR_LBD_bb						bitband_t m_BITBAND_PERIPH(&UART5->SR, USART_SR_LBD_bit)
#define UART5_SR_TXE_bb						bitband_t m_BITBAND_PERIPH(&UART5->SR, USART_SR_TXE_bit)
#define UART5_SR_TC_bb						bitband_t m_BITBAND_PERIPH(&UART5->SR, USART_SR_TC_bit)
#define UART5_SR_RXNE_bb					bitband_t m_BITBAND_PERIPH(&UART5->SR, USART_SR_RXNE_bit)
#define UART5_SR_IDLE_bb					bitband_t m_BITBAND_PERIPH(&UART5->SR, USART_SR_IDLE_bit)
#define UART5_SR_ORE_bb						bitband_t m_BITBAND_PERIPH(&UART5->SR, USART_SR_ORE_bit)
#define UART5_SR_NE_bb						bitband_t m_BITBAND_PERIPH(&UART5->SR, USART_SR_NE_bit)
#define UART5_SR_FE_bb						bitband_t m_BITBAND_PERIPH(&UART5->SR, USART_SR_FE_bit)
#define UART5_SR_PE_bb						bitband_t m_BITBAND_PERIPH(&UART5->SR, USART_SR_PE_bit)

/*
+-----------------------------------------------------------------------------+
| USART_CR1 - Control register 1
+-----------------------------------------------------------------------------+
*/

#define USART_CR1_UE_bit					13
#define USART_CR1_M_bit						12
#define USART_CR1_WAKE_bit					11
#define USART_CR1_PCE_bit					10
#define USART_CR1_PS_bit					9
#define USART_CR1_PEIE_bit					8
#define USART_CR1_TXEIE_bit					7
#define USART_CR1_TCIE_bit					6
#define USART_CR1_RXNEIE_bit				5
#define USART_CR1_IDLEIE_bit				4
#define USART_CR1_TE_bit					3
#define USART_CR1_RE_bit					2
#define USART_CR1_PWU_bit					1
#define USART_CR1_SBK_bit					0

#define USART1_CR1_UE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_UE_bit)
#define USART1_CR1_M_bb						bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_M_bit)
#define USART1_CR1_WAKE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_WAKE_bit)
#define USART1_CR1_PCE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_PCE_bit)
#define USART1_CR1_PS_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_PS_bit)
#define USART1_CR1_PEIE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_PEIE_bit)
#define USART1_CR1_TXEIE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_TXEIE_bit)
#define USART1_CR1_TCIE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_TCIE_bit)
#define USART1_CR1_RXNEIE_bb				bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_RXNEIE_bit)
#define USART1_CR1_IDLEIE_bb				bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_IDLEIE_bit)
#define USART1_CR1_TE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_TE_bit)
#define USART1_CR1_RE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_RE_bit)
#define USART1_CR1_PWU_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_PWU_bit)
#define USART1_CR1_SBK_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR1, USART_CR1_SBK_bit)

#define USART2_CR1_UE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_UE_bit)
#define USART2_CR1_M_bb						bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_M_bit)
#define USART2_CR1_WAKE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_WAKE_bit)
#define USART2_CR1_PCE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_PCE_bit)
#define USART2_CR1_PS_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_PS_bit)
#define USART2_CR1_PEIE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_PEIE_bit)
#define USART2_CR1_TXEIE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_TXEIE_bit)
#define USART2_CR1_TCIE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_TCIE_bit)
#define USART2_CR1_RXNEIE_bb				bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_RXNEIE_bit)
#define USART2_CR1_IDLEIE_bb				bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_IDLEIE_bit)
#define USART2_CR1_TE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_TE_bit)
#define USART2_CR1_RE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_RE_bit)
#define USART2_CR1_PWU_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_PWU_bit)
#define USART2_CR1_SBK_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR1, USART_CR1_SBK_bit)

#define USART3_CR1_UE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_UE_bit)
#define USART3_CR1_M_bb						bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_M_bit)
#define USART3_CR1_WAKE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_WAKE_bit)
#define USART3_CR1_PCE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_PCE_bit)
#define USART3_CR1_PS_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_PS_bit)
#define USART3_CR1_PEIE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_PEIE_bit)
#define USART3_CR1_TXEIE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_TXEIE_bit)
#define USART3_CR1_TCIE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_TCIE_bit)
#define USART3_CR1_RXNEIE_bb				bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_RXNEIE_bit)
#define USART3_CR1_IDLEIE_bb				bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_IDLEIE_bit)
#define USART3_CR1_TE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_TE_bit)
#define USART3_CR1_RE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_RE_bit)
#define USART3_CR1_PWU_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_PWU_bit)
#define USART3_CR1_SBK_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR1, USART_CR1_SBK_bit)

#define UART4_CR1_UE_bb						bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_UE_bit)
#define UART4_CR1_M_bb						bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_M_bit)
#define UART4_CR1_WAKE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_WAKE_bit)
#define UART4_CR1_PCE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_PCE_bit)
#define UART4_CR1_PS_bb						bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_PS_bit)
#define UART4_CR1_PEIE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_PEIE_bit)
#define UART4_CR1_TXEIE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_TXEIE_bit)
#define UART4_CR1_TCIE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_TCIE_bit)
#define UART4_CR1_RXNEIE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_RXNEIE_bit)
#define UART4_CR1_IDLEIE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_IDLEIE_bit)
#define UART4_CR1_TE_bb						bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_TE_bit)
#define UART4_CR1_RE_bb						bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_RE_bit)
#define UART4_CR1_PWU_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_PWU_bit)
#define UART4_CR1_SBK_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR1, USART_CR1_SBK_bit)

#define UART5_CR1_UE_bb						bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_UE_bit)
#define UART5_CR1_M_bb						bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_M_bit)
#define UART5_CR1_WAKE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_WAKE_bit)
#define UART5_CR1_PCE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_PCE_bit)
#define UART5_CR1_PS_bb						bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_PS_bit)
#define UART5_CR1_PEIE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_PEIE_bit)
#define UART5_CR1_TXEIE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_TXEIE_bit)
#define UART5_CR1_TCIE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_TCIE_bit)
#define UART5_CR1_RXNEIE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_RXNEIE_bit)
#define UART5_CR1_IDLEIE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_IDLEIE_bit)
#define UART5_CR1_TE_bb						bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_TE_bit)
#define UART5_CR1_RE_bb						bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_RE_bit)
#define UART5_CR1_PWU_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_PWU_bit)
#define UART5_CR1_SBK_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR1, USART_CR1_SBK_bit)

/*
+-----------------------------------------------------------------------------+
| USART_CR2 - Control register 2
+-----------------------------------------------------------------------------+
*/

#define USART_CR2_LINEN_bit					14
#define USART_CR2_STOP_bit					12
#define USART_CR2_STOP_0_bit				12
#define USART_CR2_STOP_1_bit				13
#define USART_CR2_CLKEN_bit					11
#define USART_CR2_CPOL_bit					10
#define USART_CR2_CPHA_bit					9
#define USART_CR2_LBCL_bit					8
#define USART_CR2_LBDIE_bit					6
#define USART_CR2_LBDL_bit					5
#define USART_CR2_ADD_bit					0
#define USART_CR2_ADD_0_bit					0
#define USART_CR2_ADD_1_bit					1
#define USART_CR2_ADD_2_bit					2
#define USART_CR2_ADD_3_bit					3

#define USART_CR2_STOP_1BIT_value			0
#define USART_CR2_STOP_05BIT_value			1
#define USART_CR2_STOP_2BIT_value			2
#define USART_CR2_STOP_15BIT_value			3
#define USART_CR2_STOP_mask					3

#define USART_CR2_STOP_1BIT					(USART_CR2_STOP_1BIT_value << USART_CR2_STOP_bit)
#define USART_CR2_STOP_05BIT				(USART_CR2_STOP_05BIT_value << USART_CR2_STOP_bit)
#define USART_CR2_STOP_2BIT					(USART_CR2_STOP_2BIT_value << USART_CR2_STOP_bit)
#define USART_CR2_STOP_15BIT				(USART_CR2_STOP_15BIT_value << USART_CR2_STOP_bit)

#define USART1_CR2_LINEN_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_LINEN_bit)
#define USART1_CR2_STOP_0_bb				bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_STOP_0_bit)
#define USART1_CR2_STOP_1_bb				bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_STOP_1_bit)
#define USART1_CR2_CLKEN_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_CLKEN_bit)
#define USART1_CR2_CPOL_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_CPOL_bit)
#define USART1_CR2_CPHA_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_CPHA_bit)
#define USART1_CR2_LBCL_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_LBCL_bit)
#define USART1_CR2_LBDIE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_LBDIE_bit)
#define USART1_CR2_LBDL_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_LBDL_bit)
#define USART1_CR2_ADD_0_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_ADD_0_bit)
#define USART1_CR2_ADD_1_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_ADD_1_bit)
#define USART1_CR2_ADD_2_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_ADD_2_bit)
#define USART1_CR2_ADD_3_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR2, USART_CR2_ADD_3_bit)

#define USART2_CR2_LINEN_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_LINEN_bit)
#define USART2_CR2_STOP_0_bb				bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_STOP_0_bit)
#define USART2_CR2_STOP_1_bb				bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_STOP_1_bit)
#define USART2_CR2_CLKEN_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_CLKEN_bit)
#define USART2_CR2_CPOL_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_CPOL_bit)
#define USART2_CR2_CPHA_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_CPHA_bit)
#define USART2_CR2_LBCL_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_LBCL_bit)
#define USART2_CR2_LBDIE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_LBDIE_bit)
#define USART2_CR2_LBDL_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_LBDL_bit)
#define USART2_CR2_ADD_0_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_ADD_0_bit)
#define USART2_CR2_ADD_1_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_ADD_1_bit)
#define USART2_CR2_ADD_2_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_ADD_2_bit)
#define USART2_CR2_ADD_3_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR2, USART_CR2_ADD_3_bit)

#define USART3_CR2_LINEN_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_LINEN_bit)
#define USART3_CR2_STOP_0_bb				bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_STOP_0_bit)
#define USART3_CR2_STOP_1_bb				bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_STOP_1_bit)
#define USART3_CR2_CLKEN_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_CLKEN_bit)
#define USART3_CR2_CPOL_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_CPOL_bit)
#define USART3_CR2_CPHA_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_CPHA_bit)
#define USART3_CR2_LBCL_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_LBCL_bit)
#define USART3_CR2_LBDIE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_LBDIE_bit)
#define USART3_CR2_LBDL_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_LBDL_bit)
#define USART3_CR2_ADD_0_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_ADD_0_bit)
#define USART3_CR2_ADD_1_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_ADD_1_bit)
#define USART3_CR2_ADD_2_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_ADD_2_bit)
#define USART3_CR2_ADD_3_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR2, USART_CR2_ADD_3_bit)

#define UART4_CR2_LINEN_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_LINEN_bit)
#define UART4_CR2_STOP_0_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_STOP_0_bit)
#define UART4_CR2_STOP_1_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_STOP_1_bit)
#define UART4_CR2_CLKEN_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_CLKEN_bit)
#define UART4_CR2_CPOL_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_CPOL_bit)
#define UART4_CR2_CPHA_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_CPHA_bit)
#define UART4_CR2_LBCL_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_LBCL_bit)
#define UART4_CR2_LBDIE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_LBDIE_bit)
#define UART4_CR2_LBDL_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_LBDL_bit)
#define UART4_CR2_ADD_0_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_ADD_0_bit)
#define UART4_CR2_ADD_1_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_ADD_1_bit)
#define UART4_CR2_ADD_2_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_ADD_2_bit)
#define UART4_CR2_ADD_3_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR2, USART_CR2_ADD_3_bit)

#define UART5_CR2_LINEN_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_LINEN_bit)
#define UART5_CR2_STOP_0_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_STOP_0_bit)
#define UART5_CR2_STOP_1_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_STOP_1_bit)
#define UART5_CR2_CLKEN_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_CLKEN_bit)
#define UART5_CR2_CPOL_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_CPOL_bit)
#define UART5_CR2_CPHA_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_CPHA_bit)
#define UART5_CR2_LBCL_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_LBCL_bit)
#define UART5_CR2_LBDIE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_LBDIE_bit)
#define UART5_CR2_LBDL_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_LBDL_bit)
#define UART5_CR2_ADD_0_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_ADD_0_bit)
#define UART5_CR2_ADD_1_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_ADD_1_bit)
#define UART5_CR2_ADD_2_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_ADD_2_bit)
#define UART5_CR2_ADD_3_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR2, USART_CR2_ADD_3_bit)

/*
+-----------------------------------------------------------------------------+
| USART_CR3 - Control register 3
+-----------------------------------------------------------------------------+
*/

#define USART_CR3_CTSIE_bit					10
#define USART_CR3_CTSE_bit					9
#define USART_CR3_RTSE_bit					8
#define USART_CR3_DMAT_bit					7
#define USART_CR3_DMAR_bit					6
#define USART_CR3_SCEN_bit					5
#define USART_CR3_NACK_bit					4
#define USART_CR3_HDSEL_bit					3
#define USART_CR3_IRLP_bit					2
#define USART_CR3_IREN_bit					1
#define USART_CR3_EIE_bit					0

#define USART1_CR3_CTSIE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR3, USART_CR3_CTSIE_bit)
#define USART1_CR3_CTSE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR3, USART_CR3_CTSE_bit)
#define USART1_CR3_RTSE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR3, USART_CR3_RTSE_bit)
#define USART1_CR3_DMAT_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR3, USART_CR3_DMAT_bit)
#define USART1_CR3_DMAR_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR3, USART_CR3_DMAR_bit)
#define USART1_CR3_SCEN_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR3, USART_CR3_SCEN_bit)
#define USART1_CR3_NACK_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR3, USART_CR3_NACK_bit)
#define USART1_CR3_HDSEL_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR3, USART_CR3_HDSEL_bit)
#define USART1_CR3_IRLP_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR3, USART_CR3_IRLP_bit)
#define USART1_CR3_IREN_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR3, USART_CR3_IREN_bit)
#define USART1_CR3_EIE_bb					bitband_t m_BITBAND_PERIPH(&USART1->CR3, USART_CR3_EIE_bit)

#define USART2_CR3_CTSIE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR3, USART_CR3_CTSIE_bit)
#define USART2_CR3_CTSE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR3, USART_CR3_CTSE_bit)
#define USART2_CR3_RTSE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR3, USART_CR3_RTSE_bit)
#define USART2_CR3_DMAT_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR3, USART_CR3_DMAT_bit)
#define USART2_CR3_DMAR_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR3, USART_CR3_DMAR_bit)
#define USART2_CR3_SCEN_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR3, USART_CR3_SCEN_bit)
#define USART2_CR3_NACK_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR3, USART_CR3_NACK_bit)
#define USART2_CR3_HDSEL_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR3, USART_CR3_HDSEL_bit)
#define USART2_CR3_IRLP_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR3, USART_CR3_IRLP_bit)
#define USART2_CR3_IREN_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR3, USART_CR3_IREN_bit)
#define USART2_CR3_EIE_bb					bitband_t m_BITBAND_PERIPH(&USART2->CR3, USART_CR3_EIE_bit)

#define USART3_CR3_CTSIE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR3, USART_CR3_CTSIE_bit)
#define USART3_CR3_CTSE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR3, USART_CR3_CTSE_bit)
#define USART3_CR3_RTSE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR3, USART_CR3_RTSE_bit)
#define USART3_CR3_DMAT_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR3, USART_CR3_DMAT_bit)
#define USART3_CR3_DMAR_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR3, USART_CR3_DMAR_bit)
#define USART3_CR3_SCEN_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR3, USART_CR3_SCEN_bit)
#define USART3_CR3_NACK_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR3, USART_CR3_NACK_bit)
#define USART3_CR3_HDSEL_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR3, USART_CR3_HDSEL_bit)
#define USART3_CR3_IRLP_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR3, USART_CR3_IRLP_bit)
#define USART3_CR3_IREN_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR3, USART_CR3_IREN_bit)
#define USART3_CR3_EIE_bb					bitband_t m_BITBAND_PERIPH(&USART3->CR3, USART_CR3_EIE_bit)

#define UART4_CR3_CTSIE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR3, USART_CR3_CTSIE_bit)
#define UART4_CR3_CTSE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR3, USART_CR3_CTSE_bit)
#define UART4_CR3_RTSE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR3, USART_CR3_RTSE_bit)
#define UART4_CR3_DMAT_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR3, USART_CR3_DMAT_bit)
#define UART4_CR3_DMAR_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR3, USART_CR3_DMAR_bit)
#define UART4_CR3_SCEN_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR3, USART_CR3_SCEN_bit)
#define UART4_CR3_NACK_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR3, USART_CR3_NACK_bit)
#define UART4_CR3_HDSEL_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR3, USART_CR3_HDSEL_bit)
#define UART4_CR3_IRLP_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR3, USART_CR3_IRLP_bit)
#define UART4_CR3_IREN_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR3, USART_CR3_IREN_bit)
#define UART4_CR3_EIE_bb					bitband_t m_BITBAND_PERIPH(&UART4->CR3, USART_CR3_EIE_bit)

#define UART5_CR3_CTSIE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR3, USART_CR3_CTSIE_bit)
#define UART5_CR3_CTSE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR3, USART_CR3_CTSE_bit)
#define UART5_CR3_RTSE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR3, USART_CR3_RTSE_bit)
#define UART5_CR3_DMAT_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR3, USART_CR3_DMAT_bit)
#define UART5_CR3_DMAR_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR3, USART_CR3_DMAR_bit)
#define UART5_CR3_SCEN_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR3, USART_CR3_SCEN_bit)
#define UART5_CR3_NACK_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR3, USART_CR3_NACK_bit)
#define UART5_CR3_HDSEL_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR3, USART_CR3_HDSEL_bit)
#define UART5_CR3_IRLP_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR3, USART_CR3_IRLP_bit)
#define UART5_CR3_IREN_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR3, USART_CR3_IREN_bit)
#define UART5_CR3_EIE_bb					bitband_t m_BITBAND_PERIPH(&UART5->CR3, USART_CR3_EIE_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_USART_H_ */
