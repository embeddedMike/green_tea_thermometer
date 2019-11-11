/** \file hdr_spi.h
 * \brief Header with definition of bits in SPI control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
* chip: STM32F10x
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
******************************************************************************/

#ifndef HDR_SPI_H_
#define HDR_SPI_H_

#include "hdr/hdr_bitband.h"

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| SPI_CR1 - SPI control register 1
+-----------------------------------------------------------------------------+
*/

#define SPI_CR1_BIDIMODE_bit				15
#define SPI_CR1_BIDIOE_bit					14
#define SPI_CR1_CRCEN_bit					13
#define SPI_CR1_CRCNEXT_bit					12
#define SPI_CR1_DFF_bit						11
#define SPI_CR1_RXONLY_bit					10
#define SPI_CR1_SSM_bit						9
#define SPI_CR1_SSI_bit						8
#define SPI_CR1_LSBFIRST_bit				7
#define SPI_CR1_SPE_bit						6
#define SPI_CR1_BR_bit						3
#define SPI_CR1_BR_0_bit					3
#define SPI_CR1_BR_1_bit					4
#define SPI_CR1_BR_2_bit					5
#define SPI_CR1_MSTR_bit					2
#define SPI_CR1_CPOL_bit					1
#define SPI_CR1_CPHA_bit					0

#define SPI_CR1_BR_DIV2_value				0
#define SPI_CR1_BR_DIV4_value				1
#define SPI_CR1_BR_DIV8_value				2
#define SPI_CR1_BR_DIV16_value				3
#define SPI_CR1_BR_DIV32_value				4
#define SPI_CR1_BR_DIV64_value				5
#define SPI_CR1_BR_DIV128_value				6
#define SPI_CR1_BR_DIV256_value				7
#define SPI_CR1_BR_mask						7

#define SPI_CR1_BR_DIV2						(SPI_CR1_BR_DIV2_value << SPI_CR1_BR_bit)
#define SPI_CR1_BR_DIV4						(SPI_CR1_BR_DIV4_value << SPI_CR1_BR_bit)
#define SPI_CR1_BR_DIV8						(SPI_CR1_BR_DIV8_value << SPI_CR1_BR_bit)
#define SPI_CR1_BR_DIV16					(SPI_CR1_BR_DIV16_value << SPI_CR1_BR_bit)
#define SPI_CR1_BR_DIV32					(SPI_CR1_BR_DIV32_value << SPI_CR1_BR_bit)
#define SPI_CR1_BR_DIV64					(SPI_CR1_BR_DIV64_value << SPI_CR1_BR_bit)
#define SPI_CR1_BR_DIV128					(SPI_CR1_BR_DIV128_value << SPI_CR1_BR_bit)
#define SPI_CR1_BR_DIV256					(SPI_CR1_BR_DIV256_value << SPI_CR1_BR_bit)

#define SPI1_CR1_BIDIMODE_bb				bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_BIDIMODE_bit)
#define SPI1_CR1_BIDIOE_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_BIDIOE_bit)
#define SPI1_CR1_CRCEN_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_CRCEN_bit)
#define SPI1_CR1_CRCNEXT_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_CRCNEXT_bit)
#define SPI1_CR1_DFF_bb						bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_DFF_bit)
#define SPI1_CR1_RXONLY_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_RXONLY_bit)
#define SPI1_CR1_SSM_bb						bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_SSM_bit)
#define SPI1_CR1_SSI_bb						bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_SSI_bit)
#define SPI1_CR1_LSBFIRST_bb				bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_LSBFIRST_bit)
#define SPI1_CR1_SPE_bb						bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_SPE_bit)
#define SPI1_CR1_BR_0_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_BR_0_bit)
#define SPI1_CR1_BR_1_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_BR_1_bit)
#define SPI1_CR1_BR_2_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_BR_2_bit)
#define SPI1_CR1_MSTR_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_MSTR_bit)
#define SPI1_CR1_CPOL_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_CPOL_bit)
#define SPI1_CR1_CPHA_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR1, SPI_CR1_CPHA_bit)

