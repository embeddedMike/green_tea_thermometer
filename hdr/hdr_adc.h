/** \file hdr_adc.h
 * \brief Header with definition of bits in ADC control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
* chip: STM32F10x
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
******************************************************************************/

#ifndef HDR_ADC_H_
#define HDR_ADC_H_

#include "hdr/hdr_bitband.h"

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| ADC_SR - ADC status register
+-----------------------------------------------------------------------------+
*/

#define ADC_SR_STRT_bit						4
#define ADC_SR_JSTRT_bit					3
#define ADC_SR_JEOC_bit						2
#define ADC_SR_EOC_bit						1
#define ADC_SR_AWD_bit						0

#define ADC1_SR_STRT_bb						bitband_t m_BITBAND_PERIPH(&ADC1->SR, ADC_SR_STRT_bit)
#define ADC1_SR_JSTRT_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SR, ADC_SR_JSTRT_bit)
#define ADC1_SR_JEOC_bb						bitband_t m_BITBAND_PERIPH(&ADC1->SR, ADC_SR_JEOC_bit)
#define ADC1_SR_EOC_bb						bitband_t m_BITBAND_PERIPH(&ADC1->SR, ADC_SR_EOC_bit)
#define ADC1_SR_AWD_bb						bitband_t m_BITBAND_PERIPH(&ADC1->SR, ADC_SR_AWD_bit)

#define ADC2_SR_STRT_bb						bitband_t m_BITBAND_PERIPH(&ADC2->SR, ADC_SR_STRT_bit)
#define ADC2_SR_JSTRT_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SR, ADC_SR_JSTRT_bit)
#define ADC2_SR_JEOC_bb						bitband_t m_BITBAND_PERIPH(&ADC2->SR, ADC_SR_JEOC_bit)
#define ADC2_SR_EOC_bb						bitband_t m_BITBAND_PERIPH(&ADC2->SR, ADC_SR_EOC_bit)
#define ADC2_SR_AWD_bb						bitband_t m_BITBAND_PERIPH(&ADC2->SR, ADC_SR_AWD_bit)

#define ADC3_SR_STRT_bb						bitband_t m_BITBAND_PERIPH(&ADC3->SR, ADC_SR_STRT_bit)
#define ADC3_SR_JSTRT_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SR, ADC_SR_JSTRT_bit)
#define ADC3_SR_JEOC_bb						bitband_t m_BITBAND_PERIPH(&ADC3->SR, ADC_SR_JEOC_bit)
#define ADC3_SR_EOC_bb						bitband_t m_BITBAND_PERIPH(&ADC3->SR, ADC_SR_EOC_bit)
#define ADC3_SR_AWD_bb						bitband_t m_BITBAND_PERIPH(&ADC3->SR, ADC_SR_AWD_bit)

/*
+-----------------------------------------------------------------------------+
| ADC_CR1 - ADC control register 1
+-----------------------------------------------------------------------------+
*/

#define ADC_CR1_AWDEN_bit					23
#define ADC_CR1_JAWDEN_bit					22
#define ADC_CR1_DUALMOD_bit					16
#define ADC_CR1_DUALMOD_0_bit				16
#define ADC_CR1_DUALMOD_1_bit				17
#define ADC_CR1_DUALMOD_2_bit				18
#define ADC_CR1_DUALMOD_3_bit				19
#define ADC_CR1_DISCNUM_bit					13
#define ADC_CR1_DISCNUM_0_bit				13
#define ADC_CR1_DISCNUM_1_bit				14
#define ADC_CR1_DISCNUM_2_bit				15
#define ADC_CR1_JDISCEN_bit					12
#define ADC_CR1_DISCEN_bit					11
#define ADC_CR1_JAUTO_bit					10
#define ADC_CR1_AWDSGL_bit					9
#define ADC_CR1_SCAN_bit					8
#define ADC_CR1_JEOCIE_bit					7
#define ADC_CR1_AWDIE_bit					6
#define ADC_CR1_EOCIE_bit					5
#define ADC_CR1_AWDCH_bit					0
#define ADC_CR1_AWDCH_0_bit					0
#define ADC_CR1_AWDCH_1_bit					1
#define ADC_CR1_AWDCH_2_bit					2
#define ADC_CR1_AWDCH_3_bit					3
#define ADC_CR1_AWDCH_4_bit					4

#define ADC_CR1_DUALMOD_INDEP_value			0
#define ADC_CR1_DUALMOD_REG_INJ_value		1
#define ADC_CR1_DUALMOD_REG_ALT_value		2
#define ADC_CR1_DUALMOD_INJ_FAST_value		3
#define ADC_CR1_DUALMOD_INJ_SLOW_value		4
#define ADC_CR1_DUALMOD_INJ_value			5
#define ADC_CR1_DUALMOD_REG_value			6
#define ADC_CR1_DUALMOD_FAST_value			7
#define ADC_CR1_DUALMOD_SLOW_value			8
#define ADC_CR1_DUALMOD_ALT_value			9
#define ADC_CR1_DUALMOD_mask				15

#define ADC_CR1_DISCNUM_1CH_value			0
#define ADC_CR1_DISCNUM_2CH_value			1
#define ADC_CR1_DISCNUM_3CH_value			2
#define ADC_CR1_DISCNUM_4CH_value			3
#define ADC_CR1_DISCNUM_5CH_value			4
#define ADC_CR1_DISCNUM_6CH_value			5
#define ADC_CR1_DISCNUM_7CH_value			6
#define ADC_CR1_DISCNUM_8CH_value			7
#define ADC_CR1_DISCNUM_mask				7

#define ADC_CR1_AWDCH_CH0_value				0
#define ADC_CR1_AWDCH_CH1_value				1
#define ADC_CR1_AWDCH_CH2_value				2
#define ADC_CR1_AWDCH_CH3_value				3
#define ADC_CR1_AWDCH_CH4_value				4
#define ADC_CR1_AWDCH_CH5_value				5
#define ADC_CR1_AWDCH_CH6_value				6
#define ADC_CR1_AWDCH_CH7_value				7
#define ADC_CR1_AWDCH_CH8_value				8
#define ADC_CR1_AWDCH_CH9_value				9
#define ADC_CR1_AWDCH_CH10_value			10
#define ADC_CR1_AWDCH_CH11_value			11
#define ADC_CR1_AWDCH_CH12_value			12
#define ADC_CR1_AWDCH_CH13_value			13
#define ADC_CR1_AWDCH_CH14_value			14
#define ADC_CR1_AWDCH_CH15_value			15
#define ADC_CR1_AWDCH_CH16_value			16
#define ADC_CR1_AWDCH_CH17_value			17
#define ADC_CR1_AWDCH_mask					31

#define ADC_CR1_DUALMOD_INDEP				(ADC_CR1_DUALMOD_INDEP_value << ADC_CR1_DUALMOD_bit)
#define ADC_CR1_DUALMOD_REG_INJ				(ADC_CR1_DUALMOD_REG_INJ_value << ADC_CR1_DUALMOD_bit)
#define ADC_CR1_DUALMOD_REG_ALT				(ADC_CR1_DUALMOD_REG_ALT_value << ADC_CR1_DUALMOD_bit)
#define ADC_CR1_DUALMOD_INJ_FAST			(ADC_CR1_DUALMOD_INJ_FAST_value << ADC_CR1_DUALMOD_bit)
#define ADC_CR1_DUALMOD_INJ_SLOW			(ADC_CR1_DUALMOD_INJ_SLOW_value << ADC_CR1_DUALMOD_bit)
#define ADC_CR1_DUALMOD_INJ					(ADC_CR1_DUALMOD_INJ_value << ADC_CR1_DUALMOD_bit)
#define ADC_CR1_DUALMOD_REG					(ADC_CR1_DUALMOD_REG_value << ADC_CR1_DUALMOD_bit)
#define ADC_CR1_DUALMOD_FAST				(ADC_CR1_DUALMOD_FAST_value << ADC_CR1_DUALMOD_bit)
#define ADC_CR1_DUALMOD_SLOW				(ADC_CR1_DUALMOD_SLOW_value << ADC_CR1_DUALMOD_bit)
#define ADC_CR1_DUALMOD_ALT					(ADC_CR1_DUALMOD_ALT_value << ADC_CR1_DUALMOD_bit)

#define ADC_CR1_DISCNUM_1CH					(ADC_CR1_DISCNUM_1CH_value << ADC_CR1_DISCNUM_bit)
#define ADC_CR1_DISCNUM_2CH					(ADC_CR1_DISCNUM_2CH_value << ADC_CR1_DISCNUM_bit)
#define ADC_CR1_DISCNUM_3CH					(ADC_CR1_DISCNUM_3CH_value << ADC_CR1_DISCNUM_bit)
#define ADC_CR1_DISCNUM_4CH					(ADC_CR1_DISCNUM_4CH_value << ADC_CR1_DISCNUM_bit)
#define ADC_CR1_DISCNUM_5CH					(ADC_CR1_DISCNUM_5CH_value << ADC_CR1_DISCNUM_bit)
#define ADC_CR1_DISCNUM_6CH					(ADC_CR1_DISCNUM_6CH_value << ADC_CR1_DISCNUM_bit)
#define ADC_CR1_DISCNUM_7CH					(ADC_CR1_DISCNUM_7CH_value << ADC_CR1_DISCNUM_bit)
#define ADC_CR1_DISCNUM_8CH					(ADC_CR1_DISCNUM_8CH_value << ADC_CR1_DISCNUM_bit)

#define ADC_CR1_AWDCH_CH0					(ADC_CR1_AWDCH_CH0_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH1					(ADC_CR1_AWDCH_CH1_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH2					(ADC_CR1_AWDCH_CH2_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH3					(ADC_CR1_AWDCH_CH3_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH4					(ADC_CR1_AWDCH_CH4_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH5					(ADC_CR1_AWDCH_CH5_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH6					(ADC_CR1_AWDCH_CH6_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH7					(ADC_CR1_AWDCH_CH7_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH8					(ADC_CR1_AWDCH_CH8_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH9					(ADC_CR1_AWDCH_CH9_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH10					(ADC_CR1_AWDCH_CH10_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH11					(ADC_CR1_AWDCH_CH11_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH12					(ADC_CR1_AWDCH_CH12_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH13					(ADC_CR1_AWDCH_CH13_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH14					(ADC_CR1_AWDCH_CH14_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH15					(ADC_CR1_AWDCH_CH15_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH16					(ADC_CR1_AWDCH_CH16_value << ADC_CR1_AWDCH_bit)
#define ADC_CR1_AWDCH_CH17					(ADC_CR1_AWDCH_CH17_value << ADC_CR1_AWDCH_bit)

