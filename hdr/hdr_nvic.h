/** \file hdr_nvic.h
 * \brief Header with definition of bits in NVIC control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
* chip: STM32F10x
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
******************************************************************************/

#ifndef HDR_NVIC_H_
#define HDR_NVIC_H_

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

#define NVIC_WWDG_bit						0
#define NVIC_PVD_bit						1
#define NVIC_TAMPER_bit						2
#define NVIC_RTC_bit						3
#define NVIC_FLASH_bit						4
#define NVIC_RCC_bit						5
#define NVIC_EXTI0_bit						6
#define NVIC_EXTI1_bit						7
#define NVIC_EXTI2_bit						8
#define NVIC_EXTI3_bit						9
#define NVIC_EXTI4_bit						10
#define NVIC_DMA1_Channel1_bit				11
#define NVIC_DMA1_Channel2_bit				12
#define NVIC_DMA1_Channel3_bit				13
#define NVIC_DMA1_Channel4_bit				14
#define NVIC_DMA1_Channel5_bit				15
#define NVIC_DMA1_Channel6_bit				16
#define NVIC_DMA1_Channel7_bit				17
#define NVIC_ADC1_2_bit						18
#define NVIC_USB_HP_CAN_TX_bit				19
#define NVIC_USB_LP_CAN_RX0_bit				20
#define NVIC_CAN_RX1_bit					21
#define NVIC_CAN_SCE_bit					22
#define NVIC_EXTI9_5_bit					23
#define NVIC_TIM1_BRK_bit					24
#define NVIC_TIM1_UP_bit					25
#define NVIC_TIM1_TRG_COM_bit				26
#define NVIC_TIM1_CC_bit					27
#define NVIC_TIM2_bit						28
#define NVIC_TIM3_bit						29
#define NVIC_TIM4_bit						30
#define NVIC_I2C1_EV_bit					31

#define NVIC_I2C1_ER_bit					0
#define NVIC_I2C2_EV_bit					1
#define NVIC_I2C2_ER_bit					2
#define NVIC_SPI1_bit						3
#define NVIC_SPI2_bit						4
#define NVIC_USART1_bit						5
#define NVIC_USART2_bit						6
#define NVIC_USART3_bit						7
#define NVIC_EXTI15_10_bit					8
#define NVIC_RTCAlarm_bit					9
#define NVIC_USBWakeup_bit					10
#define NVIC_TIM8_BRK_bit					11
#define NVIC_TIM8_UP_bit					12
#define NVIC_TIM8_TRG_COM_bit				13
#define NVIC_TIM8_CC_bit					14
#define NVIC_ADC3_bit						15
#define NVIC_FSMC_bit						16
#define NVIC_SDIO_bit						17
#define NVIC_TIM5_bit						18
#define NVIC_SPI3_bit						19
#define NVIC_UART4_bit						20
#define NVIC_UART5_bit						21
#define NVIC_TIM6_bit						22
#define NVIC_TIM7_bit						23
#define NVIC_DMA2_Channel1_bit				24
#define NVIC_DMA2_Channel2_bit				25
#define NVIC_DMA2_Channel3_bit				26
#define NVIC_DMA2_Channel4_5_bit			27

/*
+-----------------------------------------------------------------------------+
| NVIC_ISER0 - Interrupt Set-Enable Register 0
+-----------------------------------------------------------------------------+
*/

#define NVIC_ISER0_I2C1_EV					(1 << NVIC_I2C1_EV_bit)
#define NVIC_ISER0_TIM4						(1 << NVIC_TIM4_bit)
#define NVIC_ISER0_TIM3						(1 << NVIC_TIM3_bit)
#define NVIC_ISER0_TIM2						(1 << NVIC_TIM2_bit)
#define NVIC_ISER0_TIM1_CC					(1 << NVIC_TIM1_CC_bit)
#define NVIC_ISER0_TIM1_TRG_COM				(1 << NVIC_TIM1_TRG_COM_bit)
#define NVIC_ISER0_TIM1_UP					(1 << NVIC_TIM1_UP_bit)
#define NVIC_ISER0_TIM1_BRK					(1 << NVIC_TIM1_BRK_bit)
#define NVIC_ISER0_EXTI9_5					(1 << NVIC_EXTI9_5_bit)
#define NVIC_ISER0_CAN_SCE					(1 << NVIC_CAN_SCE_bit)
#define NVIC_ISER0_CAN_RX1					(1 << NVIC_CAN_RX1_bit)
#define NVIC_ISER0_USB_LP_CAN_RX0			(1 << NVIC_USB_LP_CAN_RX0_bit)
#define NVIC_ISER0_USB_HP_CAN_TX			(1 << NVIC_USB_HP_CAN_TX_bit)
#define NVIC_ISER0_ADC1_2					(1 << NVIC_ADC1_2_bit)
#define NVIC_ISER0_DMA1_Channel7			(1 << NVIC_DMA1_Channel7_bit)
#define NVIC_ISER0_DMA1_Channel6			(1 << NVIC_DMA1_Channel6_bit)
#define NVIC_ISER0_DMA1_Channel5			(1 << NVIC_DMA1_Channel5_bit)
#define NVIC_ISER0_DMA1_Channel4			(1 << NVIC_DMA1_Channel4_bit)
#define NVIC_ISER0_DMA1_Channel3			(1 << NVIC_DMA1_Channel3_bit)
#define NVIC_ISER0_DMA1_Channel2			(1 << NVIC_DMA1_Channel2_bit)
#define NVIC_ISER0_DMA1_Channel1			(1 << NVIC_DMA1_Channel1_bit)
#define NVIC_ISER0_EXTI4					(1 << NVIC_EXTI4_bit)
#define NVIC_ISER0_EXTI3					(1 << NVIC_EXTI3_bit)
#define NVIC_ISER0_EXTI2					(1 << NVIC_EXTI2_bit)
#define NVIC_ISER0_EXTI1					(1 << NVIC_EXTI1_bit)
#define NVIC_ISER0_EXTI0					(1 << NVIC_EXTI0_bit)
#define NVIC_ISER0_RCC						(1 << NVIC_RCC_bit)
#define NVIC_ISER0_FLASH					(1 << NVIC_FLASH_bit)
#define NVIC_ISER0_RTC						(1 << NVIC_RTC_bit)
#define NVIC_ISER0_TAMPER					(1 << NVIC_TAMPER_bit)
#define NVIC_ISER0_PVD						(1 << NVIC_PVD_bit)
#define NVIC_ISER0_WWDG						(1 << NVIC_WWDG_bit)

/*
+-----------------------------------------------------------------------------+
| NVIC_ISER1 - Interrupt Set-Enable Register 1
+-----------------------------------------------------------------------------+
*/

#define NVIC_ISER1_DMA2_Channel4_5			(1 << NVIC_DMA2_Channel4_5_bit)
#define NVIC_ISER1_DMA2_Channel3			(1 << NVIC_DMA2_Channel3_bit)
#define NVIC_ISER1_DMA2_Channel2			(1 << NVIC_DMA2_Channel2_bit)
#define NVIC_ISER1_DMA2_Channel1			(1 << NVIC_DMA2_Channel1_bit)
#define NVIC_ISER1_TIM7						(1 << NVIC_TIM7_bit)
#define NVIC_ISER1_TIM6						(1 << NVIC_TIM6_bit)
#define NVIC_ISER1_UART5					(1 << NVIC_UART5_bit)
#define NVIC_ISER1_UART4					(1 << NVIC_UART4_bit)
#define NVIC_ISER1_SPI3						(1 << NVIC_SPI3_bit)
#define NVIC_ISER1_TIM5						(1 << NVIC_TIM5_bit)
#define NVIC_ISER1_SDIO						(1 << NVIC_SDIO_bit)
#define NVIC_ISER1_FSMC						(1 << NVIC_FSMC_bit)
#define NVIC_ISER1_ADC3						(1 << NVIC_ADC3_bit)
#define NVIC_ISER1_TIM8_CC					(1 << NVIC_TIM8_CC_bit)
#define NVIC_ISER1_TIM8_TRG_COM				(1 << NVIC_TIM8_TRG_COM_bit)
#define NVIC_ISER1_TIM8_UP					(1 << NVIC_TIM8_UP_bit)
#define NVIC_ISER1_TIM8_BRK					(1 << NVIC_TIM8_BRK_bit)
#define NVIC_ISER1_USBWakeup				(1 << NVIC_USBWakeup_bit)
#define NVIC_ISER1_RTCAlarm					(1 << NVIC_RTCAlarm_bit)
#define NVIC_ISER1_EXTI15_10				(1 << NVIC_EXTI15_10_bit)
#define NVIC_ISER1_USART3					(1 << NVIC_USART3_bit)
#define NVIC_ISER1_USART2					(1 << NVIC_USART2_bit)
#define NVIC_ISER1_USART1					(1 << NVIC_USART1_bit)
#define NVIC_ISER1_SPI2						(1 << NVIC_SPI2_bit)
#define NVIC_ISER1_SPI1						(1 << NVIC_SPI1_bit)
#define NVIC_ISER1_I2C2_ER					(1 << NVIC_I2C2_ER_bit)
#define NVIC_ISER1_I2C2_EV					(1 << NVIC_I2C2_EV_bit)
#define NVIC_ISER1_I2C1_ER					(1 << NVIC_I2C1_ER_bit)

/*
+-----------------------------------------------------------------------------+
| NVIC_ICER0 - Interrupt Clear-Enable Register 0
+-----------------------------------------------------------------------------+
*/

#define NVIC_ICER0_I2C1_EV					(1 << NVIC_I2C1_EV_bit)
#define NVIC_ICER0_TIM4						(1 << NVIC_TIM4_bit)
#define NVIC_ICER0_TIM3						(1 << NVIC_TIM3_bit)
#define NVIC_ICER0_TIM2						(1 << NVIC_TIM2_bit)
#define NVIC_ICER0_TIM1_CC					(1 << NVIC_TIM1_CC_bit)
#define NVIC_ICER0_TIM1_TRG_COM				(1 << NVIC_TIM1_TRG_COM_bit)
#define NVIC_ICER0_TIM1_UP					(1 << NVIC_TIM1_UP_bit)
#define NVIC_ICER0_TIM1_BRK					(1 << NVIC_TIM1_BRK_bit)
#define NVIC_ICER0_EXTI9_5					(1 << NVIC_EXTI9_5_bit)
#define NVIC_ICER0_CAN_SCE					(1 << NVIC_CAN_SCE_bit)
#define NVIC_ICER0_CAN_RX1					(1 << NVIC_CAN_RX1_bit)
#define NVIC_ICER0_USB_LP_CAN_RX0			(1 << NVIC_USB_LP_CAN_RX0_bit)
#define NVIC_ICER0_USB_HP_CAN_TX			(1 << NVIC_USB_HP_CAN_TX_bit)
#define NVIC_ICER0_ADC1_2					(1 << NVIC_ADC1_2_bit)
#define NVIC_ICER0_DMA1_Channel7			(1 << NVIC_DMA1_Channel7_bit)
#define NVIC_ICER0_DMA1_Channel6			(1 << NVIC_DMA1_Channel6_bit)
#define NVIC_ICER0_DMA1_Channel5			(1 << NVIC_DMA1_Channel5_bit)
#define NVIC_ICER0_DMA1_Channel4			(1 << NVIC_DMA1_Channel4_bit)
#define NVIC_ICER0_DMA1_Channel3			(1 << NVIC_DMA1_Channel3_bit)
#define NVIC_ICER0_DMA1_Channel2			(1 << NVIC_DMA1_Channel2_bit)
#define NVIC_ICER0_DMA1_Channel1			(1 << NVIC_DMA1_Channel1_bit)
#define NVIC_ICER0_EXTI4					(1 << NVIC_EXTI4_bit)
#define NVIC_ICER0_EXTI3					(1 << NVIC_EXTI3_bit)
#define NVIC_ICER0_EXTI2					(1 << NVIC_EXTI2_bit)
#define NVIC_ICER0_EXTI1					(1 << NVIC_EXTI1_bit)
#define NVIC_ICER0_EXTI0					(1 << NVIC_EXTI0_bit)
#define NVIC_ICER0_RCC						(1 << NVIC_RCC_bit)
#define NVIC_ICER0_FLASH					(1 << NVIC_FLASH_bit)
#define NVIC_ICER0_RTC						(1 << NVIC_RTC_bit)
#define NVIC_ICER0_TAMPER					(1 << NVIC_TAMPER_bit)
#define NVIC_ICER0_PVD						(1 << NVIC_PVD_bit)
#define NVIC_ICER0_WWDG						(1 << NVIC_WWDG_bit)