#define SPI2_CR1_BIDIMODE_bb				bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_BIDIMODE_bit)
#define SPI2_CR1_BIDIOE_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_BIDIOE_bit)
#define SPI2_CR1_CRCEN_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_CRCEN_bit)
#define SPI2_CR1_CRCNEXT_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_CRCNEXT_bit)
#define SPI2_CR1_DFF_bb						bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_DFF_bit)
#define SPI2_CR1_RXONLY_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_RXONLY_bit)
#define SPI2_CR1_SSM_bb						bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_SSM_bit)
#define SPI2_CR1_SSI_bb						bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_SSI_bit)
#define SPI2_CR1_LSBFIRST_bb				bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_LSBFIRST_bit)
#define SPI2_CR1_SPE_bb						bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_SPE_bit)
#define SPI2_CR1_BR_0_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_BR_0_bit)
#define SPI2_CR1_BR_1_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_BR_1_bit)
#define SPI2_CR1_BR_2_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_BR_2_bit)
#define SPI2_CR1_MSTR_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_MSTR_bit)
#define SPI2_CR1_CPOL_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_CPOL_bit)
#define SPI2_CR1_CPHA_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR1, SPI_CR1_CPHA_bit)

#define SPI3_CR1_BIDIMODE_bb				bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_BIDIMODE_bit)
#define SPI3_CR1_BIDIOE_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_BIDIOE_bit)
#define SPI3_CR1_CRCEN_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_CRCEN_bit)
#define SPI3_CR1_CRCNEXT_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_CRCNEXT_bit)
#define SPI3_CR1_DFF_bb						bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_DFF_bit)
#define SPI3_CR1_RXONLY_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_RXONLY_bit)
#define SPI3_CR1_SSM_bb						bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_SSM_bit)
#define SPI3_CR1_SSI_bb						bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_SSI_bit)
#define SPI3_CR1_LSBFIRST_bb				bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_LSBFIRST_bit)
#define SPI3_CR1_SPE_bb						bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_SPE_bit)
#define SPI3_CR1_BR_0_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_BR_0_bit)
#define SPI3_CR1_BR_1_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_BR_1_bit)
#define SPI3_CR1_BR_2_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_BR_2_bit)
#define SPI3_CR1_MSTR_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_MSTR_bit)
#define SPI3_CR1_CPOL_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_CPOL_bit)
#define SPI3_CR1_CPHA_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR1, SPI_CR1_CPHA_bit)

/*
+-----------------------------------------------------------------------------+
| SPI_CR2 - SPI control register 2
+-----------------------------------------------------------------------------+
*/

#define SPI_CR2_TXEIE_bit					7
#define SPI_CR2_RXNEIE_bit					6
#define SPI_CR2_ERRIE_bit					5
#define SPI_CR2_SSOE_bit					2
#define SPI_CR2_TXDMAEN_bit					1
#define SPI_CR2_RXDMAEN_bit					0

#define SPI1_CR2_TXEIE_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR2, SPI_CR2_TXEIE_bit)
#define SPI1_CR2_RXNEIE_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR2, SPI_CR2_RXNEIE_bit)
#define SPI1_CR2_ERRIE_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR2, SPI_CR2_ERRIE_bit)
#define SPI1_CR2_SSOE_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR2, SPI_CR2_SSOE_bit)
#define SPI1_CR2_TXDMAEN_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR2, SPI_CR2_TXDMAEN_bit)
#define SPI1_CR2_RXDMAEN_bb					bitband_t m_BITBAND_PERIPH(&SPI1->CR2, SPI_CR2_RXDMAEN_bit)

#define SPI2_CR2_TXEIE_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR2, SPI_CR2_TXEIE_bit)
#define SPI2_CR2_RXNEIE_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR2, SPI_CR2_RXNEIE_bit)
#define SPI2_CR2_ERRIE_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR2, SPI_CR2_ERRIE_bit)
#define SPI2_CR2_SSOE_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR2, SPI_CR2_SSOE_bit)
#define SPI2_CR2_TXDMAEN_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR2, SPI_CR2_TXDMAEN_bit)
#define SPI2_CR2_RXDMAEN_bb					bitband_t m_BITBAND_PERIPH(&SPI2->CR2, SPI_CR2_RXDMAEN_bit)

