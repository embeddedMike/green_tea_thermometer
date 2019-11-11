/** \file hdr_tim.h
 * \brief Header with definition of bits in Timer control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
* chip: STM32F10x
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
******************************************************************************/

#ifndef HDR_TIM_H_
#define HDR_TIM_H_

#include "hdr/hdr_bitband.h"

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| TIMx_CR1 - Control register 1
+-----------------------------------------------------------------------------+
*/

#define TIM_CR1_CKD_bit						8
#define TIM_CR1_CKD_0_bit					8
#define TIM_CR1_CKD_1_bit					9
#define TIM_CR1_ARPE_bit					7
#define TIM_CR1_CMS_bit						5
#define TIM_CR1_CMS_0_bit					5
#define TIM_CR1_CMS_1_bit					6
#define TIM_CR1_DIR_bit						4
#define TIM_CR1_OPM_bit						3
#define TIM_CR1_URS_bit						2
#define TIM_CR1_UDIS_bit					1
#define TIM_CR1_CEN_bit						0

#define TIM_CR1_CKD_DIV1_value				0
#define TIM_CR1_CKD_DIV2_value				1
#define TIM_CR1_CKD_DIV4_value				2
#define TIM_CR1_CKD_mask					3

#define TIM_CR1_CMS_EDGE_value				0
#define TIM_CR1_CMS_CTR1_value				1
#define TIM_CR1_CMS_CTR2_value				2
#define TIM_CR1_CMS_CTR3_value				3
#define TIM_CR1_CMS_mask					3

#define TIM_CR1_CKD_DIV1					(TIM_CR1_CKD_DIV1_value << TIM_CR1_CKD_bit)
#define TIM_CR1_CKD_DIV2					(TIM_CR1_CKD_DIV2_value << TIM_CR1_CKD_bit)
#define TIM_CR1_CKD_DIV4					(TIM_CR1_CKD_DIV4_value << TIM_CR1_CKD_bit)

#define TIM_CR1_CMS_EDGE					(TIM_CR1_CMS_EDGE_value << TIM_CR1_CMS_bit)
#define TIM_CR1_CMS_CTR1					(TIM_CR1_CMS_CTR1_value << TIM_CR1_CMS_bit)
#define TIM_CR1_CMS_CTR2					(TIM_CR1_CMS_CTR2_value << TIM_CR1_CMS_bit)
#define TIM_CR1_CMS_CTR3					(TIM_CR1_CMS_CTR3_value << TIM_CR1_CMS_bit)

#define TIM1_CR1_CKD_0_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR1, TIM_CR1_CKD_0_bit)
#define TIM1_CR1_CKD_1_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR1, TIM_CR1_CKD_1_bit)
#define TIM1_CR1_ARPE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR1, TIM_CR1_ARPE_bit)
#define TIM1_CR1_CMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR1, TIM_CR1_CMS_0_bit)
#define TIM1_CR1_CMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR1, TIM_CR1_CMS_1_bit)
#define TIM1_CR1_DIR_bb						bitband_t m_BITBAND_PERIPH(&TIM1->CR1, TIM_CR1_DIR_bit)
#define TIM1_CR1_OPM_bb						bitband_t m_BITBAND_PERIPH(&TIM1->CR1, TIM_CR1_OPM_bit)
#define TIM1_CR1_URS_bb						bitband_t m_BITBAND_PERIPH(&TIM1->CR1, TIM_CR1_URS_bit)
#define TIM1_CR1_UDIS_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR1, TIM_CR1_UDIS_bit)
#define TIM1_CR1_CEN_bb						bitband_t m_BITBAND_PERIPH(&TIM1->CR1, TIM_CR1_CEN_bit)

#define TIM2_CR1_CKD_0_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CR1, TIM_CR1_CKD_0_bit)
#define TIM2_CR1_CKD_1_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CR1, TIM_CR1_CKD_1_bit)
#define TIM2_CR1_ARPE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CR1, TIM_CR1_ARPE_bit)
#define TIM2_CR1_CMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CR1, TIM_CR1_CMS_0_bit)
#define TIM2_CR1_CMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CR1, TIM_CR1_CMS_1_bit)
#define TIM2_CR1_DIR_bb						bitband_t m_BITBAND_PERIPH(&TIM2->CR1, TIM_CR1_DIR_bit)
#define TIM2_CR1_OPM_bb						bitband_t m_BITBAND_PERIPH(&TIM2->CR1, TIM_CR1_OPM_bit)
#define TIM2_CR1_URS_bb						bitband_t m_BITBAND_PERIPH(&TIM2->CR1, TIM_CR1_URS_bit)
#define TIM2_CR1_UDIS_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CR1, TIM_CR1_UDIS_bit)
#define TIM2_CR1_CEN_bb						bitband_t m_BITBAND_PERIPH(&TIM2->CR1, TIM_CR1_CEN_bit)

#define TIM3_CR1_CKD_0_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CR1, TIM_CR1_CKD_0_bit)
#define TIM3_CR1_CKD_1_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CR1, TIM_CR1_CKD_1_bit)
#define TIM3_CR1_ARPE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CR1, TIM_CR1_ARPE_bit)
#define TIM3_CR1_CMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CR1, TIM_CR1_CMS_0_bit)
#define TIM3_CR1_CMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CR1, TIM_CR1_CMS_1_bit)
#define TIM3_CR1_DIR_bb						bitband_t m_BITBAND_PERIPH(&TIM3->CR1, TIM_CR1_DIR_bit)
#define TIM3_CR1_OPM_bb						bitband_t m_BITBAND_PERIPH(&TIM3->CR1, TIM_CR1_OPM_bit)
#define TIM3_CR1_URS_bb						bitband_t m_BITBAND_PERIPH(&TIM3->CR1, TIM_CR1_URS_bit)
#define TIM3_CR1_UDIS_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CR1, TIM_CR1_UDIS_bit)
#define TIM3_CR1_CEN_bb						bitband_t m_BITBAND_PERIPH(&TIM3->CR1, TIM_CR1_CEN_bit)

#define TIM4_CR1_CKD_0_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CR1, TIM_CR1_CKD_0_bit)
#define TIM4_CR1_CKD_1_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CR1, TIM_CR1_CKD_1_bit)
#define TIM4_CR1_ARPE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CR1, TIM_CR1_ARPE_bit)
#define TIM4_CR1_CMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CR1, TIM_CR1_CMS_0_bit)
#define TIM4_CR1_CMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CR1, TIM_CR1_CMS_1_bit)
#define TIM4_CR1_DIR_bb						bitband_t m_BITBAND_PERIPH(&TIM4->CR1, TIM_CR1_DIR_bit)
#define TIM4_CR1_OPM_bb						bitband_t m_BITBAND_PERIPH(&TIM4->CR1, TIM_CR1_OPM_bit)
#define TIM4_CR1_URS_bb						bitband_t m_BITBAND_PERIPH(&TIM4->CR1, TIM_CR1_URS_bit)
#define TIM4_CR1_UDIS_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CR1, TIM_CR1_UDIS_bit)
#define TIM4_CR1_CEN_bb						bitband_t m_BITBAND_PERIPH(&TIM4->CR1, TIM_CR1_CEN_bit)

#define TIM5_CR1_CKD_0_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CR1, TIM_CR1_CKD_0_bit)
#define TIM5_CR1_CKD_1_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CR1, TIM_CR1_CKD_1_bit)
#define TIM5_CR1_ARPE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CR1, TIM_CR1_ARPE_bit)
#define TIM5_CR1_CMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CR1, TIM_CR1_CMS_0_bit)
#define TIM5_CR1_CMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CR1, TIM_CR1_CMS_1_bit)
#define TIM5_CR1_DIR_bb						bitband_t m_BITBAND_PERIPH(&TIM5->CR1, TIM_CR1_DIR_bit)
#define TIM5_CR1_OPM_bb						bitband_t m_BITBAND_PERIPH(&TIM5->CR1, TIM_CR1_OPM_bit)
#define TIM5_CR1_URS_bb						bitband_t m_BITBAND_PERIPH(&TIM5->CR1, TIM_CR1_URS_bit)
#define TIM5_CR1_UDIS_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CR1, TIM_CR1_UDIS_bit)
#define TIM5_CR1_CEN_bb						bitband_t m_BITBAND_PERIPH(&TIM5->CR1, TIM_CR1_CEN_bit)

/*
+-----------------------------------------------------------------------------+
| TIMx_CR2 - Control register 2
+-----------------------------------------------------------------------------+
*/

#define TIM_CR2_TI1S_bit					7
#define TIM_CR2_MMS_bit						4
#define TIM_CR2_MMS_0_bit					4
#define TIM_CR2_MMS_1_bit					5
#define TIM_CR2_MMS_2_bit					6
#define TIM_CR2_CCDS_bit					3

// advanced timer specific

#define TIM_CR2_OIS4_bit					14
#define TIM_CR2_OIS3N_bit					13
#define TIM_CR2_OIS3_bit					12
#define TIM_CR2_OIS2N_bit					11
#define TIM_CR2_OIS2_bit					10
#define TIM_CR2_OIS1N_bit					9
#define TIM_CR2_OIS1_bit					8
#define TIM_CR2_CCUS_bit					2
#define TIM_CR2_CCPC_bit					0

#define TIM_CR2_MMS_RST_value				0
#define TIM_CR2_MMS_EN_value				1
#define TIM_CR2_MMS_UPD_value				2
#define TIM_CR2_MMS_CMP_P_value				3
#define TIM_CR2_MMS_CMP_1_value				4
#define TIM_CR2_MMS_CMP_2_value				5
#define TIM_CR2_MMS_CMP_3_value				6
#define TIM_CR2_MMS_CMP_4_value				7
#define TIM_CR2_MMS_mask					7

#define TIM_CR2_MMS_RST						(TIM_CR2_MMS_RST_value << TIM_CR2_MMS_bit)
#define TIM_CR2_MMS_EN						(TIM_CR2_MMS_EN_value << TIM_CR2_MMS_bit)
#define TIM_CR2_MMS_UPD						(TIM_CR2_MMS_UPD_value << TIM_CR2_MMS_bit)
#define TIM_CR2_MMS_CMP_P					(TIM_CR2_MMS_CMP_P_value << TIM_CR2_MMS_bit)
#define TIM_CR2_MMS_CMP_1					(TIM_CR2_MMS_CMP_1_value << TIM_CR2_MMS_bit)
#define TIM_CR2_MMS_CMP_2					(TIM_CR2_MMS_CMP_2_value << TIM_CR2_MMS_bit)
#define TIM_CR2_MMS_CMP_3					(TIM_CR2_MMS_CMP_3_value << TIM_CR2_MMS_bit)
#define TIM_CR2_MMS_CMP_4					(TIM_CR2_MMS_CMP_4_value << TIM_CR2_MMS_bit)

#define TIM1_CR2_OIS4_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2,TIM_CR2_OIS4_bit)
#define TIM1_CR2_OIS3N_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2,TIM_CR2_OIS3N_bit)
#define TIM1_CR2_OIS3_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2,TIM_CR2_OIS3_bit)
#define TIM1_CR2_OIS2N_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2,TIM_CR2_OIS2N_bit)
#define TIM1_CR2_OIS2_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2,TIM_CR2_OIS2_bit)
#define TIM1_CR2_OIS1N_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2,TIM_CR2_OIS1N_bit)
#define TIM1_CR2_OIS1_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2,TIM_CR2_OIS1_bit)
#define TIM1_CR2_TI1S_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2, TIM_CR2_TI1S_bit)
#define TIM1_CR2_MMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2, TIM_CR2_MMS_0_bit)
#define TIM1_CR2_MMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2, TIM_CR2_MMS_1_bit)
#define TIM1_CR2_MMS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2, TIM_CR2_MMS_2_bit)
#define TIM1_CR2_CCDS_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2, TIM_CR2_CCDS_bit)
#define TIM1_CR2_CCUS_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2,TIM_CR2_CCUS_bit)
#define TIM1_CR2_CCPC_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CR2,TIM_CR2_CCPC_bit)

#define TIM2_CR2_TI1S_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CR2, TIM_CR2_TI1S_bit)
#define TIM2_CR2_MMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CR2, TIM_CR2_MMS_0_bit)
#define TIM2_CR2_MMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CR2, TIM_CR2_MMS_1_bit)
#define TIM2_CR2_MMS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CR2, TIM_CR2_MMS_2_bit)
#define TIM2_CR2_CCDS_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CR2, TIM_CR2_CCDS_bit)

