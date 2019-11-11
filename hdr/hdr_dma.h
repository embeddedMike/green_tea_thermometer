/** \file hdr_dma.h
 * \brief Header with definition of bits in DMA control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
* chip: STM32F10x
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
******************************************************************************/

#ifndef HDR_DMA_H_
#define HDR_DMA_H_

#include "hdr/hdr_bitband.h"

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| DMA_ISR - DMA interrupt status register
+-----------------------------------------------------------------------------+
*/

#define DMA_ISR_TEIF7_bit					27
#define DMA_ISR_HTIF7_bit					26
#define DMA_ISR_TCIF7_bit					25
#define DMA_ISR_GIF7_bit					24
#define DMA_ISR_TEIF6_bit					23
#define DMA_ISR_HTIF6_bit					22
#define DMA_ISR_TCIF6_bit					21
#define DMA_ISR_GIF6_bit					20
#define DMA_ISR_TEIF5_bit					19
#define DMA_ISR_HTIF5_bit					18
#define DMA_ISR_TCIF5_bit					17
#define DMA_ISR_GIF5_bit					16
#define DMA_ISR_TEIF4_bit					15
#define DMA_ISR_HTIF4_bit					14
#define DMA_ISR_TCIF4_bit					13
#define DMA_ISR_GIF4_bit					12
#define DMA_ISR_TEIF3_bit					11
#define DMA_ISR_HTIF3_bit					10
#define DMA_ISR_TCIF3_bit					9
#define DMA_ISR_GIF3_bit					8
#define DMA_ISR_TEIF2_bit					7
#define DMA_ISR_HTIF2_bit					6
#define DMA_ISR_TCIF2_bit					5
#define DMA_ISR_GIF2_bit					4
#define DMA_ISR_TEIF1_bit					3
#define DMA_ISR_HTIF1_bit					2
#define DMA_ISR_TCIF1_bit					1
#define DMA_ISR_GIF1_bit					0

#define DMA1_ISR_TEIF7_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TEIF7_bit)
#define DMA1_ISR_HTIF7_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_HTIF7_bit)
#define DMA1_ISR_TCIF7_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TCIF7_bit)
#define DMA1_ISR_GIF7_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_GIF7_bit)
#define DMA1_ISR_TEIF6_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TEIF6_bit)
#define DMA1_ISR_HTIF6_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_HTIF6_bit)
#define DMA1_ISR_TCIF6_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TCIF6_bit)
#define DMA1_ISR_GIF6_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_GIF6_bit)
#define DMA1_ISR_TEIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TEIF5_bit)
#define DMA1_ISR_HTIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_HTIF5_bit)
#define DMA1_ISR_TCIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TCIF5_bit)
#define DMA1_ISR_GIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_GIF5_bit)
#define DMA1_ISR_TEIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TEIF4_bit)
#define DMA1_ISR_HTIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_HTIF4_bit)
#define DMA1_ISR_TCIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TCIF4_bit)
#define DMA1_ISR_GIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_GIF4_bit)
#define DMA1_ISR_TEIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TEIF3_bit)
#define DMA1_ISR_HTIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_HTIF3_bit)
#define DMA1_ISR_TCIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TCIF3_bit)
#define DMA1_ISR_GIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_GIF3_bit)
#define DMA1_ISR_TEIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TEIF2_bit)
#define DMA1_ISR_HTIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_HTIF2_bit)
#define DMA1_ISR_TCIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TCIF2_bit)
#define DMA1_ISR_GIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_GIF2_bit)
#define DMA1_ISR_TEIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TEIF1_bit)
#define DMA1_ISR_HTIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_HTIF1_bit)
#define DMA1_ISR_TCIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_TCIF1_bit)
#define DMA1_ISR_GIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA1->ISR, DMA_ISR_GIF1_bit)

