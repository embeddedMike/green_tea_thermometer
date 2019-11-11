/** \file hdr_exti.h
 * \brief Header with definition of bits in EXTI control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
* chip: STM32F10x
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
******************************************************************************/

#ifndef HDR_EXTI_H_
#define HDR_EXTI_H_

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| EXTI_IMR - Interrupt mask register
+-----------------------------------------------------------------------------+
*/

#define EXTI_IMR_MR18_bit					18
#define EXTI_IMR_MR17_bit					17
#define EXTI_IMR_MR16_bit					16
#define EXTI_IMR_MR15_bit					15
#define EXTI_IMR_MR14_bit					14
#define EXTI_IMR_MR13_bit					13
#define EXTI_IMR_MR12_bit					12
#define EXTI_IMR_MR11_bit					11
#define EXTI_IMR_MR10_bit					10
#define EXTI_IMR_MR9_bit					9
#define EXTI_IMR_MR8_bit					8
#define EXTI_IMR_MR7_bit					7
#define EXTI_IMR_MR6_bit					6
#define EXTI_IMR_MR5_bit					5
#define EXTI_IMR_MR4_bit					4
#define EXTI_IMR_MR3_bit					3
#define EXTI_IMR_MR2_bit					2
#define EXTI_IMR_MR1_bit					1
#define EXTI_IMR_MR0_bit					0

#define EXTI_IMR_MR18_bb					bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR18_bit)
#define EXTI_IMR_MR17_bb					bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR17_bit)
#define EXTI_IMR_MR16_bb					bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR16_bit)
#define EXTI_IMR_MR15_bb					bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR15_bit)
#define EXTI_IMR_MR14_bb					bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR14_bit)
#define EXTI_IMR_MR13_bb					bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR13_bit)
#define EXTI_IMR_MR12_bb					bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR12_bit)
#define EXTI_IMR_MR11_bb					bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR11_bit)
#define EXTI_IMR_MR10_bb					bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR10_bit)
#define EXTI_IMR_MR9_bb						bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR9_bit)
#define EXTI_IMR_MR8_bb						bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR8_bit)
#define EXTI_IMR_MR7_bb						bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR7_bit)
#define EXTI_IMR_MR6_bb						bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR6_bit)
#define EXTI_IMR_MR5_bb						bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR5_bit)
#define EXTI_IMR_MR4_bb						bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR4_bit)
#define EXTI_IMR_MR3_bb						bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR3_bit)
#define EXTI_IMR_MR2_bb						bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR2_bit)
#define EXTI_IMR_MR1_bb						bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR1_bit)
#define EXTI_IMR_MR0_bb						bitband_t m_BITBAND_PERIPH(&EXTI->IMR, EXTI_IMR_MR0_bit)

/*
+-----------------------------------------------------------------------------+
| EXTI_EMR - Event mask register
+-----------------------------------------------------------------------------+
*/

#define EXTI_EMR_MR18_bit					18
#define EXTI_EMR_MR17_bit					17
#define EXTI_EMR_MR16_bit					16
#define EXTI_EMR_MR15_bit					15
#define EXTI_EMR_MR14_bit					14
#define EXTI_EMR_MR13_bit					13
#define EXTI_EMR_MR12_bit					12
#define EXTI_EMR_MR11_bit					11
#define EXTI_EMR_MR10_bit					10
#define EXTI_EMR_MR9_bit					9
#define EXTI_EMR_MR8_bit					8
#define EXTI_EMR_MR7_bit					7
#define EXTI_EMR_MR6_bit					6
#define EXTI_EMR_MR5_bit					5
#define EXTI_EMR_MR4_bit					4
#define EXTI_EMR_MR3_bit					3
#define EXTI_EMR_MR2_bit					2
#define EXTI_EMR_MR1_bit					1
#define EXTI_EMR_MR0_bit					0

#define EXTI_EMR_MR18_bb					bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR18_bit)
#define EXTI_EMR_MR17_bb					bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR17_bit)
#define EXTI_EMR_MR16_bb					bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR16_bit)
#define EXTI_EMR_MR15_bb					bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR15_bit)
#define EXTI_EMR_MR14_bb					bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR14_bit)
#define EXTI_EMR_MR13_bb					bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR13_bit)
#define EXTI_EMR_MR12_bb					bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR12_bit)
#define EXTI_EMR_MR11_bb					bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR11_bit)
#define EXTI_EMR_MR10_bb					bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR10_bit)
#define EXTI_EMR_MR9_bb						bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR9_bit)
#define EXTI_EMR_MR8_bb						bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR8_bit)
#define EXTI_EMR_MR7_bb						bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR7_bit)
#define EXTI_EMR_MR6_bb						bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR6_bit)
#define EXTI_EMR_MR5_bb						bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR5_bit)
#define EXTI_EMR_MR4_bb						bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR4_bit)
#define EXTI_EMR_MR3_bb						bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR3_bit)
#define EXTI_EMR_MR2_bb						bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR2_bit)
#define EXTI_EMR_MR1_bb						bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR1_bit)
#define EXTI_EMR_MR0_bb						bitband_t m_BITBAND_PERIPH(&EXTI->EMR, EXTI_EMR_MR0_bit)