/*
+-----------------------------------------------------------------------------+
| NVIC_ICER1 - Interrupt Clear-Enable Register 1
+-----------------------------------------------------------------------------+
*/

#define NVIC_ICER1_DMA2_Channel4_5			(1 << NVIC_DMA2_Channel4_5_bit)
#define NVIC_ICER1_DMA2_Channel3			(1 << NVIC_DMA2_Channel3_bit)
#define NVIC_ICER1_DMA2_Channel2			(1 << NVIC_DMA2_Channel2_bit)
#define NVIC_ICER1_DMA2_Channel1			(1 << NVIC_DMA2_Channel1_bit)
#define NVIC_ICER1_TIM7						(1 << NVIC_TIM7_bit)
#define NVIC_ICER1_TIM6						(1 << NVIC_TIM6_bit)
#define NVIC_ICER1_UART5					(1 << NVIC_UART5_bit)
#define NVIC_ICER1_UART4					(1 << NVIC_UART4_bit)
#define NVIC_ICER1_SPI3						(1 << NVIC_SPI3_bit)
#define NVIC_ICER1_TIM5						(1 << NVIC_TIM5_bit)
#define NVIC_ICER1_SDIO						(1 << NVIC_SDIO_bit)
#define NVIC_ICER1_FSMC						(1 << NVIC_FSMC_bit)
#define NVIC_ICER1_ADC3						(1 << NVIC_ADC3_bit)
#define NVIC_ICER1_TIM8_CC					(1 << NVIC_TIM8_CC_bit)
#define NVIC_ICER1_TIM8_TRG_COM				(1 << NVIC_TIM8_TRG_COM_bit)
#define NVIC_ICER1_TIM8_UP					(1 << NVIC_TIM8_UP_bit)
#define NVIC_ICER1_TIM8_BRK					(1 << NVIC_TIM8_BRK_bit)
#define NVIC_ICER1_USBWakeup				(1 << NVIC_USBWakeup_bit)
#define NVIC_ICER1_RTCAlarm					(1 << NVIC_RTCAlarm_bit)
#define NVIC_ICER1_EXTI15_10				(1 << NVIC_EXTI15_10_bit)
#define NVIC_ICER1_USART3					(1 << NVIC_USART3_bit)
#define NVIC_ICER1_USART2					(1 << NVIC_USART2_bit)
#define NVIC_ICER1_USART1					(1 << NVIC_USART1_bit)
#define NVIC_ICER1_SPI2						(1 << NVIC_SPI2_bit)
#define NVIC_ICER1_SPI1						(1 << NVIC_SPI1_bit)
#define NVIC_ICER1_I2C2_ER					(1 << NVIC_I2C2_ER_bit)
#define NVIC_ICER1_I2C2_EV					(1 << NVIC_I2C2_EV_bit)
#define NVIC_ICER1_I2C1_ER					(1 << NVIC_I2C1_ER_bit)

/*
+-----------------------------------------------------------------------------+
| NVIC_ISPR0 - Interrupt Set-Pending Register 0
+-----------------------------------------------------------------------------+
*/

#define NVIC_ISPR0_I2C1_EV					(1 << NVIC_I2C1_EV_bit)
#define NVIC_ISPR0_TIM4						(1 << NVIC_TIM4_bit)
#define NVIC_ISPR0_TIM3						(1 << NVIC_TIM3_bit)
#define NVIC_ISPR0_TIM2						(1 << NVIC_TIM2_bit)
#define NVIC_ISPR0_TIM1_CC					(1 << NVIC_TIM1_CC_bit)
#define NVIC_ISPR0_TIM1_TRG_COM				(1 << NVIC_TIM1_TRG_COM_bit)
#define NVIC_ISPR0_TIM1_UP					(1 << NVIC_TIM1_UP_bit)
#define NVIC_ISPR0_TIM1_BRK					(1 << NVIC_TIM1_BRK_bit)
#define NVIC_ISPR0_EXTI9_5					(1 << NVIC_EXTI9_5_bit)
#define NVIC_ISPR0_CAN_SCE					(1 << NVIC_CAN_SCE_bit)
#define NVIC_ISPR0_CAN_RX1					(1 << NVIC_CAN_RX1_bit)
#define NVIC_ISPR0_USB_LP_CAN_RX0			(1 << NVIC_USB_LP_CAN_RX0_bit)
#define NVIC_ISPR0_USB_HP_CAN_TX			(1 << NVIC_USB_HP_CAN_TX_bit)
#define NVIC_ISPR0_ADC1_2					(1 << NVIC_ADC1_2_bit)
#define NVIC_ISPR0_DMA1_Channel7			(1 << NVIC_DMA1_Channel7_bit)
#define NVIC_ISPR0_DMA1_Channel6			(1 << NVIC_DMA1_Channel6_bit)
#define NVIC_ISPR0_DMA1_Channel5			(1 << NVIC_DMA1_Channel5_bit)
#define NVIC_ISPR0_DMA1_Channel4			(1 << NVIC_DMA1_Channel4_bit)
#define NVIC_ISPR0_DMA1_Channel3			(1 << NVIC_DMA1_Channel3_bit)
#define NVIC_ISPR0_DMA1_Channel2			(1 << NVIC_DMA1_Channel2_bit)
#define NVIC_ISPR0_DMA1_Channel1			(1 << NVIC_DMA1_Channel1_bit)
#define NVIC_ISPR0_EXTI4					(1 << NVIC_EXTI4_bit)
#define NVIC_ISPR0_EXTI3					(1 << NVIC_EXTI3_bit)
#define NVIC_ISPR0_EXTI2					(1 << NVIC_EXTI2_bit)
#define NVIC_ISPR0_EXTI1					(1 << NVIC_EXTI1_bit)
#define NVIC_ISPR0_EXTI0					(1 << NVIC_EXTI0_bit)
#define NVIC_ISPR0_RCC						(1 << NVIC_RCC_bit)
#define NVIC_ISPR0_FLASH					(1 << NVIC_FLASH_bit)
#define NVIC_ISPR0_RTC						(1 << NVIC_RTC_bit)
#define NVIC_ISPR0_TAMPER					(1 << NVIC_TAMPER_bit)
#define NVIC_ISPR0_PVD						(1 << NVIC_PVD_bit)
#define NVIC_ISPR0_WWDG						(1 << NVIC_WWDG_bit)

/*
+-----------------------------------------------------------------------------+
| NVIC_ISPR1 - Interrupt Set-Pending Register 1
+-----------------------------------------------------------------------------+
*/

#define NVIC_ISPR1_DMA2_Channel4_5			(1 << NVIC_DMA2_Channel4_5_bit)
#define NVIC_ISPR1_DMA2_Channel3			(1 << NVIC_DMA2_Channel3_bit)
#define NVIC_ISPR1_DMA2_Channel2			(1 << NVIC_DMA2_Channel2_bit)
#define NVIC_ISPR1_DMA2_Channel1			(1 << NVIC_DMA2_Channel1_bit)
#define NVIC_ISPR1_TIM7						(1 << NVIC_TIM7_bit)
#define NVIC_ISPR1_TIM6						(1 << NVIC_TIM6_bit)
#define NVIC_ISPR1_UART5					(1 << NVIC_UART5_bit)
#define NVIC_ISPR1_UART4					(1 << NVIC_UART4_bit)
#define NVIC_ISPR1_SPI3						(1 << NVIC_SPI3_bit)
#define NVIC_ISPR1_TIM5						(1 << NVIC_TIM5_bit)
#define NVIC_ISPR1_SDIO						(1 << NVIC_SDIO_bit)
#define NVIC_ISPR1_FSMC						(1 << NVIC_FSMC_bit)
#define NVIC_ISPR1_ADC3						(1 << NVIC_ADC3_bit)
#define NVIC_ISPR1_TIM8_CC					(1 << NVIC_TIM8_CC_bit)
#define NVIC_ISPR1_TIM8_TRG_COM				(1 << NVIC_TIM8_TRG_COM_bit)
#define NVIC_ISPR1_TIM8_UP					(1 << NVIC_TIM8_UP_bit)
#define NVIC_ISPR1_TIM8_BRK					(1 << NVIC_TIM8_BRK_bit)
#define NVIC_ISPR1_USBWakeup				(1 << NVIC_USBWakeup_bit)
#define NVIC_ISPR1_RTCAlarm					(1 << NVIC_RTCAlarm_bit)
#define NVIC_ISPR1_EXTI15_10				(1 << NVIC_EXTI15_10_bit)
#define NVIC_ISPR1_USART3					(1 << NVIC_USART3_bit)
#define NVIC_ISPR1_USART2					(1 << NVIC_USART2_bit)
#define NVIC_ISPR1_USART1					(1 << NVIC_USART1_bit)
#define NVIC_ISPR1_SPI2						(1 << NVIC_SPI2_bit)
#define NVIC_ISPR1_SPI1						(1 << NVIC_SPI1_bit)
#define NVIC_ISPR1_I2C2_ER					(1 << NVIC_I2C2_ER_bit)
#define NVIC_ISPR1_I2C2_EV					(1 << NVIC_I2C2_EV_bit)
#define NVIC_ISPR1_I2C1_ER					(1 << NVIC_I2C1_ER_bit)

/*
+-----------------------------------------------------------------------------+
| NVIC_ICPR0 - Interrupt Clear-Pending Register 0
+-----------------------------------------------------------------------------+
*/