#define ADC1_CR1_AWDEN_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_AWDEN_bit)
#define ADC1_CR1_JAWDEN_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_JAWDEN_bit)
#define ADC1_CR1_DUALMOD_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_DUALMOD_0_bit)
#define ADC1_CR1_DUALMOD_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_DUALMOD_1_bit)
#define ADC1_CR1_DUALMOD_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_DUALMOD_2_bit)
#define ADC1_CR1_DUALMOD_3_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_DUALMOD_3_bit)
#define ADC1_CR1_DISCNUM_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_DISCNUM_0_bit)
#define ADC1_CR1_DISCNUM_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_DISCNUM_1_bit)
#define ADC1_CR1_DISCNUM_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_DISCNUM_2_bit)
#define ADC1_CR1_JDISCEN_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_JDISCEN_bit)
#define ADC1_CR1_DISCEN_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_DISCEN_bit)
#define ADC1_CR1_JAUTO_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_JAUTO_bit)
#define ADC1_CR1_AWDSGL_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_AWDSGL_bit)
#define ADC1_CR1_SCAN_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_SCAN_bit)
#define ADC1_CR1_JEOCIE_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_JEOCIE_bit)
#define ADC1_CR1_AWDIE_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_AWDIE_bit)
#define ADC1_CR1_EOCIE_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_EOCIE_bit)
#define ADC1_CR1_AWDCH_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_AWDCH_0_bit)
#define ADC1_CR1_AWDCH_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_AWDCH_1_bit)
#define ADC1_CR1_AWDCH_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_AWDCH_2_bit)
#define ADC1_CR1_AWDCH_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_AWDCH_3_bit)
#define ADC1_CR1_AWDCH_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR1, ADC_CR1_AWDCH_4_bit)

#define ADC2_CR1_AWDEN_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_AWDEN_bit)
#define ADC2_CR1_JAWDEN_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_JAWDEN_bit)
#define ADC2_CR1_DUALMOD_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_DUALMOD_0_bit)
#define ADC2_CR1_DUALMOD_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_DUALMOD_1_bit)
#define ADC2_CR1_DUALMOD_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_DUALMOD_2_bit)
#define ADC2_CR1_DUALMOD_3_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_DUALMOD_3_bit)
#define ADC2_CR1_DISCNUM_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_DISCNUM_0_bit)
#define ADC2_CR1_DISCNUM_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_DISCNUM_1_bit)
#define ADC2_CR1_DISCNUM_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_DISCNUM_2_bit)
#define ADC2_CR1_JDISCEN_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_JDISCEN_bit)
#define ADC2_CR1_DISCEN_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_DISCEN_bit)
#define ADC2_CR1_JAUTO_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_JAUTO_bit)
#define ADC2_CR1_AWDSGL_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_AWDSGL_bit)
#define ADC2_CR1_SCAN_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_SCAN_bit)
#define ADC2_CR1_JEOCIE_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_JEOCIE_bit)
#define ADC2_CR1_AWDIE_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_AWDIE_bit)
#define ADC2_CR1_EOCIE_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_EOCIE_bit)
#define ADC2_CR1_AWDCH_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_AWDCH_0_bit)
#define ADC2_CR1_AWDCH_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_AWDCH_1_bit)
#define ADC2_CR1_AWDCH_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_AWDCH_2_bit)
#define ADC2_CR1_AWDCH_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_AWDCH_3_bit)
#define ADC2_CR1_AWDCH_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR1, ADC_CR1_AWDCH_4_bit)

#define ADC3_CR1_AWDEN_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_AWDEN_bit)
#define ADC3_CR1_JAWDEN_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_JAWDEN_bit)
#define ADC3_CR1_DUALMOD_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_DUALMOD_0_bit)
#define ADC3_CR1_DUALMOD_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_DUALMOD_1_bit)
#define ADC3_CR1_DUALMOD_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_DUALMOD_2_bit)
#define ADC3_CR1_DUALMOD_3_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_DUALMOD_3_bit)
#define ADC3_CR1_DISCNUM_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_DISCNUM_0_bit)
#define ADC3_CR1_DISCNUM_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_DISCNUM_1_bit)
#define ADC3_CR1_DISCNUM_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_DISCNUM_2_bit)
#define ADC3_CR1_JDISCEN_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_JDISCEN_bit)
#define ADC3_CR1_DISCEN_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_DISCEN_bit)
#define ADC3_CR1_JAUTO_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_JAUTO_bit)
#define ADC3_CR1_AWDSGL_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_AWDSGL_bit)
#define ADC3_CR1_SCAN_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_SCAN_bit)
#define ADC3_CR1_JEOCIE_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_JEOCIE_bit)
#define ADC3_CR1_AWDIE_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_AWDIE_bit)
#define ADC3_CR1_EOCIE_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_EOCIE_bit)
#define ADC3_CR1_AWDCH_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_AWDCH_0_bit)
#define ADC3_CR1_AWDCH_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_AWDCH_1_bit)
#define ADC3_CR1_AWDCH_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_AWDCH_2_bit)
#define ADC3_CR1_AWDCH_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_AWDCH_3_bit)
#define ADC3_CR1_AWDCH_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR1, ADC_CR1_AWDCH_4_bit)

/*
+-----------------------------------------------------------------------------+
| ADC_CR2 - ADC control register 2
+-----------------------------------------------------------------------------+
*/

#define ADC_CR2_TSVREFE_bit					23
#define ADC_CR2_SWSTART_bit					22
#define ADC_CR2_JSWSTART_bit				21
#define ADC_CR2_EXTTRIG_bit					20
#define ADC_CR2_EXTSEL_bit					17
#define ADC_CR2_EXTSEL_0_bit				17
#define ADC_CR2_EXTSEL_1_bit				18
#define ADC_CR2_EXTSEL_2_bit				19
#define ADC_CR2_JEXTTRIG_bit				15
#define ADC_CR2_JEXTSEL_bit					12
#define ADC_CR2_JEXTSEL_0_bit				12
#define ADC_CR2_JEXTSEL_1_bit				13
#define ADC_CR2_JEXTSEL_2_bit				14
#define ADC_CR2_ALIGN_bit					11
#define ADC_CR2_DMA_bit						8
#define ADC_CR2_RSTCAL_bit					3
#define ADC_CR2_CAL_bit						2
#define ADC_CR2_CONT_bit					1
#define ADC_CR2_ADON_bit					0

#define ADC_CR2_EXTSEL_TIM1_CC1_value			0
#define ADC_CR2_EXTSEL_TIM1_CC2_value			1
#define ADC_CR2_EXTSEL_TIM1_CC3_value			2
#define ADC_CR2_EXTSEL_TIM2_CC2_value			3
#define ADC_CR2_EXTSEL_TIM3_TRGO_value			4
#define ADC_CR2_EXTSEL_TIM4_CC4_value			5
#define ADC_CR2_EXTSEL_EXTI11_TIM8_TRGO_value	6
#define ADC_CR2_EXTSEL_SWSTART_value			7
#define ADC_CR2_EXTSEL_ADC3_TIM3_CC1_value		0
#define ADC_CR2_EXTSEL_ADC3_TIM2_CC3_value		1
#define ADC_CR2_EXTSEL_ADC3_TIM1_CC3_value		2
#define ADC_CR2_EXTSEL_ADC3_TIM8_CC1_value		3
#define ADC_CR2_EXTSEL_ADC3_TIM8_TRGO_value		4
#define ADC_CR2_EXTSEL_ADC3_TIM5_CC1_value		5
#define ADC_CR2_EXTSEL_ADC3_TIM5_CC3_value		6
#define ADC_CR2_EXTSEL_ADC3_SWSTART_value		7
#define ADC_CR2_EXTSEL_mask						7

#define ADC_CR2_JEXTSEL_TIM1_TRGO_value			0
#define ADC_CR2_JEXTSEL_TIM1_CC4_value			1
#define ADC_CR2_JEXTSEL_TIM2_TRGO_value			2
#define ADC_CR2_JEXTSEL_TIM2_CC1_value			3
#define ADC_CR2_JEXTSEL_TIM3_CC4_value			4
#define ADC_CR2_JEXTSEL_TIM4_TRGO_value			5
#define ADC_CR2_JEXTSEL_EXTI15_TIM8_CC4_value	6
#define ADC_CR2_JEXTSEL_JSWSTART_value			7
#define ADC_CR2_JEXTSEL_ADC3_TIM1_TRGO_value	0
#define ADC_CR2_JEXTSEL_ADC3_TIM1_CC4_value		1
#define ADC_CR2_JEXTSEL_ADC3_TIM4_CC3_value		2
#define ADC_CR2_JEXTSEL_ADC3_TIM8_CC2_value		3
#define ADC_CR2_JEXTSEL_ADC3_TIM8_CC4_value		4
#define ADC_CR2_JEXTSEL_ADC3_TIM5_TRGO_value	5
#define ADC_CR2_JEXTSEL_ADC3_TIM5_CC4_value		6
#define ADC_CR2_JEXTSEL_ADC3_JSWSTART_value		7
#define ADC_CR2_JEXTSEL_mask					7

#define ADC_CR2_EXTSEL_TIM1_CC1				(ADC_CR2_EXTSEL_TIM1_CC1_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_TIM1_CC2				(ADC_CR2_EXTSEL_TIM1_CC2_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_TIM1_CC3				(ADC_CR2_EXTSEL_TIM1_CC3_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_TIM2_CC2				(ADC_CR2_EXTSEL_TIM2_CC2_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_TIM3_TRGO			(ADC_CR2_EXTSEL_TIM3_TRGO_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_TIM4_CC4				(ADC_CR2_EXTSEL_TIM4_CC4_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_EXTI11_TIM8_TRGO		(ADC_CR2_EXTSEL_EXTI11_TIM8_TRGO_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_SWSTART				(ADC_CR2_EXTSEL_SWSTART_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_ADC3_TIM3_CC1		(ADC_CR2_EXTSEL_ADC3_TIM3_CC1_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_ADC3_TIM2_CC3		(ADC_CR2_EXTSEL_ADC3_TIM2_CC3_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_ADC3_TIM1_CC3		(ADC_CR2_EXTSEL_ADC3_TIM1_CC3_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_ADC3_TIM8_CC1		(ADC_CR2_EXTSEL_ADC3_TIM8_CC1_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_ADC3_TIM8_TRGO		(ADC_CR2_EXTSEL_ADC3_TIM8_TRGO_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_ADC3_TIM5_CC1		(ADC_CR2_EXTSEL_ADC3_TIM5_CC1_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_ADC3_TIM5_CC3		(ADC_CR2_EXTSEL_ADC3_TIM5_CC3_value << ADC_CR2_EXTSEL_bit)
#define ADC_CR2_EXTSEL_SWSTART				(ADC_CR2_EXTSEL_SWSTART_value << ADC_CR2_EXTSEL_bit)

