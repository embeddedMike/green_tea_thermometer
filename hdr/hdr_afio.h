/** \file hdr_afio.h
 * \brief Header with definition of bits in AFIO control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
* chip: STM32F10x
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
******************************************************************************/

#ifndef HDR_AFIO_H_
#define HDR_AFIO_H_

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| AFIO_EVCR - Event control register
+-----------------------------------------------------------------------------+
*/

#define AFIO_EVCR_EVOE_bit					7
#define AFIO_EVCR_PORT_bit					4
#define AFIO_EVCR_PORT_0_bit				4
#define AFIO_EVCR_PORT_1_bit				5
#define AFIO_EVCR_PORT_2_bit				6
#define AFIO_EVCR_PIN_bit					0
#define AFIO_EVCR_PIN_0_bit					0
#define AFIO_EVCR_PIN_1_bit					1
#define AFIO_EVCR_PIN_2_bit					2
#define AFIO_EVCR_PIN_3_bit					3

#define AFIO_EVCR_PORT_PA_value				0
#define AFIO_EVCR_PORT_PB_value				1
#define AFIO_EVCR_PORT_PC_value				2
#define AFIO_EVCR_PORT_PD_value				3
#define AFIO_EVCR_PORT_PE_value				4
#define AFIO_EVCR_PORT_mask					7

#define AFIO_EVCR_PIN_PX0_value				0
#define AFIO_EVCR_PIN_PX1_value				1
#define AFIO_EVCR_PIN_PX2_value				2
#define AFIO_EVCR_PIN_PX3_value				3
#define AFIO_EVCR_PIN_PX4_value				4
#define AFIO_EVCR_PIN_PX5_value				5
#define AFIO_EVCR_PIN_PX6_value				6
#define AFIO_EVCR_PIN_PX7_value				7
#define AFIO_EVCR_PIN_PX8_value				8
#define AFIO_EVCR_PIN_PX9_value				9
#define AFIO_EVCR_PIN_PX10_value			10
#define AFIO_EVCR_PIN_PX11_value			11
#define AFIO_EVCR_PIN_PX12_value			12
#define AFIO_EVCR_PIN_PX13_value			13
#define AFIO_EVCR_PIN_PX14_value			14
#define AFIO_EVCR_PIN_PX15_value			15
#define AFIO_EVCR_PIN_mask					15

#define AFIO_EVCR_EVOE_bb					bitband_t m_BITBAND_PERIPH(&AFIO->EVCR, AFIO_EVCR_EVOE_bit)
#define AFIO_EVCR_PORT_0_bb					bitband_t m_BITBAND_PERIPH(&AFIO->EVCR, AFIO_EVCR_PORT_0_bit)
#define AFIO_EVCR_PORT_1_bb					bitband_t m_BITBAND_PERIPH(&AFIO->EVCR, AFIO_EVCR_PORT_1_bit)
#define AFIO_EVCR_PORT_2_bb					bitband_t m_BITBAND_PERIPH(&AFIO->EVCR, AFIO_EVCR_PORT_2_bit)
#define AFIO_EVCR_PIN_0_bb					bitband_t m_BITBAND_PERIPH(&AFIO->EVCR, AFIO_EVCR_PIN_0_bit)
#define AFIO_EVCR_PIN_1_bb					bitband_t m_BITBAND_PERIPH(&AFIO->EVCR, AFIO_EVCR_PIN_1_bit)
#define AFIO_EVCR_PIN_2_bb					bitband_t m_BITBAND_PERIPH(&AFIO->EVCR, AFIO_EVCR_PIN_2_bit)
#define AFIO_EVCR_PIN_3_bb					bitband_t m_BITBAND_PERIPH(&AFIO->EVCR, AFIO_EVCR_PIN_3_bit)

/*
+-----------------------------------------------------------------------------+
| AFIO_MAPR - AF remap and debug I/O configuration register
+-----------------------------------------------------------------------------+
*/