#define NVIC_ICPR0_I2C1_EV					(1 << NVIC_I2C1_EV_bit)
#define NVIC_ICPR0_TIM4						(1 << NVIC_TIM4_bit)
#define NVIC_ICPR0_TIM3						(1 << NVIC_TIM3_bit)
#define NVIC_ICPR0_TIM2						(1 << NVIC_TIM2_bit)
#define NVIC_ICPR0_TIM1_CC					(1 << NVIC_TIM1_CC_bit)
#define NVIC_ICPR0_TIM1_TRG_COM				(1 << NVIC_TIM1_TRG_COM_bit)
#define NVIC_ICPR0_TIM1_UP					(1 << NVIC_TIM1_UP_bit)
#define NVIC_ICPR0_TIM1_BRK					(1 << NVIC_TIM1_BRK_bit)
#define NVIC_ICPR0_EXTI9_5					(1 << NVIC_EXTI9_5_bit)
#define NVIC_ICPR0_CAN_SCE					(1 << NVIC_CAN_SCE_bit)
#define NVIC_ICPR0_CAN_RX1					(1 << NVIC_CAN_RX1_bit)
#define NVIC_ICPR0_USB_LP_CAN_RX0			(1 << NVIC_USB_LP_CAN_RX0_bit)
#define NVIC_ICPR0_USB_HP_CAN_TX			(1 << NVIC_USB_HP_CAN_TX_bit)
#define NVIC_ICPR0_ADC1_2					(1 << NVIC_ADC1_2_bit)
#define NVIC_ICPR0_DMA1_Channel7			(1 << NVIC_DMA1_Channel7_bit)
#define NVIC_ICPR0_DMA1_Channel6			(1 << NVIC_DMA1_Channel6_bit)
#define NVIC_ICPR0_DMA1_Channel5			(1 << NVIC_DMA1_Channel5_bit)
#define NVIC_ICPR0_DMA1_Channel4			(1 << NVIC_DMA1_Channel4_bit)
#define NVIC_ICPR0_DMA1_Channel3			(1 << NVIC_DMA1_Channel3_bit)
#define NVIC_ICPR0_DMA1_Channel2			(1 << NVIC_DMA1_Channel2_bit)
#define NVIC_ICPR0_DMA1_Channel1			(1 << NVIC_DMA1_Channel1_bit)
#define NVIC_ICPR0_EXTI4					(1 << NVIC_EXTI4_bit)
#define NVIC_ICPR0_EXTI3					(1 << NVIC_EXTI3_bit)
#define NVIC_ICPR0_EXTI2					(1 << NVIC_EXTI2_bit)
#define NVIC_ICPR0_EXTI1					(1 << NVIC_EXTI1_bit)
#define NVIC_ICPR0_EXTI0					(1 << NVIC_EXTI0_bit)
#define NVIC_ICPR0_RCC						(1 << NVIC_RCC_bit)
#define NVIC_ICPR0_FLASH					(1 << NVIC_FLASH_bit)
#define NVIC_ICPR0_RTC						(1 << NVIC_RTC_bit)
#define NVIC_ICPR0_TAMPER					(1 << NVIC_TAMPER_bit)
#define NVIC_ICPR0_PVD						(1 << NVIC_PVD_bit)
#define NVIC_ICPR0_WWDG						(1 << NVIC_WWDG_bit)

/*
+-----------------------------------------------------------------------------+
| NVIC_ICPR1 - Interrupt Clear-Pending Register 1
+-----------------------------------------------------------------------------+
*/

#define NVIC_ICPR1_DMA2_Channel4_5			(1 << NVIC_DMA2_Channel4_5_bit)
#define NVIC_ICPR1_DMA2_Channel3			(1 << NVIC_DMA2_Channel3_bit)
#define NVIC_ICPR1_DMA2_Channel2			(1 << NVIC_DMA2_Channel2_bit)
#define NVIC_ICPR1_DMA2_Channel1			(1 << NVIC_DMA2_Channel1_bit)
#define NVIC_ICPR1_TIM7						(1 << NVIC_TIM7_bit)
#define NVIC_ICPR1_TIM6						(1 << NVIC_TIM6_bit)
#define NVIC_ICPR1_UART5					(1 << NVIC_UART5_bit)
#define NVIC_ICPR1_UART4					(1 << NVIC_UART4_bit)
#define NVIC_ICPR1_SPI3						(1 << NVIC_SPI3_bit)
#define NVIC_ICPR1_TIM5						(1 << NVIC_TIM5_bit)
#define NVIC_ICPR1_SDIO						(1 << NVIC_SDIO_bit)
#define NVIC_ICPR1_FSMC						(1 << NVIC_FSMC_bit)
#define NVIC_ICPR1_ADC3						(1 << NVIC_ADC3_bit)
#define NVIC_ICPR1_TIM8_CC					(1 << NVIC_TIM8_CC_bit)
#define NVIC_ICPR1_TIM8_TRG_COM				(1 << NVIC_TIM8_TRG_COM_bit)
#define NVIC_ICPR1_TIM8_UP					(1 << NVIC_TIM8_UP_bit)
#define NVIC_ICPR1_TIM8_BRK					(1 << NVIC_TIM8_BRK_bit)
#define NVIC_ICPR1_USBWakeup				(1 << NVIC_USBWakeup_bit)
#define NVIC_ICPR1_RTCAlarm					(1 << NVIC_RTCAlarm_bit)
#define NVIC_ICPR1_EXTI15_10				(1 << NVIC_EXTI15_10_bit)
#define NVIC_ICPR1_USART3					(1 << NVIC_USART3_bit)
#define NVIC_ICPR1_USART2					(1 << NVIC_USART2_bit)
#define NVIC_ICPR1_USART1					(1 << NVIC_USART1_bit)
#define NVIC_ICPR1_SPI2						(1 << NVIC_SPI2_bit)
#define NVIC_ICPR1_SPI1						(1 << NVIC_SPI1_bit)
#define NVIC_ICPR1_I2C2_ER					(1 << NVIC_I2C2_ER_bit)
#define NVIC_ICPR1_I2C2_EV					(1 << NVIC_I2C2_EV_bit)
#define NVIC_ICPR1_I2C1_ER					(1 << NVIC_I2C1_ER_bit)

/*
+-----------------------------------------------------------------------------+
| NVIC_IABR0 - Interrupt Active Bit Register 0
+-----------------------------------------------------------------------------+
*/

#define NVIC_IABR0_I2C1_EV					(1 << NVIC_I2C1_EV_bit)
#define NVIC_IABR0_TIM4						(1 << NVIC_TIM4_bit)
#define NVIC_IABR0_TIM3						(1 << NVIC_TIM3_bit)
#define NVIC_IABR0_TIM2						(1 << NVIC_TIM2_bit)
#define NVIC_IABR0_TIM1_CC					(1 << NVIC_TIM1_CC_bit)
#define NVIC_IABR0_TIM1_TRG_COM				(1 << NVIC_TIM1_TRG_COM_bit)
#define NVIC_IABR0_TIM1_UP					(1 << NVIC_TIM1_UP_bit)
#define NVIC_IABR0_TIM1_BRK					(1 << NVIC_TIM1_BRK_bit)
#define NVIC_IABR0_EXTI9_5					(1 << NVIC_EXTI9_5_bit)
#define NVIC_IABR0_CAN_SCE					(1 << NVIC_CAN_SCE_bit)
#define NVIC_IABR0_CAN_RX1					(1 << NVIC_CAN_RX1_bit)
#define NVIC_IABR0_USB_LP_CAN_RX0			(1 << NVIC_USB_LP_CAN_RX0_bit)
#define NVIC_IABR0_USB_HP_CAN_TX			(1 << NVIC_USB_HP_CAN_TX_bit)
#define NVIC_IABR0_ADC1_2					(1 << NVIC_ADC1_2_bit)
#define NVIC_IABR0_DMA1_Channel7			(1 << NVIC_DMA1_Channel7_bit)
#define NVIC_IABR0_DMA1_Channel6			(1 << NVIC_DMA1_Channel6_bit)
#define NVIC_IABR0_DMA1_Channel5			(1 << NVIC_DMA1_Channel5_bit)
#define NVIC_IABR0_DMA1_Channel4			(1 << NVIC_DMA1_Channel4_bit)
#define NVIC_IABR0_DMA1_Channel3			(1 << NVIC_DMA1_Channel3_bit)
#define NVIC_IABR0_DMA1_Channel2			(1 << NVIC_DMA1_Channel2_bit)
#define NVIC_IABR0_DMA1_Channel1			(1 << NVIC_DMA1_Channel1_bit)
#define NVIC_IABR0_EXTI4					(1 << NVIC_EXTI4_bit)
#define NVIC_IABR0_EXTI3					(1 << NVIC_EXTI3_bit)
#define NVIC_IABR0_EXTI2					(1 << NVIC_EXTI2_bit)
#define NVIC_IABR0_EXTI1					(1 << NVIC_EXTI1_bit)
#define NVIC_IABR0_EXTI0					(1 << NVIC_EXTI0_bit)
#define NVIC_IABR0_RCC						(1 << NVIC_RCC_bit)
#define NVIC_IABR0_FLASH					(1 << NVIC_FLASH_bit)
#define NVIC_IABR0_RTC						(1 << NVIC_RTC_bit)
#define NVIC_IABR0_TAMPER					(1 << NVIC_TAMPER_bit)
#define NVIC_IABR0_PVD						(1 << NVIC_PVD_bit)
#define NVIC_IABR0_WWDG						(1 << NVIC_WWDG_bit)

/*
+-----------------------------------------------------------------------------+
| NVIC_IABR1 - Interrupt Active Bit Register 1
+-----------------------------------------------------------------------------+
*/

#define NVIC_IABR1_DMA2_Channel4_5			(1 << NVIC_DMA2_Channel4_5_bit)
#define NVIC_IABR1_DMA2_Channel3			(1 << NVIC_DMA2_Channel3_bit)
#define NVIC_IABR1_DMA2_Channel2			(1 << NVIC_DMA2_Channel2_bit)
#define NVIC_IABR1_DMA2_Channel1			(1 << NVIC_DMA2_Channel1_bit)
#define NVIC_IABR1_TIM7						(1 << NVIC_TIM7_bit)
#define NVIC_IABR1_TIM6						(1 << NVIC_TIM6_bit)
#define NVIC_IABR1_UART5					(1 << NVIC_UART5_bit)
#define NVIC_IABR1_UART4					(1 << NVIC_UART4_bit)
#define NVIC_IABR1_SPI3						(1 << NVIC_SPI3_bit)
#define NVIC_IABR1_TIM5						(1 << NVIC_TIM5_bit)
#define NVIC_IABR1_SDIO						(1 << NVIC_SDIO_bit)
#define NVIC_IABR1_FSMC						(1 << NVIC_FSMC_bit)
#define NVIC_IABR1_ADC3						(1 << NVIC_ADC3_bit)
#define NVIC_IABR1_TIM8_CC					(1 << NVIC_TIM8_CC_bit)
#define NVIC_IABR1_TIM8_TRG_COM				(1 << NVIC_TIM8_TRG_COM_bit)
#define NVIC_IABR1_TIM8_UP					(1 << NVIC_TIM8_UP_bit)
#define NVIC_IABR1_TIM8_BRK					(1 << NVIC_TIM8_BRK_bit)
#define NVIC_IABR1_USBWakeup				(1 << NVIC_USBWakeup_bit)
#define NVIC_IABR1_RTCAlarm					(1 << NVIC_RTCAlarm_bit)
#define NVIC_IABR1_EXTI15_10				(1 << NVIC_EXTI15_10_bit)
#define NVIC_IABR1_USART3					(1 << NVIC_USART3_bit)
#define NVIC_IABR1_USART2					(1 << NVIC_USART2_bit)
#define NVIC_IABR1_USART1					(1 << NVIC_USART1_bit)
#define NVIC_IABR1_SPI2						(1 << NVIC_SPI2_bit)
#define NVIC_IABR1_SPI1						(1 << NVIC_SPI1_bit)
#define NVIC_IABR1_I2C2_ER					(1 << NVIC_I2C2_ER_bit)
#define NVIC_IABR1_I2C2_EV					(1 << NVIC_I2C2_EV_bit)
#define NVIC_IABR1_I2C1_ER					(1 << NVIC_I2C1_ER_bit)