#define ADC_CR2_JEXTSEL_TIM1_TRGO			(ADC_CR2_JEXTSEL_TIM1_TRGO_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_TIM1_CC4			(ADC_CR2_JEXTSEL_TIM1_CC4_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_TIM2_TRGO			(ADC_CR2_JEXTSEL_TIM2_TRGO_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_TIM2_CC1			(ADC_CR2_JEXTSEL_TIM2_CC1_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_TIM3_CC4			(ADC_CR2_JEXTSEL_TIM3_CC4_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_TIM4_TRGO			(ADC_CR2_JEXTSEL_TIM4_TRGO_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_EXTI15_TIM8_CC4		(ADC_CR2_JEXTSEL_EXTI15_TIM8_CC4_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_JSWSTART			(ADC_CR2_JEXTSEL_JSWSTART_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_ADC3_TIM1_TRGO		(ADC_CR2_JEXTSEL_ADC3_TIM1_TRGO_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_ADC3_TIM1_CC4		(ADC_CR2_JEXTSEL_ADC3_TIM1_CC4_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_ADC3_TIM4_CC3		(ADC_CR2_JEXTSEL_ADC3_TIM4_CC3_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_ADC3_TIM8_CC2		(ADC_CR2_JEXTSEL_ADC3_TIM8_CC2_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_ADC3_TIM8_CC4		(ADC_CR2_JEXTSEL_ADC3_TIM8_CC4_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_ADC3_TIM5_TRGO		(ADC_CR2_JEXTSEL_ADC3_TIM5_TRGO_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_ADC3_TIM5_CC4		(ADC_CR2_JEXTSEL_ADC3_TIM5_CC4_value << ADC_CR2_JEXTSEL_bit)
#define ADC_CR2_JEXTSEL_ADC3_JSWSTART		(ADC_CR2_JEXTSEL_ADC3_JSWSTART_value << ADC_CR2_JEXTSEL_bit)

#define ADC1_CR2_TSVREFE_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_TSVREFE_bit)
#define ADC1_CR2_SWSTART_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_SWSTART_bit)
#define ADC1_CR2_JSWSTART_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_JSWSTART_bit)
#define ADC1_CR2_EXTTRIG_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_EXTTRIG_bit)
#define ADC1_CR2_EXTSEL_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_EXTSEL_0_bit)
#define ADC1_CR2_EXTSEL_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_EXTSEL_1_bit)
#define ADC1_CR2_EXTSEL_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_EXTSEL_2_bit)
#define ADC1_CR2_JEXTTRIG_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_JEXTTRIG_bit)
#define ADC1_CR2_JEXTSEL_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_JEXTSEL_0_bit)
#define ADC1_CR2_JEXTSEL_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_JEXTSEL_1_bit)
#define ADC1_CR2_JEXTSEL_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_JEXTSEL_2_bit)
#define ADC1_CR2_ALIGN_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_ALIGN_bit)
#define ADC1_CR2_DMA_bb						bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_DMA_bit)
#define ADC1_CR2_RSTCAL_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_RSTCAL_bit)
#define ADC1_CR2_CAL_bb						bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_CAL_bit)
#define ADC1_CR2_CONT_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_CONT_bit)
#define ADC1_CR2_ADON_bb					bitband_t m_BITBAND_PERIPH(&ADC1->CR2, ADC_CR2_ADON_bit)

#define ADC2_CR2_SWSTART_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_SWSTART_bit)
#define ADC2_CR2_JSWSTART_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_JSWSTART_bit)
#define ADC2_CR2_EXTTRIG_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_EXTTRIG_bit)
#define ADC2_CR2_EXTSEL_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_EXTSEL_0_bit)
#define ADC2_CR2_EXTSEL_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_EXTSEL_1_bit)
#define ADC2_CR2_EXTSEL_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_EXTSEL_2_bit)
#define ADC2_CR2_JEXTTRIG_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_JEXTTRIG_bit)
#define ADC2_CR2_JEXTSEL_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_JEXTSEL_0_bit)
#define ADC2_CR2_JEXTSEL_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_JEXTSEL_1_bit)
#define ADC2_CR2_JEXTSEL_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_JEXTSEL_2_bit)
#define ADC2_CR2_ALIGN_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_ALIGN_bit)
#define ADC2_CR2_DMA_bb						bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_DMA_bit)
#define ADC2_CR2_RSTCAL_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_RSTCAL_bit)
#define ADC2_CR2_CAL_bb						bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_CAL_bit)
#define ADC2_CR2_CONT_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_CONT_bit)
#define ADC2_CR2_ADON_bb					bitband_t m_BITBAND_PERIPH(&ADC2->CR2, ADC_CR2_ADON_bit)

#define ADC3_CR2_SWSTART_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_SWSTART_bit)
#define ADC3_CR2_JSWSTART_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_JSWSTART_bit)
#define ADC3_CR2_EXTTRIG_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_EXTTRIG_bit)
#define ADC3_CR2_EXTSEL_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_EXTSEL_0_bit)
#define ADC3_CR2_EXTSEL_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_EXTSEL_1_bit)
#define ADC3_CR2_EXTSEL_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_EXTSEL_2_bit)
#define ADC3_CR2_JEXTTRIG_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_JEXTTRIG_bit)
#define ADC3_CR2_JEXTSEL_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_JEXTSEL_0_bit)
#define ADC3_CR2_JEXTSEL_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_JEXTSEL_1_bit)
#define ADC3_CR2_JEXTSEL_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_JEXTSEL_2_bit)
#define ADC3_CR2_ALIGN_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_ALIGN_bit)
#define ADC3_CR2_DMA_bb						bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_DMA_bit)
#define ADC3_CR2_RSTCAL_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_RSTCAL_bit)
#define ADC3_CR2_CAL_bb						bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_CAL_bit)
#define ADC3_CR2_CONT_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_CONT_bit)
#define ADC3_CR2_ADON_bb					bitband_t m_BITBAND_PERIPH(&ADC3->CR2, ADC_CR2_ADON_bit)

/*
+-----------------------------------------------------------------------------+
| ADC_SMPR1 - ADC sample time register 1
+-----------------------------------------------------------------------------+
*/

#define ADC_SMPR1_SMP17_bit					21
#define ADC_SMPR1_SMP17_0_bit				21
#define ADC_SMPR1_SMP17_1_bit				22
#define ADC_SMPR1_SMP17_2_bit				23
#define ADC_SMPR1_SMP16_bit					18
#define ADC_SMPR1_SMP16_0_bit				18
#define ADC_SMPR1_SMP16_1_bit				19
#define ADC_SMPR1_SMP16_2_bit				20
#define ADC_SMPR1_SMP15_bit					15
#define ADC_SMPR1_SMP15_0_bit				15
#define ADC_SMPR1_SMP15_1_bit				16
#define ADC_SMPR1_SMP15_2_bit				17
#define ADC_SMPR1_SMP14_bit					12
#define ADC_SMPR1_SMP14_0_bit				12
#define ADC_SMPR1_SMP14_1_bit				13
#define ADC_SMPR1_SMP14_2_bit				14
#define ADC_SMPR1_SMP13_bit					9
#define ADC_SMPR1_SMP13_0_bit				9
#define ADC_SMPR1_SMP13_1_bit				10
#define ADC_SMPR1_SMP13_2_bit				11
#define ADC_SMPR1_SMP12_bit					6
#define ADC_SMPR1_SMP12_0_bit				6
#define ADC_SMPR1_SMP12_1_bit				7
#define ADC_SMPR1_SMP12_2_bit				8
#define ADC_SMPR1_SMP11_bit					3
#define ADC_SMPR1_SMP11_0_bit				3
#define ADC_SMPR1_SMP11_1_bit				4
#define ADC_SMPR1_SMP11_2_bit				5
#define ADC_SMPR1_SMP10_bit					0
#define ADC_SMPR1_SMP10_0_bit				0
#define ADC_SMPR1_SMP10_1_bit				1
#define ADC_SMPR1_SMP10_2_bit				2

#define ADC_SMPRx_SMPx_mask					7
#define ADC_SMPRx_SMPx_1_5_CYC_value		0
#define ADC_SMPRx_SMPx_7_5_CYC_value		1
#define ADC_SMPRx_SMPx_13_5_CYC_value		2
#define ADC_SMPRx_SMPx_28_5_CYC_value		3
#define ADC_SMPRx_SMPx_41_5_CYC_value		4
#define ADC_SMPRx_SMPx_55_5_CYC_value		5
#define ADC_SMPRx_SMPx_71_5_CYC_value		6
#define ADC_SMPRx_SMPx_239_5_CYC_value		7

#define ADC_SMPR1_SMP17_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR1_SMP17_bit)
#define ADC_SMPR1_SMP17_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR1_SMP17_bit)
#define ADC_SMPR1_SMP17_13_5_CYC			(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR1_SMP17_bit)
#define ADC_SMPR1_SMP17_28_5_CYC			(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR1_SMP17_bit)
#define ADC_SMPR1_SMP17_41_5_CYC			(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR1_SMP17_bit)
#define ADC_SMPR1_SMP17_55_5_CYC			(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR1_SMP17_bit)
#define ADC_SMPR1_SMP17_71_5_CYC			(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR1_SMP17_bit)
#define ADC_SMPR1_SMP17_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR1_SMP17_bit)

#define ADC_SMPR1_SMP16_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR1_SMP16_bit)
#define ADC_SMPR1_SMP16_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR1_SMP16_bit)
#define ADC_SMPR1_SMP16_13_5_CYC			(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR1_SMP16_bit)
#define ADC_SMPR1_SMP16_28_5_CYC			(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR1_SMP16_bit)
#define ADC_SMPR1_SMP16_41_5_CYC			(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR1_SMP16_bit)
#define ADC_SMPR1_SMP16_55_5_CYC			(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR1_SMP16_bit)
#define ADC_SMPR1_SMP16_71_5_CYC			(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR1_SMP16_bit)
#define ADC_SMPR1_SMP16_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR1_SMP16_bit)

#define ADC_SMPR1_SMP15_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR1_SMP15_bit)
#define ADC_SMPR1_SMP15_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR1_SMP15_bit)
#define ADC_SMPR1_SMP15_13_5_CYC			(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR1_SMP15_bit)
#define ADC_SMPR1_SMP15_28_5_CYC			(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR1_SMP15_bit)
#define ADC_SMPR1_SMP15_41_5_CYC			(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR1_SMP15_bit)
#define ADC_SMPR1_SMP15_55_5_CYC			(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR1_SMP15_bit)
#define ADC_SMPR1_SMP15_71_5_CYC			(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR1_SMP15_bit)
#define ADC_SMPR1_SMP15_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR1_SMP15_bit)