#define TIM3_CR2_TI1S_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CR2, TIM_CR2_TI1S_bit)
#define TIM3_CR2_MMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CR2, TIM_CR2_MMS_0_bit)
#define TIM3_CR2_MMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CR2, TIM_CR2_MMS_1_bit)
#define TIM3_CR2_MMS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CR2, TIM_CR2_MMS_2_bit)
#define TIM3_CR2_CCDS_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CR2, TIM_CR2_CCDS_bit)

#define TIM4_CR2_TI1S_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CR2, TIM_CR2_TI1S_bit)
#define TIM4_CR2_MMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CR2, TIM_CR2_MMS_0_bit)
#define TIM4_CR2_MMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CR2, TIM_CR2_MMS_1_bit)
#define TIM4_CR2_MMS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CR2, TIM_CR2_MMS_2_bit)
#define TIM4_CR2_CCDS_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CR2, TIM_CR2_CCDS_bit)

#define TIM5_CR2_TI1S_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CR2, TIM_CR2_TI1S_bit)
#define TIM5_CR2_MMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CR2, TIM_CR2_MMS_0_bit)
#define TIM5_CR2_MMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CR2, TIM_CR2_MMS_1_bit)
#define TIM5_CR2_MMS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CR2, TIM_CR2_MMS_2_bit)
#define TIM5_CR2_CCDS_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CR2, TIM_CR2_CCDS_bit)

/*
+-----------------------------------------------------------------------------+
| TIMx_SMCR - Slave mode control register
+-----------------------------------------------------------------------------+
*/

#define TIM_SMCR_ETP_bit					15
#define TIM_SMCR_ECE_bit					14
#define TIM_SMCR_ETPS_bit					12
#define TIM_SMCR_ETPS_0_bit					12
#define TIM_SMCR_ETPS_1_bit					13
#define TIM_SMCR_ETF_bit					8
#define TIM_SMCR_ETF_0_bit					8
#define TIM_SMCR_ETF_1_bit					9
#define TIM_SMCR_ETF_2_bit					10
#define TIM_SMCR_ETF_3_bit					11
#define TIM_SMCR_MSM_bit					7
#define TIM_SMCR_TS_bit						4
#define TIM_SMCR_TS_0_bit					4
#define TIM_SMCR_TS_1_bit					5
#define TIM_SMCR_TS_2_bit					6
#define TIM_SMCR_SMS_bit					0
#define TIM_SMCR_SMS_0_bit					0
#define TIM_SMCR_SMS_1_bit					1
#define TIM_SMCR_SMS_2_bit					2

#define TIM_SMCR_ETPS_DIV1_value			0
#define TIM_SMCR_ETPS_DIV2_value			1
#define TIM_SMCR_ETPS_DIV4_value			2
#define TIM_SMCR_ETPS_DIV8_value			3
#define TIM_SMCR_ETPS_mask					3

#define TIM_SMCR_ETF_DIV1_N1_value			0
#define TIM_SMCR_ETF_DIV1_N2_value			1
#define TIM_SMCR_ETF_DIV1_N4_value			2
#define TIM_SMCR_ETF_DIV1_N8_value			3
#define TIM_SMCR_ETF_DIV2_N6_value			4
#define TIM_SMCR_ETF_DIV2_N8_value			5
#define TIM_SMCR_ETF_DIV4_N6_value			6
#define TIM_SMCR_ETF_DIV4_N8_value			7
#define TIM_SMCR_ETF_DIV8_N6_value			8
#define TIM_SMCR_ETF_DIV8_N8_value			9
#define TIM_SMCR_ETF_DIV16_N5_value			10
#define TIM_SMCR_ETF_DIV16_N6_value			11
#define TIM_SMCR_ETF_DIV16_N8_value			12
#define TIM_SMCR_ETF_DIV32_N5_value			13
#define TIM_SMCR_ETF_DIV32_N6_value			14
#define TIM_SMCR_ETF_DIV32_N8_value			15
#define TIM_SMCR_ETF_mask					15

#define TIM_SMCR_TS_ITR0_value				0
#define TIM_SMCR_TS_ITR1_value				1
#define TIM_SMCR_TS_ITR2_value				2
#define TIM_SMCR_TS_ITR3_value				3
#define TIM_SMCR_TS_TI1F_ED_value			4
#define TIM_SMCR_TS_TI1FP1_value			5
#define TIM_SMCR_TS_TI1FP2_value			6
#define TIM_SMCR_TS_ETRF_value				7
#define TIM_SMCR_TS_mask					7

#define TIM_SMCR_SMS_DSBLD_value			0
#define TIM_SMCR_SMS_ENC1_value				1
#define TIM_SMCR_SMS_ENC2_value				2
#define TIM_SMCR_SMS_ENC3_value				3
#define TIM_SMCR_SMS_RST_value				4
#define TIM_SMCR_SMS_GTD_value				5
#define TIM_SMCR_SMS_TRG_value				6
#define TIM_SMCR_SMS_EXT1_value				7
#define TIM_SMCR_SMS_mask					7

#define TIM_SMCR_ETPS_DIV1					(TIM_SMCR_ETPS_DIV1_value << TIM_SMCR_ETPS_bit)
#define TIM_SMCR_ETPS_DIV2					(TIM_SMCR_ETPS_DIV2_value << TIM_SMCR_ETPS_bit)
#define TIM_SMCR_ETPS_DIV4					(TIM_SMCR_ETPS_DIV4_value << TIM_SMCR_ETPS_bit)
#define TIM_SMCR_ETPS_DIV8					(TIM_SMCR_ETPS_DIV8_value << TIM_SMCR_ETPS_bit)

#define TIM_SMCR_ETF_DIV1_N1				(TIM_SMCR_ETF_DIV1_N1_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV1_N2				(TIM_SMCR_ETF_DIV1_N2_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV1_N4				(TIM_SMCR_ETF_DIV1_N4_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV1_N8				(TIM_SMCR_ETF_DIV1_N8_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV2_N6				(TIM_SMCR_ETF_DIV2_N6_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV2_N8				(TIM_SMCR_ETF_DIV2_N8_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV4_N6				(TIM_SMCR_ETF_DIV4_N6_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV4_N8				(TIM_SMCR_ETF_DIV4_N8_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV8_N6				(TIM_SMCR_ETF_DIV8_N6_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV8_N8				(TIM_SMCR_ETF_DIV8_N8_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV16_N5				(TIM_SMCR_ETF_DIV16_N5_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV16_N6				(TIM_SMCR_ETF_DIV16_N6_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV16_N8				(TIM_SMCR_ETF_DIV16_N8_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV32_N5				(TIM_SMCR_ETF_DIV32_N5_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV32_N6				(TIM_SMCR_ETF_DIV32_N6_value << TIM_SMCR_ETF_bit)
#define TIM_SMCR_ETF_DIV32_N8				(TIM_SMCR_ETF_DIV32_N8_value << TIM_SMCR_ETF_bit)

#define TIM_SMCR_TS_ITR0					(TIM_SMCR_TS_ITR0_value << TIM_SMCR_TS_bit)
#define TIM_SMCR_TS_ITR1					(TIM_SMCR_TS_ITR1_value << TIM_SMCR_TS_bit)
#define TIM_SMCR_TS_ITR2					(TIM_SMCR_TS_ITR2_value << TIM_SMCR_TS_bit)
#define TIM_SMCR_TS_ITR3					(TIM_SMCR_TS_ITR3_value << TIM_SMCR_TS_bit)
#define TIM_SMCR_TS_TI1F_ED					(TIM_SMCR_TS_TI1F_ED_value << TIM_SMCR_TS_bit)
#define TIM_SMCR_TS_TI1FP1					(TIM_SMCR_TS_TI1FP1_value << TIM_SMCR_TS_bit)
#define TIM_SMCR_TS_TI1FP2					(TIM_SMCR_TS_TI1FP2_value << TIM_SMCR_TS_bit)
#define TIM_SMCR_TS_ETRF					(TIM_SMCR_TS_ETRF_value << TIM_SMCR_TS_bit)

#define TIM_SMCR_SMS_DSBLD					(TIM_SMCR_SMS_DSBLD_value << TIM_SMCR_SMS_bit)
#define TIM_SMCR_SMS_ENC1					(TIM_SMCR_SMS_ENC1_value << TIM_SMCR_SMS_bit)
#define TIM_SMCR_SMS_ENC2					(TIM_SMCR_SMS_ENC2_value << TIM_SMCR_SMS_bit)
#define TIM_SMCR_SMS_ENC3					(TIM_SMCR_SMS_ENC3_value << TIM_SMCR_SMS_bit)
#define TIM_SMCR_SMS_RST					(TIM_SMCR_SMS_RST_value << TIM_SMCR_SMS_bit)
#define TIM_SMCR_SMS_GTD					(TIM_SMCR_SMS_GTD_value << TIM_SMCR_SMS_bit)
#define TIM_SMCR_SMS_TRG					(TIM_SMCR_SMS_TRG_value << TIM_SMCR_SMS_bit)
#define TIM_SMCR_SMS_EXT1					(TIM_SMCR_SMS_EXT1_value << TIM_SMCR_SMS_bit)

#define TIM1_SMCR_ETP_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_ETP_bit)
#define TIM1_SMCR_ECE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_ECE_bit)
#define TIM1_SMCR_ETPS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_ETPS_0_bit)
#define TIM1_SMCR_ETPS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_ETPS_1_bit)
#define TIM1_SMCR_ETF_0_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_ETF_0_bit)
#define TIM1_SMCR_ETF_1_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_ETF_1_bit)
#define TIM1_SMCR_ETF_2_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_ETF_2_bit)
#define TIM1_SMCR_ETF_3_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_ETF_3_bit)
#define TIM1_SMCR_MSM_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_MSM_bit)
#define TIM1_SMCR_TS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_TS_0_bit)
#define TIM1_SMCR_TS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_TS_1_bit)
#define TIM1_SMCR_TS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_TS_2_bit)
#define TIM1_SMCR_SMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_SMS_0_bit)
#define TIM1_SMCR_SMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_SMS_1_bit)
#define TIM1_SMCR_SMS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SMCR, TIM_SMCR_SMS_2_bit)

#define TIM2_SMCR_ETP_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_ETP_bit)
#define TIM2_SMCR_ECE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_ECE_bit)
#define TIM2_SMCR_ETPS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_ETPS_0_bit)
#define TIM2_SMCR_ETPS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_ETPS_1_bit)
#define TIM2_SMCR_ETF_0_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_ETF_0_bit)
#define TIM2_SMCR_ETF_1_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_ETF_1_bit)
#define TIM2_SMCR_ETF_2_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_ETF_2_bit)
#define TIM2_SMCR_ETF_3_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_ETF_3_bit)
#define TIM2_SMCR_MSM_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_MSM_bit)
#define TIM2_SMCR_TS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_TS_0_bit)
#define TIM2_SMCR_TS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_TS_1_bit)
#define TIM2_SMCR_TS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_TS_2_bit)
#define TIM2_SMCR_SMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_SMS_0_bit)
#define TIM2_SMCR_SMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_SMS_1_bit)
#define TIM2_SMCR_SMS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SMCR, TIM_SMCR_SMS_2_bit)

#define TIM3_SMCR_ETP_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_ETP_bit)
#define TIM3_SMCR_ECE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_ECE_bit)
#define TIM3_SMCR_ETPS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_ETPS_0_bit)
#define TIM3_SMCR_ETPS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_ETPS_1_bit)
#define TIM3_SMCR_ETF_0_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_ETF_0_bit)
#define TIM3_SMCR_ETF_1_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_ETF_1_bit)
#define TIM3_SMCR_ETF_2_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_ETF_2_bit)
#define TIM3_SMCR_ETF_3_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_ETF_3_bit)
#define TIM3_SMCR_MSM_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_MSM_bit)
#define TIM3_SMCR_TS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_TS_0_bit)
#define TIM3_SMCR_TS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_TS_1_bit)
#define TIM3_SMCR_TS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_TS_2_bit)
#define TIM3_SMCR_SMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_SMS_0_bit)
#define TIM3_SMCR_SMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_SMS_1_bit)
#define TIM3_SMCR_SMS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SMCR, TIM_SMCR_SMS_2_bit)