/*
+-----------------------------------------------------------------------------+
| NVIC_IPR[0-15] - Interrupt Priority Registers
+-----------------------------------------------------------------------------+
*/

#define NVIC_IPR_P0_value					0
#define NVIC_IPR_P1_value					1
#define NVIC_IPR_P2_value					2
#define NVIC_IPR_P3_value					3
#define NVIC_IPR_P4_value					4
#define NVIC_IPR_P5_value					5
#define NVIC_IPR_P6_value					6
#define NVIC_IPR_P7_value					7
#define NVIC_IPR_P8_value					8
#define NVIC_IPR_P9_value					9
#define NVIC_IPR_P10_value					10
#define NVIC_IPR_P11_value					11
#define NVIC_IPR_P12_value					12
#define NVIC_IPR_P13_value					13
#define NVIC_IPR_P14_value					14
#define NVIC_IPR_P15_value					15
#define NVIC_IPR_mask						15

#define NVIC_IPR0_WWDG_bit					4
#define NVIC_IPR0_PVD_bit					12
#define NVIC_IPR0_TAMPER_bit				20
#define NVIC_IPR0_RTC_bit					28

#define NVIC_IPR1_FLASH_bit					4
#define NVIC_IPR1_RCC_bit					12
#define NVIC_IPR1_EXTI0_bit					20
#define NVIC_IPR1_EXTI1_bit					28

#define NVIC_IPR2_EXTI2_bit					4
#define NVIC_IPR2_EXTI3_bit					12
#define NVIC_IPR2_EXTI4_bit					20
#define NVIC_IPR2_DMA1_Channel1_bit			28

#define NVIC_IPR3_DMA1_Channel2_bit			4
#define NVIC_IPR3_DMA1_Channel3_bit			12
#define NVIC_IPR3_DMA1_Channel4_bit			20
#define NVIC_IPR3_DMA1_Channel5_bit			28

#define NVIC_IPR4_DMA1_Channel6_bit			4
#define NVIC_IPR4_DMA1_Channel7_bit			12
#define NVIC_IPR4_ADC1_2_bit				20
#define NVIC_IPR4_USB_HP_CAN_TX_bit			28

#define NVIC_IPR5_USB_LP_CAN_RX0_bit		4
#define NVIC_IPR5_CAN_RX1_bit				12
#define NVIC_IPR5_CAN_SCE_bit				20
#define NVIC_IPR5_EXTI9_5_bit				28

#define NVIC_IPR6_TIM1_BRK_bit				4
#define NVIC_IPR6_TIM1_UP_bit				12
#define NVIC_IPR6_TIM1_TRG_COM_bit			20
#define NVIC_IPR6_TIM1_CC_bit				28

#define NVIC_IPR7_TIM2_bit					4
#define NVIC_IPR7_TIM3_bit					12
#define NVIC_IPR7_TIM4_bit					20
#define NVIC_IPR7_I2C1_EV_bit				28

#define NVIC_IPR8_I2C1_ER_bit				4
#define NVIC_IPR8_I2C2_EV_bit				12
#define NVIC_IPR8_I2C2_ER_bit				20
#define NVIC_IPR8_SPI1_bit					28

#define NVIC_IPR9_SPI2_bit					4
#define NVIC_IPR9_USART1_bit				12
#define NVIC_IPR9_USART2_bit				20
#define NVIC_IPR9_USART3_bit				28

#define NVIC_IPR10_EXTI15_10_bit			4
#define NVIC_IPR10_RTCAlarm_bit				12
#define NVIC_IPR10_USBWakeup_bit			20
#define NVIC_IPR10_TIM8_BRK_bit				28

#define NVIC_IPR11_TIM8_UP_bit				4
#define NVIC_IPR11_TIM8_TRG_COM_bit			12
#define NVIC_IPR11_TIM8_CC_bit				20
#define NVIC_IPR11_ADC3_bit					28

#define NVIC_IPR12_FSMC_bit					4
#define NVIC_IPR12_SDIO_bit					12
#define NVIC_IPR12_TIM5_bit					20
#define NVIC_IPR12_SPI3_bit					28

#define NVIC_IPR13_UART4_bit				4
#define NVIC_IPR13_UART5_bit				12
#define NVIC_IPR13_TIM6_bit					20
#define NVIC_IPR13_TIM7_bit					28

#define NVIC_IPR14_DMA2_Channel1_bit		4
#define NVIC_IPR14_DMA2_Channel2_bit		12
#define NVIC_IPR14_DMA2_Channel3_bit		20
#define NVIC_IPR14_DMA2_Channel4_5_bit		28

#define NVIC_IPR0_WWDG_P0					(NVIC_IPR_P0_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P1					(NVIC_IPR_P1_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P2					(NVIC_IPR_P2_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P3					(NVIC_IPR_P3_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P4					(NVIC_IPR_P4_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P5					(NVIC_IPR_P5_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P6					(NVIC_IPR_P6_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P7					(NVIC_IPR_P7_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P8					(NVIC_IPR_P8_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P9					(NVIC_IPR_P9_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P10					(NVIC_IPR_P10_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P11					(NVIC_IPR_P11_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P12					(NVIC_IPR_P12_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P13					(NVIC_IPR_P13_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P14					(NVIC_IPR_P14_value << NVIC_IPR0_WWDG_bit)
#define NVIC_IPR0_WWDG_P15					(NVIC_IPR_P15_value << NVIC_IPR0_WWDG_bit)

#define NVIC_IPR0_PVD_P0					(NVIC_IPR_P0_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P1					(NVIC_IPR_P1_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P2					(NVIC_IPR_P2_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P3					(NVIC_IPR_P3_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P4					(NVIC_IPR_P4_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P5					(NVIC_IPR_P5_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P6					(NVIC_IPR_P6_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P7					(NVIC_IPR_P7_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P8					(NVIC_IPR_P8_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P9					(NVIC_IPR_P9_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P10					(NVIC_IPR_P10_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P11					(NVIC_IPR_P11_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P12					(NVIC_IPR_P12_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P13					(NVIC_IPR_P13_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P14					(NVIC_IPR_P14_value << NVIC_IPR0_PVD_bit)
#define NVIC_IPR0_PVD_P15					(NVIC_IPR_P15_value << NVIC_IPR0_PVD_bit)

#define NVIC_IPR0_TAMPER_P0					(NVIC_IPR_P0_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P1					(NVIC_IPR_P1_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P2					(NVIC_IPR_P2_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P3					(NVIC_IPR_P3_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P4					(NVIC_IPR_P4_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P5					(NVIC_IPR_P5_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P6					(NVIC_IPR_P6_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P7					(NVIC_IPR_P7_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P8					(NVIC_IPR_P8_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P9					(NVIC_IPR_P9_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P10				(NVIC_IPR_P10_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P11				(NVIC_IPR_P11_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P12				(NVIC_IPR_P12_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P13				(NVIC_IPR_P13_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P14				(NVIC_IPR_P14_value << NVIC_IPR0_TAMPER_bit)
#define NVIC_IPR0_TAMPER_P15				(NVIC_IPR_P15_value << NVIC_IPR0_TAMPER_bit)

#define NVIC_IPR0_RTC_P0					(NVIC_IPR_P0_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P1					(NVIC_IPR_P1_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P2					(NVIC_IPR_P2_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P3					(NVIC_IPR_P3_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P4					(NVIC_IPR_P4_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P5					(NVIC_IPR_P5_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P6					(NVIC_IPR_P6_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P7					(NVIC_IPR_P7_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P8					(NVIC_IPR_P8_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P9					(NVIC_IPR_P9_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P10					(NVIC_IPR_P10_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P11					(NVIC_IPR_P11_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P12					(NVIC_IPR_P12_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P13					(NVIC_IPR_P13_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P14					(NVIC_IPR_P14_value << NVIC_IPR0_RTC_bit)
#define NVIC_IPR0_RTC_P15					(NVIC_IPR_P15_value << NVIC_IPR0_RTC_bit)

#define NVIC_IPR1_FLASH_P0					(NVIC_IPR_P0_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P1					(NVIC_IPR_P1_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P2					(NVIC_IPR_P2_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P3					(NVIC_IPR_P3_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P4					(NVIC_IPR_P4_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P5					(NVIC_IPR_P5_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P6					(NVIC_IPR_P6_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P7					(NVIC_IPR_P7_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P8					(NVIC_IPR_P8_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P9					(NVIC_IPR_P9_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P10					(NVIC_IPR_P10_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P11					(NVIC_IPR_P11_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P12					(NVIC_IPR_P12_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P13					(NVIC_IPR_P13_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P14					(NVIC_IPR_P14_value << NVIC_IPR1_FLASH_bit)
#define NVIC_IPR1_FLASH_P15					(NVIC_IPR_P15_value << NVIC_IPR1_FLASH_bit)

#define NVIC_IPR1_RCC_P0					(NVIC_IPR_P0_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P1					(NVIC_IPR_P1_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P2					(NVIC_IPR_P2_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P3					(NVIC_IPR_P3_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P4					(NVIC_IPR_P4_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P5					(NVIC_IPR_P5_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P6					(NVIC_IPR_P6_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P7					(NVIC_IPR_P7_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P8					(NVIC_IPR_P8_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P9					(NVIC_IPR_P9_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P10					(NVIC_IPR_P10_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P11					(NVIC_IPR_P11_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P12					(NVIC_IPR_P12_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P13					(NVIC_IPR_P13_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P14					(NVIC_IPR_P14_value << NVIC_IPR1_RCC_bit)
#define NVIC_IPR1_RCC_P15					(NVIC_IPR_P15_value << NVIC_IPR1_RCC_bit)

#define NVIC_IPR1_EXTI0_P0					(NVIC_IPR_P0_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P1					(NVIC_IPR_P1_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P2					(NVIC_IPR_P2_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P3					(NVIC_IPR_P3_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P4					(NVIC_IPR_P4_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P5					(NVIC_IPR_P5_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P6					(NVIC_IPR_P6_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P7					(NVIC_IPR_P7_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P8					(NVIC_IPR_P8_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P9					(NVIC_IPR_P9_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P10					(NVIC_IPR_P10_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P11					(NVIC_IPR_P11_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P12					(NVIC_IPR_P12_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P13					(NVIC_IPR_P13_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P14					(NVIC_IPR_P14_value << NVIC_IPR1_EXTI0_bit)
#define NVIC_IPR1_EXTI0_P15					(NVIC_IPR_P15_value << NVIC_IPR1_EXTI0_bit)

#define NVIC_IPR1_EXTI1_P0					(NVIC_IPR_P0_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P1					(NVIC_IPR_P1_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P2					(NVIC_IPR_P2_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P3					(NVIC_IPR_P3_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P4					(NVIC_IPR_P4_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P5					(NVIC_IPR_P5_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P6					(NVIC_IPR_P6_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P7					(NVIC_IPR_P7_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P8					(NVIC_IPR_P8_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P9					(NVIC_IPR_P9_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P10					(NVIC_IPR_P10_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P11					(NVIC_IPR_P11_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P12					(NVIC_IPR_P12_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P13					(NVIC_IPR_P13_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P14					(NVIC_IPR_P14_value << NVIC_IPR1_EXTI1_bit)
#define NVIC_IPR1_EXTI1_P15					(NVIC_IPR_P15_value << NVIC_IPR1_EXTI1_bit)