#define ADC_SMPR1_SMP14_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR1_SMP14_bit)
#define ADC_SMPR1_SMP14_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR1_SMP14_bit)
#define ADC_SMPR1_SMP14_13_5_CYC			(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR1_SMP14_bit)
#define ADC_SMPR1_SMP14_28_5_CYC			(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR1_SMP14_bit)
#define ADC_SMPR1_SMP14_41_5_CYC			(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR1_SMP14_bit)
#define ADC_SMPR1_SMP14_55_5_CYC			(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR1_SMP14_bit)
#define ADC_SMPR1_SMP14_71_5_CYC			(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR1_SMP14_bit)
#define ADC_SMPR1_SMP14_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR1_SMP14_bit)

#define ADC_SMPR1_SMP13_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR1_SMP13_bit)
#define ADC_SMPR1_SMP13_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR1_SMP13_bit)
#define ADC_SMPR1_SMP13_13_5_CYC			(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR1_SMP13_bit)
#define ADC_SMPR1_SMP13_28_5_CYC			(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR1_SMP13_bit)
#define ADC_SMPR1_SMP13_41_5_CYC			(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR1_SMP13_bit)
#define ADC_SMPR1_SMP13_55_5_CYC			(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR1_SMP13_bit)
#define ADC_SMPR1_SMP13_71_5_CYC			(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR1_SMP13_bit)
#define ADC_SMPR1_SMP13_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR1_SMP13_bit)

#define ADC_SMPR1_SMP12_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR1_SMP12_bit)
#define ADC_SMPR1_SMP12_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR1_SMP12_bit)
#define ADC_SMPR1_SMP12_13_5_CYC			(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR1_SMP12_bit)
#define ADC_SMPR1_SMP12_28_5_CYC			(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR1_SMP12_bit)
#define ADC_SMPR1_SMP12_41_5_CYC			(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR1_SMP12_bit)
#define ADC_SMPR1_SMP12_55_5_CYC			(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR1_SMP12_bit)
#define ADC_SMPR1_SMP12_71_5_CYC			(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR1_SMP12_bit)
#define ADC_SMPR1_SMP12_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR1_SMP12_bit)

#define ADC_SMPR1_SMP11_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR1_SMP11_bit)
#define ADC_SMPR1_SMP11_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR1_SMP11_bit)
#define ADC_SMPR1_SMP11_13_5_CYC			(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR1_SMP11_bit)
#define ADC_SMPR1_SMP11_28_5_CYC			(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR1_SMP11_bit)
#define ADC_SMPR1_SMP11_41_5_CYC			(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR1_SMP11_bit)
#define ADC_SMPR1_SMP11_55_5_CYC			(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR1_SMP11_bit)
#define ADC_SMPR1_SMP11_71_5_CYC			(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR1_SMP11_bit)
#define ADC_SMPR1_SMP11_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR1_SMP11_bit)

#define ADC_SMPR1_SMP10_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR1_SMP10_bit)
#define ADC_SMPR1_SMP10_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR1_SMP10_bit)
#define ADC_SMPR1_SMP10_13_5_CYC			(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR1_SMP10_bit)
#define ADC_SMPR1_SMP10_28_5_CYC			(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR1_SMP10_bit)
#define ADC_SMPR1_SMP10_41_5_CYC			(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR1_SMP10_bit)
#define ADC_SMPR1_SMP10_55_5_CYC			(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR1_SMP10_bit)
#define ADC_SMPR1_SMP10_71_5_CYC			(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR1_SMP10_bit)
#define ADC_SMPR1_SMP10_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR1_SMP10_bit)

#define ADC1_SMPR1_SMP17_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP17_0_bit)
#define ADC1_SMPR1_SMP17_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP17_1_bit)
#define ADC1_SMPR1_SMP17_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP17_2_bit)
#define ADC1_SMPR1_SMP16_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP16_0_bit)
#define ADC1_SMPR1_SMP16_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP16_1_bit)
#define ADC1_SMPR1_SMP16_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP16_2_bit)
#define ADC1_SMPR1_SMP15_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP15_0_bit)
#define ADC1_SMPR1_SMP15_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP15_1_bit)
#define ADC1_SMPR1_SMP15_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP15_2_bit)
#define ADC1_SMPR1_SMP14_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP14_0_bit)
#define ADC1_SMPR1_SMP14_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP14_1_bit)
#define ADC1_SMPR1_SMP14_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP14_2_bit)
#define ADC1_SMPR1_SMP13_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP13_0_bit)
#define ADC1_SMPR1_SMP13_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP13_1_bit)
#define ADC1_SMPR1_SMP13_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP13_2_bit)
#define ADC1_SMPR1_SMP12_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP12_0_bit)
#define ADC1_SMPR1_SMP12_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP12_1_bit)
#define ADC1_SMPR1_SMP12_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP12_2_bit)
#define ADC1_SMPR1_SMP11_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP11_0_bit)
#define ADC1_SMPR1_SMP11_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP11_1_bit)
#define ADC1_SMPR1_SMP11_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP11_2_bit)
#define ADC1_SMPR1_SMP10_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP10_0_bit)
#define ADC1_SMPR1_SMP10_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP10_1_bit)
#define ADC1_SMPR1_SMP10_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR1, ADC_SMPR1_SMP10_2_bit)

#define ADC2_SMPR1_SMP17_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP17_0_bit)
#define ADC2_SMPR1_SMP17_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP17_1_bit)
#define ADC2_SMPR1_SMP17_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP17_2_bit)
#define ADC2_SMPR1_SMP16_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP16_0_bit)
#define ADC2_SMPR1_SMP16_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP16_1_bit)
#define ADC2_SMPR1_SMP16_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP16_2_bit)
#define ADC2_SMPR1_SMP15_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP15_0_bit)
#define ADC2_SMPR1_SMP15_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP15_1_bit)
#define ADC2_SMPR1_SMP15_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP15_2_bit)
#define ADC2_SMPR1_SMP14_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP14_0_bit)
#define ADC2_SMPR1_SMP14_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP14_1_bit)
#define ADC2_SMPR1_SMP14_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP14_2_bit)
#define ADC2_SMPR1_SMP13_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP13_0_bit)
#define ADC2_SMPR1_SMP13_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP13_1_bit)
#define ADC2_SMPR1_SMP13_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP13_2_bit)
#define ADC2_SMPR1_SMP12_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP12_0_bit)
#define ADC2_SMPR1_SMP12_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP12_1_bit)
#define ADC2_SMPR1_SMP12_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP12_2_bit)
#define ADC2_SMPR1_SMP11_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP11_0_bit)
#define ADC2_SMPR1_SMP11_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP11_1_bit)
#define ADC2_SMPR1_SMP11_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP11_2_bit)
#define ADC2_SMPR1_SMP10_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP10_0_bit)
#define ADC2_SMPR1_SMP10_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP10_1_bit)
#define ADC2_SMPR1_SMP10_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR1, ADC_SMPR1_SMP10_2_bit)

#define ADC3_SMPR1_SMP17_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP17_0_bit)
#define ADC3_SMPR1_SMP17_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP17_1_bit)
#define ADC3_SMPR1_SMP17_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP17_2_bit)
#define ADC3_SMPR1_SMP16_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP16_0_bit)
#define ADC3_SMPR1_SMP16_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP16_1_bit)
#define ADC3_SMPR1_SMP16_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP16_2_bit)
#define ADC3_SMPR1_SMP15_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP15_0_bit)
#define ADC3_SMPR1_SMP15_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP15_1_bit)
#define ADC3_SMPR1_SMP15_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP15_2_bit)
#define ADC3_SMPR1_SMP14_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP14_0_bit)
#define ADC3_SMPR1_SMP14_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP14_1_bit)
#define ADC3_SMPR1_SMP14_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP14_2_bit)
#define ADC3_SMPR1_SMP13_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP13_0_bit)
#define ADC3_SMPR1_SMP13_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP13_1_bit)
#define ADC3_SMPR1_SMP13_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP13_2_bit)
#define ADC3_SMPR1_SMP12_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP12_0_bit)
#define ADC3_SMPR1_SMP12_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP12_1_bit)
#define ADC3_SMPR1_SMP12_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP12_2_bit)
#define ADC3_SMPR1_SMP11_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP11_0_bit)
#define ADC3_SMPR1_SMP11_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP11_1_bit)
#define ADC3_SMPR1_SMP11_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP11_2_bit)
#define ADC3_SMPR1_SMP10_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP10_0_bit)
#define ADC3_SMPR1_SMP10_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP10_1_bit)
#define ADC3_SMPR1_SMP10_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR1, ADC_SMPR1_SMP10_2_bit)

/*
+-----------------------------------------------------------------------------+
| ADC_SMPR2 - ADC sample time register 2
+-----------------------------------------------------------------------------+
*/

#define ADC_SMPR2_SMP9_bit					27
#define ADC_SMPR2_SMP9_0_bit				27
#define ADC_SMPR2_SMP9_1_bit				28
#define ADC_SMPR2_SMP9_2_bit				29
#define ADC_SMPR2_SMP8_bit					24
#define ADC_SMPR2_SMP8_0_bit				24
#define ADC_SMPR2_SMP8_1_bit				25
#define ADC_SMPR2_SMP8_2_bit				26
#define ADC_SMPR2_SMP7_bit					21
#define ADC_SMPR2_SMP7_0_bit				21
#define ADC_SMPR2_SMP7_1_bit				22
#define ADC_SMPR2_SMP7_2_bit				23
#define ADC_SMPR2_SMP6_bit					18
#define ADC_SMPR2_SMP6_0_bit				18
#define ADC_SMPR2_SMP6_1_bit				19
#define ADC_SMPR2_SMP6_2_bit				20
#define ADC_SMPR2_SMP5_bit					15
#define ADC_SMPR2_SMP5_0_bit				15
#define ADC_SMPR2_SMP5_1_bit				16
#define ADC_SMPR2_SMP5_2_bit				17
#define ADC_SMPR2_SMP4_bit					12
#define ADC_SMPR2_SMP4_0_bit				12
#define ADC_SMPR2_SMP4_1_bit				13
#define ADC_SMPR2_SMP4_2_bit				14
#define ADC_SMPR2_SMP3_bit					9
#define ADC_SMPR2_SMP3_0_bit				9
#define ADC_SMPR2_SMP3_1_bit				10
#define ADC_SMPR2_SMP3_2_bit				11
#define ADC_SMPR2_SMP2_bit					6
#define ADC_SMPR2_SMP2_0_bit				6
#define ADC_SMPR2_SMP2_1_bit				7
#define ADC_SMPR2_SMP2_2_bit				8
#define ADC_SMPR2_SMP1_bit					3
#define ADC_SMPR2_SMP1_0_bit				3
#define ADC_SMPR2_SMP1_1_bit				4
#define ADC_SMPR2_SMP1_2_bit				5
#define ADC_SMPR2_SMP0_bit					0
#define ADC_SMPR2_SMP0_0_bit				0
#define ADC_SMPR2_SMP0_1_bit				1
#define ADC_SMPR2_SMP0_2_bit				2