/*
+-----------------------------------------------------------------------------+
| EXTI_RTSR - Rising trigger selection register
+-----------------------------------------------------------------------------+
*/

#define EXTI_RTSR_TR18_bit					18
#define EXTI_RTSR_TR17_bit					17
#define EXTI_RTSR_TR16_bit					16
#define EXTI_RTSR_TR15_bit					15
#define EXTI_RTSR_TR14_bit					14
#define EXTI_RTSR_TR13_bit					13
#define EXTI_RTSR_TR12_bit					12
#define EXTI_RTSR_TR11_bit					11
#define EXTI_RTSR_TR10_bit					10
#define EXTI_RTSR_TR9_bit					9
#define EXTI_RTSR_TR8_bit					8
#define EXTI_RTSR_TR7_bit					7
#define EXTI_RTSR_TR6_bit					6
#define EXTI_RTSR_TR5_bit					5
#define EXTI_RTSR_TR4_bit					4
#define EXTI_RTSR_TR3_bit					3
#define EXTI_RTSR_TR2_bit					2
#define EXTI_RTSR_TR1_bit					1
#define EXTI_RTSR_TR0_bit					0

#define EXTI_RTSR_TR18_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR18_bit)
#define EXTI_RTSR_TR17_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR17_bit)
#define EXTI_RTSR_TR16_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR16_bit)
#define EXTI_RTSR_TR15_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR15_bit)
#define EXTI_RTSR_TR14_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR14_bit)
#define EXTI_RTSR_TR13_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR13_bit)
#define EXTI_RTSR_TR12_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR12_bit)
#define EXTI_RTSR_TR11_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR11_bit)
#define EXTI_RTSR_TR10_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR10_bit)
#define EXTI_RTSR_TR9_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR9_bit)
#define EXTI_RTSR_TR8_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR8_bit)
#define EXTI_RTSR_TR7_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR7_bit)
#define EXTI_RTSR_TR6_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR6_bit)
#define EXTI_RTSR_TR5_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR5_bit)
#define EXTI_RTSR_TR4_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR4_bit)
#define EXTI_RTSR_TR3_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR3_bit)
#define EXTI_RTSR_TR2_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR2_bit)
#define EXTI_RTSR_TR1_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR1_bit)
#define EXTI_RTSR_TR0_bb					bitband_t m_BITBAND_PERIPH(&EXTI->RTSR, EXTI_RTSR_TR0_bit)

/*
+-----------------------------------------------------------------------------+
| EXTI_FTSR - Falling trigger selection register
+-----------------------------------------------------------------------------+
*/

#define EXTI_FTSR_TR18_bit					18
#define EXTI_FTSR_TR17_bit					17
#define EXTI_FTSR_TR16_bit					16
#define EXTI_FTSR_TR15_bit					15
#define EXTI_FTSR_TR14_bit					14
#define EXTI_FTSR_TR13_bit					13
#define EXTI_FTSR_TR12_bit					12
#define EXTI_FTSR_TR11_bit					11
#define EXTI_FTSR_TR10_bit					10
#define EXTI_FTSR_TR9_bit					9
#define EXTI_FTSR_TR8_bit					8
#define EXTI_FTSR_TR7_bit					7
#define EXTI_FTSR_TR6_bit					6
#define EXTI_FTSR_TR5_bit					5
#define EXTI_FTSR_TR4_bit					4
#define EXTI_FTSR_TR3_bit					3
#define EXTI_FTSR_TR2_bit					2
#define EXTI_FTSR_TR1_bit					1
#define EXTI_FTSR_TR0_bit					0

#define EXTI_FTSR_TR18_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR18_bit)
#define EXTI_FTSR_TR17_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR17_bit)
#define EXTI_FTSR_TR16_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR16_bit)
#define EXTI_FTSR_TR15_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR15_bit)
#define EXTI_FTSR_TR14_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR14_bit)
#define EXTI_FTSR_TR13_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR13_bit)
#define EXTI_FTSR_TR12_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR12_bit)
#define EXTI_FTSR_TR11_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR11_bit)
#define EXTI_FTSR_TR10_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR10_bit)
#define EXTI_FTSR_TR9_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR9_bit)
#define EXTI_FTSR_TR8_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR8_bit)
#define EXTI_FTSR_TR7_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR7_bit)
#define EXTI_FTSR_TR6_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR6_bit)
#define EXTI_FTSR_TR5_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR5_bit)
#define EXTI_FTSR_TR4_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR4_bit)
#define EXTI_FTSR_TR3_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR3_bit)
#define EXTI_FTSR_TR2_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR2_bit)
#define EXTI_FTSR_TR1_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR1_bit)
#define EXTI_FTSR_TR0_bb					bitband_t m_BITBAND_PERIPH(&EXTI->FTSR, EXTI_FTSR_TR0_bit)

