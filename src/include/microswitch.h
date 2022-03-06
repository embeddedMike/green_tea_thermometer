/*
 * microswitch.h
 *
 *      Author: Michal Balicki
 */
#include "config.h"


#ifndef MICROSWITCH_MICROSWITCH_H_
#define MICROSWITCH_MICROSWITCH_H_

uint8_t static duty;
volatile uint8_t ms10_cnt;
volatile uint8_t s1_cnt;
volatile uint16_t Timer1,Timer2;
void timer4Debounce(void);
void buttonGpioInit(void);
void buttonPress(uint16_t button,uint32_t wait,void(*wsk)(uint8_t *zmienna),void(*wsk2)(void));
void ledTog(void);

#endif /* MICROSWITCH_MICROSWITCH_H_ */