#define ADC_SMPR2_SMP9_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR2_SMP9_bit)
#define ADC_SMPR2_SMP9_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR2_SMP9_bit)
#define ADC_SMPR2_SMP9_13_5_CYC				(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR2_SMP9_bit)
#define ADC_SMPR2_SMP9_28_5_CYC				(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR2_SMP9_bit)
#define ADC_SMPR2_SMP9_41_5_CYC				(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR2_SMP9_bit)
#define ADC_SMPR2_SMP9_55_5_CYC				(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR2_SMP9_bit)
#define ADC_SMPR2_SMP9_71_5_CYC				(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR2_SMP9_bit)
#define ADC_SMPR2_SMP9_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR2_SMP9_bit)

#define ADC_SMPR2_SMP8_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR2_SMP8_bit)
#define ADC_SMPR2_SMP8_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR2_SMP8_bit)
#define ADC_SMPR2_SMP8_13_5_CYC				(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR2_SMP8_bit)
#define ADC_SMPR2_SMP8_28_5_CYC				(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR2_SMP8_bit)
#define ADC_SMPR2_SMP8_41_5_CYC				(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR2_SMP8_bit)
#define ADC_SMPR2_SMP8_55_5_CYC				(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR2_SMP8_bit)
#define ADC_SMPR2_SMP8_71_5_CYC				(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR2_SMP8_bit)
#define ADC_SMPR2_SMP8_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR2_SMP8_bit)

#define ADC_SMPR2_SMP7_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR2_SMP7_bit)
#define ADC_SMPR2_SMP7_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR2_SMP7_bit)
#define ADC_SMPR2_SMP7_13_5_CYC				(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR2_SMP7_bit)
#define ADC_SMPR2_SMP7_28_5_CYC				(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR2_SMP7_bit)
#define ADC_SMPR2_SMP7_41_5_CYC				(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR2_SMP7_bit)
#define ADC_SMPR2_SMP7_55_5_CYC				(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR2_SMP7_bit)
#define ADC_SMPR2_SMP7_71_5_CYC				(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR2_SMP7_bit)
#define ADC_SMPR2_SMP7_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR2_SMP7_bit)

#define ADC_SMPR2_SMP6_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR2_SMP6_bit)
#define ADC_SMPR2_SMP6_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR2_SMP6_bit)
#define ADC_SMPR2_SMP6_13_5_CYC				(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR2_SMP6_bit)
#define ADC_SMPR2_SMP6_28_5_CYC				(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR2_SMP6_bit)
#define ADC_SMPR2_SMP6_41_5_CYC				(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR2_SMP6_bit)
#define ADC_SMPR2_SMP6_55_5_CYC				(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR2_SMP6_bit)
#define ADC_SMPR2_SMP6_71_5_CYC				(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR2_SMP6_bit)
#define ADC_SMPR2_SMP6_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR2_SMP6_bit)

#define ADC_SMPR2_SMP5_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR2_SMP5_bit)
#define ADC_SMPR2_SMP5_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR2_SMP5_bit)
#define ADC_SMPR2_SMP5_13_5_CYC				(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR2_SMP5_bit)
#define ADC_SMPR2_SMP5_28_5_CYC				(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR2_SMP5_bit)
#define ADC_SMPR2_SMP5_41_5_CYC				(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR2_SMP5_bit)
#define ADC_SMPR2_SMP5_55_5_CYC				(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR2_SMP5_bit)
#define ADC_SMPR2_SMP5_71_5_CYC				(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR2_SMP5_bit)
#define ADC_SMPR2_SMP5_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR2_SMP5_bit)

#define ADC_SMPR2_SMP4_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR2_SMP4_bit)
#define ADC_SMPR2_SMP4_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR2_SMP4_bit)
#define ADC_SMPR2_SMP4_13_5_CYC				(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR2_SMP4_bit)
#define ADC_SMPR2_SMP4_28_5_CYC				(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR2_SMP4_bit)
#define ADC_SMPR2_SMP4_41_5_CYC				(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR2_SMP4_bit)
#define ADC_SMPR2_SMP4_55_5_CYC				(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR2_SMP4_bit)
#define ADC_SMPR2_SMP4_71_5_CYC				(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR2_SMP4_bit)
#define ADC_SMPR2_SMP4_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR2_SMP4_bit)

#define ADC_SMPR2_SMP3_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR2_SMP3_bit)
#define ADC_SMPR2_SMP3_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR2_SMP3_bit)
#define ADC_SMPR2_SMP3_13_5_CYC				(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR2_SMP3_bit)
#define ADC_SMPR2_SMP3_28_5_CYC				(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR2_SMP3_bit)
#define ADC_SMPR2_SMP3_41_5_CYC				(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR2_SMP3_bit)
#define ADC_SMPR2_SMP3_55_5_CYC				(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR2_SMP3_bit)
#define ADC_SMPR2_SMP3_71_5_CYC				(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR2_SMP3_bit)
#define ADC_SMPR2_SMP3_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR2_SMP3_bit)

#define ADC_SMPR2_SMP2_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR2_SMP2_bit)
#define ADC_SMPR2_SMP2_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR2_SMP2_bit)
#define ADC_SMPR2_SMP2_13_5_CYC				(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR2_SMP2_bit)
#define ADC_SMPR2_SMP2_28_5_CYC				(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR2_SMP2_bit)
#define ADC_SMPR2_SMP2_41_5_CYC				(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR2_SMP2_bit)
#define ADC_SMPR2_SMP2_55_5_CYC				(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR2_SMP2_bit)
#define ADC_SMPR2_SMP2_71_5_CYC				(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR2_SMP2_bit)
#define ADC_SMPR2_SMP2_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR2_SMP2_bit)

#define ADC_SMPR2_SMP1_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR2_SMP1_bit)
#define ADC_SMPR2_SMP1_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR2_SMP1_bit)
#define ADC_SMPR2_SMP1_13_5_CYC				(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR2_SMP1_bit)
#define ADC_SMPR2_SMP1_28_5_CYC				(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR2_SMP1_bit)
#define ADC_SMPR2_SMP1_41_5_CYC				(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR2_SMP1_bit)
#define ADC_SMPR2_SMP1_55_5_CYC				(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR2_SMP1_bit)
#define ADC_SMPR2_SMP1_71_5_CYC				(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR2_SMP1_bit)
#define ADC_SMPR2_SMP1_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR2_SMP1_bit)

#define ADC_SMPR2_SMP0_1_5_CYC				(ADC_SMPRx_SMPx_1_5_CYC_value << ADC_SMPR2_SMP0_bit)
#define ADC_SMPR2_SMP0_7_5_CYC				(ADC_SMPRx_SMPx_7_5_CYC_value << ADC_SMPR2_SMP0_bit)
#define ADC_SMPR2_SMP0_13_5_CYC				(ADC_SMPRx_SMPx_13_5_CYC_value << ADC_SMPR2_SMP0_bit)
#define ADC_SMPR2_SMP0_28_5_CYC				(ADC_SMPRx_SMPx_28_5_CYC_value << ADC_SMPR2_SMP0_bit)
#define ADC_SMPR2_SMP0_41_5_CYC				(ADC_SMPRx_SMPx_41_5_CYC_value << ADC_SMPR2_SMP0_bit)
#define ADC_SMPR2_SMP0_55_5_CYC				(ADC_SMPRx_SMPx_55_5_CYC_value << ADC_SMPR2_SMP0_bit)
#define ADC_SMPR2_SMP0_71_5_CYC				(ADC_SMPRx_SMPx_71_5_CYC_value << ADC_SMPR2_SMP0_bit)
#define ADC_SMPR2_SMP0_239_5_CYC			(ADC_SMPRx_SMPx_239_5_CYC_value << ADC_SMPR2_SMP0_bit)

#define ADC1_SMPR2_SMP9_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP9_0_bit)
#define ADC1_SMPR2_SMP9_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP9_1_bit)
#define ADC1_SMPR2_SMP9_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP9_2_bit)
#define ADC1_SMPR2_SMP8_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP8_0_bit)
#define ADC1_SMPR2_SMP8_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP8_1_bit)
#define ADC1_SMPR2_SMP8_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP8_2_bit)
#define ADC1_SMPR2_SMP7_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP7_0_bit)
#define ADC1_SMPR2_SMP7_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP7_1_bit)
#define ADC1_SMPR2_SMP7_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP7_2_bit)
#define ADC1_SMPR2_SMP6_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP6_0_bit)
#define ADC1_SMPR2_SMP6_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP6_1_bit)
#define ADC1_SMPR2_SMP6_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP6_2_bit)
#define ADC1_SMPR2_SMP5_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP5_0_bit)
#define ADC1_SMPR2_SMP5_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP5_1_bit)
#define ADC1_SMPR2_SMP5_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP5_2_bit)
#define ADC1_SMPR2_SMP4_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP4_0_bit)
#define ADC1_SMPR2_SMP4_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP4_1_bit)
#define ADC1_SMPR2_SMP4_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP4_2_bit)
#define ADC1_SMPR2_SMP3_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP3_0_bit)
#define ADC1_SMPR2_SMP3_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP3_1_bit)
#define ADC1_SMPR2_SMP3_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP3_2_bit)
#define ADC1_SMPR2_SMP2_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP2_0_bit)
#define ADC1_SMPR2_SMP2_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP2_1_bit)
#define ADC1_SMPR2_SMP2_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP2_2_bit)
#define ADC1_SMPR2_SMP1_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP1_0_bit)
#define ADC1_SMPR2_SMP1_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP1_1_bit)
#define ADC1_SMPR2_SMP1_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP1_2_bit)
#define ADC1_SMPR2_SMP0_0_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP0_0_bit)
#define ADC1_SMPR2_SMP0_1_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP0_1_bit)
#define ADC1_SMPR2_SMP0_2_bb				bitband_t m_BITBAND_PERIPH(&ADC1->SMPR2, ADC_SMPR2_SMP0_2_bit)