#define NVIC_IPR2_EXTI2_P0					(NVIC_IPR_P0_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P1					(NVIC_IPR_P1_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P2					(NVIC_IPR_P2_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P3					(NVIC_IPR_P3_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P4					(NVIC_IPR_P4_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P5					(NVIC_IPR_P5_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P6					(NVIC_IPR_P6_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P7					(NVIC_IPR_P7_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P8					(NVIC_IPR_P8_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P9					(NVIC_IPR_P9_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P10					(NVIC_IPR_P10_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P11					(NVIC_IPR_P11_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P12					(NVIC_IPR_P12_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P13					(NVIC_IPR_P13_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P14					(NVIC_IPR_P14_value << NVIC_IPR2_EXTI2_bit)
#define NVIC_IPR2_EXTI2_P15					(NVIC_IPR_P15_value << NVIC_IPR2_EXTI2_bit)

#define NVIC_IPR2_EXTI3_P0					(NVIC_IPR_P0_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P1					(NVIC_IPR_P1_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P2					(NVIC_IPR_P2_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P3					(NVIC_IPR_P3_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P4					(NVIC_IPR_P4_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P5					(NVIC_IPR_P5_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P6					(NVIC_IPR_P6_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P7					(NVIC_IPR_P7_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P8					(NVIC_IPR_P8_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P9					(NVIC_IPR_P9_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P10					(NVIC_IPR_P10_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P11					(NVIC_IPR_P11_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P12					(NVIC_IPR_P12_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P13					(NVIC_IPR_P13_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P14					(NVIC_IPR_P14_value << NVIC_IPR2_EXTI3_bit)
#define NVIC_IPR2_EXTI3_P15					(NVIC_IPR_P15_value << NVIC_IPR2_EXTI3_bit)

#define NVIC_IPR2_EXTI4_P0					(NVIC_IPR_P0_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P1					(NVIC_IPR_P1_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P2					(NVIC_IPR_P2_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P3					(NVIC_IPR_P3_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P4					(NVIC_IPR_P4_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P5					(NVIC_IPR_P5_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P6					(NVIC_IPR_P6_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P7					(NVIC_IPR_P7_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P8					(NVIC_IPR_P8_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P9					(NVIC_IPR_P9_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P10					(NVIC_IPR_P10_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P11					(NVIC_IPR_P11_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P12					(NVIC_IPR_P12_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P13					(NVIC_IPR_P13_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P14					(NVIC_IPR_P14_value << NVIC_IPR2_EXTI4_bit)
#define NVIC_IPR2_EXTI4_P15					(NVIC_IPR_P15_value << NVIC_IPR2_EXTI4_bit)

#define NVIC_IPR2_DMA1_Channel1_P0			(NVIC_IPR_P0_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P1			(NVIC_IPR_P1_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P2			(NVIC_IPR_P2_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P3			(NVIC_IPR_P3_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P4			(NVIC_IPR_P4_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P5			(NVIC_IPR_P5_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P6			(NVIC_IPR_P6_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P7			(NVIC_IPR_P7_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P8			(NVIC_IPR_P8_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P9			(NVIC_IPR_P9_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P10			(NVIC_IPR_P10_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P11			(NVIC_IPR_P11_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P12			(NVIC_IPR_P12_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P13			(NVIC_IPR_P13_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P14			(NVIC_IPR_P14_value << NVIC_IPR2_DMA1_Channel1_bit)
#define NVIC_IPR2_DMA1_Channel1_P15			(NVIC_IPR_P15_value << NVIC_IPR2_DMA1_Channel1_bit)

#define NVIC_IPR3_DMA1_Channel2_P0			(NVIC_IPR_P0_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P1			(NVIC_IPR_P1_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P2			(NVIC_IPR_P2_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P3			(NVIC_IPR_P3_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P4			(NVIC_IPR_P4_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P5			(NVIC_IPR_P5_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P6			(NVIC_IPR_P6_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P7			(NVIC_IPR_P7_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P8			(NVIC_IPR_P8_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P9			(NVIC_IPR_P9_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P10			(NVIC_IPR_P10_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P11			(NVIC_IPR_P11_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P12			(NVIC_IPR_P12_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P13			(NVIC_IPR_P13_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P14			(NVIC_IPR_P14_value << NVIC_IPR3_DMA1_Channel2_bit)
#define NVIC_IPR3_DMA1_Channel2_P15			(NVIC_IPR_P15_value << NVIC_IPR3_DMA1_Channel2_bit)

#define NVIC_IPR3_DMA1_Channel3_P0			(NVIC_IPR_P0_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P1			(NVIC_IPR_P1_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P2			(NVIC_IPR_P2_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P3			(NVIC_IPR_P3_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P4			(NVIC_IPR_P4_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P5			(NVIC_IPR_P5_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P6			(NVIC_IPR_P6_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P7			(NVIC_IPR_P7_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P8			(NVIC_IPR_P8_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P9			(NVIC_IPR_P9_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P10			(NVIC_IPR_P10_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P11			(NVIC_IPR_P11_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P12			(NVIC_IPR_P12_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P13			(NVIC_IPR_P13_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P14			(NVIC_IPR_P14_value << NVIC_IPR3_DMA1_Channel3_bit)
#define NVIC_IPR3_DMA1_Channel3_P15			(NVIC_IPR_P15_value << NVIC_IPR3_DMA1_Channel3_bit)

#define NVIC_IPR3_DMA1_Channel4_P0			(NVIC_IPR_P0_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P1			(NVIC_IPR_P1_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P2			(NVIC_IPR_P2_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P3			(NVIC_IPR_P3_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P4			(NVIC_IPR_P4_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P5			(NVIC_IPR_P5_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P6			(NVIC_IPR_P6_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P7			(NVIC_IPR_P7_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P8			(NVIC_IPR_P8_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P9			(NVIC_IPR_P9_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P10			(NVIC_IPR_P10_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P11			(NVIC_IPR_P11_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P12			(NVIC_IPR_P12_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P13			(NVIC_IPR_P13_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P14			(NVIC_IPR_P14_value << NVIC_IPR3_DMA1_Channel4_bit)
#define NVIC_IPR3_DMA1_Channel4_P15			(NVIC_IPR_P15_value << NVIC_IPR3_DMA1_Channel4_bit)

#define NVIC_IPR3_DMA1_Channel5_P0			(NVIC_IPR_P0_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P1			(NVIC_IPR_P1_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P2			(NVIC_IPR_P2_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P3			(NVIC_IPR_P3_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P4			(NVIC_IPR_P4_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P5			(NVIC_IPR_P5_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P6			(NVIC_IPR_P6_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P7			(NVIC_IPR_P7_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P8			(NVIC_IPR_P8_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P9			(NVIC_IPR_P9_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P10			(NVIC_IPR_P10_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P11			(NVIC_IPR_P11_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P12			(NVIC_IPR_P12_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P13			(NVIC_IPR_P13_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P14			(NVIC_IPR_P14_value << NVIC_IPR3_DMA1_Channel5_bit)
#define NVIC_IPR3_DMA1_Channel5_P15			(NVIC_IPR_P15_value << NVIC_IPR3_DMA1_Channel5_bit)

#define NVIC_IPR4_DMA1_Channel6_P0			(NVIC_IPR_P0_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P1			(NVIC_IPR_P1_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P2			(NVIC_IPR_P2_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P3			(NVIC_IPR_P3_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P4			(NVIC_IPR_P4_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P5			(NVIC_IPR_P5_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P6			(NVIC_IPR_P6_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P7			(NVIC_IPR_P7_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P8			(NVIC_IPR_P8_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P9			(NVIC_IPR_P9_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P10			(NVIC_IPR_P10_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P11			(NVIC_IPR_P11_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P12			(NVIC_IPR_P12_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P13			(NVIC_IPR_P13_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P14			(NVIC_IPR_P14_value << NVIC_IPR4_DMA1_Channel6_bit)
#define NVIC_IPR4_DMA1_Channel6_P15			(NVIC_IPR_P15_value << NVIC_IPR4_DMA1_Channel6_bit)

#define NVIC_IPR4_DMA1_Channel7_P0			(NVIC_IPR_P0_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P1			(NVIC_IPR_P1_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P2			(NVIC_IPR_P2_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P3			(NVIC_IPR_P3_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P4			(NVIC_IPR_P4_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P5			(NVIC_IPR_P5_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P6			(NVIC_IPR_P6_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P7			(NVIC_IPR_P7_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P8			(NVIC_IPR_P8_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P9			(NVIC_IPR_P9_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P10			(NVIC_IPR_P10_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P11			(NVIC_IPR_P11_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P12			(NVIC_IPR_P12_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P13			(NVIC_IPR_P13_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P14			(NVIC_IPR_P14_value << NVIC_IPR4_DMA1_Channel7_bit)
#define NVIC_IPR4_DMA1_Channel7_P15			(NVIC_IPR_P15_value << NVIC_IPR4_DMA1_Channel7_bit)

#define NVIC_IPR4_ADC1_2_P0					(NVIC_IPR_P0_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P1					(NVIC_IPR_P1_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P2					(NVIC_IPR_P2_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P3					(NVIC_IPR_P3_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P4					(NVIC_IPR_P4_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P5					(NVIC_IPR_P5_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P6					(NVIC_IPR_P6_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P7					(NVIC_IPR_P7_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P8					(NVIC_IPR_P8_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P9					(NVIC_IPR_P9_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P10				(NVIC_IPR_P10_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P11				(NVIC_IPR_P11_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P12				(NVIC_IPR_P12_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P13				(NVIC_IPR_P13_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P14				(NVIC_IPR_P14_value << NVIC_IPR4_ADC1_2_bit)
#define NVIC_IPR4_ADC1_2_P15				(NVIC_IPR_P15_value << NVIC_IPR4_ADC1_2_bit)

#define NVIC_IPR4_USB_HP_CAN_TX_P0			(NVIC_IPR_P0_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P1			(NVIC_IPR_P1_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P2			(NVIC_IPR_P2_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P3			(NVIC_IPR_P3_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P4			(NVIC_IPR_P4_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P5			(NVIC_IPR_P5_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P6			(NVIC_IPR_P6_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P7			(NVIC_IPR_P7_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P8			(NVIC_IPR_P8_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P9			(NVIC_IPR_P9_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P10			(NVIC_IPR_P10_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P11			(NVIC_IPR_P11_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P12			(NVIC_IPR_P12_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P13			(NVIC_IPR_P13_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P14			(NVIC_IPR_P14_value << NVIC_IPR4_USB_HP_CAN_TX_bit)
#define NVIC_IPR4_USB_HP_CAN_TX_P15			(NVIC_IPR_P15_value << NVIC_IPR4_USB_HP_CAN_TX_bit)

#define NVIC_IPR5_USB_LP_CAN_RX0_P0			(NVIC_IPR_P0_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P1			(NVIC_IPR_P1_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P2			(NVIC_IPR_P2_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P3			(NVIC_IPR_P3_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P4			(NVIC_IPR_P4_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P5			(NVIC_IPR_P5_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P6			(NVIC_IPR_P6_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P7			(NVIC_IPR_P7_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P8			(NVIC_IPR_P8_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P9			(NVIC_IPR_P9_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P10		(NVIC_IPR_P10_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P11		(NVIC_IPR_P11_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P12		(NVIC_IPR_P12_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P13		(NVIC_IPR_P13_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P14		(NVIC_IPR_P14_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)
#define NVIC_IPR5_USB_LP_CAN_RX0_P15		(NVIC_IPR_P15_value << NVIC_IPR5_USB_LP_CAN_RX0_bit)