#define AFIO_MAPR_SWJ_CFG_bit				24
#define AFIO_MAPR_SWJ_CFG_0_bit				24
#define AFIO_MAPR_SWJ_CFG_1_bit				25
#define AFIO_MAPR_SWJ_CFG_2_bit				26
#define AFIO_MAPR_ADC2_ETRGREG_REMAP_bit	20
#define AFIO_MAPR_ADC2_ETRGINJ_REMAP_bit	19
#define AFIO_MAPR_ADC1_ETRGREG_REMAP_bit	18
#define AFIO_MAPR_ADC1_ETRGINJ_REMAP_bit	17
#define AFIO_MAPR_TIM5CH4_IREMAP_bit		16
#define AFIO_MAPR_PD01_REMAP_bit			15
#define AFIO_MAPR_CAN_REMAP_bit				13
#define AFIO_MAPR_CAN_REMAP_0_bit			13
#define AFIO_MAPR_CAN_REMAP_1_bit			14
#define AFIO_MAPR_TIM4_REMAP_bit			12
#define AFIO_MAPR_TIM3_REMAP_bit			10
#define AFIO_MAPR_TIM3_REMAP_0_bit			10
#define AFIO_MAPR_TIM3_REMAP_1_bit			11
#define AFIO_MAPR_TIM2_REMAP_bit			8
#define AFIO_MAPR_TIM2_REMAP_0_bit			8
#define AFIO_MAPR_TIM2_REMAP_1_bit			9
#define AFIO_MAPR_TIM1_REMAP_bit			6
#define AFIO_MAPR_TIM1_REMAP_0_bit			6
#define AFIO_MAPR_TIM1_REMAP_1_bit			7
#define AFIO_MAPR_USART3_REMAP_bit			4
#define AFIO_MAPR_USART3_REMAP_0_bit		4
#define AFIO_MAPR_USART3_REMAP_1_bit		5
#define AFIO_MAPR_USART2_REMAP_bit			3
#define AFIO_MAPR_USART1_REMAP_bit			2
#define AFIO_MAPR_I2C1_REMAP_bit			1
#define AFIO_MAPR_SPI1_REMAP_bit			0

#define AFIO_MAPR_SWJ_CFG_RESET_value		0
#define AFIO_MAPR_SWJ_CFG_NOJNTRST_value	1
#define AFIO_MAPR_SWJ_CFG_JTAGDISABLE_value	2
#define AFIO_MAPR_SWJ_CFG_DISABLE_value		4
#define AFIO_MAPR_SWJ_CFG_mask				7

#define AFIO_MAPR_CAN_REMAP_REMAP1_value	0
#define AFIO_MAPR_CAN_REMAP_REMAP2_value	2
#define AFIO_MAPR_CAN_REMAP_REMAP3_value	3
#define AFIO_MAPR_CAN_REMAP_mask			3

#define AFIO_MAPR_TIM3_REMAP_NOREMAP_value		0
#define AFIO_MAPR_TIM3_REMAP_PARTIALREMAP_value	2
#define AFIO_MAPR_TIM3_REMAP_FULLREMAP_value	3
#define AFIO_MAPR_TIM3_REMAP_mask				3

#define AFIO_MAPR_TIM2_REMAP_NOREMAP_value			0
#define AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1_value	1
#define AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2_value	2
#define AFIO_MAPR_TIM2_REMAP_FULLREMAP_value		3
#define AFIO_MAPR_TIM2_REMAP_mask					3

#define AFIO_MAPR_TIM1_REMAP_NOREMAP_value		0
#define AFIO_MAPR_TIM1_REMAP_PARTIALREMAP_value	1
#define AFIO_MAPR_TIM1_REMAP_FULLREMAP_value	3
#define AFIO_MAPR_TIM1_REMAP_mask				3

#define AFIO_MAPR_USART3_REMAP_NOREMAP_value		0
#define AFIO_MAPR_USART3_REMAP_PARTIALREMAP_value	1
#define AFIO_MAPR_USART3_REMAP_FULLREMAP_value		3
#define AFIO_MAPR_USART3_REMAP_mask					3

#define AFIO_MAPR_SWJ_CFG_0_bb				bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_SWJ_CFG_0_bit)
#define AFIO_MAPR_SWJ_CFG_1_bb				bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_SWJ_CFG_1_bit)
#define AFIO_MAPR_SWJ_CFG_2_bb				bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_SWJ_CFG_2_bit)
#define AFIO_MAPR_ADC2_ETRGREG_REMAP_bb		bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_ADC2_ETRGREG_REMAP_bit)
#define AFIO_MAPR_ADC2_ETRGINJ_REMAP_bb		bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_ADC2_ETRGINJ_REMAP_bit)
#define AFIO_MAPR_ADC1_ETRGREG_REMAP_bb		bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_ADC1_ETRGREG_REMAP_bit)
#define AFIO_MAPR_ADC1_ETRGINJ_REMAP_bb		bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_ADC1_ETRGINJ_REMAP_bit)
#define AFIO_MAPR_TIM5CH4_IREMAP_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_TIM5CH4_IREMAP_bit)
#define AFIO_MAPR_PD01_REMAP_bb				bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_PD01_REMAP_bit)
#define AFIO_MAPR_CAN_REMAP_0_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_CAN_REMAP_0_bit)
#define AFIO_MAPR_CAN_REMAP_1_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_CAN_REMAP_1_bit)
#define AFIO_MAPR_TIM4_REMAP_bb				bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_TIM4_REMAP_bit)
#define AFIO_MAPR_TIM3_REMAP_0_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_TIM3_REMAP_0_bit)
#define AFIO_MAPR_TIM3_REMAP_1_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_TIM3_REMAP_1_bit)
#define AFIO_MAPR_TIM2_REMAP_0_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_TIM2_REMAP_0_bit)
#define AFIO_MAPR_TIM2_REMAP_1_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_TIM2_REMAP_1_bit)
#define AFIO_MAPR_TIM1_REMAP_0_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_TIM1_REMAP_0_bit)
#define AFIO_MAPR_TIM1_REMAP_1_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_TIM1_REMAP_1_bit)
#define AFIO_MAPR_USART3_REMAP_0_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_USART3_REMAP_0_bit)
#define AFIO_MAPR_USART3_REMAP_1_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_USART3_REMAP_1_bit)
#define AFIO_MAPR_USART2_REMAP_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_USART2_REMAP_bit)
#define AFIO_MAPR_USART1_REMAP_bb			bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_USART1_REMAP_bit)
#define AFIO_MAPR_I2C1_REMAP_bb				bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_I2C1_REMAP_bit)
#define AFIO_MAPR_SPI1_REMAP_bb				bitband_t m_BITBAND_PERIPH(&AFIO->MAPR, AFIO_MAPR_SPI1_REMAP_bit)