#define SPI3_CR2_TXEIE_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR2, SPI_CR2_TXEIE_bit)
#define SPI3_CR2_RXNEIE_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR2, SPI_CR2_RXNEIE_bit)
#define SPI3_CR2_ERRIE_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR2, SPI_CR2_ERRIE_bit)
#define SPI3_CR2_SSOE_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR2, SPI_CR2_SSOE_bit)
#define SPI3_CR2_TXDMAEN_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR2, SPI_CR2_TXDMAEN_bit)
#define SPI3_CR2_RXDMAEN_bb					bitband_t m_BITBAND_PERIPH(&SPI3->CR2, SPI_CR2_RXDMAEN_bit)

/*
+-----------------------------------------------------------------------------+
| SPI_SR - SPI status register
+-----------------------------------------------------------------------------+
*/

#define SPI_SR_BSY_bit						7
#define SPI_SR_OVR_bit						6
#define SPI_SR_MODF_bit						5
#define SPI_SR_CRCERR_bit					4
#define SPI_SR_UDR_bit						3
#define SPI_SR_CHSIDE_bit					2
#define SPI_SR_TXE_bit						1
#define SPI_SR_RXNE_bit						0

#define SPI1_SR_BSY_bb						bitband_t m_BITBAND_PERIPH(&SPI1->SR, SPI_SR_BSY_bit)
#define SPI1_SR_OVR_bb						bitband_t m_BITBAND_PERIPH(&SPI1->SR, SPI_SR_OVR_bit)
#define SPI1_SR_MODF_bb						bitband_t m_BITBAND_PERIPH(&SPI1->SR, SPI_SR_MODF_bit)
#define SPI1_SR_CRCERR_bb					bitband_t m_BITBAND_PERIPH(&SPI1->SR, SPI_SR_CRCERR_bit)
#define SPI1_SR_UDR_bb						bitband_t m_BITBAND_PERIPH(&SPI1->SR, SPI_SR_UDR_bit)
#define SPI1_SR_CHSIDE_bb					bitband_t m_BITBAND_PERIPH(&SPI1->SR, SPI_SR_CHSIDE_bit)
#define SPI1_SR_TXE_bb						bitband_t m_BITBAND_PERIPH(&SPI1->SR, SPI_SR_TXE_bit)
#define SPI1_SR_RXNE_bb						bitband_t m_BITBAND_PERIPH(&SPI1->SR, SPI_SR_RXNE_bit)

#define SPI2_SR_BSY_bb						bitband_t m_BITBAND_PERIPH(&SPI2->SR, SPI_SR_BSY_bit)
#define SPI2_SR_OVR_bb						bitband_t m_BITBAND_PERIPH(&SPI2->SR, SPI_SR_OVR_bit)
#define SPI2_SR_MODF_bb						bitband_t m_BITBAND_PERIPH(&SPI2->SR, SPI_SR_MODF_bit)
#define SPI2_SR_CRCERR_bb					bitband_t m_BITBAND_PERIPH(&SPI2->SR, SPI_SR_CRCERR_bit)
#define SPI2_SR_UDR_bb						bitband_t m_BITBAND_PERIPH(&SPI2->SR, SPI_SR_UDR_bit)
#define SPI2_SR_CHSIDE_bb					bitband_t m_BITBAND_PERIPH(&SPI2->SR, SPI_SR_CHSIDE_bit)
#define SPI2_SR_TXE_bb						bitband_t m_BITBAND_PERIPH(&SPI2->SR, SPI_SR_TXE_bit)
#define SPI2_SR_RXNE_bb						bitband_t m_BITBAND_PERIPH(&SPI2->SR, SPI_SR_RXNE_bit)