#define NVIC_IPR5_CAN_RX1_P0				(NVIC_IPR_P0_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P1				(NVIC_IPR_P1_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P2				(NVIC_IPR_P2_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P3				(NVIC_IPR_P3_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P4				(NVIC_IPR_P4_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P5				(NVIC_IPR_P5_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P6				(NVIC_IPR_P6_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P7				(NVIC_IPR_P7_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P8				(NVIC_IPR_P8_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P9				(NVIC_IPR_P9_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P10				(NVIC_IPR_P10_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P11				(NVIC_IPR_P11_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P12				(NVIC_IPR_P12_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P13				(NVIC_IPR_P13_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P14				(NVIC_IPR_P14_value << NVIC_IPR5_CAN_RX1_bit)
#define NVIC_IPR5_CAN_RX1_P15				(NVIC_IPR_P15_value << NVIC_IPR5_CAN_RX1_bit)

#define NVIC_IPR5_CAN_SCE_P0				(NVIC_IPR_P0_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P1				(NVIC_IPR_P1_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P2				(NVIC_IPR_P2_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P3				(NVIC_IPR_P3_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P4				(NVIC_IPR_P4_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P5				(NVIC_IPR_P5_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P6				(NVIC_IPR_P6_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P7				(NVIC_IPR_P7_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P8				(NVIC_IPR_P8_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P9				(NVIC_IPR_P9_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P10				(NVIC_IPR_P10_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P11				(NVIC_IPR_P11_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P12				(NVIC_IPR_P12_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P13				(NVIC_IPR_P13_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P14				(NVIC_IPR_P14_value << NVIC_IPR5_CAN_SCE_bit)
#define NVIC_IPR5_CAN_SCE_P15				(NVIC_IPR_P15_value << NVIC_IPR5_CAN_SCE_bit)

#define NVIC_IPR5_EXTI9_5_P0				(NVIC_IPR_P0_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P1				(NVIC_IPR_P1_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P2				(NVIC_IPR_P2_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P3				(NVIC_IPR_P3_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P4				(NVIC_IPR_P4_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P5				(NVIC_IPR_P5_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P6				(NVIC_IPR_P6_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P7				(NVIC_IPR_P7_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P8				(NVIC_IPR_P8_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P9				(NVIC_IPR_P9_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P10				(NVIC_IPR_P10_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P11				(NVIC_IPR_P11_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P12				(NVIC_IPR_P12_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P13				(NVIC_IPR_P13_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P14				(NVIC_IPR_P14_value << NVIC_IPR5_EXTI9_5_bit)
#define NVIC_IPR5_EXTI9_5_P15				(NVIC_IPR_P15_value << NVIC_IPR5_EXTI9_5_bit)

#define NVIC_IPR6_TIM1_BRK_P0				(NVIC_IPR_P0_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P1				(NVIC_IPR_P1_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P2				(NVIC_IPR_P2_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P3				(NVIC_IPR_P3_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P4				(NVIC_IPR_P4_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P5				(NVIC_IPR_P5_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P6				(NVIC_IPR_P6_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P7				(NVIC_IPR_P7_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P8				(NVIC_IPR_P8_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P9				(NVIC_IPR_P9_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P10				(NVIC_IPR_P10_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P11				(NVIC_IPR_P11_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P12				(NVIC_IPR_P12_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P13				(NVIC_IPR_P13_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P14				(NVIC_IPR_P14_value << NVIC_IPR6_TIM1_BRK_bit)
#define NVIC_IPR6_TIM1_BRK_P15				(NVIC_IPR_P15_value << NVIC_IPR6_TIM1_BRK_bit)

#define NVIC_IPR6_TIM1_UP_P0				(NVIC_IPR_P0_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P1				(NVIC_IPR_P1_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P2				(NVIC_IPR_P2_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P3				(NVIC_IPR_P3_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P4				(NVIC_IPR_P4_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P5				(NVIC_IPR_P5_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P6				(NVIC_IPR_P6_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P7				(NVIC_IPR_P7_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P8				(NVIC_IPR_P8_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P9				(NVIC_IPR_P9_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P10				(NVIC_IPR_P10_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P11				(NVIC_IPR_P11_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P12				(NVIC_IPR_P12_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P13				(NVIC_IPR_P13_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P14				(NVIC_IPR_P14_value << NVIC_IPR6_TIM1_UP_bit)
#define NVIC_IPR6_TIM1_UP_P15				(NVIC_IPR_P15_value << NVIC_IPR6_TIM1_UP_bit)

#define NVIC_IPR6_TIM1_TRG_COM_P0			(NVIC_IPR_P0_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P1			(NVIC_IPR_P1_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P2			(NVIC_IPR_P2_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P3			(NVIC_IPR_P3_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P4			(NVIC_IPR_P4_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P5			(NVIC_IPR_P5_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P6			(NVIC_IPR_P6_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P7			(NVIC_IPR_P7_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P8			(NVIC_IPR_P8_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P9			(NVIC_IPR_P9_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P10			(NVIC_IPR_P10_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P11			(NVIC_IPR_P11_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P12			(NVIC_IPR_P12_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P13			(NVIC_IPR_P13_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P14			(NVIC_IPR_P14_value << NVIC_IPR6_TIM1_TRG_COM_bit)
#define NVIC_IPR6_TIM1_TRG_COM_P15			(NVIC_IPR_P15_value << NVIC_IPR6_TIM1_TRG_COM_bit)

#define NVIC_IPR6_TIM1_CC_P0				(NVIC_IPR_P0_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P1				(NVIC_IPR_P1_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P2				(NVIC_IPR_P2_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P3				(NVIC_IPR_P3_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P4				(NVIC_IPR_P4_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P5				(NVIC_IPR_P5_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P6				(NVIC_IPR_P6_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P7				(NVIC_IPR_P7_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P8				(NVIC_IPR_P8_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P9				(NVIC_IPR_P9_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P10				(NVIC_IPR_P10_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P11				(NVIC_IPR_P11_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P12				(NVIC_IPR_P12_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P13				(NVIC_IPR_P13_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P14				(NVIC_IPR_P14_value << NVIC_IPR6_TIM1_CC_bit)
#define NVIC_IPR6_TIM1_CC_P15				(NVIC_IPR_P15_value << NVIC_IPR6_TIM1_CC_bit)

#define NVIC_IPR7_TIM2_P0					(NVIC_IPR_P0_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P1					(NVIC_IPR_P1_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P2					(NVIC_IPR_P2_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P3					(NVIC_IPR_P3_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P4					(NVIC_IPR_P4_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P5					(NVIC_IPR_P5_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P6					(NVIC_IPR_P6_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P7					(NVIC_IPR_P7_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P8					(NVIC_IPR_P8_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P9					(NVIC_IPR_P9_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P10					(NVIC_IPR_P10_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P11					(NVIC_IPR_P11_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P12					(NVIC_IPR_P12_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P13					(NVIC_IPR_P13_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P14					(NVIC_IPR_P14_value << NVIC_IPR7_TIM2_bit)
#define NVIC_IPR7_TIM2_P15					(NVIC_IPR_P15_value << NVIC_IPR7_TIM2_bit)

#define NVIC_IPR7_TIM3_P0					(NVIC_IPR_P0_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P1					(NVIC_IPR_P1_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P2					(NVIC_IPR_P2_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P3					(NVIC_IPR_P3_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P4					(NVIC_IPR_P4_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P5					(NVIC_IPR_P5_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P6					(NVIC_IPR_P6_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P7					(NVIC_IPR_P7_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P8					(NVIC_IPR_P8_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P9					(NVIC_IPR_P9_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P10					(NVIC_IPR_P10_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P11					(NVIC_IPR_P11_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P12					(NVIC_IPR_P12_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P13					(NVIC_IPR_P13_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P14					(NVIC_IPR_P14_value << NVIC_IPR7_TIM3_bit)
#define NVIC_IPR7_TIM3_P15					(NVIC_IPR_P15_value << NVIC_IPR7_TIM3_bit)

#define NVIC_IPR7_TIM4_P0					(NVIC_IPR_P0_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P1					(NVIC_IPR_P1_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P2					(NVIC_IPR_P2_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P3					(NVIC_IPR_P3_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P4					(NVIC_IPR_P4_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P5					(NVIC_IPR_P5_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P6					(NVIC_IPR_P6_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P7					(NVIC_IPR_P7_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P8					(NVIC_IPR_P8_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P9					(NVIC_IPR_P9_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P10					(NVIC_IPR_P10_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P11					(NVIC_IPR_P11_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P12					(NVIC_IPR_P12_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P13					(NVIC_IPR_P13_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P14					(NVIC_IPR_P14_value << NVIC_IPR7_TIM4_bit)
#define NVIC_IPR7_TIM4_P15					(NVIC_IPR_P15_value << NVIC_IPR7_TIM4_bit)

#define NVIC_IPR7_I2C1_EV_P0				(NVIC_IPR_P0_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P1				(NVIC_IPR_P1_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P2				(NVIC_IPR_P2_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P3				(NVIC_IPR_P3_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P4				(NVIC_IPR_P4_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P5				(NVIC_IPR_P5_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P6				(NVIC_IPR_P6_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P7				(NVIC_IPR_P7_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P8				(NVIC_IPR_P8_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P9				(NVIC_IPR_P9_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P10				(NVIC_IPR_P10_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P11				(NVIC_IPR_P11_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P12				(NVIC_IPR_P12_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P13				(NVIC_IPR_P13_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P14				(NVIC_IPR_P14_value << NVIC_IPR7_I2C1_EV_bit)
#define NVIC_IPR7_I2C1_EV_P15				(NVIC_IPR_P15_value << NVIC_IPR7_I2C1_EV_bit)

#define NVIC_IPR8_I2C1_ER_P0				(NVIC_IPR_P0_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P1				(NVIC_IPR_P1_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P2				(NVIC_IPR_P2_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P3				(NVIC_IPR_P3_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P4				(NVIC_IPR_P4_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P5				(NVIC_IPR_P5_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P6				(NVIC_IPR_P6_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P7				(NVIC_IPR_P7_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P8				(NVIC_IPR_P8_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P9				(NVIC_IPR_P9_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P10				(NVIC_IPR_P10_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P11				(NVIC_IPR_P11_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P12				(NVIC_IPR_P12_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P13				(NVIC_IPR_P13_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P14				(NVIC_IPR_P14_value << NVIC_IPR8_I2C1_ER_bit)
#define NVIC_IPR8_I2C1_ER_P15				(NVIC_IPR_P15_value << NVIC_IPR8_I2C1_ER_bit)

#define NVIC_IPR8_I2C2_EV_P0				(NVIC_IPR_P0_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P1				(NVIC_IPR_P1_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P2				(NVIC_IPR_P2_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P3				(NVIC_IPR_P3_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P4				(NVIC_IPR_P4_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P5				(NVIC_IPR_P5_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P6				(NVIC_IPR_P6_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P7				(NVIC_IPR_P7_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P8				(NVIC_IPR_P8_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P9				(NVIC_IPR_P9_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P10				(NVIC_IPR_P10_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P11				(NVIC_IPR_P11_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P12				(NVIC_IPR_P12_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P13				(NVIC_IPR_P13_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P14				(NVIC_IPR_P14_value << NVIC_IPR8_I2C2_EV_bit)
#define NVIC_IPR8_I2C2_EV_P15				(NVIC_IPR_P15_value << NVIC_IPR8_I2C2_EV_bit)