#define TIM4_SMCR_ETP_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_ETP_bit)
#define TIM4_SMCR_ECE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_ECE_bit)
#define TIM4_SMCR_ETPS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_ETPS_0_bit)
#define TIM4_SMCR_ETPS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_ETPS_1_bit)
#define TIM4_SMCR_ETF_0_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_ETF_0_bit)
#define TIM4_SMCR_ETF_1_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_ETF_1_bit)
#define TIM4_SMCR_ETF_2_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_ETF_2_bit)
#define TIM4_SMCR_ETF_3_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_ETF_3_bit)
#define TIM4_SMCR_MSM_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_MSM_bit)
#define TIM4_SMCR_TS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_TS_0_bit)
#define TIM4_SMCR_TS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_TS_1_bit)
#define TIM4_SMCR_TS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_TS_2_bit)
#define TIM4_SMCR_SMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_SMS_0_bit)
#define TIM4_SMCR_SMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_SMS_1_bit)
#define TIM4_SMCR_SMS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SMCR, TIM_SMCR_SMS_2_bit)

#define TIM5_SMCR_ETP_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_ETP_bit)
#define TIM5_SMCR_ECE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_ECE_bit)
#define TIM5_SMCR_ETPS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_ETPS_0_bit)
#define TIM5_SMCR_ETPS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_ETPS_1_bit)
#define TIM5_SMCR_ETF_0_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_ETF_0_bit)
#define TIM5_SMCR_ETF_1_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_ETF_1_bit)
#define TIM5_SMCR_ETF_2_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_ETF_2_bit)
#define TIM5_SMCR_ETF_3_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_ETF_3_bit)
#define TIM5_SMCR_MSM_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_MSM_bit)
#define TIM5_SMCR_TS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_TS_0_bit)
#define TIM5_SMCR_TS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_TS_1_bit)
#define TIM5_SMCR_TS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_TS_2_bit)
#define TIM5_SMCR_SMS_0_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_SMS_0_bit)
#define TIM5_SMCR_SMS_1_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_SMS_1_bit)
#define TIM5_SMCR_SMS_2_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SMCR, TIM_SMCR_SMS_2_bit)

/*
+-----------------------------------------------------------------------------+
| TIMx_DIER - DMA/Interrupt enable register
+-----------------------------------------------------------------------------+
*/

#define TIM_DIER_TDE_bit					14
#define TIM_DIER_CC4DE_bit					12
#define TIM_DIER_CC3DE_bit					11
#define TIM_DIER_CC2DE_bit					10
#define TIM_DIER_CC1DE_bit					9
#define TIM_DIER_UDE_bit					8
#define TIM_DIER_TIE_bit					6
#define TIM_DIER_CC4IE_bit					4
#define TIM_DIER_CC3IE_bit					3
#define TIM_DIER_CC2IE_bit					2
#define TIM_DIER_CC1IE_bit					1
#define TIM_DIER_UIE_bit					0

// advanced timer specific

#define TIM_DIER_COMDE_bit					13
#define TIM_DIER_BIE_bit					7
#define TIM_DIER_COMIE_bit					5

#define TIM1_DIER_TDE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_TDE_bit)
#define TIM1_DIER_COMDE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER,TIM_DIER_COMDE_bit)
#define TIM1_DIER_CC4DE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_CC4DE_bit)
#define TIM1_DIER_CC3DE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_CC3DE_bit)
#define TIM1_DIER_CC2DE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_CC2DE_bit)
#define TIM1_DIER_CC1DE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_CC1DE_bit)
#define TIM1_DIER_UDE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_UDE_bit)
#define TIM1_DIER_BIE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER,TIM_DIER_BIE_bit)
#define TIM1_DIER_TIE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_TIE_bit)
#define TIM1_DIER_COMIE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER,TIM_DIER_COMIE_bit)
#define TIM1_DIER_CC4IE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_CC4IE_bit)
#define TIM1_DIER_CC3IE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_CC3IE_bit)
#define TIM1_DIER_CC2IE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_CC2IE_bit)
#define TIM1_DIER_CC1IE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_CC1IE_bit)
#define TIM1_DIER_UIE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->DIER, TIM_DIER_UIE_bit)

#define TIM2_DIER_TDE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_TDE_bit)
#define TIM2_DIER_CC4DE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_CC4DE_bit)
#define TIM2_DIER_CC3DE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_CC3DE_bit)
#define TIM2_DIER_CC2DE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_CC2DE_bit)
#define TIM2_DIER_CC1DE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_CC1DE_bit)
#define TIM2_DIER_UDE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_UDE_bit)
#define TIM2_DIER_TIE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_TIE_bit)
#define TIM2_DIER_CC4IE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_CC4IE_bit)
#define TIM2_DIER_CC3IE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_CC3IE_bit)
#define TIM2_DIER_CC2IE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_CC2IE_bit)
#define TIM2_DIER_CC1IE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_CC1IE_bit)
#define TIM2_DIER_UIE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->DIER, TIM_DIER_UIE_bit)

#define TIM3_DIER_TDE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_TDE_bit)
#define TIM3_DIER_CC4DE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_CC4DE_bit)
#define TIM3_DIER_CC3DE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_CC3DE_bit)
#define TIM3_DIER_CC2DE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_CC2DE_bit)
#define TIM3_DIER_CC1DE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_CC1DE_bit)
#define TIM3_DIER_UDE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_UDE_bit)
#define TIM3_DIER_TIE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_TIE_bit)
#define TIM3_DIER_CC4IE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_CC4IE_bit)
#define TIM3_DIER_CC3IE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_CC3IE_bit)
#define TIM3_DIER_CC2IE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_CC2IE_bit)
#define TIM3_DIER_CC1IE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_CC1IE_bit)
#define TIM3_DIER_UIE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->DIER, TIM_DIER_UIE_bit)

#define TIM4_DIER_TDE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_TDE_bit)
#define TIM4_DIER_CC4DE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_CC4DE_bit)
#define TIM4_DIER_CC3DE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_CC3DE_bit)
#define TIM4_DIER_CC2DE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_CC2DE_bit)
#define TIM4_DIER_CC1DE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_CC1DE_bit)
#define TIM4_DIER_UDE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_UDE_bit)
#define TIM4_DIER_TIE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_TIE_bit)
#define TIM4_DIER_CC4IE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_CC4IE_bit)
#define TIM4_DIER_CC3IE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_CC3IE_bit)
#define TIM4_DIER_CC2IE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_CC2IE_bit)
#define TIM4_DIER_CC1IE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_CC1IE_bit)
#define TIM4_DIER_UIE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->DIER, TIM_DIER_UIE_bit)

#define TIM5_DIER_TDE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_TDE_bit)
#define TIM5_DIER_CC4DE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_CC4DE_bit)
#define TIM5_DIER_CC3DE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_CC3DE_bit)
#define TIM5_DIER_CC2DE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_CC2DE_bit)
#define TIM5_DIER_CC1DE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_CC1DE_bit)
#define TIM5_DIER_UDE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_UDE_bit)
#define TIM5_DIER_TIE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_TIE_bit)
#define TIM5_DIER_CC4IE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_CC4IE_bit)
#define TIM5_DIER_CC3IE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_CC3IE_bit)
#define TIM5_DIER_CC2IE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_CC2IE_bit)
#define TIM5_DIER_CC1IE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_CC1IE_bit)
#define TIM5_DIER_UIE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->DIER, TIM_DIER_UIE_bit)

/*
+-----------------------------------------------------------------------------+
| TIMx_SR - Status register
+-----------------------------------------------------------------------------+
*/

#define TIM_SR_CC4OF_bit					12
#define TIM_SR_CC3OF_bit					11
#define TIM_SR_CC2OF_bit					10
#define TIM_SR_CC1OF_bit					9
#define TIM_SR_TIF_bit						6
#define TIM_SR_CC4IF_bit					4
#define TIM_SR_CC3IF_bit					3
#define TIM_SR_CC2IF_bit					2
#define TIM_SR_CC1IF_bit					1
#define TIM_SR_UIF_bit						0

// advanced timer specific

#define TIM_SR_BIF_bit						7
#define TIM_SR_COMIF_bit					5

#define TIM1_SR_CC4OF_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SR, TIM_SR_CC4OF_bit)
#define TIM1_SR_CC3OF_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SR, TIM_SR_CC3OF_bit)
#define TIM1_SR_CC2OF_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SR, TIM_SR_CC2OF_bit)
#define TIM1_SR_CC1OF_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SR, TIM_SR_CC1OF_bit)
#define TIM1_SR_BIF_bb						bitband_t m_BITBAND_PERIPH(&TIM1->SR,TIM_SR_BIF_bit)
#define TIM1_SR_TIF_bb						bitband_t m_BITBAND_PERIPH(&TIM1->SR, TIM_SR_TIF_bit)
#define TIM1_SR_COMIF_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SR,TIM_SR_COMIF_bit)
#define TIM1_SR_CC4IF_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SR, TIM_SR_CC4IF_bit)
#define TIM1_SR_CC3IF_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SR, TIM_SR_CC3IF_bit)
#define TIM1_SR_CC2IF_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SR, TIM_SR_CC2IF_bit)
#define TIM1_SR_CC1IF_bb					bitband_t m_BITBAND_PERIPH(&TIM1->SR, TIM_SR_CC1IF_bit)
#define TIM1_SR_UIF_bb						bitband_t m_BITBAND_PERIPH(&TIM1->SR, TIM_SR_UIF_bit)

#define TIM2_SR_CC4OF_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SR, TIM_SR_CC4OF_bit)
#define TIM2_SR_CC3OF_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SR, TIM_SR_CC3OF_bit)
#define TIM2_SR_CC2OF_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SR, TIM_SR_CC2OF_bit)
#define TIM2_SR_CC1OF_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SR, TIM_SR_CC1OF_bit)
#define TIM2_SR_TIF_bb						bitband_t m_BITBAND_PERIPH(&TIM2->SR, TIM_SR_TIF_bit)
#define TIM2_SR_CC4IF_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SR, TIM_SR_CC4IF_bit)
#define TIM2_SR_CC3IF_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SR, TIM_SR_CC3IF_bit)
#define TIM2_SR_CC2IF_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SR, TIM_SR_CC2IF_bit)
#define TIM2_SR_CC1IF_bb					bitband_t m_BITBAND_PERIPH(&TIM2->SR, TIM_SR_CC1IF_bit)
#define TIM2_SR_UIF_bb						bitband_t m_BITBAND_PERIPH(&TIM2->SR, TIM_SR_UIF_bit)

#define TIM3_SR_CC4OF_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SR, TIM_SR_CC4OF_bit)
#define TIM3_SR_CC3OF_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SR, TIM_SR_CC3OF_bit)
#define TIM3_SR_CC2OF_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SR, TIM_SR_CC2OF_bit)
#define TIM3_SR_CC1OF_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SR, TIM_SR_CC1OF_bit)
#define TIM3_SR_TIF_bb						bitband_t m_BITBAND_PERIPH(&TIM3->SR, TIM_SR_TIF_bit)
#define TIM3_SR_CC4IF_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SR, TIM_SR_CC4IF_bit)
#define TIM3_SR_CC3IF_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SR, TIM_SR_CC3IF_bit)
#define TIM3_SR_CC2IF_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SR, TIM_SR_CC2IF_bit)
#define TIM3_SR_CC1IF_bb					bitband_t m_BITBAND_PERIPH(&TIM3->SR, TIM_SR_CC1IF_bit)
#define TIM3_SR_UIF_bb						bitband_t m_BITBAND_PERIPH(&TIM3->SR, TIM_SR_UIF_bit)

#define TIM4_SR_CC4OF_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SR, TIM_SR_CC4OF_bit)
#define TIM4_SR_CC3OF_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SR, TIM_SR_CC3OF_bit)
#define TIM4_SR_CC2OF_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SR, TIM_SR_CC2OF_bit)
#define TIM4_SR_CC1OF_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SR, TIM_SR_CC1OF_bit)
#define TIM4_SR_TIF_bb						bitband_t m_BITBAND_PERIPH(&TIM4->SR, TIM_SR_TIF_bit)
#define TIM4_SR_CC4IF_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SR, TIM_SR_CC4IF_bit)
#define TIM4_SR_CC3IF_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SR, TIM_SR_CC3IF_bit)
#define TIM4_SR_CC2IF_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SR, TIM_SR_CC2IF_bit)
#define TIM4_SR_CC1IF_bb					bitband_t m_BITBAND_PERIPH(&TIM4->SR, TIM_SR_CC1IF_bit)
#define TIM4_SR_UIF_bb						bitband_t m_BITBAND_PERIPH(&TIM4->SR, TIM_SR_UIF_bit)