#define DMA2_ISR_TEIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_TEIF5_bit)
#define DMA2_ISR_HTIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_HTIF5_bit)
#define DMA2_ISR_TCIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_TCIF5_bit)
#define DMA2_ISR_GIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_GIF5_bit)
#define DMA2_ISR_TEIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_TEIF4_bit)
#define DMA2_ISR_HTIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_HTIF4_bit)
#define DMA2_ISR_TCIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_TCIF4_bit)
#define DMA2_ISR_GIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_GIF4_bit)
#define DMA2_ISR_TEIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_TEIF3_bit)
#define DMA2_ISR_HTIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_HTIF3_bit)
#define DMA2_ISR_TCIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_TCIF3_bit)
#define DMA2_ISR_GIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_GIF3_bit)
#define DMA2_ISR_TEIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_TEIF2_bit)
#define DMA2_ISR_HTIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_HTIF2_bit)
#define DMA2_ISR_TCIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_TCIF2_bit)
#define DMA2_ISR_GIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_GIF2_bit)
#define DMA2_ISR_TEIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_TEIF1_bit)
#define DMA2_ISR_HTIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_HTIF1_bit)
#define DMA2_ISR_TCIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_TCIF1_bit)
#define DMA2_ISR_GIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA2->ISR, DMA_ISR_GIF1_bit)

/*
+-----------------------------------------------------------------------------+
| DMA_IFCR - DMA interrupt flag clear register
+-----------------------------------------------------------------------------+
*/

#define DMA_IFCR_CTEIF7_bit					27
#define DMA_IFCR_CHTIF7_bit					26
#define DMA_IFCR_CTCIF7_bit					25
#define DMA_IFCR_CGIF7_bit					24
#define DMA_IFCR_CTEIF6_bit					23
#define DMA_IFCR_CHTIF6_bit					22
#define DMA_IFCR_CTCIF6_bit					21
#define DMA_IFCR_CGIF6_bit					20
#define DMA_IFCR_CTEIF5_bit					19
#define DMA_IFCR_CHTIF5_bit					18
#define DMA_IFCR_CTCIF5_bit					17
#define DMA_IFCR_CGIF5_bit					16
#define DMA_IFCR_CTEIF4_bit					15
#define DMA_IFCR_CHTIF4_bit					14
#define DMA_IFCR_CTCIF4_bit					13
#define DMA_IFCR_CGIF4_bit					12
#define DMA_IFCR_CTEIF3_bit					11
#define DMA_IFCR_CHTIF3_bit					10
#define DMA_IFCR_CTCIF3_bit					9
#define DMA_IFCR_CGIF3_bit					8
#define DMA_IFCR_CTEIF2_bit					7
#define DMA_IFCR_CHTIF2_bit					6
#define DMA_IFCR_CTCIF2_bit					5
#define DMA_IFCR_CGIF2_bit					4
#define DMA_IFCR_CTEIF1_bit					3
#define DMA_IFCR_CHTIF1_bit					2
#define DMA_IFCR_CTCIF1_bit					1
#define DMA_IFCR_CGIF1_bit					0

#define DMA1_IFCR_CTEIF7_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTEIF7_bit)
#define DMA1_IFCR_CHTIF7_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CHTIF7_bit)
#define DMA1_IFCR_CTCIF7_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTCIF7_bit)
#define DMA1_IFCR_CGIF7_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CGIF7_bit)
#define DMA1_IFCR_CTEIF6_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTEIF6_bit)
#define DMA1_IFCR_CHTIF6_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CHTIF6_bit)
#define DMA1_IFCR_CTCIF6_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTCIF6_bit)
#define DMA1_IFCR_CGIF6_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CGIF6_bit)
#define DMA1_IFCR_CTEIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTEIF5_bit)
#define DMA1_IFCR_CHTIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CHTIF5_bit)
#define DMA1_IFCR_CTCIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTCIF5_bit)
#define DMA1_IFCR_CGIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CGIF5_bit)
#define DMA1_IFCR_CTEIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTEIF4_bit)
#define DMA1_IFCR_CHTIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CHTIF4_bit)
#define DMA1_IFCR_CTCIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTCIF4_bit)
#define DMA1_IFCR_CGIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CGIF4_bit)
#define DMA1_IFCR_CTEIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTEIF3_bit)
#define DMA1_IFCR_CHTIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CHTIF3_bit)
#define DMA1_IFCR_CTCIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTCIF3_bit)
#define DMA1_IFCR_CGIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CGIF3_bit)
#define DMA1_IFCR_CTEIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTEIF2_bit)
#define DMA1_IFCR_CHTIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CHTIF2_bit)
#define DMA1_IFCR_CTCIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTCIF2_bit)
#define DMA1_IFCR_CGIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CGIF2_bit)
#define DMA1_IFCR_CTEIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTEIF1_bit)
#define DMA1_IFCR_CHTIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CHTIF1_bit)
#define DMA1_IFCR_CTCIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CTCIF1_bit)
#define DMA1_IFCR_CGIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA1->IFCR, DMA_IFCR_CGIF1_bit)