#define SPI3_SR_BSY_bb						bitband_t m_BITBAND_PERIPH(&SPI3->SR, SPI_SR_BSY_bit)
#define SPI3_SR_OVR_bb						bitband_t m_BITBAND_PERIPH(&SPI3->SR, SPI_SR_OVR_bit)
#define SPI3_SR_MODF_bb						bitband_t m_BITBAND_PERIPH(&SPI3->SR, SPI_SR_MODF_bit)
#define SPI3_SR_CRCERR_bb					bitband_t m_BITBAND_PERIPH(&SPI3->SR, SPI_SR_CRCERR_bit)
#define SPI3_SR_UDR_bb						bitband_t m_BITBAND_PERIPH(&SPI3->SR, SPI_SR_UDR_bit)
#define SPI3_SR_CHSIDE_bb					bitband_t m_BITBAND_PERIPH(&SPI3->SR, SPI_SR_CHSIDE_bit)
#define SPI3_SR_TXE_bb						bitband_t m_BITBAND_PERIPH(&SPI3->SR, SPI_SR_TXE_bit)
#define SPI3_SR_RXNE_bb						bitband_t m_BITBAND_PERIPH(&SPI3->SR, SPI_SR_RXNE_bit)

/*
+-----------------------------------------------------------------------------+
| SPI_I2SCFGR - SPI_I2S configuration register
+-----------------------------------------------------------------------------+
*/

#define SPI_I2SCFGR_I2SMOD_bit				11
#define SPI_I2SCFGR_I2SE_bit				10
#define SPI_I2SCFGR_I2SCFG_bit				8
#define SPI_I2SCFGR_I2SCFG_0_bit			8
#define SPI_I2SCFGR_I2SCFG_1_bit			9
#define SPI_I2SCFGR_PCMSYNC_bit				7
#define SPI_I2SCFGR_I2SSTD_bit				4
#define SPI_I2SCFGR_I2SSTD_0_bit			4
#define SPI_I2SCFGR_I2SSTD_1_bit			5
#define SPI_I2SCFGR_CKPOL_bit				3
#define SPI_I2SCFGR_DATLEN_bit				1
#define SPI_I2SCFGR_DATLEN_0_bit			1
#define SPI_I2SCFGR_DATLEN_1_bit			2
#define SPI_I2SCFGR_CHLEN_bit				0

#define SPI_I2SCFGR_I2SCFG_SLV_TX_value		0
#define SPI_I2SCFGR_I2SCFG_SLV_RX_value		1
#define SPI_I2SCFGR_I2SCFG_MSTR_TX_value	2
#define SPI_I2SCFGR_I2SCFG_MSTR_RX_value	3
#define SPI_I2SCFGR_I2SCFG_mask				3

#define SPI_I2SCFGR_I2SSTD_mask				3
#define SPI_I2SCFGR_I2SSTD_I2S_value		0
#define SPI_I2SCFGR_I2SSTD_MSB_value		1
#define SPI_I2SCFGR_I2SSTD_LSB_value		2
#define SPI_I2SCFGR_I2SSTD_PCM_value		3

#define SPI_I2SCFGR_DATLEN_mask				3
#define SPI_I2SCFGR_DATLEN_16_value			0
#define SPI_I2SCFGR_DATLEN_24_value			1
#define SPI_I2SCFGR_DATLEN_32_value			2

#define SPI_I2SCFGR_I2SCFG_SLV_TX			(SPI_I2SCFGR_I2SCFG_SLV_TX_value << SPI_I2SCFGR_I2SCFG_bit)
#define SPI_I2SCFGR_I2SCFG_SLV_RX			(SPI_I2SCFGR_I2SCFG_SLV_RX_value << SPI_I2SCFGR_I2SCFG_bit)
#define SPI_I2SCFGR_I2SCFG_MSTR_TX			(SPI_I2SCFGR_I2SCFG_MSTR_TX_value << SPI_I2SCFGR_I2SCFG_bit)
#define SPI_I2SCFGR_I2SCFG_MSTR_RX			(SPI_I2SCFGR_I2SCFG_MSTR_RX_value << SPI_I2SCFGR_I2SCFG_bit)

#define SPI_I2SCFGR_I2SSTD_I2S				(SPI_I2SCFGR_I2SSTD_I2S_value << SPI_I2SCFGR_I2SSTD_bit)
#define SPI_I2SCFGR_I2SSTD_MSB				(SPI_I2SCFGR_I2SSTD_MSB_value << SPI_I2SCFGR_I2SSTD_bit)
#define SPI_I2SCFGR_I2SSTD_LSB				(SPI_I2SCFGR_I2SSTD_LSB_value << SPI_I2SCFGR_I2SSTD_bit)
#define SPI_I2SCFGR_I2SSTD_PCM				(SPI_I2SCFGR_I2SSTD_PCM_value << SPI_I2SCFGR_I2SSTD_bit)