/*
+-----------------------------------------------------------------------------+
| AFIO_EXTICR1 - External interrupt configuration register 1
+-----------------------------------------------------------------------------+
*/

#define AFIO_EXTICR1_EXTI3_bit				12
#define AFIO_EXTICR1_EXTI3_0_bit			12
#define AFIO_EXTICR1_EXTI3_1_bit			13
#define AFIO_EXTICR1_EXTI3_2_bit			14
#define AFIO_EXTICR1_EXTI3_3_bit			15
#define AFIO_EXTICR1_EXTI2_bit				8
#define AFIO_EXTICR1_EXTI2_0_bit			8
#define AFIO_EXTICR1_EXTI2_1_bit			9
#define AFIO_EXTICR1_EXTI2_2_bit			10
#define AFIO_EXTICR1_EXTI2_3_bit			11
#define AFIO_EXTICR1_EXTI1_bit				4
#define AFIO_EXTICR1_EXTI1_0_bit			4
#define AFIO_EXTICR1_EXTI1_1_bit			5
#define AFIO_EXTICR1_EXTI1_2_bit			6
#define AFIO_EXTICR1_EXTI1_3_bit			7
#define AFIO_EXTICR1_EXTI0_bit				0
#define AFIO_EXTICR1_EXTI0_0_bit			0
#define AFIO_EXTICR1_EXTI0_1_bit			1
#define AFIO_EXTICR1_EXTI0_2_bit			2
#define AFIO_EXTICR1_EXTI0_3_bit			3

#define AFIO_EXTICR1_EXTI3_PA_value			0
#define AFIO_EXTICR1_EXTI3_PB_value			1
#define AFIO_EXTICR1_EXTI3_PC_value			2
#define AFIO_EXTICR1_EXTI3_PD_value			3
#define AFIO_EXTICR1_EXTI3_PE_value			4
#define AFIO_EXTICR1_EXTI3_PF_value			5
#define AFIO_EXTICR1_EXTI3_PG_value			6
#define AFIO_EXTICR1_EXTI3_mask				15

#define AFIO_EXTICR1_EXTI2_PA_value			0
#define AFIO_EXTICR1_EXTI2_PB_value			1
#define AFIO_EXTICR1_EXTI2_PC_value			2
#define AFIO_EXTICR1_EXTI2_PD_value			3
#define AFIO_EXTICR1_EXTI2_PE_value			4
#define AFIO_EXTICR1_EXTI2_PF_value			5
#define AFIO_EXTICR1_EXTI2_PG_value			6
#define AFIO_EXTICR1_EXTI2_mask				15

#define AFIO_EXTICR1_EXTI1_PA_value			0
#define AFIO_EXTICR1_EXTI1_PB_value			1
#define AFIO_EXTICR1_EXTI1_PC_value			2
#define AFIO_EXTICR1_EXTI1_PD_value			3
#define AFIO_EXTICR1_EXTI1_PE_value			4
#define AFIO_EXTICR1_EXTI1_PF_value			5
#define AFIO_EXTICR1_EXTI1_PG_value			6
#define AFIO_EXTICR1_EXTI1_mask				15

#define AFIO_EXTICR1_EXTI0_PA_value			0
#define AFIO_EXTICR1_EXTI0_PB_value			1
#define AFIO_EXTICR1_EXTI0_PC_value			2
#define AFIO_EXTICR1_EXTI0_PD_value			3
#define AFIO_EXTICR1_EXTI0_PE_value			4
#define AFIO_EXTICR1_EXTI0_PF_value			5
#define AFIO_EXTICR1_EXTI0_PG_value			6
#define AFIO_EXTICR1_EXTI0_mask				15