#define DMA2_IFCR_CTEIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CTEIF5_bit)
#define DMA2_IFCR_CHTIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CHTIF5_bit)
#define DMA2_IFCR_CTCIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CTCIF5_bit)
#define DMA2_IFCR_CGIF5_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CGIF5_bit)
#define DMA2_IFCR_CTEIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CTEIF4_bit)
#define DMA2_IFCR_CHTIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CHTIF4_bit)
#define DMA2_IFCR_CTCIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CTCIF4_bit)
#define DMA2_IFCR_CGIF4_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CGIF4_bit)
#define DMA2_IFCR_CTEIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CTEIF3_bit)
#define DMA2_IFCR_CHTIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CHTIF3_bit)
#define DMA2_IFCR_CTCIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CTCIF3_bit)
#define DMA2_IFCR_CGIF3_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CGIF3_bit)
#define DMA2_IFCR_CTEIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CTEIF2_bit)
#define DMA2_IFCR_CHTIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CHTIF2_bit)
#define DMA2_IFCR_CTCIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CTCIF2_bit)
#define DMA2_IFCR_CGIF2_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CGIF2_bit)
#define DMA2_IFCR_CTEIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CTEIF1_bit)
#define DMA2_IFCR_CHTIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CHTIF1_bit)
#define DMA2_IFCR_CTCIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CTCIF1_bit)
#define DMA2_IFCR_CGIF1_bb					bitband_t m_BITBAND_PERIPH(&DMA2->IFCR, DMA_IFCR_CGIF1_bit)

/*
+-----------------------------------------------------------------------------+
| DMA_CCRx - DMA channel x configuration register
+-----------------------------------------------------------------------------+
*/

#define DMA_CCR_MEM2MEM_bit					14
#define DMA_CCR_PL_bit						12
#define DMA_CCR_PL_0_bit					12
#define DMA_CCR_PL_1_bit					13
#define DMA_CCR_MSIZE_bit					10
#define DMA_CCR_MSIZE_0_bit					10
#define DMA_CCR_MSIZE_1_bit					11
#define DMA_CCR_PSIZE_bit					8
#define DMA_CCR_PSIZE_0_bit					8
#define DMA_CCR_PSIZE_1_bit					9
#define DMA_CCR_MINC_bit					7
#define DMA_CCR_PINC_bit					6
#define DMA_CCR_CIRC_bit					5
#define DMA_CCR_DIR_bit						4
#define DMA_CCR_TEIE_bit					3
#define DMA_CCR_HTIE_bit					2
#define DMA_CCR_TCIE_bit					1
#define DMA_CCR_EN_bit						0