#define NVIC_IPR8_I2C2_ER_P0				(NVIC_IPR_P0_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P1				(NVIC_IPR_P1_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P2				(NVIC_IPR_P2_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P3				(NVIC_IPR_P3_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P4				(NVIC_IPR_P4_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P5				(NVIC_IPR_P5_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P6				(NVIC_IPR_P6_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P7				(NVIC_IPR_P7_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P8				(NVIC_IPR_P8_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P9				(NVIC_IPR_P9_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P10				(NVIC_IPR_P10_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P11				(NVIC_IPR_P11_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P12				(NVIC_IPR_P12_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P13				(NVIC_IPR_P13_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P14				(NVIC_IPR_P14_value << NVIC_IPR8_I2C2_ER_bit)
#define NVIC_IPR8_I2C2_ER_P15				(NVIC_IPR_P15_value << NVIC_IPR8_I2C2_ER_bit)

#define NVIC_IPR8_SPI1_P0					(NVIC_IPR_P0_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P1					(NVIC_IPR_P1_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P2					(NVIC_IPR_P2_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P3					(NVIC_IPR_P3_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P4					(NVIC_IPR_P4_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P5					(NVIC_IPR_P5_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P6					(NVIC_IPR_P6_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P7					(NVIC_IPR_P7_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P8					(NVIC_IPR_P8_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P9					(NVIC_IPR_P9_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P10					(NVIC_IPR_P10_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P11					(NVIC_IPR_P11_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P12					(NVIC_IPR_P12_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P13					(NVIC_IPR_P13_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P14					(NVIC_IPR_P14_value << NVIC_IPR8_SPI1_bit)
#define NVIC_IPR8_SPI1_P15					(NVIC_IPR_P15_value << NVIC_IPR8_SPI1_bit)

#define NVIC_IPR9_SPI2_P0					(NVIC_IPR_P0_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P1					(NVIC_IPR_P1_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P2					(NVIC_IPR_P2_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P3					(NVIC_IPR_P3_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P4					(NVIC_IPR_P4_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P5					(NVIC_IPR_P5_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P6					(NVIC_IPR_P6_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P7					(NVIC_IPR_P7_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P8					(NVIC_IPR_P8_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P9					(NVIC_IPR_P9_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P10					(NVIC_IPR_P10_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P11					(NVIC_IPR_P11_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P12					(NVIC_IPR_P12_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P13					(NVIC_IPR_P13_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P14					(NVIC_IPR_P14_value << NVIC_IPR9_SPI2_bit)
#define NVIC_IPR9_SPI2_P15					(NVIC_IPR_P15_value << NVIC_IPR9_SPI2_bit)

#define NVIC_IPR9_USART1_P0					(NVIC_IPR_P0_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P1					(NVIC_IPR_P1_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P2					(NVIC_IPR_P2_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P3					(NVIC_IPR_P3_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P4					(NVIC_IPR_P4_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P5					(NVIC_IPR_P5_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P6					(NVIC_IPR_P6_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P7					(NVIC_IPR_P7_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P8					(NVIC_IPR_P8_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P9					(NVIC_IPR_P9_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P10				(NVIC_IPR_P10_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P11				(NVIC_IPR_P11_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P12				(NVIC_IPR_P12_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P13				(NVIC_IPR_P13_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P14				(NVIC_IPR_P14_value << NVIC_IPR9_USART1_bit)
#define NVIC_IPR9_USART1_P15				(NVIC_IPR_P15_value << NVIC_IPR9_USART1_bit)

#define NVIC_IPR9_USART2_P0					(NVIC_IPR_P0_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P1					(NVIC_IPR_P1_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P2					(NVIC_IPR_P2_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P3					(NVIC_IPR_P3_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P4					(NVIC_IPR_P4_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P5					(NVIC_IPR_P5_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P6					(NVIC_IPR_P6_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P7					(NVIC_IPR_P7_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P8					(NVIC_IPR_P8_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P9					(NVIC_IPR_P9_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P10				(NVIC_IPR_P10_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P11				(NVIC_IPR_P11_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P12				(NVIC_IPR_P12_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P13				(NVIC_IPR_P13_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P14				(NVIC_IPR_P14_value << NVIC_IPR9_USART2_bit)
#define NVIC_IPR9_USART2_P15				(NVIC_IPR_P15_value << NVIC_IPR9_USART2_bit)

#define NVIC_IPR9_USART3_P0					(NVIC_IPR_P0_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P1					(NVIC_IPR_P1_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P2					(NVIC_IPR_P2_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P3					(NVIC_IPR_P3_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P4					(NVIC_IPR_P4_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P5					(NVIC_IPR_P5_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P6					(NVIC_IPR_P6_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P7					(NVIC_IPR_P7_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P8					(NVIC_IPR_P8_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P9					(NVIC_IPR_P9_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P10				(NVIC_IPR_P10_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P11				(NVIC_IPR_P11_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P12				(NVIC_IPR_P12_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P13				(NVIC_IPR_P13_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P14				(NVIC_IPR_P14_value << NVIC_IPR9_USART3_bit)
#define NVIC_IPR9_USART3_P15				(NVIC_IPR_P15_value << NVIC_IPR9_USART3_bit)

#define NVIC_IPR10_EXTI15_10_P0				(NVIC_IPR_P0_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P1				(NVIC_IPR_P1_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P2				(NVIC_IPR_P2_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P3				(NVIC_IPR_P3_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P4				(NVIC_IPR_P4_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P5				(NVIC_IPR_P5_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P6				(NVIC_IPR_P6_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P7				(NVIC_IPR_P7_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P8				(NVIC_IPR_P8_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P9				(NVIC_IPR_P9_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P10			(NVIC_IPR_P10_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P11			(NVIC_IPR_P11_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P12			(NVIC_IPR_P12_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P13			(NVIC_IPR_P13_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P14			(NVIC_IPR_P14_value << NVIC_IPR10_EXTI15_10_bit)
#define NVIC_IPR10_EXTI15_10_P15			(NVIC_IPR_P15_value << NVIC_IPR10_EXTI15_10_bit)

#define NVIC_IPR10_RTCAlarm_P0				(NVIC_IPR_P0_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P1				(NVIC_IPR_P1_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P2				(NVIC_IPR_P2_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P3				(NVIC_IPR_P3_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P4				(NVIC_IPR_P4_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P5				(NVIC_IPR_P5_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P6				(NVIC_IPR_P6_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P7				(NVIC_IPR_P7_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P8				(NVIC_IPR_P8_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P9				(NVIC_IPR_P9_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P10				(NVIC_IPR_P10_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P11				(NVIC_IPR_P11_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P12				(NVIC_IPR_P12_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P13				(NVIC_IPR_P13_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P14				(NVIC_IPR_P14_value << NVIC_IPR10_RTCAlarm_bit)
#define NVIC_IPR10_RTCAlarm_P15				(NVIC_IPR_P15_value << NVIC_IPR10_RTCAlarm_bit)

#define NVIC_IPR10_USBWakeup_P0				(NVIC_IPR_P0_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P1				(NVIC_IPR_P1_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P2				(NVIC_IPR_P2_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P3				(NVIC_IPR_P3_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P4				(NVIC_IPR_P4_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P5				(NVIC_IPR_P5_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P6				(NVIC_IPR_P6_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P7				(NVIC_IPR_P7_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P8				(NVIC_IPR_P8_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P9				(NVIC_IPR_P9_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P10			(NVIC_IPR_P10_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P11			(NVIC_IPR_P11_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P12			(NVIC_IPR_P12_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P13			(NVIC_IPR_P13_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P14			(NVIC_IPR_P14_value << NVIC_IPR10_USBWakeup_bit)
#define NVIC_IPR10_USBWakeup_P15			(NVIC_IPR_P15_value << NVIC_IPR10_USBWakeup_bit)

#define NVIC_IPR10_TIM8_BRK_P0				(NVIC_IPR_P0_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P1				(NVIC_IPR_P1_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P2				(NVIC_IPR_P2_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P3				(NVIC_IPR_P3_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P4				(NVIC_IPR_P4_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P5				(NVIC_IPR_P5_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P6				(NVIC_IPR_P6_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P7				(NVIC_IPR_P7_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P8				(NVIC_IPR_P8_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P9				(NVIC_IPR_P9_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P10				(NVIC_IPR_P10_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P11				(NVIC_IPR_P11_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P12				(NVIC_IPR_P12_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P13				(NVIC_IPR_P13_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P14				(NVIC_IPR_P14_value << NVIC_IPR10_TIM8_BRK_bit)
#define NVIC_IPR10_TIM8_BRK_P15				(NVIC_IPR_P15_value << NVIC_IPR10_TIM8_BRK_bit)

#define NVIC_IPR11_TIM8_UP_P0				(NVIC_IPR_P0_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P1				(NVIC_IPR_P1_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P2				(NVIC_IPR_P2_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P3				(NVIC_IPR_P3_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P4				(NVIC_IPR_P4_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P5				(NVIC_IPR_P5_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P6				(NVIC_IPR_P6_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P7				(NVIC_IPR_P7_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P8				(NVIC_IPR_P8_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P9				(NVIC_IPR_P9_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P10				(NVIC_IPR_P10_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P11				(NVIC_IPR_P11_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P12				(NVIC_IPR_P12_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P13				(NVIC_IPR_P13_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P14				(NVIC_IPR_P14_value << NVIC_IPR11_TIM8_UP_bit)
#define NVIC_IPR11_TIM8_UP_P15				(NVIC_IPR_P15_value << NVIC_IPR11_TIM8_UP_bit)

#define NVIC_IPR11_TIM8_TRG_COM_P0			(NVIC_IPR_P0_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P1			(NVIC_IPR_P1_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P2			(NVIC_IPR_P2_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P3			(NVIC_IPR_P3_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P4			(NVIC_IPR_P4_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P5			(NVIC_IPR_P5_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P6			(NVIC_IPR_P6_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P7			(NVIC_IPR_P7_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P8			(NVIC_IPR_P8_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P9			(NVIC_IPR_P9_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P10			(NVIC_IPR_P10_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P11			(NVIC_IPR_P11_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P12			(NVIC_IPR_P12_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P13			(NVIC_IPR_P13_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P14			(NVIC_IPR_P14_value << NVIC_IPR11_TIM8_TRG_COM_bit)
#define NVIC_IPR11_TIM8_TRG_COM_P15			(NVIC_IPR_P15_value << NVIC_IPR11_TIM8_TRG_COM_bit)

#define NVIC_IPR11_TIM8_CC_P0				(NVIC_IPR_P0_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P1				(NVIC_IPR_P1_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P2				(NVIC_IPR_P2_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P3				(NVIC_IPR_P3_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P4				(NVIC_IPR_P4_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P5				(NVIC_IPR_P5_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P6				(NVIC_IPR_P6_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P7				(NVIC_IPR_P7_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P8				(NVIC_IPR_P8_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P9				(NVIC_IPR_P9_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P10				(NVIC_IPR_P10_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P11				(NVIC_IPR_P11_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P12				(NVIC_IPR_P12_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P13				(NVIC_IPR_P13_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P14				(NVIC_IPR_P14_value << NVIC_IPR11_TIM8_CC_bit)
#define NVIC_IPR11_TIM8_CC_P15				(NVIC_IPR_P15_value << NVIC_IPR11_TIM8_CC_bit)