#define AFIO_EXTICR1_EXTI3_0				(1 << AFIO_EXTICR1_EXTI3_0_bit)
#define AFIO_EXTICR1_EXTI3_1				(1 << AFIO_EXTICR1_EXTI3_1_bit)
#define AFIO_EXTICR1_EXTI3_2				(1 << AFIO_EXTICR1_EXTI3_2_bit)
#define AFIO_EXTICR1_EXTI3_3				(1 << AFIO_EXTICR1_EXTI3_3_bit)
#define AFIO_EXTICR1_EXTI2_0				(1 << AFIO_EXTICR1_EXTI2_0_bit)
#define AFIO_EXTICR1_EXTI2_1				(1 << AFIO_EXTICR1_EXTI2_1_bit)
#define AFIO_EXTICR1_EXTI2_2				(1 << AFIO_EXTICR1_EXTI2_2_bit)
#define AFIO_EXTICR1_EXTI2_3				(1 << AFIO_EXTICR1_EXTI2_3_bit)
#define AFIO_EXTICR1_EXTI1_0				(1 << AFIO_EXTICR1_EXTI1_0_bit)
#define AFIO_EXTICR1_EXTI1_1				(1 << AFIO_EXTICR1_EXTI1_1_bit)
#define AFIO_EXTICR1_EXTI1_2				(1 << AFIO_EXTICR1_EXTI1_2_bit)
#define AFIO_EXTICR1_EXTI1_3				(1 << AFIO_EXTICR1_EXTI1_3_bit)
#define AFIO_EXTICR1_EXTI0_0				(1 << AFIO_EXTICR1_EXTI0_0_bit)
#define AFIO_EXTICR1_EXTI0_1				(1 << AFIO_EXTICR1_EXTI0_1_bit)
#define AFIO_EXTICR1_EXTI0_2				(1 << AFIO_EXTICR1_EXTI0_2_bit)
#define AFIO_EXTICR1_EXTI0_3				(1 << AFIO_EXTICR1_EXTI0_3_bit)

#define AFIO_EXTICR1_EXTI3_0_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI3_0_bit)
#define AFIO_EXTICR1_EXTI3_1_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI3_1_bit)
#define AFIO_EXTICR1_EXTI3_2_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI3_2_bit)
#define AFIO_EXTICR1_EXTI3_3_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI3_3_bit)
#define AFIO_EXTICR1_EXTI2_0_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI2_0_bit)
#define AFIO_EXTICR1_EXTI2_1_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI2_1_bit)
#define AFIO_EXTICR1_EXTI2_2_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI2_2_bit)
#define AFIO_EXTICR1_EXTI2_3_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI2_3_bit)
#define AFIO_EXTICR1_EXTI1_0_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI1_0_bit)
#define AFIO_EXTICR1_EXTI1_1_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI1_1_bit)
#define AFIO_EXTICR1_EXTI1_2_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI1_2_bit)
#define AFIO_EXTICR1_EXTI1_3_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI1_3_bit)
#define AFIO_EXTICR1_EXTI0_0_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI0_0_bit)
#define AFIO_EXTICR1_EXTI0_1_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI0_1_bit)
#define AFIO_EXTICR1_EXTI0_2_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI0_2_bit)
#define AFIO_EXTICR1_EXTI0_3_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR1, AFIO_EXTICR1_EXTI0_3_bit)

/*
+-----------------------------------------------------------------------------+
| AFIO_EXTICR2 - External interrupt configuration register 2
+-----------------------------------------------------------------------------+
*/

#define AFIO_EXTICR2_EXTI7_bit				12
#define AFIO_EXTICR2_EXTI7_0_bit			12
#define AFIO_EXTICR2_EXTI7_1_bit			13
#define AFIO_EXTICR2_EXTI7_2_bit			14
#define AFIO_EXTICR2_EXTI7_3_bit			15
#define AFIO_EXTICR2_EXTI6_bit				8
#define AFIO_EXTICR2_EXTI6_0_bit			8
#define AFIO_EXTICR2_EXTI6_1_bit			9
#define AFIO_EXTICR2_EXTI6_2_bit			10
#define AFIO_EXTICR2_EXTI6_3_bit			11
#define AFIO_EXTICR2_EXTI5_bit				4
#define AFIO_EXTICR2_EXTI5_0_bit			4
#define AFIO_EXTICR2_EXTI5_1_bit			5
#define AFIO_EXTICR2_EXTI5_2_bit			6
#define AFIO_EXTICR2_EXTI5_3_bit			7
#define AFIO_EXTICR2_EXTI4_bit				0
#define AFIO_EXTICR2_EXTI4_0_bit			0
#define AFIO_EXTICR2_EXTI4_1_bit			1
#define AFIO_EXTICR2_EXTI4_2_bit			2
#define AFIO_EXTICR2_EXTI4_3_bit			3