#define TIM5_SR_CC4OF_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SR, TIM_SR_CC4OF_bit)
#define TIM5_SR_CC3OF_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SR, TIM_SR_CC3OF_bit)
#define TIM5_SR_CC2OF_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SR, TIM_SR_CC2OF_bit)
#define TIM5_SR_CC1OF_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SR, TIM_SR_CC1OF_bit)
#define TIM5_SR_TIF_bb						bitband_t m_BITBAND_PERIPH(&TIM5->SR, TIM_SR_TIF_bit)
#define TIM5_SR_CC4IF_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SR, TIM_SR_CC4IF_bit)
#define TIM5_SR_CC3IF_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SR, TIM_SR_CC3IF_bit)
#define TIM5_SR_CC2IF_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SR, TIM_SR_CC2IF_bit)
#define TIM5_SR_CC1IF_bb					bitband_t m_BITBAND_PERIPH(&TIM5->SR, TIM_SR_CC1IF_bit)
#define TIM5_SR_UIF_bb						bitband_t m_BITBAND_PERIPH(&TIM5->SR, TIM_SR_UIF_bit)

/*
+-----------------------------------------------------------------------------+
| TIMx_EGR - Event generation register
+-----------------------------------------------------------------------------+
*/

#define TIM_EGR_TG_bit						6
#define TIM_EGR_CC4G_bit					4
#define TIM_EGR_CC3G_bit					3
#define TIM_EGR_CC2G_bit					2
#define TIM_EGR_CC1G_bit					1
#define TIM_EGR_UG_bit						0

// advanced timer specific

#define TIM_EGR_BG_bit						7
#define TIM_EGR_COMG_bit					5

#define TIM1_EGR_BG_bb						bitband_t m_BITBAND_PERIPH(&TIM1->EGR,TIM_EGR_BG_bit)
#define TIM1_EGR_TG_bb						bitband_t m_BITBAND_PERIPH(&TIM1->EGR, TIM_EGR_TG_bit)
#define TIM1_EGR_COMG_bb					bitband_t m_BITBAND_PERIPH(&TIM1->EGR,TIM_EGR_COMG_bit)
#define TIM1_EGR_CC4G_bb					bitband_t m_BITBAND_PERIPH(&TIM1->EGR, TIM_EGR_CC4G_bit)
#define TIM1_EGR_CC3G_bb					bitband_t m_BITBAND_PERIPH(&TIM1->EGR, TIM_EGR_CC3G_bit)
#define TIM1_EGR_CC2G_bb					bitband_t m_BITBAND_PERIPH(&TIM1->EGR, TIM_EGR_CC2G_bit)
#define TIM1_EGR_CC1G_bb					bitband_t m_BITBAND_PERIPH(&TIM1->EGR, TIM_EGR_CC1G_bit)
#define TIM1_EGR_UG_bb						bitband_t m_BITBAND_PERIPH(&TIM1->EGR, TIM_EGR_UG_bit)

#define TIM2_EGR_TG_bb						bitband_t m_BITBAND_PERIPH(&TIM2->EGR, TIM_EGR_TG_bit)
#define TIM2_EGR_CC4G_bb					bitband_t m_BITBAND_PERIPH(&TIM2->EGR, TIM_EGR_CC4G_bit)
#define TIM2_EGR_CC3G_bb					bitband_t m_BITBAND_PERIPH(&TIM2->EGR, TIM_EGR_CC3G_bit)
#define TIM2_EGR_CC2G_bb					bitband_t m_BITBAND_PERIPH(&TIM2->EGR, TIM_EGR_CC2G_bit)
#define TIM2_EGR_CC1G_bb					bitband_t m_BITBAND_PERIPH(&TIM2->EGR, TIM_EGR_CC1G_bit)
#define TIM2_EGR_UG_bb						bitband_t m_BITBAND_PERIPH(&TIM2->EGR, TIM_EGR_UG_bit)

#define TIM3_EGR_TG_bb						bitband_t m_BITBAND_PERIPH(&TIM3->EGR, TIM_EGR_TG_bit)
#define TIM3_EGR_CC4G_bb					bitband_t m_BITBAND_PERIPH(&TIM3->EGR, TIM_EGR_CC4G_bit)
#define TIM3_EGR_CC3G_bb					bitband_t m_BITBAND_PERIPH(&TIM3->EGR, TIM_EGR_CC3G_bit)
#define TIM3_EGR_CC2G_bb					bitband_t m_BITBAND_PERIPH(&TIM3->EGR, TIM_EGR_CC2G_bit)
#define TIM3_EGR_CC1G_bb					bitband_t m_BITBAND_PERIPH(&TIM3->EGR, TIM_EGR_CC1G_bit)
#define TIM3_EGR_UG_bb						bitband_t m_BITBAND_PERIPH(&TIM3->EGR, TIM_EGR_UG_bit)

#define TIM4_EGR_TG_bb						bitband_t m_BITBAND_PERIPH(&TIM4->EGR, TIM_EGR_TG_bit)
#define TIM4_EGR_CC4G_bb					bitband_t m_BITBAND_PERIPH(&TIM4->EGR, TIM_EGR_CC4G_bit)
#define TIM4_EGR_CC3G_bb					bitband_t m_BITBAND_PERIPH(&TIM4->EGR, TIM_EGR_CC3G_bit)
#define TIM4_EGR_CC2G_bb					bitband_t m_BITBAND_PERIPH(&TIM4->EGR, TIM_EGR_CC2G_bit)
#define TIM4_EGR_CC1G_bb					bitband_t m_BITBAND_PERIPH(&TIM4->EGR, TIM_EGR_CC1G_bit)
#define TIM4_EGR_UG_bb						bitband_t m_BITBAND_PERIPH(&TIM4->EGR, TIM_EGR_UG_bit)

#define TIM5_EGR_TG_bb						bitband_t m_BITBAND_PERIPH(&TIM5->EGR, TIM_EGR_TG_bit)
#define TIM5_EGR_CC4G_bb					bitband_t m_BITBAND_PERIPH(&TIM5->EGR, TIM_EGR_CC4G_bit)
#define TIM5_EGR_CC3G_bb					bitband_t m_BITBAND_PERIPH(&TIM5->EGR, TIM_EGR_CC3G_bit)
#define TIM5_EGR_CC2G_bb					bitband_t m_BITBAND_PERIPH(&TIM5->EGR, TIM_EGR_CC2G_bit)
#define TIM5_EGR_CC1G_bb					bitband_t m_BITBAND_PERIPH(&TIM5->EGR, TIM_EGR_CC1G_bit)
#define TIM5_EGR_UG_bb						bitband_t m_BITBAND_PERIPH(&TIM5->EGR, TIM_EGR_UG_bit)

/*
+-----------------------------------------------------------------------------+
| TIMx_CCMR1 - Capture/compare mode register 1
+-----------------------------------------------------------------------------+
*/

#define TIM_CCMR1_OC2CE_bit					15
#define TIM_CCMR1_OC2M_bit					12
#define TIM_CCMR1_OC2M_0_bit				12
#define TIM_CCMR1_OC2M_1_bit				13
#define TIM_CCMR1_OC2M_2_bit				14
#define TIM_CCMR1_IC2F_bit					12
#define TIM_CCMR1_IC2F_0_bit				12
#define TIM_CCMR1_IC2F_1_bit				13
#define TIM_CCMR1_IC2F_2_bit				14
#define TIM_CCMR1_IC2F_3_bit				15
#define TIM_CCMR1_OC2PE_bit					11
#define TIM_CCMR1_OC2FE_bit					10
#define TIM_CCMR1_IC2PSC_bit				10
#define TIM_CCMR1_IC2PSC_0_bit				10
#define TIM_CCMR1_IC2PSC_1_bit				11
#define TIM_CCMR1_CC2S_bit					8
#define TIM_CCMR1_CC2S_0_bit				8
#define TIM_CCMR1_CC2S_1_bit				9
#define TIM_CCMR1_OC1CE_bit					7
#define TIM_CCMR1_OC1M_bit					4
#define TIM_CCMR1_OC1M_0_bit				4
#define TIM_CCMR1_OC1M_1_bit				5
#define TIM_CCMR1_OC1M_2_bit				6
#define TIM_CCMR1_IC1F_bit					4
#define TIM_CCMR1_IC1F_0_bit				4
#define TIM_CCMR1_IC1F_1_bit				5
#define TIM_CCMR1_IC1F_2_bit				6
#define TIM_CCMR1_IC1F_3_bit				7
#define TIM_CCMR1_OC1PE_bit					3
#define TIM_CCMR1_OC1FE_bit					2
#define TIM_CCMR1_IC1PSC_bit				2
#define TIM_CCMR1_IC1PSC_0_bit				2
#define TIM_CCMR1_IC1PSC_1_bit				3
#define TIM_CCMR1_CC1S_bit					0
#define TIM_CCMR1_CC1S_0_bit				0
#define TIM_CCMR1_CC1S_1_bit				1

#define TIM_CCMR1_OCxM_FRZN_value			0
#define TIM_CCMR1_OCxM_ACT_value			1
#define TIM_CCMR1_OCxM_INACT_value			2
#define TIM_CCMR1_OCxM_TGL_value			3
#define TIM_CCMR1_OCxM_FRC_INACT_value		4
#define TIM_CCMR1_OCxM_FRC_ACT_value		5
#define TIM_CCMR1_OCxM_PWM1_value			6
#define TIM_CCMR1_OCxM_PWM2_value			7
#define TIM_CCMR1_OCxM_mask					7

#define TIM_CCMR1_CCxS_OUT_value			0
#define TIM_CCMR1_CCxS_IN1_value			1
#define TIM_CCMR1_CCxS_IN2_value			2
#define TIM_CCMR1_CCxS_IN_TRC_value			3
#define TIM_CCMR1_CCxS_mask					3

#define TIM_CCMR1_ICxF_DIV1_N1_value		0
#define TIM_CCMR1_ICxF_DIV1_N2_value		1
#define TIM_CCMR1_ICxF_DIV1_N4_value		2
#define TIM_CCMR1_ICxF_DIV1_N8_value		3
#define TIM_CCMR1_ICxF_DIV2_N6_value		4
#define TIM_CCMR1_ICxF_DIV2_N8_value		5
#define TIM_CCMR1_ICxF_DIV4_N6_value		6
#define TIM_CCMR1_ICxF_DIV4_N8_value		7
#define TIM_CCMR1_ICxF_DIV8_N6_value		8
#define TIM_CCMR1_ICxF_DIV8_N8_value		9
#define TIM_CCMR1_ICxF_DIV16_N5_value		10
#define TIM_CCMR1_ICxF_DIV16_N6_value		11
#define TIM_CCMR1_ICxF_DIV16_N8_value		12
#define TIM_CCMR1_ICxF_DIV32_N5_value		13
#define TIM_CCMR1_ICxF_DIV32_N6_value		14
#define TIM_CCMR1_ICxF_DIV32_N8_value		15
#define TIM_CCMR1_ICxF_mask					15

#define TIM_CCMR1_ICxPSC_DIV1_value			0
#define TIM_CCMR1_ICxPSC_DIV2_value			1
#define TIM_CCMR1_ICxPSC_DIV4_value			2
#define TIM_CCMR1_ICxPSC_DIV8_value			3
#define TIM_CCMR1_ICxPSC_mask				3