#define NVIC_IPR11_ADC3_P0					(NVIC_IPR_P0_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P1					(NVIC_IPR_P1_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P2					(NVIC_IPR_P2_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P3					(NVIC_IPR_P3_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P4					(NVIC_IPR_P4_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P5					(NVIC_IPR_P5_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P6					(NVIC_IPR_P6_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P7					(NVIC_IPR_P7_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P8					(NVIC_IPR_P8_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P9					(NVIC_IPR_P9_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P10					(NVIC_IPR_P10_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P11					(NVIC_IPR_P11_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P12					(NVIC_IPR_P12_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P13					(NVIC_IPR_P13_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P14					(NVIC_IPR_P14_value << NVIC_IPR11_ADC3_bit)
#define NVIC_IPR11_ADC3_P15					(NVIC_IPR_P15_value << NVIC_IPR11_ADC3_bit)

#define NVIC_IPR12_FSMC_P0					(NVIC_IPR_P0_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P1					(NVIC_IPR_P1_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P2					(NVIC_IPR_P2_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P3					(NVIC_IPR_P3_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P4					(NVIC_IPR_P4_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P5					(NVIC_IPR_P5_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P6					(NVIC_IPR_P6_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P7					(NVIC_IPR_P7_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P8					(NVIC_IPR_P8_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P9					(NVIC_IPR_P9_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P10					(NVIC_IPR_P10_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P11					(NVIC_IPR_P11_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P12					(NVIC_IPR_P12_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P13					(NVIC_IPR_P13_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P14					(NVIC_IPR_P14_value << NVIC_IPR12_FSMC_bit)
#define NVIC_IPR12_FSMC_P15					(NVIC_IPR_P15_value << NVIC_IPR12_FSMC_bit)

#define NVIC_IPR12_SDIO_P0					(NVIC_IPR_P0_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P1					(NVIC_IPR_P1_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P2					(NVIC_IPR_P2_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P3					(NVIC_IPR_P3_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P4					(NVIC_IPR_P4_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P5					(NVIC_IPR_P5_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P6					(NVIC_IPR_P6_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P7					(NVIC_IPR_P7_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P8					(NVIC_IPR_P8_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P9					(NVIC_IPR_P9_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P10					(NVIC_IPR_P10_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P11					(NVIC_IPR_P11_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P12					(NVIC_IPR_P12_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P13					(NVIC_IPR_P13_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P14					(NVIC_IPR_P14_value << NVIC_IPR12_SDIO_bit)
#define NVIC_IPR12_SDIO_P15					(NVIC_IPR_P15_value << NVIC_IPR12_SDIO_bit)

#define NVIC_IPR12_TIM5_P0					(NVIC_IPR_P0_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P1					(NVIC_IPR_P1_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P2					(NVIC_IPR_P2_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P3					(NVIC_IPR_P3_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P4					(NVIC_IPR_P4_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P5					(NVIC_IPR_P5_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P6					(NVIC_IPR_P6_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P7					(NVIC_IPR_P7_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P8					(NVIC_IPR_P8_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P9					(NVIC_IPR_P9_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P10					(NVIC_IPR_P10_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P11					(NVIC_IPR_P11_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P12					(NVIC_IPR_P12_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P13					(NVIC_IPR_P13_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P14					(NVIC_IPR_P14_value << NVIC_IPR12_TIM5_bit)
#define NVIC_IPR12_TIM5_P15					(NVIC_IPR_P15_value << NVIC_IPR12_TIM5_bit)

#define NVIC_IPR12_SPI3_P0					(NVIC_IPR_P0_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P1					(NVIC_IPR_P1_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P2					(NVIC_IPR_P2_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P3					(NVIC_IPR_P3_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P4					(NVIC_IPR_P4_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P5					(NVIC_IPR_P5_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P6					(NVIC_IPR_P6_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P7					(NVIC_IPR_P7_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P8					(NVIC_IPR_P8_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P9					(NVIC_IPR_P9_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P10					(NVIC_IPR_P10_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P11					(NVIC_IPR_P11_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P12					(NVIC_IPR_P12_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P13					(NVIC_IPR_P13_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P14					(NVIC_IPR_P14_value << NVIC_IPR12_SPI3_bit)
#define NVIC_IPR12_SPI3_P15					(NVIC_IPR_P15_value << NVIC_IPR12_SPI3_bit)

#define NVIC_IPR13_UART4_P0					(NVIC_IPR_P0_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P1					(NVIC_IPR_P1_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P2					(NVIC_IPR_P2_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P3					(NVIC_IPR_P3_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P4					(NVIC_IPR_P4_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P5					(NVIC_IPR_P5_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P6					(NVIC_IPR_P6_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P7					(NVIC_IPR_P7_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P8					(NVIC_IPR_P8_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P9					(NVIC_IPR_P9_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P10				(NVIC_IPR_P10_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P11				(NVIC_IPR_P11_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P12				(NVIC_IPR_P12_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P13				(NVIC_IPR_P13_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P14				(NVIC_IPR_P14_value << NVIC_IPR13_UART4_bit)
#define NVIC_IPR13_UART4_P15				(NVIC_IPR_P15_value << NVIC_IPR13_UART4_bit)

#define NVIC_IPR13_UART5_P0					(NVIC_IPR_P0_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P1					(NVIC_IPR_P1_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P2					(NVIC_IPR_P2_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P3					(NVIC_IPR_P3_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P4					(NVIC_IPR_P4_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P5					(NVIC_IPR_P5_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P6					(NVIC_IPR_P6_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P7					(NVIC_IPR_P7_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P8					(NVIC_IPR_P8_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P9					(NVIC_IPR_P9_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P10				(NVIC_IPR_P10_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P11				(NVIC_IPR_P11_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P12				(NVIC_IPR_P12_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P13				(NVIC_IPR_P13_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P14				(NVIC_IPR_P14_value << NVIC_IPR13_UART5_bit)
#define NVIC_IPR13_UART5_P15				(NVIC_IPR_P15_value << NVIC_IPR13_UART5_bit)

#define NVIC_IPR13_TIM6_P0					(NVIC_IPR_P0_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P1					(NVIC_IPR_P1_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P2					(NVIC_IPR_P2_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P3					(NVIC_IPR_P3_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P4					(NVIC_IPR_P4_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P5					(NVIC_IPR_P5_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P6					(NVIC_IPR_P6_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P7					(NVIC_IPR_P7_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P8					(NVIC_IPR_P8_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P9					(NVIC_IPR_P9_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P10					(NVIC_IPR_P10_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P11					(NVIC_IPR_P11_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P12					(NVIC_IPR_P12_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P13					(NVIC_IPR_P13_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P14					(NVIC_IPR_P14_value << NVIC_IPR13_TIM6_bit)
#define NVIC_IPR13_TIM6_P15					(NVIC_IPR_P15_value << NVIC_IPR13_TIM6_bit)

#define NVIC_IPR13_TIM7_P0					(NVIC_IPR_P0_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P1					(NVIC_IPR_P1_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P2					(NVIC_IPR_P2_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P3					(NVIC_IPR_P3_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P4					(NVIC_IPR_P4_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P5					(NVIC_IPR_P5_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P6					(NVIC_IPR_P6_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P7					(NVIC_IPR_P7_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P8					(NVIC_IPR_P8_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P9					(NVIC_IPR_P9_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P10					(NVIC_IPR_P10_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P11					(NVIC_IPR_P11_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P12					(NVIC_IPR_P12_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P13					(NVIC_IPR_P13_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P14					(NVIC_IPR_P14_value << NVIC_IPR13_TIM7_bit)
#define NVIC_IPR13_TIM7_P15					(NVIC_IPR_P15_value << NVIC_IPR13_TIM7_bit)

#define NVIC_IPR14_DMA2_Channel1_P0			(NVIC_IPR_P0_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P1			(NVIC_IPR_P1_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P2			(NVIC_IPR_P2_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P3			(NVIC_IPR_P3_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P4			(NVIC_IPR_P4_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P5			(NVIC_IPR_P5_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P6			(NVIC_IPR_P6_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P7			(NVIC_IPR_P7_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P8			(NVIC_IPR_P8_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P9			(NVIC_IPR_P9_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P10		(NVIC_IPR_P10_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P11		(NVIC_IPR_P11_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P12		(NVIC_IPR_P12_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P13		(NVIC_IPR_P13_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P14		(NVIC_IPR_P14_value << NVIC_IPR14_DMA2_Channel1_bit)
#define NVIC_IPR14_DMA2_Channel1_P15		(NVIC_IPR_P15_value << NVIC_IPR14_DMA2_Channel1_bit)

#define NVIC_IPR14_DMA2_Channel2_P0			(NVIC_IPR_P0_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P1			(NVIC_IPR_P1_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P2			(NVIC_IPR_P2_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P3			(NVIC_IPR_P3_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P4			(NVIC_IPR_P4_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P5			(NVIC_IPR_P5_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P6			(NVIC_IPR_P6_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P7			(NVIC_IPR_P7_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P8			(NVIC_IPR_P8_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P9			(NVIC_IPR_P9_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P10		(NVIC_IPR_P10_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P11		(NVIC_IPR_P11_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P12		(NVIC_IPR_P12_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P13		(NVIC_IPR_P13_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P14		(NVIC_IPR_P14_value << NVIC_IPR14_DMA2_Channel2_bit)
#define NVIC_IPR14_DMA2_Channel2_P15		(NVIC_IPR_P15_value << NVIC_IPR14_DMA2_Channel2_bit)

#define NVIC_IPR14_DMA2_Channel3_P0			(NVIC_IPR_P0_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P1			(NVIC_IPR_P1_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P2			(NVIC_IPR_P2_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P3			(NVIC_IPR_P3_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P4			(NVIC_IPR_P4_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P5			(NVIC_IPR_P5_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P6			(NVIC_IPR_P6_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P7			(NVIC_IPR_P7_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P8			(NVIC_IPR_P8_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P9			(NVIC_IPR_P9_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P10		(NVIC_IPR_P10_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P11		(NVIC_IPR_P11_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P12		(NVIC_IPR_P12_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P13		(NVIC_IPR_P13_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P14		(NVIC_IPR_P14_value << NVIC_IPR14_DMA2_Channel3_bit)
#define NVIC_IPR14_DMA2_Channel3_P15		(NVIC_IPR_P15_value << NVIC_IPR14_DMA2_Channel3_bit)

#define NVIC_IPR14_DMA2_Channel4_5_P0		(NVIC_IPR_P0_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P1		(NVIC_IPR_P1_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P2		(NVIC_IPR_P2_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P3		(NVIC_IPR_P3_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P4		(NVIC_IPR_P4_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P5		(NVIC_IPR_P5_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P6		(NVIC_IPR_P6_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P7		(NVIC_IPR_P7_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P8		(NVIC_IPR_P8_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P9		(NVIC_IPR_P9_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P10		(NVIC_IPR_P10_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P11		(NVIC_IPR_P11_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P12		(NVIC_IPR_P12_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P13		(NVIC_IPR_P13_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P14		(NVIC_IPR_P14_value << NVIC_IPR14_DMA2_Channel4_5_bit)
#define NVIC_IPR14_DMA2_Channel4_5_P15		(NVIC_IPR_P15_value << NVIC_IPR14_DMA2_Channel4_5_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_NVIC_H_ */