#define AFIO_EXTICR2_EXTI7_PA_value			0
#define AFIO_EXTICR2_EXTI7_PB_value			1
#define AFIO_EXTICR2_EXTI7_PC_value			2
#define AFIO_EXTICR2_EXTI7_PD_value			3
#define AFIO_EXTICR2_EXTI7_PE_value			4
#define AFIO_EXTICR2_EXTI7_PF_value			5
#define AFIO_EXTICR2_EXTI7_PG_value			6
#define AFIO_EXTICR2_EXTI7_mask				15

#define AFIO_EXTICR2_EXTI6_PA_value			0
#define AFIO_EXTICR2_EXTI6_PB_value			1
#define AFIO_EXTICR2_EXTI6_PC_value			2
#define AFIO_EXTICR2_EXTI6_PD_value			3
#define AFIO_EXTICR2_EXTI6_PE_value			4
#define AFIO_EXTICR2_EXTI6_PF_value			5
#define AFIO_EXTICR2_EXTI6_PG_value			6
#define AFIO_EXTICR2_EXTI6_mask				15

#define AFIO_EXTICR2_EXTI5_PA_value			0
#define AFIO_EXTICR2_EXTI5_PB_value			1
#define AFIO_EXTICR2_EXTI5_PC_value			2
#define AFIO_EXTICR2_EXTI5_PD_value			3
#define AFIO_EXTICR2_EXTI5_PE_value			4
#define AFIO_EXTICR2_EXTI5_PF_value			5
#define AFIO_EXTICR2_EXTI5_PG_value			6
#define AFIO_EXTICR2_EXTI5_mask				15

#define AFIO_EXTICR2_EXTI4_PA_value			0
#define AFIO_EXTICR2_EXTI4_PB_value			1
#define AFIO_EXTICR2_EXTI4_PC_value			2
#define AFIO_EXTICR2_EXTI4_PD_value			3
#define AFIO_EXTICR2_EXTI4_PE_value			4
#define AFIO_EXTICR2_EXTI4_PF_value			5
#define AFIO_EXTICR2_EXTI4_PG_value			6
#define AFIO_EXTICR2_EXTI4_mask				15

#define AFIO_EXTICR2_EXTI7_0				(1 << AFIO_EXTICR2_EXTI7_0_bit)
#define AFIO_EXTICR2_EXTI7_1				(1 << AFIO_EXTICR2_EXTI7_1_bit)
#define AFIO_EXTICR2_EXTI7_2				(1 << AFIO_EXTICR2_EXTI7_2_bit)
#define AFIO_EXTICR2_EXTI7_3				(1 << AFIO_EXTICR2_EXTI7_3_bit)
#define AFIO_EXTICR2_EXTI6_0				(1 << AFIO_EXTICR2_EXTI6_0_bit)
#define AFIO_EXTICR2_EXTI6_1				(1 << AFIO_EXTICR2_EXTI6_1_bit)
#define AFIO_EXTICR2_EXTI6_2				(1 << AFIO_EXTICR2_EXTI6_2_bit)
#define AFIO_EXTICR2_EXTI6_3				(1 << AFIO_EXTICR2_EXTI6_3_bit)
#define AFIO_EXTICR2_EXTI5_0				(1 << AFIO_EXTICR2_EXTI5_0_bit)
#define AFIO_EXTICR2_EXTI5_1				(1 << AFIO_EXTICR2_EXTI5_1_bit)
#define AFIO_EXTICR2_EXTI5_2				(1 << AFIO_EXTICR2_EXTI5_2_bit)
#define AFIO_EXTICR2_EXTI5_3				(1 << AFIO_EXTICR2_EXTI5_3_bit)
#define AFIO_EXTICR2_EXTI4_0				(1 << AFIO_EXTICR2_EXTI4_0_bit)
#define AFIO_EXTICR2_EXTI4_1				(1 << AFIO_EXTICR2_EXTI4_1_bit)
#define AFIO_EXTICR2_EXTI4_2				(1 << AFIO_EXTICR2_EXTI4_2_bit)
#define AFIO_EXTICR2_EXTI4_3				(1 << AFIO_EXTICR2_EXTI4_3_bit)

#define AFIO_EXTICR2_EXTI7_0_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI7_0_bit)
#define AFIO_EXTICR2_EXTI7_1_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI7_1_bit)
#define AFIO_EXTICR2_EXTI7_2_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI7_2_bit)
#define AFIO_EXTICR2_EXTI7_3_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI7_3_bit)
#define AFIO_EXTICR2_EXTI6_0_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI6_0_bit)
#define AFIO_EXTICR2_EXTI6_1_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI6_1_bit)
#define AFIO_EXTICR2_EXTI6_2_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI6_2_bit)
#define AFIO_EXTICR2_EXTI6_3_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI6_3_bit)
#define AFIO_EXTICR2_EXTI5_0_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI5_0_bit)
#define AFIO_EXTICR2_EXTI5_1_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI5_1_bit)
#define AFIO_EXTICR2_EXTI5_2_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI5_2_bit)
#define AFIO_EXTICR2_EXTI5_3_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI5_3_bit)
#define AFIO_EXTICR2_EXTI4_0_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI4_0_bit)
#define AFIO_EXTICR2_EXTI4_1_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI4_1_bit)
#define AFIO_EXTICR2_EXTI4_2_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI4_2_bit)
#define AFIO_EXTICR2_EXTI4_3_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR2, AFIO_EXTICR2_EXTI4_3_bit)