#define SPI_I2SCFGR_DATLEN_16				(SPI_I2SCFGR_DATLEN_16_value << SPI_I2SCFGR_DATLEN_bit)
#define SPI_I2SCFGR_DATLEN_24				(SPI_I2SCFGR_DATLEN_24_value << SPI_I2SCFGR_DATLEN_bit)
#define SPI_I2SCFGR_DATLEN_32				(SPI_I2SCFGR_DATLEN_32_value << SPI_I2SCFGR_DATLEN_bit)

#define SPI1_I2SCFGR_I2SMOD_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SCFGR, SPI_I2SCFGR_I2SMOD_bit)
#define SPI1_I2SCFGR_I2SE_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SCFGR, SPI_I2SCFGR_I2SE_bit)
#define SPI1_I2SCFGR_I2SCFG_0_bb			bitband_t m_BITBAND_PERIPH(&SPI1->I2SCFGR, SPI_I2SCFGR_I2SCFG_0_bit)
#define SPI1_I2SCFGR_I2SCFG_1_bb			bitband_t m_BITBAND_PERIPH(&SPI1->I2SCFGR, SPI_I2SCFGR_I2SCFG_1_bit)
#define SPI1_I2SCFGR_PCMSYNC_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SCFGR, SPI_I2SCFGR_PCMSYNC_bit)
#define SPI1_I2SCFGR_I2SSTD_0_bb			bitband_t m_BITBAND_PERIPH(&SPI1->I2SCFGR, SPI_I2SCFGR_I2SSTD_0_bit)
#define SPI1_I2SCFGR_I2SSTD_1_bb			bitband_t m_BITBAND_PERIPH(&SPI1->I2SCFGR, SPI_I2SCFGR_I2SSTD_1_bit)
#define SPI1_I2SCFGR_CKPOL_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SCFGR, SPI_I2SCFGR_CKPOL_bit)
#define SPI1_I2SCFGR_DATLEN_0_bb			bitband_t m_BITBAND_PERIPH(&SPI1->I2SCFGR, SPI_I2SCFGR_DATLEN_0_bit)
#define SPI1_I2SCFGR_DATLEN_1_bb			bitband_t m_BITBAND_PERIPH(&SPI1->I2SCFGR, SPI_I2SCFGR_DATLEN_1_bit)
#define SPI1_I2SCFGR_CHLEN_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SCFGR, SPI_I2SCFGR_CHLEN_bit)

#define SPI2_I2SCFGR_I2SMOD_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SCFGR, SPI_I2SCFGR_I2SMOD_bit)
#define SPI2_I2SCFGR_I2SE_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SCFGR, SPI_I2SCFGR_I2SE_bit)
#define SPI2_I2SCFGR_I2SCFG_0_bb			bitband_t m_BITBAND_PERIPH(&SPI2->I2SCFGR, SPI_I2SCFGR_I2SCFG_0_bit)
#define SPI2_I2SCFGR_I2SCFG_1_bb			bitband_t m_BITBAND_PERIPH(&SPI2->I2SCFGR, SPI_I2SCFGR_I2SCFG_1_bit)
#define SPI2_I2SCFGR_PCMSYNC_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SCFGR, SPI_I2SCFGR_PCMSYNC_bit)
#define SPI2_I2SCFGR_I2SSTD_0_bb			bitband_t m_BITBAND_PERIPH(&SPI2->I2SCFGR, SPI_I2SCFGR_I2SSTD_0_bit)
#define SPI2_I2SCFGR_I2SSTD_1_bb			bitband_t m_BITBAND_PERIPH(&SPI2->I2SCFGR, SPI_I2SCFGR_I2SSTD_1_bit)
#define SPI2_I2SCFGR_CKPOL_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SCFGR, SPI_I2SCFGR_CKPOL_bit)
#define SPI2_I2SCFGR_DATLEN_0_bb			bitband_t m_BITBAND_PERIPH(&SPI2->I2SCFGR, SPI_I2SCFGR_DATLEN_0_bit)
#define SPI2_I2SCFGR_DATLEN_1_bb			bitband_t m_BITBAND_PERIPH(&SPI2->I2SCFGR, SPI_I2SCFGR_DATLEN_1_bit)
#define SPI2_I2SCFGR_CHLEN_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SCFGR, SPI_I2SCFGR_CHLEN_bit)