/*
+-----------------------------------------------------------------------------+
| EXTI_SWIER - Software interrupt event register
+-----------------------------------------------------------------------------+
*/

#define EXTI_SWIER_SWIER18_bit				18
#define EXTI_SWIER_SWIER17_bit				17
#define EXTI_SWIER_SWIER16_bit				16
#define EXTI_SWIER_SWIER15_bit				15
#define EXTI_SWIER_SWIER14_bit				14
#define EXTI_SWIER_SWIER13_bit				13
#define EXTI_SWIER_SWIER12_bit				12
#define EXTI_SWIER_SWIER11_bit				11
#define EXTI_SWIER_SWIER10_bit				10
#define EXTI_SWIER_SWIER9_bit				9
#define EXTI_SWIER_SWIER8_bit				8
#define EXTI_SWIER_SWIER7_bit				7
#define EXTI_SWIER_SWIER6_bit				6
#define EXTI_SWIER_SWIER5_bit				5
#define EXTI_SWIER_SWIER4_bit				4
#define EXTI_SWIER_SWIER3_bit				3
#define EXTI_SWIER_SWIER2_bit				2
#define EXTI_SWIER_SWIER1_bit				1
#define EXTI_SWIER_SWIER0_bit				0

#define EXTI_SWIER_SWIER18_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER18_bit)
#define EXTI_SWIER_SWIER17_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER17_bit)
#define EXTI_SWIER_SWIER16_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER16_bit)
#define EXTI_SWIER_SWIER15_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER15_bit)
#define EXTI_SWIER_SWIER14_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER14_bit)
#define EXTI_SWIER_SWIER13_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER13_bit)
#define EXTI_SWIER_SWIER12_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER12_bit)
#define EXTI_SWIER_SWIER11_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER11_bit)
#define EXTI_SWIER_SWIER10_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER10_bit)
#define EXTI_SWIER_SWIER9_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER9_bit)
#define EXTI_SWIER_SWIER8_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER8_bit)
#define EXTI_SWIER_SWIER7_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER7_bit)
#define EXTI_SWIER_SWIER6_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER6_bit)
#define EXTI_SWIER_SWIER5_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER5_bit)
#define EXTI_SWIER_SWIER4_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER4_bit)
#define EXTI_SWIER_SWIER3_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER3_bit)
#define EXTI_SWIER_SWIER2_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER2_bit)
#define EXTI_SWIER_SWIER1_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER1_bit)
#define EXTI_SWIER_SWIER0_bb				bitband_t m_BITBAND_PERIPH(&EXTI->SWIER, EXTI_SWIER_SWIER0_bit)

/*
+-----------------------------------------------------------------------------+
| EXTI_PR - Pending register
+-----------------------------------------------------------------------------+
*/

#define EXTI_PR_PR18_bit					18
#define EXTI_PR_PR17_bit					17
#define EXTI_PR_PR16_bit					16
#define EXTI_PR_PR15_bit					15
#define EXTI_PR_PR14_bit					14
#define EXTI_PR_PR13_bit					13
#define EXTI_PR_PR12_bit					12
#define EXTI_PR_PR11_bit					11
#define EXTI_PR_PR10_bit					10
#define EXTI_PR_PR9_bit						9
#define EXTI_PR_PR8_bit						8
#define EXTI_PR_PR7_bit						7
#define EXTI_PR_PR6_bit						6
#define EXTI_PR_PR5_bit						5
#define EXTI_PR_PR4_bit						4
#define EXTI_PR_PR3_bit						3
#define EXTI_PR_PR2_bit						2
#define EXTI_PR_PR1_bit						1
#define EXTI_PR_PR0_bit						0

#define EXTI_PR_PR18_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR18_bit)
#define EXTI_PR_PR17_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR17_bit)
#define EXTI_PR_PR16_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR16_bit)
#define EXTI_PR_PR15_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR15_bit)
#define EXTI_PR_PR14_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR14_bit)
#define EXTI_PR_PR13_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR13_bit)
#define EXTI_PR_PR12_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR12_bit)
#define EXTI_PR_PR11_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR11_bit)
#define EXTI_PR_PR10_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR10_bit)
#define EXTI_PR_PR9_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR9_bit)
#define EXTI_PR_PR8_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR8_bit)
#define EXTI_PR_PR7_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR7_bit)
#define EXTI_PR_PR6_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR6_bit)
#define EXTI_PR_PR5_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR5_bit)
#define EXTI_PR_PR4_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR4_bit)
#define EXTI_PR_PR3_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR3_bit)
#define EXTI_PR_PR2_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR2_bit)
#define EXTI_PR_PR1_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR1_bit)
#define EXTI_PR_PR0_bb						bitband_t m_BITBAND_PERIPH(&EXTI->PR, EXTI_PR_PR0_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_EXTI_H_ */
