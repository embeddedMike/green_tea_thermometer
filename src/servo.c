/*
 * servo.c
 *
 *  Created on: -
 *      Author: Michal Balicki
 */
#include "include/servo.h"


void timer2_init_PWMserwo(void){

	RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;
	// domyslnie 8MHz
	TIM2->PSC = 79; // 800/8MHz daje 0,00001 s - 10us, 0.01ms
	TIM2->ARR = 1999; // 2000 10us-sekundowych tykniec daje 20ms
	TIM2->CCR1 = 150; // wspolczynnik wypelnienia
	TIM2->CCER |= TIM_CCER_CC1E; //aktywuje dana koncowke OCx
	TIM2->CCMR1 = TIM_CCMR1_OC1M_1 | TIM_CCMR1_OC1M_2; // pwm mode 1
	TIM2->DIER |= TIM_DIER_UIE;
	TIM2->CR1 |= TIM_CR1_CEN;
	//NVIC_EnableIRQ(TIM2_IRQn);
}
// Wpisanie odpowiednich wartosci do rejestru CCR1

void serwoAngle0(void){ // 1500us
	TIM2->CCR1 = 150;
}

void serwoAngle45(void){ // 1000us
	TIM2->CCR1 = 100;
}

void serwoAngle90(void){ // 600us
	TIM2->CCR1 = 60;
}
