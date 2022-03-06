/*
 * servo.c
 *
 *      Author: Michal Balicki
 */
#include "include/servo.h"


void timer2InitPwmServo(void)
{
	RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;
	// default 8MHz
	TIM2->PSC = 79; // 800/8MHz -> 0,00001 s -> 10us, 0.01ms
	TIM2->ARR = 1999; // 2000 10us-sek ticks gives 20ms
	TIM2->CCR1 = 150; // PWM
	TIM2->CCER |= TIM_CCER_CC1E; // activate OCx
	TIM2->CCMR1 = TIM_CCMR1_OC1M_1 | TIM_CCMR1_OC1M_2; // pwm mode 1
	TIM2->DIER |= TIM_DIER_UIE;
	TIM2->CR1 |= TIM_CR1_CEN;
	//NVIC_EnableIRQ(TIM2_IRQn);
}

void servoAngle0(void)
{
	TIM2->CCR1 = 150; // 1500us
}

void servoAngle45(void)
{ 
	TIM2->CCR1 = 100; // 1000us
}

void servoAngle90(void)
{
	TIM2->CCR1 = 60; // 600us
}