#define ADC2_SMPR2_SMP9_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP9_0_bit)
#define ADC2_SMPR2_SMP9_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP9_1_bit)
#define ADC2_SMPR2_SMP9_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP9_2_bit)
#define ADC2_SMPR2_SMP8_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP8_0_bit)
#define ADC2_SMPR2_SMP8_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP8_1_bit)
#define ADC2_SMPR2_SMP8_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP8_2_bit)
#define ADC2_SMPR2_SMP7_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP7_0_bit)
#define ADC2_SMPR2_SMP7_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP7_1_bit)
#define ADC2_SMPR2_SMP7_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP7_2_bit)
#define ADC2_SMPR2_SMP6_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP6_0_bit)
#define ADC2_SMPR2_SMP6_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP6_1_bit)
#define ADC2_SMPR2_SMP6_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP6_2_bit)
#define ADC2_SMPR2_SMP5_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP5_0_bit)
#define ADC2_SMPR2_SMP5_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP5_1_bit)
#define ADC2_SMPR2_SMP5_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP5_2_bit)
#define ADC2_SMPR2_SMP4_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP4_0_bit)
#define ADC2_SMPR2_SMP4_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP4_1_bit)
#define ADC2_SMPR2_SMP4_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP4_2_bit)
#define ADC2_SMPR2_SMP3_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP3_0_bit)
#define ADC2_SMPR2_SMP3_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP3_1_bit)
#define ADC2_SMPR2_SMP3_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP3_2_bit)
#define ADC2_SMPR2_SMP2_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP2_0_bit)
#define ADC2_SMPR2_SMP2_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP2_1_bit)
#define ADC2_SMPR2_SMP2_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP2_2_bit)
#define ADC2_SMPR2_SMP1_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP1_0_bit)
#define ADC2_SMPR2_SMP1_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP1_1_bit)
#define ADC2_SMPR2_SMP1_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP1_2_bit)
#define ADC2_SMPR2_SMP0_0_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP0_0_bit)
#define ADC2_SMPR2_SMP0_1_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP0_1_bit)
#define ADC2_SMPR2_SMP0_2_bb				bitband_t m_BITBAND_PERIPH(&ADC2->SMPR2, ADC_SMPR2_SMP0_2_bit)

#define ADC3_SMPR2_SMP9_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP9_0_bit)
#define ADC3_SMPR2_SMP9_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP9_1_bit)
#define ADC3_SMPR2_SMP9_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP9_2_bit)
#define ADC3_SMPR2_SMP8_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP8_0_bit)
#define ADC3_SMPR2_SMP8_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP8_1_bit)
#define ADC3_SMPR2_SMP8_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP8_2_bit)
#define ADC3_SMPR2_SMP7_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP7_0_bit)
#define ADC3_SMPR2_SMP7_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP7_1_bit)
#define ADC3_SMPR2_SMP7_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP7_2_bit)
#define ADC3_SMPR2_SMP6_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP6_0_bit)
#define ADC3_SMPR2_SMP6_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP6_1_bit)
#define ADC3_SMPR2_SMP6_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP6_2_bit)
#define ADC3_SMPR2_SMP5_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP5_0_bit)
#define ADC3_SMPR2_SMP5_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP5_1_bit)
#define ADC3_SMPR2_SMP5_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP5_2_bit)
#define ADC3_SMPR2_SMP4_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP4_0_bit)
#define ADC3_SMPR2_SMP4_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP4_1_bit)
#define ADC3_SMPR2_SMP4_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP4_2_bit)
#define ADC3_SMPR2_SMP3_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP3_0_bit)
#define ADC3_SMPR2_SMP3_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP3_1_bit)
#define ADC3_SMPR2_SMP3_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP3_2_bit)
#define ADC3_SMPR2_SMP2_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP2_0_bit)
#define ADC3_SMPR2_SMP2_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP2_1_bit)
#define ADC3_SMPR2_SMP2_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP2_2_bit)
#define ADC3_SMPR2_SMP1_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP1_0_bit)
#define ADC3_SMPR2_SMP1_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP1_1_bit)
#define ADC3_SMPR2_SMP1_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP1_2_bit)
#define ADC3_SMPR2_SMP0_0_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP0_0_bit)
#define ADC3_SMPR2_SMP0_1_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP0_1_bit)
#define ADC3_SMPR2_SMP0_2_bb				bitband_t m_BITBAND_PERIPH(&ADC3->SMPR2, ADC_SMPR2_SMP0_2_bit)

/*
+-----------------------------------------------------------------------------+
| ADC_SQR1 - ADC regular sequence register 1
+-----------------------------------------------------------------------------+
*/

#define ADC_SQR1_L_bit						20
#define ADC_SQR1_L_0_bit					20
#define ADC_SQR1_L_1_bit					21
#define ADC_SQR1_L_2_bit					22
#define ADC_SQR1_L_3_bit					23
#define ADC_SQR1_SQ16_bit					15
#define ADC_SQR1_SQ16_0_bit					15
#define ADC_SQR1_SQ16_1_bit					16
#define ADC_SQR1_SQ16_2_bit					17
#define ADC_SQR1_SQ16_3_bit					18
#define ADC_SQR1_SQ16_4_bit					19
#define ADC_SQR1_SQ15_bit					10
#define ADC_SQR1_SQ15_0_bit					10
#define ADC_SQR1_SQ15_1_bit					11
#define ADC_SQR1_SQ15_2_bit					12
#define ADC_SQR1_SQ15_3_bit					13
#define ADC_SQR1_SQ15_4_bit					14
#define ADC_SQR1_SQ14_bit					5
#define ADC_SQR1_SQ14_0_bit					5
#define ADC_SQR1_SQ14_1_bit					6
#define ADC_SQR1_SQ14_2_bit					7
#define ADC_SQR1_SQ14_3_bit					8
#define ADC_SQR1_SQ14_4_bit					9
#define ADC_SQR1_SQ13_bit					0
#define ADC_SQR1_SQ13_0_bit					0
#define ADC_SQR1_SQ13_1_bit					1
#define ADC_SQR1_SQ13_2_bit					2
#define ADC_SQR1_SQ13_3_bit					3
#define ADC_SQR1_SQ13_4_bit					4

#define ADC1_SQR1_L_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_L_0_bit)
#define ADC1_SQR1_L_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_L_1_bit)
#define ADC1_SQR1_L_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_L_2_bit)
#define ADC1_SQR1_L_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_L_3_bit)
#define ADC1_SQR1_SQ16_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ16_0_bit)
#define ADC1_SQR1_SQ16_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ16_1_bit)
#define ADC1_SQR1_SQ16_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ16_2_bit)
#define ADC1_SQR1_SQ16_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ16_3_bit)
#define ADC1_SQR1_SQ16_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ16_4_bit)
#define ADC1_SQR1_SQ15_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ15_0_bit)
#define ADC1_SQR1_SQ15_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ15_1_bit)
#define ADC1_SQR1_SQ15_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ15_2_bit)
#define ADC1_SQR1_SQ15_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ15_3_bit)
#define ADC1_SQR1_SQ15_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ15_4_bit)
#define ADC1_SQR1_SQ14_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ14_0_bit)
#define ADC1_SQR1_SQ14_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ14_1_bit)
#define ADC1_SQR1_SQ14_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ14_2_bit)
#define ADC1_SQR1_SQ14_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ14_3_bit)
#define ADC1_SQR1_SQ14_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ14_4_bit)
#define ADC1_SQR1_SQ13_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ13_0_bit)
#define ADC1_SQR1_SQ13_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ13_1_bit)
#define ADC1_SQR1_SQ13_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ13_2_bit)
#define ADC1_SQR1_SQ13_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ13_3_bit)
#define ADC1_SQR1_SQ13_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR1, ADC_SQR1_SQ13_4_bit)

#define ADC2_SQR1_L_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_L_0_bit)
#define ADC2_SQR1_L_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_L_1_bit)
#define ADC2_SQR1_L_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_L_2_bit)
#define ADC2_SQR1_L_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_L_3_bit)
#define ADC2_SQR1_SQ16_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ16_0_bit)
#define ADC2_SQR1_SQ16_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ16_1_bit)
#define ADC2_SQR1_SQ16_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ16_2_bit)
#define ADC2_SQR1_SQ16_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ16_3_bit)
#define ADC2_SQR1_SQ16_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ16_4_bit)
#define ADC2_SQR1_SQ15_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ15_0_bit)
#define ADC2_SQR1_SQ15_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ15_1_bit)
#define ADC2_SQR1_SQ15_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ15_2_bit)
#define ADC2_SQR1_SQ15_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ15_3_bit)
#define ADC2_SQR1_SQ15_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ15_4_bit)
#define ADC2_SQR1_SQ14_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ14_0_bit)
#define ADC2_SQR1_SQ14_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ14_1_bit)
#define ADC2_SQR1_SQ14_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ14_2_bit)
#define ADC2_SQR1_SQ14_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ14_3_bit)
#define ADC2_SQR1_SQ14_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ14_4_bit)
#define ADC2_SQR1_SQ13_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ13_0_bit)
#define ADC2_SQR1_SQ13_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ13_1_bit)
#define ADC2_SQR1_SQ13_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ13_2_bit)
#define ADC2_SQR1_SQ13_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ13_3_bit)
#define ADC2_SQR1_SQ13_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR1, ADC_SQR1_SQ13_4_bit)

#define ADC3_SQR1_L_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_L_0_bit)
#define ADC3_SQR1_L_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_L_1_bit)
#define ADC3_SQR1_L_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_L_2_bit)
#define ADC3_SQR1_L_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_L_3_bit)
#define ADC3_SQR1_SQ16_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ16_0_bit)
#define ADC3_SQR1_SQ16_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ16_1_bit)
#define ADC3_SQR1_SQ16_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ16_2_bit)
#define ADC3_SQR1_SQ16_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ16_3_bit)
#define ADC3_SQR1_SQ16_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ16_4_bit)
#define ADC3_SQR1_SQ15_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ15_0_bit)
#define ADC3_SQR1_SQ15_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ15_1_bit)
#define ADC3_SQR1_SQ15_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ15_2_bit)
#define ADC3_SQR1_SQ15_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ15_3_bit)
#define ADC3_SQR1_SQ15_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ15_4_bit)
#define ADC3_SQR1_SQ14_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ14_0_bit)
#define ADC3_SQR1_SQ14_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ14_1_bit)
#define ADC3_SQR1_SQ14_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ14_2_bit)
#define ADC3_SQR1_SQ14_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ14_3_bit)
#define ADC3_SQR1_SQ14_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ14_4_bit)
#define ADC3_SQR1_SQ13_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ13_0_bit)
#define ADC3_SQR1_SQ13_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ13_1_bit)
#define ADC3_SQR1_SQ13_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ13_2_bit)
#define ADC3_SQR1_SQ13_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ13_3_bit)
#define ADC3_SQR1_SQ13_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR1, ADC_SQR1_SQ13_4_bit)

/*
+-----------------------------------------------------------------------------+
| ADC_SQR2 - ADC regular sequence register 2
+-----------------------------------------------------------------------------+
*/

