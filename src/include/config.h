/*
 * config.h
 *
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

#define HSI_FREQ							4000000ul
#define CRYSTAL								8000000ul	///< quartz crystal resonator which is connected to the chip
#define FREQUENCY							8000000ul


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

void timer6_init_delay(void);
void delay_ms(int ms);

#endif /* CONFIG_H_ */