#define DMA_CCR_MEM2MEM						(1 << DMA_CCR_MEM2MEM_bit)
#define DMA_CCR_PL_0						(1 << DMA_CCR_PL_0_bit)
#define DMA_CCR_PL_1						(1 << DMA_CCR_PL_1_bit)
#define DMA_CCR_MSIZE_0						(1 << DMA_CCR_MSIZE_0_bit)
#define DMA_CCR_MSIZE_1						(1 << DMA_CCR_MSIZE_1_bit)
#define DMA_CCR_PSIZE_0						(1 << DMA_CCR_PSIZE_0_bit)
#define DMA_CCR_PSIZE_1						(1 << DMA_CCR_PSIZE_1_bit)
#define DMA_CCR_MINC						(1 << DMA_CCR_MINC_bit)
#define DMA_CCR_PINC						(1 << DMA_CCR_PINC_bit)
#define DMA_CCR_CIRC						(1 << DMA_CCR_CIRC_bit)
#define DMA_CCR_DIR							(1 << DMA_CCR_DIR_bit)
#define DMA_CCR_TEIE						(1 << DMA_CCR_TEIE_bit)
#define DMA_CCR_HTIE						(1 << DMA_CCR_HTIE_bit)
#define DMA_CCR_TCIE						(1 << DMA_CCR_TCIE_bit)
#define DMA_CCR_EN							(1 << DMA_CCR_EN_bit)


#define DMA_CCR_PL_LOW_value				0
#define DMA_CCR_PL_MED_value				1
#define DMA_CCR_PL_HIGH_value				2
#define DMA_CCR_PL_VHIGH_value				3
#define DMA_CCR_PL_mask						3

#define DMA_CCR_xSIZE_8_value				0
#define DMA_CCR_xSIZE_16_value				1
#define DMA_CCR_xSIZE_32_value				2
#define DMA_CCR_xSIZE_mask					3

#define DMA_CCR_PL_LOW						(DMA_CCR_PL_LOW_value << DMA_CCR_PL_bit)
#define DMA_CCR_PL_MED						(DMA_CCR_PL_MED_value << DMA_CCR_PL_bit)
#define DMA_CCR_PL_HIGH						(DMA_CCR_PL_HIGH_value << DMA_CCR_PL_bit)
#define DMA_CCR_PL_VHIGH					(DMA_CCR_PL_VHIGH_value << DMA_CCR_PL_bit)

#define DMA_CCR_xSIZE_8						(DMA_CCR_xSIZE_8_value << DMA_CCR_xSIZE_bit)
#define DMA_CCR_xSIZE_16					(DMA_CCR_xSIZE_16_value << DMA_CCR_xSIZE_bit)
#define DMA_CCR_xSIZE_32					(DMA_CCR_xSIZE_32_value << DMA_CCR_xSIZE_bit)

#define DMA1_Channel1_CCR_MEM2MEM_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA1_Channel1_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_PL_0_bit)
#define DMA1_Channel1_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_PL_1_bit)
#define DMA1_Channel1_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA1_Channel1_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA1_Channel1_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA1_Channel1_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA1_Channel1_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_MINC_bit)
#define DMA1_Channel1_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_PINC_bit)
#define DMA1_Channel1_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_CIRC_bit)
#define DMA1_Channel1_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_DIR_bit)
#define DMA1_Channel1_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_TEIE_bit)
#define DMA1_Channel1_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_HTIE_bit)
#define DMA1_Channel1_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_TCIE_bit)
#define DMA1_Channel1_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA1_Channel1->CCR, DMA_CCR_EN_bit)

#define DMA1_Channel2_CCR_MEM2MEM_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA1_Channel2_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_PL_0_bit)
#define DMA1_Channel2_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_PL_1_bit)
#define DMA1_Channel2_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA1_Channel2_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA1_Channel2_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA1_Channel2_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA1_Channel2_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_MINC_bit)
#define DMA1_Channel2_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_PINC_bit)
#define DMA1_Channel2_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_CIRC_bit)
#define DMA1_Channel2_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_DIR_bit)
#define DMA1_Channel2_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_TEIE_bit)
#define DMA1_Channel2_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_HTIE_bit)
#define DMA1_Channel2_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_TCIE_bit)
#define DMA1_Channel2_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA1_Channel2->CCR, DMA_CCR_EN_bit)