/*
+-----------------------------------------------------------------------------+
| AFIO_EXTICR3 - External interrupt configuration register 3
+-----------------------------------------------------------------------------+
*/

#define AFIO_EXTICR3_EXTI11_bit				12
#define AFIO_EXTICR3_EXTI11_0_bit			12
#define AFIO_EXTICR3_EXTI11_1_bit			13
#define AFIO_EXTICR3_EXTI11_2_bit			14
#define AFIO_EXTICR3_EXTI11_3_bit			15
#define AFIO_EXTICR3_EXTI10_bit				8
#define AFIO_EXTICR3_EXTI10_0_bit			8
#define AFIO_EXTICR3_EXTI10_1_bit			9
#define AFIO_EXTICR3_EXTI10_2_bit			10
#define AFIO_EXTICR3_EXTI10_3_bit			11
#define AFIO_EXTICR3_EXTI9_bit				4
#define AFIO_EXTICR3_EXTI9_0_bit			4
#define AFIO_EXTICR3_EXTI9_1_bit			5
#define AFIO_EXTICR3_EXTI9_2_bit			6
#define AFIO_EXTICR3_EXTI9_3_bit			7
#define AFIO_EXTICR3_EXTI8_bit				0
#define AFIO_EXTICR3_EXTI8_0_bit			0
#define AFIO_EXTICR3_EXTI8_1_bit			1
#define AFIO_EXTICR3_EXTI8_2_bit			2
#define AFIO_EXTICR3_EXTI8_3_bit			3

#define AFIO_EXTICR3_EXTI11_PA_value		0
#define AFIO_EXTICR3_EXTI11_PB_value		1
#define AFIO_EXTICR3_EXTI11_PC_value		2
#define AFIO_EXTICR3_EXTI11_PD_value		3
#define AFIO_EXTICR3_EXTI11_PE_value		4
#define AFIO_EXTICR3_EXTI11_PF_value		5
#define AFIO_EXTICR3_EXTI11_PG_value		6
#define AFIO_EXTICR3_EXTI11_mask			15

#define AFIO_EXTICR3_EXTI10_PA_value		0
#define AFIO_EXTICR3_EXTI10_PB_value		1
#define AFIO_EXTICR3_EXTI10_PC_value		2
#define AFIO_EXTICR3_EXTI10_PD_value		3
#define AFIO_EXTICR3_EXTI10_PE_value		4
#define AFIO_EXTICR3_EXTI10_PF_value		5
#define AFIO_EXTICR3_EXTI10_PG_value		6
#define AFIO_EXTICR3_EXTI10_mask			15

#define AFIO_EXTICR3_EXTI9_PA_value			0
#define AFIO_EXTICR3_EXTI9_PB_value			1
#define AFIO_EXTICR3_EXTI9_PC_value			2
#define AFIO_EXTICR3_EXTI9_PD_value			3
#define AFIO_EXTICR3_EXTI9_PE_value			4
#define AFIO_EXTICR3_EXTI9_PF_value			5
#define AFIO_EXTICR3_EXTI9_PG_value			6
#define AFIO_EXTICR3_EXTI9_mask				15

#define AFIO_EXTICR3_EXTI8_PA_value			0
#define AFIO_EXTICR3_EXTI8_PB_value			1
#define AFIO_EXTICR3_EXTI8_PC_value			2
#define AFIO_EXTICR3_EXTI8_PD_value			3
#define AFIO_EXTICR3_EXTI8_PE_value			4
#define AFIO_EXTICR3_EXTI8_PF_value			5
#define AFIO_EXTICR3_EXTI8_PG_value			6
#define AFIO_EXTICR3_EXTI8_mask				15