#define ADC_SQR2_SQ12_bit					25
#define ADC_SQR2_SQ12_0_bit					25
#define ADC_SQR2_SQ12_1_bit					26
#define ADC_SQR2_SQ12_2_bit					27
#define ADC_SQR2_SQ12_3_bit					28
#define ADC_SQR2_SQ12_4_bit					29
#define ADC_SQR2_SQ11_bit					20
#define ADC_SQR2_SQ11_0_bit					20
#define ADC_SQR2_SQ11_1_bit					21
#define ADC_SQR2_SQ11_2_bit					22
#define ADC_SQR2_SQ11_3_bit					23
#define ADC_SQR2_SQ11_4_bit					24
#define ADC_SQR2_SQ10_bit					15
#define ADC_SQR2_SQ10_0_bit					15
#define ADC_SQR2_SQ10_1_bit					16
#define ADC_SQR2_SQ10_2_bit					17
#define ADC_SQR2_SQ10_3_bit					18
#define ADC_SQR2_SQ10_4_bit					19
#define ADC_SQR2_SQ9_bit					10
#define ADC_SQR2_SQ9_0_bit					10
#define ADC_SQR2_SQ9_1_bit					11
#define ADC_SQR2_SQ9_2_bit					12
#define ADC_SQR2_SQ9_3_bit					13
#define ADC_SQR2_SQ9_4_bit					14
#define ADC_SQR2_SQ8_bit					5
#define ADC_SQR2_SQ8_0_bit					5
#define ADC_SQR2_SQ8_1_bit					6
#define ADC_SQR2_SQ8_2_bit					7
#define ADC_SQR2_SQ8_3_bit					8
#define ADC_SQR2_SQ8_4_bit					9
#define ADC_SQR2_SQ7_bit					0
#define ADC_SQR2_SQ7_0_bit					0
#define ADC_SQR2_SQ7_1_bit					1
#define ADC_SQR2_SQ7_2_bit					2
#define ADC_SQR2_SQ7_3_bit					3
#define ADC_SQR2_SQ7_4_bit					4

#define ADC1_SQR2_SQ12_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ12_0_bit)
#define ADC1_SQR2_SQ12_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ12_1_bit)
#define ADC1_SQR2_SQ12_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ12_2_bit)
#define ADC1_SQR2_SQ12_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ12_3_bit)
#define ADC1_SQR2_SQ12_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ12_4_bit)
#define ADC1_SQR2_SQ11_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ11_0_bit)
#define ADC1_SQR2_SQ11_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ11_1_bit)
#define ADC1_SQR2_SQ11_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ11_2_bit)
#define ADC1_SQR2_SQ11_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ11_3_bit)
#define ADC1_SQR2_SQ11_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ11_4_bit)
#define ADC1_SQR2_SQ10_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ10_0_bit)
#define ADC1_SQR2_SQ10_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ10_1_bit)
#define ADC1_SQR2_SQ10_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ10_2_bit)
#define ADC1_SQR2_SQ10_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ10_3_bit)
#define ADC1_SQR2_SQ10_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ10_4_bit)
#define ADC1_SQR2_SQ9_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ9_0_bit)
#define ADC1_SQR2_SQ9_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ9_1_bit)
#define ADC1_SQR2_SQ9_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ9_2_bit)
#define ADC1_SQR2_SQ9_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ9_3_bit)
#define ADC1_SQR2_SQ9_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ9_4_bit)
#define ADC1_SQR2_SQ8_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ8_0_bit)
#define ADC1_SQR2_SQ8_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ8_1_bit)
#define ADC1_SQR2_SQ8_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ8_2_bit)
#define ADC1_SQR2_SQ8_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ8_3_bit)
#define ADC1_SQR2_SQ8_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ8_4_bit)
#define ADC1_SQR2_SQ7_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ7_0_bit)
#define ADC1_SQR2_SQ7_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ7_1_bit)
#define ADC1_SQR2_SQ7_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ7_2_bit)
#define ADC1_SQR2_SQ7_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ7_3_bit)
#define ADC1_SQR2_SQ7_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR2, ADC_SQR2_SQ7_4_bit)

#define ADC2_SQR2_SQ12_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ12_0_bit)
#define ADC2_SQR2_SQ12_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ12_1_bit)
#define ADC2_SQR2_SQ12_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ12_2_bit)
#define ADC2_SQR2_SQ12_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ12_3_bit)
#define ADC2_SQR2_SQ12_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ12_4_bit)
#define ADC2_SQR2_SQ11_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ11_0_bit)
#define ADC2_SQR2_SQ11_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ11_1_bit)
#define ADC2_SQR2_SQ11_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ11_2_bit)
#define ADC2_SQR2_SQ11_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ11_3_bit)
#define ADC2_SQR2_SQ11_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ11_4_bit)
#define ADC2_SQR2_SQ10_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ10_0_bit)
#define ADC2_SQR2_SQ10_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ10_1_bit)
#define ADC2_SQR2_SQ10_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ10_2_bit)
#define ADC2_SQR2_SQ10_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ10_3_bit)
#define ADC2_SQR2_SQ10_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ10_4_bit)
#define ADC2_SQR2_SQ9_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ9_0_bit)
#define ADC2_SQR2_SQ9_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ9_1_bit)
#define ADC2_SQR2_SQ9_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ9_2_bit)
#define ADC2_SQR2_SQ9_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ9_3_bit)
#define ADC2_SQR2_SQ9_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ9_4_bit)
#define ADC2_SQR2_SQ8_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ8_0_bit)
#define ADC2_SQR2_SQ8_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ8_1_bit)
#define ADC2_SQR2_SQ8_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ8_2_bit)
#define ADC2_SQR2_SQ8_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ8_3_bit)
#define ADC2_SQR2_SQ8_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ8_4_bit)
#define ADC2_SQR2_SQ7_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ7_0_bit)
#define ADC2_SQR2_SQ7_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ7_1_bit)
#define ADC2_SQR2_SQ7_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ7_2_bit)
#define ADC2_SQR2_SQ7_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ7_3_bit)
#define ADC2_SQR2_SQ7_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR2, ADC_SQR2_SQ7_4_bit)

#define ADC3_SQR2_SQ12_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ12_0_bit)
#define ADC3_SQR2_SQ12_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ12_1_bit)
#define ADC3_SQR2_SQ12_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ12_2_bit)
#define ADC3_SQR2_SQ12_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ12_3_bit)
#define ADC3_SQR2_SQ12_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ12_4_bit)
#define ADC3_SQR2_SQ11_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ11_0_bit)
#define ADC3_SQR2_SQ11_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ11_1_bit)
#define ADC3_SQR2_SQ11_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ11_2_bit)
#define ADC3_SQR2_SQ11_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ11_3_bit)
#define ADC3_SQR2_SQ11_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ11_4_bit)
#define ADC3_SQR2_SQ10_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ10_0_bit)
#define ADC3_SQR2_SQ10_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ10_1_bit)
#define ADC3_SQR2_SQ10_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ10_2_bit)
#define ADC3_SQR2_SQ10_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ10_3_bit)
#define ADC3_SQR2_SQ10_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ10_4_bit)
#define ADC3_SQR2_SQ9_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ9_0_bit)
#define ADC3_SQR2_SQ9_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ9_1_bit)
#define ADC3_SQR2_SQ9_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ9_2_bit)
#define ADC3_SQR2_SQ9_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ9_3_bit)
#define ADC3_SQR2_SQ9_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ9_4_bit)
#define ADC3_SQR2_SQ8_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ8_0_bit)
#define ADC3_SQR2_SQ8_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ8_1_bit)
#define ADC3_SQR2_SQ8_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ8_2_bit)
#define ADC3_SQR2_SQ8_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ8_3_bit)
#define ADC3_SQR2_SQ8_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ8_4_bit)
#define ADC3_SQR2_SQ7_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ7_0_bit)
#define ADC3_SQR2_SQ7_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ7_1_bit)
#define ADC3_SQR2_SQ7_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ7_2_bit)
#define ADC3_SQR2_SQ7_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ7_3_bit)
#define ADC3_SQR2_SQ7_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR2, ADC_SQR2_SQ7_4_bit)

/*
+-----------------------------------------------------------------------------+
| ADC_SQR3 - ADC regular sequence register 3
+-----------------------------------------------------------------------------+
*/

#define ADC_SQR3_SQ6_bit					25
#define ADC_SQR3_SQ6_0_bit					25
#define ADC_SQR3_SQ6_1_bit					26
#define ADC_SQR3_SQ6_2_bit					27
#define ADC_SQR3_SQ6_3_bit					28
#define ADC_SQR3_SQ6_4_bit					29
#define ADC_SQR3_SQ5_bit					20
#define ADC_SQR3_SQ5_0_bit					20
#define ADC_SQR3_SQ5_1_bit					21
#define ADC_SQR3_SQ5_2_bit					22
#define ADC_SQR3_SQ5_3_bit					23
#define ADC_SQR3_SQ5_4_bit					24
#define ADC_SQR3_SQ4_bit					15
#define ADC_SQR3_SQ4_0_bit					15
#define ADC_SQR3_SQ4_1_bit					16
#define ADC_SQR3_SQ4_2_bit					17
#define ADC_SQR3_SQ4_3_bit					18
#define ADC_SQR3_SQ4_4_bit					19
#define ADC_SQR3_SQ3_bit					10
#define ADC_SQR3_SQ3_0_bit					10
#define ADC_SQR3_SQ3_1_bit					11
#define ADC_SQR3_SQ3_2_bit					12
#define ADC_SQR3_SQ3_3_bit					13
#define ADC_SQR3_SQ3_4_bit					14
#define ADC_SQR3_SQ2_bit					5
#define ADC_SQR3_SQ2_0_bit					5
#define ADC_SQR3_SQ2_1_bit					6
#define ADC_SQR3_SQ2_2_bit					7
#define ADC_SQR3_SQ2_3_bit					8
#define ADC_SQR3_SQ2_4_bit					9
#define ADC_SQR3_SQ1_bit					0
#define ADC_SQR3_SQ1_0_bit					0
#define ADC_SQR3_SQ1_1_bit					1
#define ADC_SQR3_SQ1_2_bit					2
#define ADC_SQR3_SQ1_3_bit					3
#define ADC_SQR3_SQ1_4_bit					4

#define ADC1_SQR3_SQ6_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ6_0_bit)
#define ADC1_SQR3_SQ6_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ6_1_bit)
#define ADC1_SQR3_SQ6_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ6_2_bit)
#define ADC1_SQR3_SQ6_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ6_3_bit)
#define ADC1_SQR3_SQ6_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ6_4_bit)
#define ADC1_SQR3_SQ5_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ5_0_bit)
#define ADC1_SQR3_SQ5_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ5_1_bit)
#define ADC1_SQR3_SQ5_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ5_2_bit)
#define ADC1_SQR3_SQ5_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ5_3_bit)
#define ADC1_SQR3_SQ5_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ5_4_bit)
#define ADC1_SQR3_SQ4_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ4_0_bit)
#define ADC1_SQR3_SQ4_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ4_1_bit)
#define ADC1_SQR3_SQ4_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ4_2_bit)
#define ADC1_SQR3_SQ4_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ4_3_bit)
#define ADC1_SQR3_SQ4_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ4_4_bit)
#define ADC1_SQR3_SQ3_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ3_0_bit)
#define ADC1_SQR3_SQ3_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ3_1_bit)
#define ADC1_SQR3_SQ3_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ3_2_bit)
#define ADC1_SQR3_SQ3_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ3_3_bit)
#define ADC1_SQR3_SQ3_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ3_4_bit)
#define ADC1_SQR3_SQ2_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ2_0_bit)
#define ADC1_SQR3_SQ2_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ2_1_bit)
#define ADC1_SQR3_SQ2_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ2_2_bit)
#define ADC1_SQR3_SQ2_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ2_3_bit)
#define ADC1_SQR3_SQ2_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ2_4_bit)
#define ADC1_SQR3_SQ1_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ1_0_bit)
#define ADC1_SQR3_SQ1_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ1_1_bit)
#define ADC1_SQR3_SQ1_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ1_2_bit)
#define ADC1_SQR3_SQ1_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ1_3_bit)
#define ADC1_SQR3_SQ1_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->SQR3, ADC_SQR3_SQ1_4_bit)

