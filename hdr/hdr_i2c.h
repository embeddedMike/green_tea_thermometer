/** \file hdr_i2c.h
 * \brief Header with definition of bits in I2C control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
* chip: STM32F10x
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
******************************************************************************/

#ifndef HDR_I2C_H_
#define HDR_I2C_H_

#include "hdr/hdr_bitband.h"

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| I2C_CR1 - Control register 1
+-----------------------------------------------------------------------------+
*/

#define I2C_CR1_SWRST_bit					15
#define I2C_CR1_ALERT_bit					13
#define I2C_CR1_PEC_bit						12
#define I2C_CR1_POS_bit						11
#define I2C_CR1_ACK_bit						10
#define I2C_CR1_STOP_bit					9
#define I2C_CR1_START_bit					8
#define I2C_CR1_NOSTRETCH_bit				7
#define I2C_CR1_ENGC_bit					6
#define I2C_CR1_ENPEC_bit					5
#define I2C_CR1_ENARP_bit					4
#define I2C_CR1_SMBTYPE_bit					3
#define I2C_CR1_SMBUS_bit					1
#define I2C_CR1_PE_bit						0

#define I2C1_CR1_SWRST_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_SWRST_bit)
#define I2C1_CR1_ALERT_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_ALERT_bit)
#define I2C1_CR1_PEC_bb						bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_PEC_bit)
#define I2C1_CR1_POS_bb						bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_POS_bit)
#define I2C1_CR1_ACK_bb						bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_ACK_bit)
#define I2C1_CR1_STOP_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_STOP_bit)
#define I2C1_CR1_START_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_START_bit)
#define I2C1_CR1_NOSTRETCH_bb				bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_NOSTRETCH_bit)
#define I2C1_CR1_ENGC_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_ENGC_bit)
#define I2C1_CR1_ENPEC_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_ENPEC_bit)
#define I2C1_CR1_ENARP_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_ENARP_bit)
#define I2C1_CR1_SMBTYPE_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_SMBTYPE_bit)
#define I2C1_CR1_SMBUS_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_SMBUS_bit)
#define I2C1_CR1_PE_bb						bitband_t m_BITBAND_PERIPH(&I2C1->CR1, I2C_CR1_PE_bit)

#define I2C2_CR1_SWRST_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_SWRST_bit)
#define I2C2_CR1_ALERT_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_ALERT_bit)
#define I2C2_CR1_PEC_bb						bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_PEC_bit)
#define I2C2_CR1_POS_bb						bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_POS_bit)
#define I2C2_CR1_ACK_bb						bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_ACK_bit)
#define I2C2_CR1_STOP_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_STOP_bit)
#define I2C2_CR1_START_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_START_bit)
#define I2C2_CR1_NOSTRETCH_bb				bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_NOSTRETCH_bit)
#define I2C2_CR1_ENGC_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_ENGC_bit)
#define I2C2_CR1_ENPEC_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_ENPEC_bit)
#define I2C2_CR1_ENARP_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_ENARP_bit)
#define I2C2_CR1_SMBTYPE_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_SMBTYPE_bit)
#define I2C2_CR1_SMBUS_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_SMBUS_bit)
#define I2C2_CR1_PE_bb						bitband_t m_BITBAND_PERIPH(&I2C2->CR1, I2C_CR1_PE_bit)

/*
+-----------------------------------------------------------------------------+
| I2C_CR2 - Control register 2
+-----------------------------------------------------------------------------+
*/

#define I2C_CR2_LAST_bit					12
#define I2C_CR2_DMAEN_bit					11
#define I2C_CR2_ITBUFEN_bit					10
#define I2C_CR2_ITEVTEN_bit					9
#define I2C_CR2_ITERREN_bit					8
#define I2C_CR2_FREQ_bit					0
#define I2C_CR2_FREQ_0_bit					0
#define I2C_CR2_FREQ_1_bit					1
#define I2C_CR2_FREQ_2_bit					2
#define I2C_CR2_FREQ_3_bit					3
#define I2C_CR2_FREQ_4_bit					4
#define I2C_CR2_FREQ_5_bit					5