#define TIM_CCMR1_OC2M_FRZN					(TIM_CCMR1_OCxM_FRZN_value << TIM_CCMR1_OC2M_bit)
#define TIM_CCMR1_OC2M_ACT					(TIM_CCMR1_OCxM_ACT_value << TIM_CCMR1_OC2M_bit)
#define TIM_CCMR1_OC2M_INACT				(TIM_CCMR1_OCxM_INACT_value << TIM_CCMR1_OC2M_bit)
#define TIM_CCMR1_OC2M_TGL					(TIM_CCMR1_OCxM_TGL_value << TIM_CCMR1_OC2M_bit)
#define TIM_CCMR1_OC2M_FRC_INACT			(TIM_CCMR1_OCxM_FRC_INACT_value << TIM_CCMR1_OC2M_bit)
#define TIM_CCMR1_OC2M_FRC_ACT				(TIM_CCMR1_OCxM_FRC_ACT_value << TIM_CCMR1_OC2M_bit)
#define TIM_CCMR1_OC2M_PWM1					(TIM_CCMR1_OCxM_PWM1_value << TIM_CCMR1_OC2M_bit)
#define TIM_CCMR1_OC2M_PWM2					(TIM_CCMR1_OCxM_PWM2_value << TIM_CCMR1_OC2M_bit)

#define TIM_CCMR1_OC1M_FRZN					(TIM_CCMR1_OCxM_FRZN_value << TIM_CCMR1_OC1M_bit)
#define TIM_CCMR1_OC1M_ACT					(TIM_CCMR1_OCxM_ACT_value << TIM_CCMR1_OC1M_bit)
#define TIM_CCMR1_OC1M_INACT				(TIM_CCMR1_OCxM_INACT_value << TIM_CCMR1_OC1M_bit)
#define TIM_CCMR1_OC1M_TGL					(TIM_CCMR1_OCxM_TGL_value << TIM_CCMR1_OC1M_bit)
#define TIM_CCMR1_OC1M_FRC_INACT			(TIM_CCMR1_OCxM_FRC_INACT_value << TIM_CCMR1_OC1M_bit)
#define TIM_CCMR1_OC1M_FRC_ACT				(TIM_CCMR1_OCxM_FRC_ACT_value << TIM_CCMR1_OC1M_bit)
#define TIM_CCMR1_OC1M_PWM1					(TIM_CCMR1_OCxM_PWM1_value << TIM_CCMR1_OC1M_bit)
#define TIM_CCMR1_OC1M_PWM2					(TIM_CCMR1_OCxM_PWM2_value << TIM_CCMR1_OC1M_bit)

#define TIM_CCMR1_CC2S_OUT					(TIM_CCMR1_CCxS_OUT_value << TIM_CCMR1_CC2S_bit)
#define TIM_CCMR1_CC2S_IN1					(TIM_CCMR1_CCxS_IN1_value << TIM_CCMR1_CC2S_bit)
#define TIM_CCMR1_CC2S_IN2					(TIM_CCMR1_CCxS_IN2_value << TIM_CCMR1_CC2S_bit)
#define TIM_CCMR1_CC2S_IN_TRC				(TIM_CCMR1_CCxS_IN_TRC_value << TIM_CCMR1_CC2S_bit)

#define TIM_CCMR1_CC1S_OUT					(TIM_CCMR1_CCxS_OUT_value << TIM_CCMR1_CC1S_bit)
#define TIM_CCMR1_CC1S_IN1					(TIM_CCMR1_CCxS_IN1_value << TIM_CCMR1_CC1S_bit)
#define TIM_CCMR1_CC1S_IN2					(TIM_CCMR1_CCxS_IN2_value << TIM_CCMR1_CC1S_bit)
#define TIM_CCMR1_CC1S_IN_TRC				(TIM_CCMR1_CCxS_IN_TRC_value << TIM_CCMR1_CC1S_bit)

#define TIM_CCMR1_IC2F_DIV1_N1				(TIM_CCMR1_ICxF_DIV1_N1_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV1_N2				(TIM_CCMR1_ICxF_DIV1_N2_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV1_N4				(TIM_CCMR1_ICxF_DIV1_N4_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV1_N8				(TIM_CCMR1_ICxF_DIV1_N8_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV2_N6				(TIM_CCMR1_ICxF_DIV2_N6_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV2_N8				(TIM_CCMR1_ICxF_DIV2_N8_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV4_N6				(TIM_CCMR1_ICxF_DIV4_N6_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV4_N8				(TIM_CCMR1_ICxF_DIV4_N8_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV8_N6				(TIM_CCMR1_ICxF_DIV8_N6_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV8_N8				(TIM_CCMR1_ICxF_DIV8_N8_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV16_N5				(TIM_CCMR1_ICxF_DIV16_N5_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV16_N6				(TIM_CCMR1_ICxF_DIV16_N6_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV16_N8				(TIM_CCMR1_ICxF_DIV16_N8_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV32_N5				(TIM_CCMR1_ICxF_DIV32_N5_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV32_N6				(TIM_CCMR1_ICxF_DIV32_N6_value << TIM_CCMR1_IC2F_bit)
#define TIM_CCMR1_IC2F_DIV32_N8				(TIM_CCMR1_ICxF_DIV32_N8_value << TIM_CCMR1_IC2F_bit)

#define TIM_CCMR1_IC1F_DIV1_N1				(TIM_CCMR1_ICxF_DIV1_N1_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV1_N2				(TIM_CCMR1_ICxF_DIV1_N2_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV1_N4				(TIM_CCMR1_ICxF_DIV1_N4_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV1_N8				(TIM_CCMR1_ICxF_DIV1_N8_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV2_N6				(TIM_CCMR1_ICxF_DIV2_N6_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV2_N8				(TIM_CCMR1_ICxF_DIV2_N8_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV4_N6				(TIM_CCMR1_ICxF_DIV4_N6_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV4_N8				(TIM_CCMR1_ICxF_DIV4_N8_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV8_N6				(TIM_CCMR1_ICxF_DIV8_N6_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV8_N8				(TIM_CCMR1_ICxF_DIV8_N8_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV16_N5				(TIM_CCMR1_ICxF_DIV16_N5_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV16_N6				(TIM_CCMR1_ICxF_DIV16_N6_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV16_N8				(TIM_CCMR1_ICxF_DIV16_N8_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV32_N5				(TIM_CCMR1_ICxF_DIV32_N5_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV32_N6				(TIM_CCMR1_ICxF_DIV32_N6_value << TIM_CCMR1_IC1F_bit)
#define TIM_CCMR1_IC1F_DIV32_N8				(TIM_CCMR1_ICxF_DIV32_N8_value << TIM_CCMR1_IC1F_bit)

#define TIM_CCMR1_IC2PSC_DIV1				(TIM_CCMR1_ICxPSC_DIV1_value << TIM_CCMR1_IC2PSC_bit)
#define TIM_CCMR1_IC2PSC_DIV2				(TIM_CCMR1_ICxPSC_DIV2_value << TIM_CCMR1_IC2PSC_bit)
#define TIM_CCMR1_IC2PSC_DIV4				(TIM_CCMR1_ICxPSC_DIV4_value << TIM_CCMR1_IC2PSC_bit)
#define TIM_CCMR1_IC2PSC_DIV8				(TIM_CCMR1_ICxPSC_DIV8_value << TIM_CCMR1_IC2PSC_bit)

#define TIM_CCMR1_IC1PSC_DIV1				(TIM_CCMR1_ICxPSC_DIV1_value << TIM_CCMR1_IC1PSC_bit)
#define TIM_CCMR1_IC1PSC_DIV2				(TIM_CCMR1_ICxPSC_DIV2_value << TIM_CCMR1_IC1PSC_bit)
#define TIM_CCMR1_IC1PSC_DIV4				(TIM_CCMR1_ICxPSC_DIV4_value << TIM_CCMR1_IC1PSC_bit)
#define TIM_CCMR1_IC1PSC_DIV8				(TIM_CCMR1_ICxPSC_DIV8_value << TIM_CCMR1_IC1PSC_bit)

#define TIM1_CCMR1_OC2CE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC2CE_bit)
#define TIM1_CCMR1_OC2M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC2M_0_bit)
#define TIM1_CCMR1_OC2M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC2M_1_bit)
#define TIM1_CCMR1_OC2M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC2M_2_bit)
#define TIM1_CCMR1_IC2F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC2F_0_bit)
#define TIM1_CCMR1_IC2F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC2F_1_bit)
#define TIM1_CCMR1_IC2F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC2F_2_bit)
#define TIM1_CCMR1_IC2F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC2F_3_bit)
#define TIM1_CCMR1_OC2PE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC2PE_bit)
#define TIM1_CCMR1_OC2FE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC2FE_bit)
#define TIM1_CCMR1_IC2PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC2PSC_0_bit)
#define TIM1_CCMR1_IC2PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC2PSC_1_bit)
#define TIM1_CCMR1_CC2S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_CC2S_0_bit)
#define TIM1_CCMR1_CC2S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_CC2S_1_bit)
#define TIM1_CCMR1_OC1CE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC1CE_bit)
#define TIM1_CCMR1_OC1M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC1M_0_bit)
#define TIM1_CCMR1_OC1M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC1M_1_bit)
#define TIM1_CCMR1_OC1M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC1M_2_bit)
#define TIM1_CCMR1_IC1F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC1F_0_bit)
#define TIM1_CCMR1_IC1F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC1F_1_bit)
#define TIM1_CCMR1_IC1F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC1F_2_bit)
#define TIM1_CCMR1_IC1F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC1F_3_bit)
#define TIM1_CCMR1_OC1PE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC1PE_bit)
#define TIM1_CCMR1_OC1FE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_OC1FE_bit)
#define TIM1_CCMR1_IC1PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC1PSC_0_bit)
#define TIM1_CCMR1_IC1PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_IC1PSC_1_bit)
#define TIM1_CCMR1_CC1S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_CC1S_0_bit)
#define TIM1_CCMR1_CC1S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR1, TIM_CCMR1_CC1S_1_bit)

#define TIM2_CCMR1_OC2CE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC2CE_bit)
#define TIM2_CCMR1_OC2M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC2M_0_bit)
#define TIM2_CCMR1_OC2M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC2M_1_bit)
#define TIM2_CCMR1_OC2M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC2M_2_bit)
#define TIM2_CCMR1_IC2F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC2F_0_bit)
#define TIM2_CCMR1_IC2F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC2F_1_bit)
#define TIM2_CCMR1_IC2F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC2F_2_bit)
#define TIM2_CCMR1_IC2F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC2F_3_bit)
#define TIM2_CCMR1_OC2PE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC2PE_bit)
#define TIM2_CCMR1_OC2FE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC2FE_bit)
#define TIM2_CCMR1_IC2PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC2PSC_0_bit)
#define TIM2_CCMR1_IC2PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC2PSC_1_bit)
#define TIM2_CCMR1_CC2S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_CC2S_0_bit)
#define TIM2_CCMR1_CC2S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_CC2S_1_bit)
#define TIM2_CCMR1_OC1CE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC1CE_bit)
#define TIM2_CCMR1_OC1M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC1M_0_bit)
#define TIM2_CCMR1_OC1M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC1M_1_bit)
#define TIM2_CCMR1_OC1M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC1M_2_bit)
#define TIM2_CCMR1_IC1F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC1F_0_bit)
#define TIM2_CCMR1_IC1F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC1F_1_bit)
#define TIM2_CCMR1_IC1F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC1F_2_bit)
#define TIM2_CCMR1_IC1F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC1F_3_bit)
#define TIM2_CCMR1_OC1PE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC1PE_bit)
#define TIM2_CCMR1_OC1FE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_OC1FE_bit)
#define TIM2_CCMR1_IC1PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC1PSC_0_bit)
#define TIM2_CCMR1_IC1PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_IC1PSC_1_bit)
#define TIM2_CCMR1_CC1S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_CC1S_0_bit)
#define TIM2_CCMR1_CC1S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR1, TIM_CCMR1_CC1S_1_bit)

