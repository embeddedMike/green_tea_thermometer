/*
 * labview_uart.c
 *
 *      Author: Michal Balicki
 */

#include "include/labview_uart.h"

/*
 * USART4
 * PC10 - Tx
 * PC11 - Rx
 */

void usartLabViewInit()
{
	//RCC_APB1ENR_USART2EN_bb = 1; // ok
	RCC->APB1ENR |= RCC_APB1ENR_USART3EN;
	gpio_pin_cfg(USART_GPIO_LV, USART_TX_LV, GPIO_CRx_MODE_CNF_ALT_PP_10M_value);
	gpio_pin_cfg(USART_GPIO_LV, USART_RX_LV, GPIO_CRx_MODE_CNF_IN_FLOATING_value);

	USART3->CR1 = 0;
	USART3->BRR = 8000000 / 9600;
	USART3->CR1 = USART_CR1_UE | USART_CR1_TE | USART_CR1_RE;
}


void usartLabViewTransmit(uint8_t data)
{
	//polling:
	while(!(USART3->SR & USART_SR_TXE));
	USART3->DR = data;
}

void usartLabViewString(char *str)
{
	while(*str)
	{
		usartLabViewTransmit((uint8_t) *str);
		++str;
	}
}

void usartLabViewPrintNumbers(uint8_t number, uint8_t type)
{
	char buffer[17];
	itoa(number,buffer,type);
	usartLabView_string(buffer);
}