#define DMA1_Channel3_CCR_MEM2MEM_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA1_Channel3_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_PL_0_bit)
#define DMA1_Channel3_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_PL_1_bit)
#define DMA1_Channel3_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA1_Channel3_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA1_Channel3_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA1_Channel3_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA1_Channel3_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_MINC_bit)
#define DMA1_Channel3_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_PINC_bit)
#define DMA1_Channel3_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_CIRC_bit)
#define DMA1_Channel3_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_DIR_bit)
#define DMA1_Channel3_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_TEIE_bit)
#define DMA1_Channel3_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_HTIE_bit)
#define DMA1_Channel3_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_TCIE_bit)
#define DMA1_Channel3_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA1_Channel3->CCR, DMA_CCR_EN_bit)

#define DMA1_Channel4_CCR_MEM2MEM_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA1_Channel4_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_PL_0_bit)
#define DMA1_Channel4_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_PL_1_bit)
#define DMA1_Channel4_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA1_Channel4_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA1_Channel4_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA1_Channel4_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA1_Channel4_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_MINC_bit)
#define DMA1_Channel4_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_PINC_bit)
#define DMA1_Channel4_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_CIRC_bit)
#define DMA1_Channel4_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_DIR_bit)
#define DMA1_Channel4_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_TEIE_bit)
#define DMA1_Channel4_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_HTIE_bit)
#define DMA1_Channel4_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_TCIE_bit)
#define DMA1_Channel4_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA1_Channel4->CCR, DMA_CCR_EN_bit)

#define DMA1_Channel5_CCR_MEM2MEM_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA1_Channel5_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_PL_0_bit)
#define DMA1_Channel5_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_PL_1_bit)
#define DMA1_Channel5_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA1_Channel5_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA1_Channel5_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA1_Channel5_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA1_Channel5_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_MINC_bit)
#define DMA1_Channel5_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_PINC_bit)
#define DMA1_Channel5_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_CIRC_bit)
#define DMA1_Channel5_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_DIR_bit)
#define DMA1_Channel5_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_TEIE_bit)
#define DMA1_Channel5_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_HTIE_bit)
#define DMA1_Channel5_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_TCIE_bit)
#define DMA1_Channel5_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA1_Channel5->CCR, DMA_CCR_EN_bit)

#define DMA1_Channel6_CCR_MEM2MEM_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA1_Channel6_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_PL_0_bit)
#define DMA1_Channel6_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_PL_1_bit)
#define DMA1_Channel6_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA1_Channel6_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA1_Channel6_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA1_Channel6_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA1_Channel6_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_MINC_bit)
#define DMA1_Channel6_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_PINC_bit)
#define DMA1_Channel6_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_CIRC_bit)
#define DMA1_Channel6_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_DIR_bit)
#define DMA1_Channel6_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_TEIE_bit)
#define DMA1_Channel6_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_HTIE_bit)
#define DMA1_Channel6_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_TCIE_bit)
#define DMA1_Channel6_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA1_Channel6->CCR, DMA_CCR_EN_bit)

#define DMA1_Channel7_CCR_MEM2MEM_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA1_Channel7_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_PL_0_bit)
#define DMA1_Channel7_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_PL_1_bit)
#define DMA1_Channel7_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA1_Channel7_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA1_Channel7_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA1_Channel7_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA1_Channel7_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_MINC_bit)
#define DMA1_Channel7_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_PINC_bit)
#define DMA1_Channel7_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_CIRC_bit)
#define DMA1_Channel7_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_DIR_bit)
#define DMA1_Channel7_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_TEIE_bit)
#define DMA1_Channel7_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_HTIE_bit)
#define DMA1_Channel7_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_TCIE_bit)
#define DMA1_Channel7_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA1_Channel7->CCR, DMA_CCR_EN_bit)

#define DMA2_Channel1_CCR_MEM2MEM_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA2_Channel1_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_PL_0_bit)
#define DMA2_Channel1_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_PL_1_bit)
#define DMA2_Channel1_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA2_Channel1_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA2_Channel1_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA2_Channel1_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA2_Channel1_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_MINC_bit)
#define DMA2_Channel1_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_PINC_bit)
#define DMA2_Channel1_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_CIRC_bit)
#define DMA2_Channel1_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_DIR_bit)
#define DMA2_Channel1_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_TEIE_bit)
#define DMA2_Channel1_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_HTIE_bit)
#define DMA2_Channel1_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_TCIE_bit)
#define DMA2_Channel1_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA2_Channel1->CCR, DMA_CCR_EN_bit)

