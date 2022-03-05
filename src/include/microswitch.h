/*
 * microswitch.h
 *
 *  Created on: -
 *      Author: Michal Balicki
 */

//#include "../../inc/stm32f103xe.h"
#include "config.h"
//#include "hdr/hdr_rcc.h"
//#include "hdr/hdr_gpio.h"
//#include "gpio.h"

#ifndef KLAWIATURA_KLAWIATURA_H_
#define KLAWIATURA_KLAWIATURA_H_



uint8_t static duty;
volatile uint8_t ms10_cnt;
volatile uint8_t s1_cnt;
volatile uint16_t Timer1,Timer2;
void timer4_Debounce(void);
void ButtonGpio_init(void);
void ButtonPress(uint16_t button,uint32_t wait,void(*wsk)(uint8_t *zmienna),void(*wsk2)(void));
void LedTog(void);
#endif /* KLAWIATURA_KLAWIATURA_H_ */