#define AFIO_EXTICR3_EXTI11_0				(1 << AFIO_EXTICR3_EXTI11_0_bit)
#define AFIO_EXTICR3_EXTI11_1				(1 << AFIO_EXTICR3_EXTI11_1_bit)
#define AFIO_EXTICR3_EXTI11_2				(1 << AFIO_EXTICR3_EXTI11_2_bit)
#define AFIO_EXTICR3_EXTI11_3				(1 << AFIO_EXTICR3_EXTI11_3_bit)
#define AFIO_EXTICR3_EXTI10_0				(1 << AFIO_EXTICR3_EXTI10_0_bit)
#define AFIO_EXTICR3_EXTI10_1				(1 << AFIO_EXTICR3_EXTI10_1_bit)
#define AFIO_EXTICR3_EXTI10_2				(1 << AFIO_EXTICR3_EXTI10_2_bit)
#define AFIO_EXTICR3_EXTI10_3				(1 << AFIO_EXTICR3_EXTI10_3_bit)
#define AFIO_EXTICR3_EXTI9_0				(1 << AFIO_EXTICR3_EXTI9_0_bit)
#define AFIO_EXTICR3_EXTI9_1				(1 << AFIO_EXTICR3_EXTI9_1_bit)
#define AFIO_EXTICR3_EXTI9_2				(1 << AFIO_EXTICR3_EXTI9_2_bit)
#define AFIO_EXTICR3_EXTI9_3				(1 << AFIO_EXTICR3_EXTI9_3_bit)
#define AFIO_EXTICR3_EXTI8_0				(1 << AFIO_EXTICR3_EXTI8_0_bit)
#define AFIO_EXTICR3_EXTI8_1				(1 << AFIO_EXTICR3_EXTI8_1_bit)
#define AFIO_EXTICR3_EXTI8_2				(1 << AFIO_EXTICR3_EXTI8_2_bit)
#define AFIO_EXTICR3_EXTI8_3				(1 << AFIO_EXTICR3_EXTI8_3_bit)

#define AFIO_EXTICR3_EXTI11_0_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI11_0_bit)
#define AFIO_EXTICR3_EXTI11_1_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI11_1_bit)
#define AFIO_EXTICR3_EXTI11_2_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI11_2_bit)
#define AFIO_EXTICR3_EXTI11_3_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI11_3_bit)
#define AFIO_EXTICR3_EXTI10_0_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI10_0_bit)
#define AFIO_EXTICR3_EXTI10_1_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI10_1_bit)
#define AFIO_EXTICR3_EXTI10_2_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI10_2_bit)
#define AFIO_EXTICR3_EXTI10_3_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI10_3_bit)
#define AFIO_EXTICR3_EXTI9_0_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI9_0_bit)
#define AFIO_EXTICR3_EXTI9_1_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI9_1_bit)
#define AFIO_EXTICR3_EXTI9_2_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI9_2_bit)
#define AFIO_EXTICR3_EXTI9_3_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI9_3_bit)
#define AFIO_EXTICR3_EXTI8_0_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI8_0_bit)
#define AFIO_EXTICR3_EXTI8_1_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI8_1_bit)
#define AFIO_EXTICR3_EXTI8_2_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI8_2_bit)
#define AFIO_EXTICR3_EXTI8_3_bb				bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR3, AFIO_EXTICR3_EXTI8_3_bit)

/*
+-----------------------------------------------------------------------------+
| AFIO_EXTICR4 - External interrupt configuration register 4
+-----------------------------------------------------------------------------+
*/

#define AFIO_EXTICR4_EXTI15_bit				12
#define AFIO_EXTICR4_EXTI15_0_bit			12
#define AFIO_EXTICR4_EXTI15_1_bit			13
#define AFIO_EXTICR4_EXTI15_2_bit			14
#define AFIO_EXTICR4_EXTI15_3_bit			15
#define AFIO_EXTICR4_EXTI14_bit				8
#define AFIO_EXTICR4_EXTI14_0_bit			8
#define AFIO_EXTICR4_EXTI14_1_bit			9
#define AFIO_EXTICR4_EXTI14_2_bit			10
#define AFIO_EXTICR4_EXTI14_3_bit			11
#define AFIO_EXTICR4_EXTI13_bit				4
#define AFIO_EXTICR4_EXTI13_0_bit			4
#define AFIO_EXTICR4_EXTI13_1_bit			5
#define AFIO_EXTICR4_EXTI13_2_bit			6
#define AFIO_EXTICR4_EXTI13_3_bit			7
#define AFIO_EXTICR4_EXTI12_bit				0
#define AFIO_EXTICR4_EXTI12_0_bit			0
#define AFIO_EXTICR4_EXTI12_1_bit			1
#define AFIO_EXTICR4_EXTI12_2_bit			2
#define AFIO_EXTICR4_EXTI12_3_bit			3

#define AFIO_EXTICR4_EXTI15_PA_value		0
#define AFIO_EXTICR4_EXTI15_PB_value		1
#define AFIO_EXTICR4_EXTI15_PC_value		2
#define AFIO_EXTICR4_EXTI15_PD_value		3
#define AFIO_EXTICR4_EXTI15_PE_value		4
#define AFIO_EXTICR4_EXTI15_PF_value		5
#define AFIO_EXTICR4_EXTI15_PG_value		6
#define AFIO_EXTICR4_EXTI15_mask			15

