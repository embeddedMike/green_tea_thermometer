/*
 * Labview_Uart.h
 *
 *  Created on: 3 lip 2016
 *      Author: Micha³
 */

#include "config.h"

#ifndef LABVIEW_UART_LABVIEW_UART_H_
#define LABVIEW_UART_LABVIEW_UART_H_
extern volatile uint8_t interruptData;
void usartLabView_init();
void usartLabView_transmit(uint8_t data);
void usartLabView_string(char *str);
void usartLabView_wyswietlanie_liczby(uint8_t liczba, uint8_t rodzaj);

#endif /* LABVIEW_UART_LABVIEW_UART_H_ */