#define ADC2_SQR3_SQ6_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ6_0_bit)
#define ADC2_SQR3_SQ6_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ6_1_bit)
#define ADC2_SQR3_SQ6_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ6_2_bit)
#define ADC2_SQR3_SQ6_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ6_3_bit)
#define ADC2_SQR3_SQ6_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ6_4_bit)
#define ADC2_SQR3_SQ5_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ5_0_bit)
#define ADC2_SQR3_SQ5_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ5_1_bit)
#define ADC2_SQR3_SQ5_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ5_2_bit)
#define ADC2_SQR3_SQ5_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ5_3_bit)
#define ADC2_SQR3_SQ5_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ5_4_bit)
#define ADC2_SQR3_SQ4_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ4_0_bit)
#define ADC2_SQR3_SQ4_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ4_1_bit)
#define ADC2_SQR3_SQ4_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ4_2_bit)
#define ADC2_SQR3_SQ4_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ4_3_bit)
#define ADC2_SQR3_SQ4_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ4_4_bit)
#define ADC2_SQR3_SQ3_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ3_0_bit)
#define ADC2_SQR3_SQ3_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ3_1_bit)
#define ADC2_SQR3_SQ3_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ3_2_bit)
#define ADC2_SQR3_SQ3_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ3_3_bit)
#define ADC2_SQR3_SQ3_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ3_4_bit)
#define ADC2_SQR3_SQ2_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ2_0_bit)
#define ADC2_SQR3_SQ2_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ2_1_bit)
#define ADC2_SQR3_SQ2_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ2_2_bit)
#define ADC2_SQR3_SQ2_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ2_3_bit)
#define ADC2_SQR3_SQ2_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ2_4_bit)
#define ADC2_SQR3_SQ1_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ1_0_bit)
#define ADC2_SQR3_SQ1_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ1_1_bit)
#define ADC2_SQR3_SQ1_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ1_2_bit)
#define ADC2_SQR3_SQ1_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ1_3_bit)
#define ADC2_SQR3_SQ1_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->SQR3, ADC_SQR3_SQ1_4_bit)

#define ADC3_SQR3_SQ6_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ6_0_bit)
#define ADC3_SQR3_SQ6_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ6_1_bit)
#define ADC3_SQR3_SQ6_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ6_2_bit)
#define ADC3_SQR3_SQ6_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ6_3_bit)
#define ADC3_SQR3_SQ6_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ6_4_bit)
#define ADC3_SQR3_SQ5_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ5_0_bit)
#define ADC3_SQR3_SQ5_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ5_1_bit)
#define ADC3_SQR3_SQ5_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ5_2_bit)
#define ADC3_SQR3_SQ5_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ5_3_bit)
#define ADC3_SQR3_SQ5_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ5_4_bit)
#define ADC3_SQR3_SQ4_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ4_0_bit)
#define ADC3_SQR3_SQ4_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ4_1_bit)
#define ADC3_SQR3_SQ4_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ4_2_bit)
#define ADC3_SQR3_SQ4_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ4_3_bit)
#define ADC3_SQR3_SQ4_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ4_4_bit)
#define ADC3_SQR3_SQ3_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ3_0_bit)
#define ADC3_SQR3_SQ3_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ3_1_bit)
#define ADC3_SQR3_SQ3_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ3_2_bit)
#define ADC3_SQR3_SQ3_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ3_3_bit)
#define ADC3_SQR3_SQ3_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ3_4_bit)
#define ADC3_SQR3_SQ2_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ2_0_bit)
#define ADC3_SQR3_SQ2_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ2_1_bit)
#define ADC3_SQR3_SQ2_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ2_2_bit)
#define ADC3_SQR3_SQ2_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ2_3_bit)
#define ADC3_SQR3_SQ2_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ2_4_bit)
#define ADC3_SQR3_SQ1_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ1_0_bit)
#define ADC3_SQR3_SQ1_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ1_1_bit)
#define ADC3_SQR3_SQ1_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ1_2_bit)
#define ADC3_SQR3_SQ1_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ1_3_bit)
#define ADC3_SQR3_SQ1_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->SQR3, ADC_SQR3_SQ1_4_bit)

/*
+-----------------------------------------------------------------------------+
| ADC_JSQR - ADC injected sequence register
+-----------------------------------------------------------------------------+
*/

#define ADC_JSQR_JL_bit						20
#define ADC_JSQR_JL_0_bit					20
#define ADC_JSQR_JL_1_bit					21
#define ADC_JSQR_JSQ4_bit					15
#define ADC_JSQR_JSQ4_0_bit					15
#define ADC_JSQR_JSQ4_1_bit					16
#define ADC_JSQR_JSQ4_2_bit					17
#define ADC_JSQR_JSQ4_3_bit					18
#define ADC_JSQR_JSQ4_4_bit					19
#define ADC_JSQR_JSQ3_bit					10
#define ADC_JSQR_JSQ3_0_bit					10
#define ADC_JSQR_JSQ3_1_bit					11
#define ADC_JSQR_JSQ3_2_bit					12
#define ADC_JSQR_JSQ3_3_bit					13
#define ADC_JSQR_JSQ3_4_bit					14
#define ADC_JSQR_JSQ2_bit					5
#define ADC_JSQR_JSQ2_0_bit					5
#define ADC_JSQR_JSQ2_1_bit					6
#define ADC_JSQR_JSQ2_2_bit					7
#define ADC_JSQR_JSQ2_3_bit					8
#define ADC_JSQR_JSQ2_4_bit					9
#define ADC_JSQR_JSQ1_bit					0
#define ADC_JSQR_JSQ1_0_bit					0
#define ADC_JSQR_JSQ1_1_bit					1
#define ADC_JSQR_JSQ1_2_bit					2
#define ADC_JSQR_JSQ1_3_bit					3
#define ADC_JSQR_JSQ1_4_bit					4

#define ADC1_JSQR_JL_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JL_0_bit)
#define ADC1_JSQR_JL_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JL_1_bit)
#define ADC1_JSQR_JSQ4_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ4_0_bit)
#define ADC1_JSQR_JSQ4_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ4_1_bit)
#define ADC1_JSQR_JSQ4_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ4_2_bit)
#define ADC1_JSQR_JSQ4_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ4_3_bit)
#define ADC1_JSQR_JSQ4_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ4_4_bit)
#define ADC1_JSQR_JSQ3_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ3_0_bit)
#define ADC1_JSQR_JSQ3_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ3_1_bit)
#define ADC1_JSQR_JSQ3_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ3_2_bit)
#define ADC1_JSQR_JSQ3_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ3_3_bit)
#define ADC1_JSQR_JSQ3_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ3_4_bit)
#define ADC1_JSQR_JSQ2_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ2_0_bit)
#define ADC1_JSQR_JSQ2_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ2_1_bit)
#define ADC1_JSQR_JSQ2_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ2_2_bit)
#define ADC1_JSQR_JSQ2_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ2_3_bit)
#define ADC1_JSQR_JSQ2_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ2_4_bit)
#define ADC1_JSQR_JSQ1_0_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ1_0_bit)
#define ADC1_JSQR_JSQ1_1_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ1_1_bit)
#define ADC1_JSQR_JSQ1_2_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ1_2_bit)
#define ADC1_JSQR_JSQ1_3_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ1_3_bit)
#define ADC1_JSQR_JSQ1_4_bb					bitband_t m_BITBAND_PERIPH(&ADC1->JSQR, ADC_JSQR_JSQ1_4_bit)

#define ADC2_JSQR_JL_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JL_0_bit)
#define ADC2_JSQR_JL_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JL_1_bit)
#define ADC2_JSQR_JSQ4_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ4_0_bit)
#define ADC2_JSQR_JSQ4_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ4_1_bit)
#define ADC2_JSQR_JSQ4_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ4_2_bit)
#define ADC2_JSQR_JSQ4_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ4_3_bit)
#define ADC2_JSQR_JSQ4_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ4_4_bit)
#define ADC2_JSQR_JSQ3_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ3_0_bit)
#define ADC2_JSQR_JSQ3_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ3_1_bit)
#define ADC2_JSQR_JSQ3_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ3_2_bit)
#define ADC2_JSQR_JSQ3_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ3_3_bit)
#define ADC2_JSQR_JSQ3_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ3_4_bit)
#define ADC2_JSQR_JSQ2_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ2_0_bit)
#define ADC2_JSQR_JSQ2_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ2_1_bit)
#define ADC2_JSQR_JSQ2_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ2_2_bit)
#define ADC2_JSQR_JSQ2_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ2_3_bit)
#define ADC2_JSQR_JSQ2_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ2_4_bit)
#define ADC2_JSQR_JSQ1_0_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ1_0_bit)
#define ADC2_JSQR_JSQ1_1_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ1_1_bit)
#define ADC2_JSQR_JSQ1_2_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ1_2_bit)
#define ADC2_JSQR_JSQ1_3_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ1_3_bit)
#define ADC2_JSQR_JSQ1_4_bb					bitband_t m_BITBAND_PERIPH(&ADC2->JSQR, ADC_JSQR_JSQ1_4_bit)

#define ADC3_JSQR_JL_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JL_0_bit)
#define ADC3_JSQR_JL_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JL_1_bit)
#define ADC3_JSQR_JSQ4_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ4_0_bit)
#define ADC3_JSQR_JSQ4_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ4_1_bit)
#define ADC3_JSQR_JSQ4_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ4_2_bit)
#define ADC3_JSQR_JSQ4_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ4_3_bit)
#define ADC3_JSQR_JSQ4_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ4_4_bit)
#define ADC3_JSQR_JSQ3_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ3_0_bit)
#define ADC3_JSQR_JSQ3_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ3_1_bit)
#define ADC3_JSQR_JSQ3_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ3_2_bit)
#define ADC3_JSQR_JSQ3_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ3_3_bit)
#define ADC3_JSQR_JSQ3_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ3_4_bit)
#define ADC3_JSQR_JSQ2_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ2_0_bit)
#define ADC3_JSQR_JSQ2_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ2_1_bit)
#define ADC3_JSQR_JSQ2_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ2_2_bit)
#define ADC3_JSQR_JSQ2_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ2_3_bit)
#define ADC3_JSQR_JSQ2_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ2_4_bit)
#define ADC3_JSQR_JSQ1_0_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ1_0_bit)
#define ADC3_JSQR_JSQ1_1_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ1_1_bit)
#define ADC3_JSQR_JSQ1_2_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ1_2_bit)
#define ADC3_JSQR_JSQ1_3_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ1_3_bit)
#define ADC3_JSQR_JSQ1_4_bb					bitband_t m_BITBAND_PERIPH(&ADC3->JSQR, ADC_JSQR_JSQ1_4_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_ADC_H_ */