#define AFIO_EXTICR4_EXTI14_PA_value		0
#define AFIO_EXTICR4_EXTI14_PB_value		1
#define AFIO_EXTICR4_EXTI14_PC_value		2
#define AFIO_EXTICR4_EXTI14_PD_value		3
#define AFIO_EXTICR4_EXTI14_PE_value		4
#define AFIO_EXTICR4_EXTI14_PF_value		5
#define AFIO_EXTICR4_EXTI14_PG_value		6
#define AFIO_EXTICR4_EXTI14_mask			15

#define AFIO_EXTICR4_EXTI13_PA_value		0
#define AFIO_EXTICR4_EXTI13_PB_value		1
#define AFIO_EXTICR4_EXTI13_PC_value		2
#define AFIO_EXTICR4_EXTI13_PD_value		3
#define AFIO_EXTICR4_EXTI13_PE_value		4
#define AFIO_EXTICR4_EXTI13_PF_value		5
#define AFIO_EXTICR4_EXTI13_PG_value		6
#define AFIO_EXTICR4_EXTI13_mask			15

#define AFIO_EXTICR4_EXTI12_PA_value		0
#define AFIO_EXTICR4_EXTI12_PB_value		1
#define AFIO_EXTICR4_EXTI12_PC_value		2
#define AFIO_EXTICR4_EXTI12_PD_value		3
#define AFIO_EXTICR4_EXTI12_PE_value		4
#define AFIO_EXTICR4_EXTI12_PF_value		5
#define AFIO_EXTICR4_EXTI12_PG_value		6
#define AFIO_EXTICR4_EXTI12_mask			15

#define AFIO_EXTICR4_EXTI15_0				(1 << AFIO_EXTICR4_EXTI15_0_bit)
#define AFIO_EXTICR4_EXTI15_1				(1 << AFIO_EXTICR4_EXTI15_1_bit)
#define AFIO_EXTICR4_EXTI15_2				(1 << AFIO_EXTICR4_EXTI15_2_bit)
#define AFIO_EXTICR4_EXTI15_3				(1 << AFIO_EXTICR4_EXTI15_3_bit)
#define AFIO_EXTICR4_EXTI14_0				(1 << AFIO_EXTICR4_EXTI14_0_bit)
#define AFIO_EXTICR4_EXTI14_1				(1 << AFIO_EXTICR4_EXTI14_1_bit)
#define AFIO_EXTICR4_EXTI14_2				(1 << AFIO_EXTICR4_EXTI14_2_bit)
#define AFIO_EXTICR4_EXTI14_3				(1 << AFIO_EXTICR4_EXTI14_3_bit)
#define AFIO_EXTICR4_EXTI13_0				(1 << AFIO_EXTICR4_EXTI13_0_bit)
#define AFIO_EXTICR4_EXTI13_1				(1 << AFIO_EXTICR4_EXTI13_1_bit)
#define AFIO_EXTICR4_EXTI13_2				(1 << AFIO_EXTICR4_EXTI13_2_bit)
#define AFIO_EXTICR4_EXTI13_3				(1 << AFIO_EXTICR4_EXTI13_3_bit)
#define AFIO_EXTICR4_EXTI12_0				(1 << AFIO_EXTICR4_EXTI12_0_bit)
#define AFIO_EXTICR4_EXTI12_1				(1 << AFIO_EXTICR4_EXTI12_1_bit)
#define AFIO_EXTICR4_EXTI12_2				(1 << AFIO_EXTICR4_EXTI12_2_bit)
#define AFIO_EXTICR4_EXTI12_3				(1 << AFIO_EXTICR4_EXTI12_3_bit)

#define AFIO_EXTICR4_EXTI15_0_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI15_0_bit)
#define AFIO_EXTICR4_EXTI15_1_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI15_1_bit)
#define AFIO_EXTICR4_EXTI15_2_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI15_2_bit)
#define AFIO_EXTICR4_EXTI15_3_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI15_3_bit)
#define AFIO_EXTICR4_EXTI14_0_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI14_0_bit)
#define AFIO_EXTICR4_EXTI14_1_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI14_1_bit)
#define AFIO_EXTICR4_EXTI14_2_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI14_2_bit)
#define AFIO_EXTICR4_EXTI14_3_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI14_3_bit)
#define AFIO_EXTICR4_EXTI13_0_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI13_0_bit)
#define AFIO_EXTICR4_EXTI13_1_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI13_1_bit)
#define AFIO_EXTICR4_EXTI13_2_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI13_2_bit)
#define AFIO_EXTICR4_EXTI13_3_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI13_3_bit)
#define AFIO_EXTICR4_EXTI12_0_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI12_0_bit)
#define AFIO_EXTICR4_EXTI12_1_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI12_1_bit)
#define AFIO_EXTICR4_EXTI12_2_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI12_2_bit)
#define AFIO_EXTICR4_EXTI12_3_bb			bitband_t m_BITBAND_PERIPH(&AFIO->EXTICR4, AFIO_EXTICR4_EXTI12_3_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_AFIO_H_ */