#define DMA2_Channel2_CCR_MEM2MEM_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA2_Channel2_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_PL_0_bit)
#define DMA2_Channel2_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_PL_1_bit)
#define DMA2_Channel2_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA2_Channel2_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA2_Channel2_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA2_Channel2_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA2_Channel2_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_MINC_bit)
#define DMA2_Channel2_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_PINC_bit)
#define DMA2_Channel2_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_CIRC_bit)
#define DMA2_Channel2_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_DIR_bit)
#define DMA2_Channel2_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_TEIE_bit)
#define DMA2_Channel2_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_HTIE_bit)
#define DMA2_Channel2_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_TCIE_bit)
#define DMA2_Channel2_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA2_Channel2->CCR, DMA_CCR_EN_bit)

#define DMA2_Channel3_CCR_MEM2MEM_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA2_Channel3_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_PL_0_bit)
#define DMA2_Channel3_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_PL_1_bit)
#define DMA2_Channel3_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA2_Channel3_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA2_Channel3_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA2_Channel3_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA2_Channel3_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_MINC_bit)
#define DMA2_Channel3_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_PINC_bit)
#define DMA2_Channel3_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_CIRC_bit)
#define DMA2_Channel3_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_DIR_bit)
#define DMA2_Channel3_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_TEIE_bit)
#define DMA2_Channel3_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_HTIE_bit)
#define DMA2_Channel3_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_TCIE_bit)
#define DMA2_Channel3_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA2_Channel3->CCR, DMA_CCR_EN_bit)

#define DMA2_Channel4_CCR_MEM2MEM_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA2_Channel4_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_PL_0_bit)
#define DMA2_Channel4_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_PL_1_bit)
#define DMA2_Channel4_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA2_Channel4_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA2_Channel4_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA2_Channel4_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA2_Channel4_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_MINC_bit)
#define DMA2_Channel4_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_PINC_bit)
#define DMA2_Channel4_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_CIRC_bit)
#define DMA2_Channel4_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_DIR_bit)
#define DMA2_Channel4_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_TEIE_bit)
#define DMA2_Channel4_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_HTIE_bit)
#define DMA2_Channel4_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_TCIE_bit)
#define DMA2_Channel4_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA2_Channel4->CCR, DMA_CCR_EN_bit)

#define DMA2_Channel5_CCR_MEM2MEM_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_MEM2MEM_bit)
#define DMA2_Channel5_CCR_PL_0_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_PL_0_bit)
#define DMA2_Channel5_CCR_PL_1_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_PL_1_bit)
#define DMA2_Channel5_CCR_MSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_MSIZE_0_bit)
#define DMA2_Channel5_CCR_MSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_MSIZE_1_bit)
#define DMA2_Channel5_CCR_PSIZE_0_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_PSIZE_0_bit)
#define DMA2_Channel5_CCR_PSIZE_1_bb		bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_PSIZE_1_bit)
#define DMA2_Channel5_CCR_MINC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_MINC_bit)
#define DMA2_Channel5_CCR_PINC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_PINC_bit)
#define DMA2_Channel5_CCR_CIRC_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_CIRC_bit)
#define DMA2_Channel5_CCR_DIR_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_DIR_bit)
#define DMA2_Channel5_CCR_TEIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_TEIE_bit)
#define DMA2_Channel5_CCR_HTIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_HTIE_bit)
#define DMA2_Channel5_CCR_TCIE_bb			bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_TCIE_bit)
#define DMA2_Channel5_CCR_EN_bb				bitband_t m_BITBAND_PERIPH(DMA2_Channel5->CCR, DMA_CCR_EN_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_DMA_H_ */