#define I2C_CR2_FREQ_2MHz_value				2
#define I2C_CR2_FREQ_3MHz_value				3
#define I2C_CR2_FREQ_4MHz_value				4
#define I2C_CR2_FREQ_5MHz_value				5
#define I2C_CR2_FREQ_6MHz_value				6
#define I2C_CR2_FREQ_7MHz_value				7
#define I2C_CR2_FREQ_8MHz_value				8
#define I2C_CR2_FREQ_9MHz_value				9
#define I2C_CR2_FREQ_10MHz_value			10
#define I2C_CR2_FREQ_11MHz_value			11
#define I2C_CR2_FREQ_12MHz_value			12
#define I2C_CR2_FREQ_13MHz_value			13
#define I2C_CR2_FREQ_14MHz_value			14
#define I2C_CR2_FREQ_15MHz_value			15
#define I2C_CR2_FREQ_16MHz_value			16
#define I2C_CR2_FREQ_17MHz_value			17
#define I2C_CR2_FREQ_18MHz_value			18
#define I2C_CR2_FREQ_19MHz_value			19
#define I2C_CR2_FREQ_20MHz_value			20
#define I2C_CR2_FREQ_21MHz_value			21
#define I2C_CR2_FREQ_22MHz_value			22
#define I2C_CR2_FREQ_23MHz_value			23
#define I2C_CR2_FREQ_24MHz_value			24
#define I2C_CR2_FREQ_25MHz_value			25
#define I2C_CR2_FREQ_26MHz_value			26
#define I2C_CR2_FREQ_27MHz_value			27
#define I2C_CR2_FREQ_28MHz_value			28
#define I2C_CR2_FREQ_29MHz_value			29
#define I2C_CR2_FREQ_30MHz_value			30
#define I2C_CR2_FREQ_31MHz_value			31
#define I2C_CR2_FREQ_32MHz_value			32
#define I2C_CR2_FREQ_33MHz_value			33
#define I2C_CR2_FREQ_34MHz_value			34
#define I2C_CR2_FREQ_35MHz_value			35
#define I2C_CR2_FREQ_36MHz_value			36
#define I2C_CR2_FREQ_mask					31

#define I2C_CR2_FREQ_2MHz					(I2C_CR2_FREQ_2MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_3MHz					(I2C_CR2_FREQ_3MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_4MHz					(I2C_CR2_FREQ_4MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_5MHz					(I2C_CR2_FREQ_5MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_6MHz					(I2C_CR2_FREQ_6MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_7MHz					(I2C_CR2_FREQ_7MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_8MHz					(I2C_CR2_FREQ_8MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_9MHz					(I2C_CR2_FREQ_9MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_10MHz					(I2C_CR2_FREQ_10MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_11MHz					(I2C_CR2_FREQ_11MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_12MHz					(I2C_CR2_FREQ_12MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_13MHz					(I2C_CR2_FREQ_13MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_14MHz					(I2C_CR2_FREQ_14MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_15MHz					(I2C_CR2_FREQ_15MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_16MHz					(I2C_CR2_FREQ_16MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_17MHz					(I2C_CR2_FREQ_17MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_18MHz					(I2C_CR2_FREQ_18MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_19MHz					(I2C_CR2_FREQ_19MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_20MHz					(I2C_CR2_FREQ_20MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_21MHz					(I2C_CR2_FREQ_21MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_22MHz					(I2C_CR2_FREQ_22MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_23MHz					(I2C_CR2_FREQ_23MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_24MHz					(I2C_CR2_FREQ_24MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_25MHz					(I2C_CR2_FREQ_25MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_26MHz					(I2C_CR2_FREQ_26MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_27MHz					(I2C_CR2_FREQ_27MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_28MHz					(I2C_CR2_FREQ_28MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_29MHz					(I2C_CR2_FREQ_29MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_30MHz					(I2C_CR2_FREQ_30MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_31MHz					(I2C_CR2_FREQ_31MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_32MHz					(I2C_CR2_FREQ_32MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_33MHz					(I2C_CR2_FREQ_33MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_34MHz					(I2C_CR2_FREQ_34MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_35MHz					(I2C_CR2_FREQ_35MHz_value << I2C_CR2_FREQ_bit)
#define I2C_CR2_FREQ_36MHz					(I2C_CR2_FREQ_36MHz_value << I2C_CR2_FREQ_bit)

#define I2C1_CR2_LAST_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR2, I2C_CR2_LAST_bit)
#define I2C1_CR2_DMAEN_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR2, I2C_CR2_DMAEN_bit)
#define I2C1_CR2_ITBUFEN_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR2, I2C_CR2_ITBUFEN_bit)
#define I2C1_CR2_ITEVTEN_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR2, I2C_CR2_ITEVTEN_bit)
#define I2C1_CR2_ITERREN_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR2, I2C_CR2_ITERREN_bit)
#define I2C1_CR2_FREQ_0_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR2, I2C_CR2_FREQ_0_bit)
#define I2C1_CR2_FREQ_1_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR2, I2C_CR2_FREQ_1_bit)
#define I2C1_CR2_FREQ_2_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR2, I2C_CR2_FREQ_2_bit)
#define I2C1_CR2_FREQ_3_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR2, I2C_CR2_FREQ_3_bit)
#define I2C1_CR2_FREQ_4_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR2, I2C_CR2_FREQ_4_bit)
#define I2C1_CR2_FREQ_5_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CR2, I2C_CR2_FREQ_5_bit)

