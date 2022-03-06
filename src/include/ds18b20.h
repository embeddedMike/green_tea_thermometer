/*
 * ds18b20.h
 *
 *      Author: TQelektronik
 */

#include "config.h"

#ifndef TEMP_UART_TEMP_UART_H_
#define TEMP_UART_TEMP_UART_H_

#define DS_SKIP_ROM 0xCC
#define DS_CONVERT_T 0x44
#define DS_READ_SCRATCHPAD 0xBE

#define DS_ZNAK_PLUS 1
#define DS_ZNAK_MINUS 0
#define DS_ERROR 0
#define DS_OK 1
#define DS_CRC_ERROR 2

void set_baud(uint32_t baud);
void ow_init(void);
uint8_t uart_txrx(uint8_t data);


void ow_write_1b(uint8_t data);
uint8_t ow_read_1b(void);

uint8_t ow_reset_pulse(void);
void ow_write(uint8_t data);
uint8_t ow_read(void);

uint8_t ds18b20_read_temperature(uint8_t *znak, uint8_t *temperatur, uint8_t *reszta);
uint8_t ds18b20_convert(void);


#endif /* TEMP_UART_TEMP_UART_H_ */