#define TIM3_CCMR1_OC2CE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC2CE_bit)
#define TIM3_CCMR1_OC2M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC2M_0_bit)
#define TIM3_CCMR1_OC2M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC2M_1_bit)
#define TIM3_CCMR1_OC2M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC2M_2_bit)
#define TIM3_CCMR1_IC2F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC2F_0_bit)
#define TIM3_CCMR1_IC2F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC2F_1_bit)
#define TIM3_CCMR1_IC2F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC2F_2_bit)
#define TIM3_CCMR1_IC2F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC2F_3_bit)
#define TIM3_CCMR1_OC2PE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC2PE_bit)
#define TIM3_CCMR1_OC2FE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC2FE_bit)
#define TIM3_CCMR1_IC2PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC2PSC_0_bit)
#define TIM3_CCMR1_IC2PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC2PSC_1_bit)
#define TIM3_CCMR1_CC2S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_CC2S_0_bit)
#define TIM3_CCMR1_CC2S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_CC2S_1_bit)
#define TIM3_CCMR1_OC1CE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC1CE_bit)
#define TIM3_CCMR1_OC1M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC1M_0_bit)
#define TIM3_CCMR1_OC1M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC1M_1_bit)
#define TIM3_CCMR1_OC1M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC1M_2_bit)
#define TIM3_CCMR1_IC1F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC1F_0_bit)
#define TIM3_CCMR1_IC1F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC1F_1_bit)
#define TIM3_CCMR1_IC1F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC1F_2_bit)
#define TIM3_CCMR1_IC1F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC1F_3_bit)
#define TIM3_CCMR1_OC1PE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC1PE_bit)
#define TIM3_CCMR1_OC1FE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_OC1FE_bit)
#define TIM3_CCMR1_IC1PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC1PSC_0_bit)
#define TIM3_CCMR1_IC1PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_IC1PSC_1_bit)
#define TIM3_CCMR1_CC1S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_CC1S_0_bit)
#define TIM3_CCMR1_CC1S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR1, TIM_CCMR1_CC1S_1_bit)

#define TIM4_CCMR1_OC2CE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC2CE_bit)
#define TIM4_CCMR1_OC2M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC2M_0_bit)
#define TIM4_CCMR1_OC2M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC2M_1_bit)
#define TIM4_CCMR1_OC2M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC2M_2_bit)
#define TIM4_CCMR1_IC2F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC2F_0_bit)
#define TIM4_CCMR1_IC2F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC2F_1_bit)
#define TIM4_CCMR1_IC2F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC2F_2_bit)
#define TIM4_CCMR1_IC2F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC2F_3_bit)
#define TIM4_CCMR1_OC2PE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC2PE_bit)
#define TIM4_CCMR1_OC2FE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC2FE_bit)
#define TIM4_CCMR1_IC2PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC2PSC_0_bit)
#define TIM4_CCMR1_IC2PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC2PSC_1_bit)
#define TIM4_CCMR1_CC2S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_CC2S_0_bit)
#define TIM4_CCMR1_CC2S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_CC2S_1_bit)
#define TIM4_CCMR1_OC1CE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC1CE_bit)
#define TIM4_CCMR1_OC1M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC1M_0_bit)
#define TIM4_CCMR1_OC1M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC1M_1_bit)
#define TIM4_CCMR1_OC1M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC1M_2_bit)
#define TIM4_CCMR1_IC1F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC1F_0_bit)
#define TIM4_CCMR1_IC1F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC1F_1_bit)
#define TIM4_CCMR1_IC1F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC1F_2_bit)
#define TIM4_CCMR1_IC1F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC1F_3_bit)
#define TIM4_CCMR1_OC1PE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC1PE_bit)
#define TIM4_CCMR1_OC1FE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_OC1FE_bit)
#define TIM4_CCMR1_IC1PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC1PSC_0_bit)
#define TIM4_CCMR1_IC1PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_IC1PSC_1_bit)
#define TIM4_CCMR1_CC1S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_CC1S_0_bit)
#define TIM4_CCMR1_CC1S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR1, TIM_CCMR1_CC1S_1_bit)

#define TIM5_CCMR1_OC2CE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC2CE_bit)
#define TIM5_CCMR1_OC2M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC2M_0_bit)
#define TIM5_CCMR1_OC2M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC2M_1_bit)
#define TIM5_CCMR1_OC2M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC2M_2_bit)
#define TIM5_CCMR1_IC2F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC2F_0_bit)
#define TIM5_CCMR1_IC2F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC2F_1_bit)
#define TIM5_CCMR1_IC2F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC2F_2_bit)
#define TIM5_CCMR1_IC2F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC2F_3_bit)
#define TIM5_CCMR1_OC2PE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC2PE_bit)
#define TIM5_CCMR1_OC2FE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC2FE_bit)
#define TIM5_CCMR1_IC2PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC2PSC_0_bit)
#define TIM5_CCMR1_IC2PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC2PSC_1_bit)
#define TIM5_CCMR1_CC2S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_CC2S_0_bit)
#define TIM5_CCMR1_CC2S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_CC2S_1_bit)
#define TIM5_CCMR1_OC1CE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC1CE_bit)
#define TIM5_CCMR1_OC1M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC1M_0_bit)
#define TIM5_CCMR1_OC1M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC1M_1_bit)
#define TIM5_CCMR1_OC1M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC1M_2_bit)
#define TIM5_CCMR1_IC1F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC1F_0_bit)
#define TIM5_CCMR1_IC1F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC1F_1_bit)
#define TIM5_CCMR1_IC1F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC1F_2_bit)
#define TIM5_CCMR1_IC1F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC1F_3_bit)
#define TIM5_CCMR1_OC1PE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC1PE_bit)
#define TIM5_CCMR1_OC1FE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_OC1FE_bit)
#define TIM5_CCMR1_IC1PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC1PSC_0_bit)
#define TIM5_CCMR1_IC1PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_IC1PSC_1_bit)
#define TIM5_CCMR1_CC1S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_CC1S_0_bit)
#define TIM5_CCMR1_CC1S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR1, TIM_CCMR1_CC1S_1_bit)

/*
+-----------------------------------------------------------------------------+
| TIMx_CCMR2 - Capture/compare mode register 2
+-----------------------------------------------------------------------------+
*/

#define TIM_CCMR2_OC4CE_bit					15
#define TIM_CCMR2_OC4M_bit					12
#define TIM_CCMR2_OC4M_0_bit				12
#define TIM_CCMR2_OC4M_1_bit				13
#define TIM_CCMR2_OC4M_2_bit				14
#define TIM_CCMR2_IC4F_bit					12
#define TIM_CCMR2_IC4F_0_bit				12
#define TIM_CCMR2_IC4F_1_bit				13
#define TIM_CCMR2_IC4F_2_bit				14
#define TIM_CCMR2_IC4F_3_bit				15
#define TIM_CCMR2_OC4PE_bit					11
#define TIM_CCMR2_OC4FE_bit					10
#define TIM_CCMR2_IC4PSC_bit				10
#define TIM_CCMR2_IC4PSC_0_bit				10
#define TIM_CCMR2_IC4PSC_1_bit				11
#define TIM_CCMR2_CC4S_bit					8
#define TIM_CCMR2_CC4S_0_bit				8
#define TIM_CCMR2_CC4S_1_bit				9
#define TIM_CCMR2_OC3CE_bit					7
#define TIM_CCMR2_OC3M_bit					4
#define TIM_CCMR2_OC3M_0_bit				4
#define TIM_CCMR2_OC3M_1_bit				5
#define TIM_CCMR2_OC3M_2_bit				6
#define TIM_CCMR2_IC3F_bit					4
#define TIM_CCMR2_IC3F_0_bit				4
#define TIM_CCMR2_IC3F_1_bit				5
#define TIM_CCMR2_IC3F_2_bit				6
#define TIM_CCMR2_IC3F_3_bit				7
#define TIM_CCMR2_OC3PE_bit					3
#define TIM_CCMR2_OC3FE_bit					2
#define TIM_CCMR2_IC3PSC_bit				2
#define TIM_CCMR2_IC3PSC_0_bit				2
#define TIM_CCMR2_IC3PSC_1_bit				3
#define TIM_CCMR2_CC3S_bit					0
#define TIM_CCMR2_CC3S_0_bit				0
#define TIM_CCMR2_CC3S_1_bit				1

#define TIM_CCMR2_OCxM_FRZN_value			0
#define TIM_CCMR2_OCxM_ACT_value			1
#define TIM_CCMR2_OCxM_INACT_value			2
#define TIM_CCMR2_OCxM_TGL_value			3
#define TIM_CCMR2_OCxM_FRC_INACT_value		4
#define TIM_CCMR2_OCxM_FRC_ACT_value		5
#define TIM_CCMR2_OCxM_PWM1_value			6
#define TIM_CCMR2_OCxM_PWM2_value			7
#define TIM_CCMR2_OCxM_mask					7

#define TIM_CCMR2_CCxS_OUT_value			0
#define TIM_CCMR2_CCxS_IN1_value			1
#define TIM_CCMR2_CCxS_IN2_value			2
#define TIM_CCMR2_CCxS_IN_TRC_value			3
#define TIM_CCMR2_CCxS_mask					3

#define TIM_CCMR2_ICxF_DIV1_N1_value		0
#define TIM_CCMR2_ICxF_DIV1_N2_value		1
#define TIM_CCMR2_ICxF_DIV1_N4_value		2
#define TIM_CCMR2_ICxF_DIV1_N8_value		3
#define TIM_CCMR2_ICxF_DIV2_N6_value		4
#define TIM_CCMR2_ICxF_DIV2_N8_value		5
#define TIM_CCMR2_ICxF_DIV4_N6_value		6
#define TIM_CCMR2_ICxF_DIV4_N8_value		7
#define TIM_CCMR2_ICxF_DIV8_N6_value		8
#define TIM_CCMR2_ICxF_DIV8_N8_value		9
#define TIM_CCMR2_ICxF_DIV16_N5_value		10
#define TIM_CCMR2_ICxF_DIV16_N6_value		11
#define TIM_CCMR2_ICxF_DIV16_N8_value		12
#define TIM_CCMR2_ICxF_DIV32_N5_value		13
#define TIM_CCMR2_ICxF_DIV32_N6_value		14
#define TIM_CCMR2_ICxF_DIV32_N8_value		15
#define TIM_CCMR2_ICxF_mask					15

#define TIM_CCMR2_ICxPSC_DIV1_value			0
#define TIM_CCMR2_ICxPSC_DIV2_value			1
#define TIM_CCMR2_ICxPSC_DIV4_value			2
#define TIM_CCMR2_ICxPSC_DIV8_value			3
#define TIM_CCMR2_ICxPSC_mask				3

#define TIM_CCMR2_OC4M_FRZN					(TIM_CCMR2_OCxM_FRZN_value << TIM_CCMR2_OC4M_bit)
#define TIM_CCMR2_OC4M_ACT					(TIM_CCMR2_OCxM_ACT_value << TIM_CCMR2_OC4M_bit)
#define TIM_CCMR2_OC4M_INACT				(TIM_CCMR2_OCxM_INACT_value << TIM_CCMR2_OC4M_bit)
#define TIM_CCMR2_OC4M_TGL					(TIM_CCMR2_OCxM_TGL_value << TIM_CCMR2_OC4M_bit)
#define TIM_CCMR2_OC4M_FRC_INACT			(TIM_CCMR2_OCxM_FRC_INACT_value << TIM_CCMR2_OC4M_bit)
#define TIM_CCMR2_OC4M_FRC_ACT				(TIM_CCMR2_OCxM_FRC_ACT_value << TIM_CCMR2_OC4M_bit)
#define TIM_CCMR2_OC4M_PWM1					(TIM_CCMR2_OCxM_PWM1_value << TIM_CCMR2_OC4M_bit)
#define TIM_CCMR2_OC4M_PWM2					(TIM_CCMR2_OCxM_PWM2_value << TIM_CCMR2_OC4M_bit)

#define TIM_CCMR2_OC3M_FRZN					(TIM_CCMR2_OCxM_FRZN_value << TIM_CCMR2_OC3M_bit)
#define TIM_CCMR2_OC3M_ACT					(TIM_CCMR2_OCxM_ACT_value << TIM_CCMR2_OC3M_bit)
#define TIM_CCMR2_OC3M_INACT				(TIM_CCMR2_OCxM_INACT_value << TIM_CCMR2_OC3M_bit)
#define TIM_CCMR2_OC3M_TGL					(TIM_CCMR2_OCxM_TGL_value << TIM_CCMR2_OC3M_bit)
#define TIM_CCMR2_OC3M_FRC_INACT			(TIM_CCMR2_OCxM_FRC_INACT_value << TIM_CCMR2_OC3M_bit)
#define TIM_CCMR2_OC3M_FRC_ACT				(TIM_CCMR2_OCxM_FRC_ACT_value << TIM_CCMR2_OC3M_bit)
#define TIM_CCMR2_OC3M_PWM1					(TIM_CCMR2_OCxM_PWM1_value << TIM_CCMR2_OC3M_bit)
#define TIM_CCMR2_OC3M_PWM2					(TIM_CCMR2_OCxM_PWM2_value << TIM_CCMR2_OC3M_bit)

