/*
 * config.h
 *
 *  Created on: 21 gru 2016
 *      Author: TQelektronik
 */
#ifndef CONFIG_H_
#define CONFIG_H_


#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../inc/stm32f103xe.h"
#include "../../hdr/hdr_rcc.h"
#include "../../hdr/hdr_gpio.h"
#include "gpio.h"
#include "../../hdr/hdr_bitband.h"
/*
+=============================================================================+
| global definitions
+=============================================================================+
*/
#define HSI_FREQ							4000000ul
#define CRYSTAL								8000000ul	///< quartz crystal resonator which is connected to the chip
//#define FREQUENCY							72000000ul	///< desired target frequency of the core
#define FREQUENCY							8000000ul

//#define SW1_GPIO							GPIOA
//#define SW1_pin								4
//#define SW1_bb								bitband_t m_BITBAND_PERIPH(&(SW1_GPIO->IDR), SW1_pin)

//#define SW2_GPIO							GPIOA
//#define SW2_pin								5
//#define SW2_bb								bitband_t m_BITBAND_PERIPH(&(SW2_GPIO->IDR), SW2_pin)

//#define SW3_GPIO							GPIOA
//#define SW3_pin								6
//#define SW3_bb								bitband_t m_BITBAND_PERIPH(&(SW3_GPIO->IDR), SW3_pin)

//#define SW4_GPIO							GPIOA
//#define SW4_pin								7
//#define SW4_bb								bitband_t m_BITBAND_PERIPH(&(SW4_GPIO->IDR), SW4_pin)

//#define SW5_GPIO							GPIOC
//#define SW5_pin								4
//#define SW5_bb								bitband_t m_BITBAND_PERIPH(&(SW5_GPIO->IDR), SW5_pin)

//#define RTC_GPIO							GPIOB
//#define RTC_SCL_pin							10
//#define RTC_SDA_pin							11
//#define RTC_INT_pin							1


//#define SDA_GPIO							GPIOB
//#define SDA_pin								9
//#define SCL_GPIO							GPIOB
//#define SCL_pin								8

#define USART_GPIO_LV						GPIOC
#define USART_TX_LV							10
#define USART_RX_LV							11


#define USART_GPIO							GPIOA
#define USART_TX							9
#define USART_RX							10

#define KLAWIATURA_GPIO						GPIOB
#define BUTTON1								5
#define BUTTON2								6
#define BUTTON3								7
#define BUTTON4								8
#define BUTTON5								9
//#define LED_SPI_GPIO						GPIOB
//#define LED_DATA							15
//#define LED_CLOCK							13
//#define LED_CTRL_GPIO						GPIOC
//#define LED_LATCH1_pin						6
//#define LED_LATCH2_pin						7
//#define LED_ENABLE1_pin						8
//#define LED_ENABLE2_pin						9
//#define LED_LATCH_bb						bitband_t m_BITBAND_PERIPH(&(LED_CTRL_GPIO->ODR), LED_LATCH2_pin)
//#define LED_ENABLE_bb						bitband_t m_BITBAND_PERIPH(&(LED_CTRL_GPIO->ODR), LED_ENABLE2_pin)


void timer6_init_delay(void);
void delay_ms(int ms);
/*
+=============================================================================+
| strange variables
+=============================================================================+
*/

/*
+=============================================================================+
| global variables
+=============================================================================+
*/

/*
+=============================================================================+
| global functions' declarations
+=============================================================================+
*/

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* CONFIG_H_ */
