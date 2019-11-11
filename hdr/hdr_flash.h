/** \file hdr_flash.h
 * \brief Header with definition of bits in FLASH control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
* chip: STM32F10x
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
******************************************************************************/

#ifndef HDR_FLASH_H_
#define HDR_FLASH_H_

#include "hdr/hdr_bitband.h"

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| FLASH_ACR - Flash access control register
+-----------------------------------------------------------------------------+
*/

#define FLASH_ACR_PRFTBS_bit				5
#define FLASH_ACR_PRFTBE_bit				4
#define FLASH_ACR_HLFCYA_bit				3
#define FLASH_ACR_LATENCY_bit				0
#define FLASH_ACR_LATENCY_0_bit				0
#define FLASH_ACR_LATENCY_1_bit				1
#define FLASH_ACR_LATENCY_2_bit				2

#define FLASH_ACR_LATENCY_0WS_value			0
#define FLASH_ACR_LATENCY_1WS_value			1
#define FLASH_ACR_LATENCY_2WS_value			2
#define FLASH_ACR_LATENCY_mask				15

#define FLASH_ACR_LATENCY_0WS				(FLASH_ACR_LATENCY_0WS_value << FLASH_ACR_LATENCY_bit)
#define FLASH_ACR_LATENCY_1WS				(FLASH_ACR_LATENCY_1WS_value << FLASH_ACR_LATENCY_bit)
#define FLASH_ACR_LATENCY_2WS				(FLASH_ACR_LATENCY_2WS_value << FLASH_ACR_LATENCY_bit)

#define FLASH_ACR_PRFTBS_bb					bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_PRFTBS_bit)
#define FLASH_ACR_PRFTBE_bb					bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_PRFTBE_bit)
#define FLASH_ACR_HLFCYA_bb					bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_HLFCYA_bit)
#define FLASH_ACR_LATENCY_0_bb				bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_LATENCY_0_bit)
#define FLASH_ACR_LATENCY_1_bb				bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_LATENCY_1_bit)
#define FLASH_ACR_LATENCY_2_bb				bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_LATENCY_2_bit)

/*
+-----------------------------------------------------------------------------+
| FLASH_KEYR - FPEC key register
+-----------------------------------------------------------------------------+
*/

#define FLASH_KEYR_KEY1						0x45670123
#define FLASH_KEYR_KEY2						0xCDEF89AB

/*
+-----------------------------------------------------------------------------+
| FLASH_OPTKEYR - Flash OPTKEY register
+-----------------------------------------------------------------------------+
*/

#define FLASH_OPTKEYR_KEY1					0x45670123
#define FLASH_OPTKEYR_KEY2					0xCDEF89AB

/*
+-----------------------------------------------------------------------------+
| FLASH_SR - Flash status register
+-----------------------------------------------------------------------------+
*/

#define FLASH_SR_EOP_bit					5
#define FLASH_SR_WRPRTERR_bit				4
#define FLASH_SR_PGERR_bit					2
#define FLASH_SR_BSY_bit					0

#define FLASH_SR_EOP_bb						bitband_t m_BITBAND_PERIPH(&FLASH->SR, FLASH_SR_EOP_bit)
#define FLASH_SR_WRPRTERR_bb				bitband_t m_BITBAND_PERIPH(&FLASH->SR, FLASH_SR_WRPRTERR_bit)
#define FLASH_SR_PGERR_bb					bitband_t m_BITBAND_PERIPH(&FLASH->SR, FLASH_SR_PGERR_bit)
#define FLASH_SR_BSY_bb						bitband_t m_BITBAND_PERIPH(&FLASH->SR, FLASH_SR_BSY_bit)

/*
+-----------------------------------------------------------------------------+
| FLASH_CR - Flash control register
+-----------------------------------------------------------------------------+
*/

#define FLASH_CR_EOPIE_bit					12
#define FLASH_CR_ERRIE_bit					10
#define FLASH_CR_OPTWRE_bit					9
#define FLASH_CR_LOCK_bit					7
#define FLASH_CR_STRT_bit					6
#define FLASH_CR_OPTER_bit					5
#define FLASH_CR_OPTPG_bit					4
#define FLASH_CR_MER_bit					2
#define FLASH_CR_PER_bit					1
#define FLASH_CR_PG_bit						0

#define FLASH_CR_EOPIE_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_EOPIE_bit)
#define FLASH_CR_ERRIE_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_ERRIE_bit)
#define FLASH_CR_OPTWRE_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_OPTWRE_bit)
#define FLASH_CR_LOCK_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_LOCK_bit)
#define FLASH_CR_STRT_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_STRT_bit)
#define FLASH_CR_OPTER_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_OPTER_bit)
#define FLASH_CR_OPTPG_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_OPTPG_bit)
#define FLASH_CR_MER_bb						bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_MER_bit)
#define FLASH_CR_PER_bb						bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_PER_bit)
#define FLASH_CR_PG_bb						bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_PG_bit)

/*
+-----------------------------------------------------------------------------+
| FLASH_OBR - Option byte register
+-----------------------------------------------------------------------------+
*/

#define FLASH_OBR_nRST_STDBY_bit			4
#define FLASH_OBR_nRST_STOP_bit				3
#define FLASH_OBR_WDG_SW_bit				2
#define FLASH_OBR_RDPRT_bit					1
#define FLASH_OBR_OPTERR_bit				0

#define FLASH_OBR_nRST_STDBY_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OBR, FLASH_OBR_nRST_STDBY_bit)
#define FLASH_OBR_nRST_STOP_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OBR, FLASH_OBR_nRST_STOP_bit)
#define FLASH_OBR_WDG_SW_bb					bitband_t m_BITBAND_PERIPH(&FLASH->OBR, FLASH_OBR_WDG_SW_bit)
#define FLASH_OBR_RDPRT_bb					bitband_t m_BITBAND_PERIPH(&FLASH->OBR, FLASH_OBR_RDPRT_bit)
#define FLASH_OBR_OPTERR_bb					bitband_t m_BITBAND_PERIPH(&FLASH->OBR, FLASH_OBR_OPTERR_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_FLASH_H_ */