#define TIM_CCMR2_CC4S_OUT					(TIM_CCMR2_CCxS_OUT_value << TIM_CCMR2_CC4S_bit)
#define TIM_CCMR2_CC4S_IN1					(TIM_CCMR2_CCxS_IN1_value << TIM_CCMR2_CC4S_bit)
#define TIM_CCMR2_CC4S_IN2					(TIM_CCMR2_CCxS_IN2_value << TIM_CCMR2_CC4S_bit)
#define TIM_CCMR2_CC4S_IN_TRC				(TIM_CCMR2_CCxS_IN_TRC_value << TIM_CCMR2_CC4S_bit)

#define TIM_CCMR2_CC3S_OUT					(TIM_CCMR2_CCxS_OUT_value << TIM_CCMR2_CC3S_bit)
#define TIM_CCMR2_CC3S_IN1					(TIM_CCMR2_CCxS_IN1_value << TIM_CCMR2_CC3S_bit)
#define TIM_CCMR2_CC3S_IN2					(TIM_CCMR2_CCxS_IN2_value << TIM_CCMR2_CC3S_bit)
#define TIM_CCMR2_CC3S_IN_TRC				(TIM_CCMR2_CCxS_IN_TRC_value << TIM_CCMR2_CC3S_bit)

#define TIM_CCMR2_IC4F_DIV1_N1				(TIM_CCMR2_ICxF_DIV1_N1_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV1_N2				(TIM_CCMR2_ICxF_DIV1_N2_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV1_N4				(TIM_CCMR2_ICxF_DIV1_N4_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV1_N8				(TIM_CCMR2_ICxF_DIV1_N8_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV2_N6				(TIM_CCMR2_ICxF_DIV2_N6_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV2_N8				(TIM_CCMR2_ICxF_DIV2_N8_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV4_N6				(TIM_CCMR2_ICxF_DIV4_N6_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV4_N8				(TIM_CCMR2_ICxF_DIV4_N8_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV8_N6				(TIM_CCMR2_ICxF_DIV8_N6_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV8_N8				(TIM_CCMR2_ICxF_DIV8_N8_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV16_N5				(TIM_CCMR2_ICxF_DIV16_N5_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV16_N6				(TIM_CCMR2_ICxF_DIV16_N6_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV16_N8				(TIM_CCMR2_ICxF_DIV16_N8_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV32_N5				(TIM_CCMR2_ICxF_DIV32_N5_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV32_N6				(TIM_CCMR2_ICxF_DIV32_N6_value << TIM_CCMR2_IC4F_bit)
#define TIM_CCMR2_IC4F_DIV32_N8				(TIM_CCMR2_ICxF_DIV32_N8_value << TIM_CCMR2_IC4F_bit)

#define TIM_CCMR2_IC3F_DIV1_N1				(TIM_CCMR2_ICxF_DIV1_N1_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV1_N2				(TIM_CCMR2_ICxF_DIV1_N2_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV1_N4				(TIM_CCMR2_ICxF_DIV1_N4_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV1_N8				(TIM_CCMR2_ICxF_DIV1_N8_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV2_N6				(TIM_CCMR2_ICxF_DIV2_N6_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV2_N8				(TIM_CCMR2_ICxF_DIV2_N8_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV4_N6				(TIM_CCMR2_ICxF_DIV4_N6_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV4_N8				(TIM_CCMR2_ICxF_DIV4_N8_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV8_N6				(TIM_CCMR2_ICxF_DIV8_N6_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV8_N8				(TIM_CCMR2_ICxF_DIV8_N8_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV16_N5				(TIM_CCMR2_ICxF_DIV16_N5_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV16_N6				(TIM_CCMR2_ICxF_DIV16_N6_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV16_N8				(TIM_CCMR2_ICxF_DIV16_N8_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV32_N5				(TIM_CCMR2_ICxF_DIV32_N5_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV32_N6				(TIM_CCMR2_ICxF_DIV32_N6_value << TIM_CCMR2_IC3F_bit)
#define TIM_CCMR2_IC3F_DIV32_N8				(TIM_CCMR2_ICxF_DIV32_N8_value << TIM_CCMR2_IC3F_bit)

#define TIM_CCMR2_IC4PSC_DIV1				(TIM_CCMR2_ICxPSC_DIV1_value << TIM_CCMR2_IC4PSC_bit)
#define TIM_CCMR2_IC4PSC_DIV2				(TIM_CCMR2_ICxPSC_DIV2_value << TIM_CCMR2_IC4PSC_bit)
#define TIM_CCMR2_IC4PSC_DIV4				(TIM_CCMR2_ICxPSC_DIV4_value << TIM_CCMR2_IC4PSC_bit)
#define TIM_CCMR2_IC4PSC_DIV8				(TIM_CCMR2_ICxPSC_DIV8_value << TIM_CCMR2_IC4PSC_bit)

#define TIM_CCMR2_IC3PSC_DIV1				(TIM_CCMR2_ICxPSC_DIV1_value << TIM_CCMR2_IC3PSC_bit)
#define TIM_CCMR2_IC3PSC_DIV2				(TIM_CCMR2_ICxPSC_DIV2_value << TIM_CCMR2_IC3PSC_bit)
#define TIM_CCMR2_IC3PSC_DIV4				(TIM_CCMR2_ICxPSC_DIV4_value << TIM_CCMR2_IC3PSC_bit)
#define TIM_CCMR2_IC3PSC_DIV8				(TIM_CCMR2_ICxPSC_DIV8_value << TIM_CCMR2_IC3PSC_bit)

#define TIM1_CCMR2_OC4CE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC4CE_bit)
#define TIM1_CCMR2_OC4M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC4M_0_bit)
#define TIM1_CCMR2_OC4M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC4M_1_bit)
#define TIM1_CCMR2_OC4M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC4M_2_bit)
#define TIM1_CCMR2_IC4F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC4F_0_bit)
#define TIM1_CCMR2_IC4F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC4F_1_bit)
#define TIM1_CCMR2_IC4F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC4F_2_bit)
#define TIM1_CCMR2_IC4F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC4F_3_bit)
#define TIM1_CCMR2_OC4PE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC4PE_bit)
#define TIM1_CCMR2_OC4FE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC4FE_bit)
#define TIM1_CCMR2_IC4PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC4PSC_0_bit)
#define TIM1_CCMR2_IC4PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC4PSC_1_bit)
#define TIM1_CCMR2_CC4S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_CC4S_0_bit)
#define TIM1_CCMR2_CC4S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_CC4S_1_bit)
#define TIM1_CCMR2_OC3CE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC3CE_bit)
#define TIM1_CCMR2_OC3M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC3M_0_bit)
#define TIM1_CCMR2_OC3M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC3M_1_bit)
#define TIM1_CCMR2_OC3M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC3M_2_bit)
#define TIM1_CCMR2_IC3F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC3F_0_bit)
#define TIM1_CCMR2_IC3F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC3F_1_bit)
#define TIM1_CCMR2_IC3F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC3F_2_bit)
#define TIM1_CCMR2_IC3F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC3F_3_bit)
#define TIM1_CCMR2_OC3PE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC3PE_bit)
#define TIM1_CCMR2_OC3FE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_OC3FE_bit)
#define TIM1_CCMR2_IC3PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC3PSC_0_bit)
#define TIM1_CCMR2_IC3PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_IC3PSC_1_bit)
#define TIM1_CCMR2_CC3S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_CC3S_0_bit)
#define TIM1_CCMR2_CC3S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM1->CCMR2, TIM_CCMR2_CC3S_1_bit)

#define TIM2_CCMR2_OC4CE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC4CE_bit)
#define TIM2_CCMR2_OC4M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC4M_0_bit)
#define TIM2_CCMR2_OC4M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC4M_1_bit)
#define TIM2_CCMR2_OC4M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC4M_2_bit)
#define TIM2_CCMR2_IC4F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC4F_0_bit)
#define TIM2_CCMR2_IC4F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC4F_1_bit)
#define TIM2_CCMR2_IC4F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC4F_2_bit)
#define TIM2_CCMR2_IC4F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC4F_3_bit)
#define TIM2_CCMR2_OC4PE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC4PE_bit)
#define TIM2_CCMR2_OC4FE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC4FE_bit)
#define TIM2_CCMR2_IC4PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC4PSC_0_bit)
#define TIM2_CCMR2_IC4PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC4PSC_1_bit)
#define TIM2_CCMR2_CC4S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_CC4S_0_bit)
#define TIM2_CCMR2_CC4S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_CC4S_1_bit)
#define TIM2_CCMR2_OC3CE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC3CE_bit)
#define TIM2_CCMR2_OC3M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC3M_0_bit)
#define TIM2_CCMR2_OC3M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC3M_1_bit)
#define TIM2_CCMR2_OC3M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC3M_2_bit)
#define TIM2_CCMR2_IC3F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC3F_0_bit)
#define TIM2_CCMR2_IC3F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC3F_1_bit)
#define TIM2_CCMR2_IC3F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC3F_2_bit)
#define TIM2_CCMR2_IC3F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC3F_3_bit)
#define TIM2_CCMR2_OC3PE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC3PE_bit)
#define TIM2_CCMR2_OC3FE_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_OC3FE_bit)
#define TIM2_CCMR2_IC3PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC3PSC_0_bit)
#define TIM2_CCMR2_IC3PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_IC3PSC_1_bit)
#define TIM2_CCMR2_CC3S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_CC3S_0_bit)
#define TIM2_CCMR2_CC3S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM2->CCMR2, TIM_CCMR2_CC3S_1_bit)

#define TIM3_CCMR2_OC4CE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC4CE_bit)
#define TIM3_CCMR2_OC4M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC4M_0_bit)
#define TIM3_CCMR2_OC4M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC4M_1_bit)
#define TIM3_CCMR2_OC4M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC4M_2_bit)
#define TIM3_CCMR2_IC4F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC4F_0_bit)
#define TIM3_CCMR2_IC4F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC4F_1_bit)
#define TIM3_CCMR2_IC4F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC4F_2_bit)
#define TIM3_CCMR2_IC4F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC4F_3_bit)
#define TIM3_CCMR2_OC4PE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC4PE_bit)
#define TIM3_CCMR2_OC4FE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC4FE_bit)
#define TIM3_CCMR2_IC4PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC4PSC_0_bit)
#define TIM3_CCMR2_IC4PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC4PSC_1_bit)
#define TIM3_CCMR2_CC4S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_CC4S_0_bit)
#define TIM3_CCMR2_CC4S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_CC4S_1_bit)
#define TIM3_CCMR2_OC3CE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC3CE_bit)
#define TIM3_CCMR2_OC3M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC3M_0_bit)
#define TIM3_CCMR2_OC3M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC3M_1_bit)
#define TIM3_CCMR2_OC3M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC3M_2_bit)
#define TIM3_CCMR2_IC3F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC3F_0_bit)
#define TIM3_CCMR2_IC3F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC3F_1_bit)
#define TIM3_CCMR2_IC3F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC3F_2_bit)
#define TIM3_CCMR2_IC3F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC3F_3_bit)
#define TIM3_CCMR2_OC3PE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC3PE_bit)
#define TIM3_CCMR2_OC3FE_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_OC3FE_bit)
#define TIM3_CCMR2_IC3PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC3PSC_0_bit)
#define TIM3_CCMR2_IC3PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_IC3PSC_1_bit)
#define TIM3_CCMR2_CC3S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_CC3S_0_bit)
#define TIM3_CCMR2_CC3S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM3->CCMR2, TIM_CCMR2_CC3S_1_bit)