#define I2C2_CR2_LAST_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR2, I2C_CR2_LAST_bit)
#define I2C2_CR2_DMAEN_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR2, I2C_CR2_DMAEN_bit)
#define I2C2_CR2_ITBUFEN_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR2, I2C_CR2_ITBUFEN_bit)
#define I2C2_CR2_ITEVTEN_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR2, I2C_CR2_ITEVTEN_bit)
#define I2C2_CR2_ITERREN_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR2, I2C_CR2_ITERREN_bit)
#define I2C2_CR2_FREQ_0_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR2, I2C_CR2_FREQ_0_bit)
#define I2C2_CR2_FREQ_1_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR2, I2C_CR2_FREQ_1_bit)
#define I2C2_CR2_FREQ_2_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR2, I2C_CR2_FREQ_2_bit)
#define I2C2_CR2_FREQ_3_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR2, I2C_CR2_FREQ_3_bit)
#define I2C2_CR2_FREQ_4_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR2, I2C_CR2_FREQ_4_bit)
#define I2C2_CR2_FREQ_5_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CR2, I2C_CR2_FREQ_5_bit)

/*
+-----------------------------------------------------------------------------+
| I2C_OAR1 - Own address register 1
+-----------------------------------------------------------------------------+
*/

#define I2C_OAR1_ADDMODE_bit				15

#define I2C1_OAR1_ADDMODE_bb				bitband_t m_BITBAND_PERIPH(&I2C1->OAR1, I2C_OAR1_ADDMODE_bit)
#define I2C2_OAR1_ADDMODE_bb				bitband_t m_BITBAND_PERIPH(&I2C2->OAR1, I2C_OAR1_ADDMODE_bit)

/*
+-----------------------------------------------------------------------------+
| I2C_OAR2 - Own address register 2
+-----------------------------------------------------------------------------+
*/

#define I2C_OAR2_ENDUAL_bit					0

#define I2C1_OAR2_ENDUAL_bb					bitband_t m_BITBAND_PERIPH(&I2C1->OAR2, I2C_OAR2_ENDUAL_bit)
#define I2C2_OAR2_ENDUAL_bb					bitband_t m_BITBAND_PERIPH(&I2C2->OAR2, I2C_OAR2_ENDUAL_bit)

/*
+-----------------------------------------------------------------------------+
| I2C_SR1 - Status register 1
+-----------------------------------------------------------------------------+
*/

#define I2C_SR1_SMBALERT_bit				15
#define I2C_SR1_TIMEOUT_bit					14
#define I2C_SR1_PECERR_bit					12
#define I2C_SR1_OVR_bit						11
#define I2C_SR1_AF_bit						10
#define I2C_SR1_ARLO_bit					9
#define I2C_SR1_BERR_bit					8
#define I2C_SR1_TxE_bit						7
#define I2C_SR1_RxNE_bit					6
#define I2C_SR1_STOPF_bit					4
#define I2C_SR1_ADD10_bit					3
#define I2C_SR1_BTF_bit						2
#define I2C_SR1_ADDR_bit					1
#define I2C_SR1_SB_bit						0

#define I2C1_SR1_SMBALERT_bb				bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_SMBALERT_bit)
#define I2C1_SR1_TIMEOUT_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_TIMEOUT_bit)
#define I2C1_SR1_PECERR_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_PECERR_bit)
#define I2C1_SR1_OVR_bb						bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_OVR_bit)
#define I2C1_SR1_AF_bb						bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_AF_bit)
#define I2C1_SR1_ARLO_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_ARLO_bit)
#define I2C1_SR1_BERR_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_BERR_bit)
#define I2C1_SR1_TxE_bb						bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_TxE_bit)
#define I2C1_SR1_RxNE_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_RxNE_bit)
#define I2C1_SR1_STOPF_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_STOPF_bit)
#define I2C1_SR1_ADD10_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_ADD10_bit)
#define I2C1_SR1_BTF_bb						bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_BTF_bit)
#define I2C1_SR1_ADDR_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_ADDR_bit)
#define I2C1_SR1_SB_bb						bitband_t m_BITBAND_PERIPH(&I2C1->SR1, I2C_SR1_SB_bit)

