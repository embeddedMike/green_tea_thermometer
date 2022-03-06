/*
 * Labview_Uart.h
 *
 *      Author: Michal Balicki
 */

#include "config.h"

#ifndef LABVIEW_UART_LABVIEW_UART_H_
#define LABVIEW_UART_LABVIEW_UART_H_

void usartLabViewInit();
void usartLabViewTransmit(uint8_t data);
void usartLabViewString(char *str);
void usartLabViewPrintNumbers(uint8_t number, uint8_t type);

#endif /* LABVIEW_UART_LABVIEW_UART_H_ */