#define TIM4_CCMR2_OC4CE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC4CE_bit)
#define TIM4_CCMR2_OC4M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC4M_0_bit)
#define TIM4_CCMR2_OC4M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC4M_1_bit)
#define TIM4_CCMR2_OC4M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC4M_2_bit)
#define TIM4_CCMR2_IC4F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC4F_0_bit)
#define TIM4_CCMR2_IC4F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC4F_1_bit)
#define TIM4_CCMR2_IC4F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC4F_2_bit)
#define TIM4_CCMR2_IC4F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC4F_3_bit)
#define TIM4_CCMR2_OC4PE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC4PE_bit)
#define TIM4_CCMR2_OC4FE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC4FE_bit)
#define TIM4_CCMR2_IC4PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC4PSC_0_bit)
#define TIM4_CCMR2_IC4PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC4PSC_1_bit)
#define TIM4_CCMR2_CC4S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_CC4S_0_bit)
#define TIM4_CCMR2_CC4S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_CC4S_1_bit)
#define TIM4_CCMR2_OC3CE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC3CE_bit)
#define TIM4_CCMR2_OC3M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC3M_0_bit)
#define TIM4_CCMR2_OC3M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC3M_1_bit)
#define TIM4_CCMR2_OC3M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC3M_2_bit)
#define TIM4_CCMR2_IC3F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC3F_0_bit)
#define TIM4_CCMR2_IC3F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC3F_1_bit)
#define TIM4_CCMR2_IC3F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC3F_2_bit)
#define TIM4_CCMR2_IC3F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC3F_3_bit)
#define TIM4_CCMR2_OC3PE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC3PE_bit)
#define TIM4_CCMR2_OC3FE_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_OC3FE_bit)
#define TIM4_CCMR2_IC3PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC3PSC_0_bit)
#define TIM4_CCMR2_IC3PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_IC3PSC_1_bit)
#define TIM4_CCMR2_CC3S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_CC3S_0_bit)
#define TIM4_CCMR2_CC3S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM4->CCMR2, TIM_CCMR2_CC3S_1_bit)

#define TIM5_CCMR2_OC4CE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC4CE_bit)
#define TIM5_CCMR2_OC4M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC4M_0_bit)
#define TIM5_CCMR2_OC4M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC4M_1_bit)
#define TIM5_CCMR2_OC4M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC4M_2_bit)
#define TIM5_CCMR2_IC4F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC4F_0_bit)
#define TIM5_CCMR2_IC4F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC4F_1_bit)
#define TIM5_CCMR2_IC4F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC4F_2_bit)
#define TIM5_CCMR2_IC4F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC4F_3_bit)
#define TIM5_CCMR2_OC4PE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC4PE_bit)
#define TIM5_CCMR2_OC4FE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC4FE_bit)
#define TIM5_CCMR2_IC4PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC4PSC_0_bit)
#define TIM5_CCMR2_IC4PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC4PSC_1_bit)
#define TIM5_CCMR2_CC4S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_CC4S_0_bit)
#define TIM5_CCMR2_CC4S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_CC4S_1_bit)
#define TIM5_CCMR2_OC3CE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC3CE_bit)
#define TIM5_CCMR2_OC3M_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC3M_0_bit)
#define TIM5_CCMR2_OC3M_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC3M_1_bit)
#define TIM5_CCMR2_OC3M_2_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC3M_2_bit)
#define TIM5_CCMR2_IC3F_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC3F_0_bit)
#define TIM5_CCMR2_IC3F_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC3F_1_bit)
#define TIM5_CCMR2_IC3F_2_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC3F_2_bit)
#define TIM5_CCMR2_IC3F_3_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC3F_3_bit)
#define TIM5_CCMR2_OC3PE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC3PE_bit)
#define TIM5_CCMR2_OC3FE_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_OC3FE_bit)
#define TIM5_CCMR2_IC3PSC_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC3PSC_0_bit)
#define TIM5_CCMR2_IC3PSC_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_IC3PSC_1_bit)
#define TIM5_CCMR2_CC3S_0_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_CC3S_0_bit)
#define TIM5_CCMR2_CC3S_1_bb				bitband_t m_BITBAND_PERIPH(&TIM5->CCMR2, TIM_CCMR2_CC3S_1_bit)

/*
+-----------------------------------------------------------------------------+
| TIMx_CCER - Capture/compare enable register
+-----------------------------------------------------------------------------+
*/

#define TIM_CCER_CC4P_bit					13
#define TIM_CCER_CC4E_bit					12
#define TIM_CCER_CC3P_bit					9
#define TIM_CCER_CC3E_bit					8
#define TIM_CCER_CC2P_bit					5
#define TIM_CCER_CC2E_bit					4
#define TIM_CCER_CC1P_bit					1
#define TIM_CCER_CC1E_bit					0

// advanced timer specific

#define TIM_CCER_CC3NP_bit					11
#define TIM_CCER_CC3NE_bit					10
#define TIM_CCER_CC2NP_bit					7
#define TIM_CCER_CC2NE_bit					6
#define TIM_CCER_CC1NP_bit					3
#define TIM_CCER_CC1NE_bit					2

#define TIM1_CCER_CC4P_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER, TIM_CCER_CC4P_bit)
#define TIM1_CCER_CC4E_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER, TIM_CCER_CC4E_bit)
#define TIM1_CCER_CC3NP_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER,TIM_CCER_CC3NP_bit)
#define TIM1_CCER_CC3NE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER,TIM_CCER_CC3NE_bit)
#define TIM1_CCER_CC3P_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER, TIM_CCER_CC3P_bit)
#define TIM1_CCER_CC3E_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER, TIM_CCER_CC3E_bit)
#define TIM1_CCER_CC2NP_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER,TIM_CCER_CC2NP_bit)
#define TIM1_CCER_CC2NE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER,TIM_CCER_CC2NE_bit)
#define TIM1_CCER_CC2P_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER, TIM_CCER_CC2P_bit)
#define TIM1_CCER_CC2E_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER, TIM_CCER_CC2E_bit)
#define TIM1_CCER_CC1NP_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER,TIM_CCER_CC1NP_bit)
#define TIM1_CCER_CC1NE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER,TIM_CCER_CC1NE_bit)
#define TIM1_CCER_CC1P_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER, TIM_CCER_CC1P_bit)
#define TIM1_CCER_CC1E_bb					bitband_t m_BITBAND_PERIPH(&TIM1->CCER, TIM_CCER_CC1E_bit)

#define TIM2_CCER_CC4P_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCER, TIM_CCER_CC4P_bit)
#define TIM2_CCER_CC4E_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCER, TIM_CCER_CC4E_bit)
#define TIM2_CCER_CC3P_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCER, TIM_CCER_CC3P_bit)
#define TIM2_CCER_CC3E_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCER, TIM_CCER_CC3E_bit)
#define TIM2_CCER_CC2P_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCER, TIM_CCER_CC2P_bit)
#define TIM2_CCER_CC2E_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCER, TIM_CCER_CC2E_bit)
#define TIM2_CCER_CC1P_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCER, TIM_CCER_CC1P_bit)
#define TIM2_CCER_CC1E_bb					bitband_t m_BITBAND_PERIPH(&TIM2->CCER, TIM_CCER_CC1E_bit)

#define TIM3_CCER_CC4P_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCER, TIM_CCER_CC4P_bit)
#define TIM3_CCER_CC4E_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCER, TIM_CCER_CC4E_bit)
#define TIM3_CCER_CC3P_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCER, TIM_CCER_CC3P_bit)
#define TIM3_CCER_CC3E_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCER, TIM_CCER_CC3E_bit)
#define TIM3_CCER_CC2P_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCER, TIM_CCER_CC2P_bit)
#define TIM3_CCER_CC2E_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCER, TIM_CCER_CC2E_bit)
#define TIM3_CCER_CC1P_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCER, TIM_CCER_CC1P_bit)
#define TIM3_CCER_CC1E_bb					bitband_t m_BITBAND_PERIPH(&TIM3->CCER, TIM_CCER_CC1E_bit)

#define TIM4_CCER_CC4P_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCER, TIM_CCER_CC4P_bit)
#define TIM4_CCER_CC4E_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCER, TIM_CCER_CC4E_bit)
#define TIM4_CCER_CC3P_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCER, TIM_CCER_CC3P_bit)
#define TIM4_CCER_CC3E_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCER, TIM_CCER_CC3E_bit)
#define TIM4_CCER_CC2P_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCER, TIM_CCER_CC2P_bit)
#define TIM4_CCER_CC2E_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCER, TIM_CCER_CC2E_bit)
#define TIM4_CCER_CC1P_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCER, TIM_CCER_CC1P_bit)
#define TIM4_CCER_CC1E_bb					bitband_t m_BITBAND_PERIPH(&TIM4->CCER, TIM_CCER_CC1E_bit)

#define TIM5_CCER_CC4P_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCER, TIM_CCER_CC4P_bit)
#define TIM5_CCER_CC4E_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCER, TIM_CCER_CC4E_bit)
#define TIM5_CCER_CC3P_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCER, TIM_CCER_CC3P_bit)
#define TIM5_CCER_CC3E_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCER, TIM_CCER_CC3E_bit)
#define TIM5_CCER_CC2P_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCER, TIM_CCER_CC2P_bit)
#define TIM5_CCER_CC2E_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCER, TIM_CCER_CC2E_bit)
#define TIM5_CCER_CC1P_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCER, TIM_CCER_CC1P_bit)
#define TIM5_CCER_CC1E_bb					bitband_t m_BITBAND_PERIPH(&TIM5->CCER, TIM_CCER_CC1E_bit)

/*
+-----------------------------------------------------------------------------+
| TIMx_BDTR - TIM1&TIM8 break and dead-time register
+-----------------------------------------------------------------------------+
*/

#define TIM_BDTR_MOE_bit					15
#define TIM_BDTR_AOE_bit					14
#define TIM_BDTR_BKP_bit					13
#define TIM_BDTR_BKE_bit					12
#define TIM_BDTR_OSSR_bit					11
#define TIM_BDTR_OSSI_bit					10
#define TIM_BDTR_LOCK_bit					8
#define TIM_BDTR_LOCK_0_bit					8
#define TIM_BDTR_LOCK_1_bit					9
#define TIM_BDTR_DTG_bit					0
#define TIM_BDTR_DTG_0_bit					0
#define TIM_BDTR_DTG_1_bit					1
#define TIM_BDTR_DTG_2_bit					2
#define TIM_BDTR_DTG_3_bit					3
#define TIM_BDTR_DTG_4_bit					4
#define TIM_BDTR_DTG_5_bit					5
#define TIM_BDTR_DTG_6_bit					6
#define TIM_BDTR_DTG_7_bit					7

#define TIM_BDTR_LOCK_OFF_value				0
#define TIM_BDTR_LOCK_LEVEL_1_value			1
#define TIM_BDTR_LOCK_LEVEL_2_value			2
#define TIM_BDTR_LOCK_LEVEL_3_value			3
#define TIM_BDTR_LOCK_mask					3

#define TIM_BDTR_LOCK_OFF					(TIM_BDTR_LOCK_OFF_value<<TIM_BDTR_LOCK_bit)
#define TIM_BDTR_LOCK_LEVEL_1				(TIM_BDTR_LOCK_LEVEL_1_value<<TIM_BDTR_LOCK_bit)
#define TIM_BDTR_LOCK_LEVEL_2				(TIM_BDTR_LOCK_LEVEL_2_value<<TIM_BDTR_LOCK_bit)
#define TIM_BDTR_LOCK_LEVEL_3				(TIM_BDTR_LOCK_LEVEL_3_value<<TIM_BDTR_LOCK_bit)

#define TIM1_BDTR_MOE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_MOE_bit)
#define TIM1_BDTR_AOE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_AOE_bit)
#define TIM1_BDTR_BKP_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_BKP_bit)
#define TIM1_BDTR_BKE_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_BKE_bit)
#define TIM1_BDTR_OSSR_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_OSSR_bit)
#define TIM1_BDTR_OSSI_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_OSSI_bit)
#define TIM1_BDTR_LOCK_0_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_LOCK_0_bit)
#define TIM1_BDTR_LOCK_1_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_LOCK_1_bit)
#define TIM1_BDTR_DTG_0_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_DTG_0_bit)
#define TIM1_BDTR_DTG_1_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_DTG_1_bit)
#define TIM1_BDTR_DTG_2_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_DTG_2_bit)
#define TIM1_BDTR_DTG_3_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_DTG_3_bit)
#define TIM1_BDTR_DTG_4_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_DTG_4_bit)
#define TIM1_BDTR_DTG_5_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_DTG_5_bit)
#define TIM1_BDTR_DTG_6_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_DTG_6_bit)
#define TIM1_BDTR_DTG_7_bb					bitband_t m_BITBAND_PERIPH(&TIM1->BDTR,TIM_BDTR_DTG_7_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_TIM_H_ */