#define I2C2_SR1_SMBALERT_bb				bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_SMBALERT_bit)
#define I2C2_SR1_TIMEOUT_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_TIMEOUT_bit)
#define I2C2_SR1_PECERR_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_PECERR_bit)
#define I2C2_SR1_OVR_bb						bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_OVR_bit)
#define I2C2_SR1_AF_bb						bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_AF_bit)
#define I2C2_SR1_ARLO_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_ARLO_bit)
#define I2C2_SR1_BERR_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_BERR_bit)
#define I2C2_SR1_TxE_bb						bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_TxE_bit)
#define I2C2_SR1_RxNE_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_RxNE_bit)
#define I2C2_SR1_STOPF_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_STOPF_bit)
#define I2C2_SR1_ADD10_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_ADD10_bit)
#define I2C2_SR1_BTF_bb						bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_BTF_bit)
#define I2C2_SR1_ADDR_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_ADDR_bit)
#define I2C2_SR1_SB_bb						bitband_t m_BITBAND_PERIPH(&I2C2->SR1, I2C_SR1_SB_bit)

/*
+-----------------------------------------------------------------------------+
| I2C_SR2 - Status register 2
+-----------------------------------------------------------------------------+
*/

#define I2C_SR2_DUALF_bit					7
#define I2C_SR2_SMBHOST_bit					6
#define I2C_SR2_SMBDEFAULT_bit				5
#define I2C_SR2_GENCALL_bit					4
#define I2C_SR2_TRA_bit						2
#define I2C_SR2_BUSY_bit					1
#define I2C_SR2_MSL_bit						0

#define I2C1_SR2_DUALF_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR2, I2C_SR2_DUALF_bit)
#define I2C1_SR2_SMBHOST_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR2, I2C_SR2_SMBHOST_bit)
#define I2C1_SR2_SMBDEFAULT_bb				bitband_t m_BITBAND_PERIPH(&I2C1->SR2, I2C_SR2_SMBDEFAULT_bit)
#define I2C1_SR2_GENCALL_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR2, I2C_SR2_GENCALL_bit)
#define I2C1_SR2_TRA_bb						bitband_t m_BITBAND_PERIPH(&I2C1->SR2, I2C_SR2_TRA_bit)
#define I2C1_SR2_BUSY_bb					bitband_t m_BITBAND_PERIPH(&I2C1->SR2, I2C_SR2_BUSY_bit)
#define I2C1_SR2_MSL_bb						bitband_t m_BITBAND_PERIPH(&I2C1->SR2, I2C_SR2_MSL_bit)

#define I2C2_SR2_DUALF_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR2, I2C_SR2_DUALF_bit)
#define I2C2_SR2_SMBHOST_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR2, I2C_SR2_SMBHOST_bit)
#define I2C2_SR2_SMBDEFAULT_bb				bitband_t m_BITBAND_PERIPH(&I2C2->SR2, I2C_SR2_SMBDEFAULT_bit)
#define I2C2_SR2_GENCALL_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR2, I2C_SR2_GENCALL_bit)
#define I2C2_SR2_TRA_bb						bitband_t m_BITBAND_PERIPH(&I2C2->SR2, I2C_SR2_TRA_bit)
#define I2C2_SR2_BUSY_bb					bitband_t m_BITBAND_PERIPH(&I2C2->SR2, I2C_SR2_BUSY_bit)
#define I2C2_SR2_MSL_bb						bitband_t m_BITBAND_PERIPH(&I2C2->SR2, I2C_SR2_MSL_bit)

/*
+-----------------------------------------------------------------------------+
| I2C_CCR - Clock control register
+-----------------------------------------------------------------------------+
*/

#define I2C_CCR_FS_bit						15
#define I2C_CCR_DUTY_bit					14

#define I2C1_CCR_FS_bb						bitband_t m_BITBAND_PERIPH(&I2C1->CCR, I2C_CCR_FS_bit)
#define I2C1_CCR_DUTY_bb					bitband_t m_BITBAND_PERIPH(&I2C1->CCR, I2C_CCR_DUTY_bit)

#define I2C2_CCR_FS_bb						bitband_t m_BITBAND_PERIPH(&I2C2->CCR, I2C_CCR_FS_bit)
#define I2C2_CCR_DUTY_bb					bitband_t m_BITBAND_PERIPH(&I2C2->CCR, I2C_CCR_DUTY_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_I2C_H_ */