#define SPI3_I2SCFGR_I2SMOD_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SCFGR, SPI_I2SCFGR_I2SMOD_bit)
#define SPI3_I2SCFGR_I2SE_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SCFGR, SPI_I2SCFGR_I2SE_bit)
#define SPI3_I2SCFGR_I2SCFG_0_bb			bitband_t m_BITBAND_PERIPH(&SPI3->I2SCFGR, SPI_I2SCFGR_I2SCFG_0_bit)
#define SPI3_I2SCFGR_I2SCFG_1_bb			bitband_t m_BITBAND_PERIPH(&SPI3->I2SCFGR, SPI_I2SCFGR_I2SCFG_1_bit)
#define SPI3_I2SCFGR_PCMSYNC_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SCFGR, SPI_I2SCFGR_PCMSYNC_bit)
#define SPI3_I2SCFGR_I2SSTD_0_bb			bitband_t m_BITBAND_PERIPH(&SPI3->I2SCFGR, SPI_I2SCFGR_I2SSTD_0_bit)
#define SPI3_I2SCFGR_I2SSTD_1_bb			bitband_t m_BITBAND_PERIPH(&SPI3->I2SCFGR, SPI_I2SCFGR_I2SSTD_1_bit)
#define SPI3_I2SCFGR_CKPOL_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SCFGR, SPI_I2SCFGR_CKPOL_bit)
#define SPI3_I2SCFGR_DATLEN_0_bb			bitband_t m_BITBAND_PERIPH(&SPI3->I2SCFGR, SPI_I2SCFGR_DATLEN_0_bit)
#define SPI3_I2SCFGR_DATLEN_1_bb			bitband_t m_BITBAND_PERIPH(&SPI3->I2SCFGR, SPI_I2SCFGR_DATLEN_1_bit)
#define SPI3_I2SCFGR_CHLEN_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SCFGR, SPI_I2SCFGR_CHLEN_bit)

/*
+-----------------------------------------------------------------------------+
| SPI_I2SPR - SPI_I2S prescaler register
+-----------------------------------------------------------------------------+
*/

#define SPI_I2SPR_MCKOE_bit					9
#define SPI_I2SPR_ODD_bit					8
#define SPI_I2SPR_I2SDIV_bit				0
#define SPI_I2SPR_I2SDIV_0_bit				0
#define SPI_I2SPR_I2SDIV_1_bit				1
#define SPI_I2SPR_I2SDIV_2_bit				2
#define SPI_I2SPR_I2SDIV_3_bit				3
#define SPI_I2SPR_I2SDIV_4_bit				4
#define SPI_I2SPR_I2SDIV_5_bit				5
#define SPI_I2SPR_I2SDIV_6_bit				6
#define SPI_I2SPR_I2SDIV_7_bit				7

#define SPI_I2SPR_I2SDIV_0					(1 << SPI_I2SPR_I2SDIV_0_bit)
#define SPI_I2SPR_I2SDIV_1					(1 << SPI_I2SPR_I2SDIV_1_bit)
#define SPI_I2SPR_I2SDIV_2					(1 << SPI_I2SPR_I2SDIV_2_bit)
#define SPI_I2SPR_I2SDIV_3					(1 << SPI_I2SPR_I2SDIV_3_bit)
#define SPI_I2SPR_I2SDIV_4					(1 << SPI_I2SPR_I2SDIV_4_bit)
#define SPI_I2SPR_I2SDIV_5					(1 << SPI_I2SPR_I2SDIV_5_bit)
#define SPI_I2SPR_I2SDIV_6					(1 << SPI_I2SPR_I2SDIV_6_bit)
#define SPI_I2SPR_I2SDIV_7					(1 << SPI_I2SPR_I2SDIV_7_bit)

#define SPI1_I2SPR_MCKOE_bb					bitband_t m_BITBAND_PERIPH(&SPI1->I2SPR, SPI_I2SPR_MCKOE_bit)
#define SPI1_I2SPR_ODD_bb					bitband_t m_BITBAND_PERIPH(&SPI1->I2SPR, SPI_I2SPR_ODD_bit)
#define SPI1_I2SPR_I2SDIV_0_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SPR, SPI_I2SPR_I2SDIV_0_bit)
#define SPI1_I2SPR_I2SDIV_1_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SPR, SPI_I2SPR_I2SDIV_1_bit)
#define SPI1_I2SPR_I2SDIV_2_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SPR, SPI_I2SPR_I2SDIV_2_bit)
#define SPI1_I2SPR_I2SDIV_3_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SPR, SPI_I2SPR_I2SDIV_3_bit)
#define SPI1_I2SPR_I2SDIV_4_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SPR, SPI_I2SPR_I2SDIV_4_bit)
#define SPI1_I2SPR_I2SDIV_5_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SPR, SPI_I2SPR_I2SDIV_5_bit)
#define SPI1_I2SPR_I2SDIV_6_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SPR, SPI_I2SPR_I2SDIV_6_bit)
#define SPI1_I2SPR_I2SDIV_7_bb				bitband_t m_BITBAND_PERIPH(&SPI1->I2SPR, SPI_I2SPR_I2SDIV_7_bit)

#define SPI2_I2SPR_MCKOE_bb					bitband_t m_BITBAND_PERIPH(&SPI2->I2SPR, SPI_I2SPR_MCKOE_bit)
#define SPI2_I2SPR_ODD_bb					bitband_t m_BITBAND_PERIPH(&SPI2->I2SPR, SPI_I2SPR_ODD_bit)
#define SPI2_I2SPR_I2SDIV_0_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SPR, SPI_I2SPR_I2SDIV_0_bit)
#define SPI2_I2SPR_I2SDIV_1_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SPR, SPI_I2SPR_I2SDIV_1_bit)
#define SPI2_I2SPR_I2SDIV_2_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SPR, SPI_I2SPR_I2SDIV_2_bit)
#define SPI2_I2SPR_I2SDIV_3_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SPR, SPI_I2SPR_I2SDIV_3_bit)
#define SPI2_I2SPR_I2SDIV_4_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SPR, SPI_I2SPR_I2SDIV_4_bit)
#define SPI2_I2SPR_I2SDIV_5_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SPR, SPI_I2SPR_I2SDIV_5_bit)
#define SPI2_I2SPR_I2SDIV_6_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SPR, SPI_I2SPR_I2SDIV_6_bit)
#define SPI2_I2SPR_I2SDIV_7_bb				bitband_t m_BITBAND_PERIPH(&SPI2->I2SPR, SPI_I2SPR_I2SDIV_7_bit)

#define SPI3_I2SPR_MCKOE_bb					bitband_t m_BITBAND_PERIPH(&SPI3->I2SPR, SPI_I2SPR_MCKOE_bit)
#define SPI3_I2SPR_ODD_bb					bitband_t m_BITBAND_PERIPH(&SPI3->I2SPR, SPI_I2SPR_ODD_bit)
#define SPI3_I2SPR_I2SDIV_0_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SPR, SPI_I2SPR_I2SDIV_0_bit)
#define SPI3_I2SPR_I2SDIV_1_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SPR, SPI_I2SPR_I2SDIV_1_bit)
#define SPI3_I2SPR_I2SDIV_2_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SPR, SPI_I2SPR_I2SDIV_2_bit)
#define SPI3_I2SPR_I2SDIV_3_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SPR, SPI_I2SPR_I2SDIV_3_bit)
#define SPI3_I2SPR_I2SDIV_4_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SPR, SPI_I2SPR_I2SDIV_4_bit)
#define SPI3_I2SPR_I2SDIV_5_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SPR, SPI_I2SPR_I2SDIV_5_bit)
#define SPI3_I2SPR_I2SDIV_6_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SPR, SPI_I2SPR_I2SDIV_6_bit)
#define SPI3_I2SPR_I2SDIV_7_bb				bitband_t m_BITBAND_PERIPH(&SPI3->I2SPR, SPI_I2SPR_I2SDIV_7_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_SPI_H_ */
