/*
 * lcd.h
 *
 *  Created on: -
 *      Author: Michal Balicki
 */

#include "config.h"


#ifndef LCD_LCD_H_
#define LCD_LCD_H_

void gpioInit(void);
void lcdReadPartialByte(uint8_t bajt);
void lcdInit(void);
void lcdReadCommand(uint8_t komenda);
void lcdReadPartialAscii(uint8_t ASCII);
void lcdString(char* Napis);
void lcdCursorPositon(uint8_t y, uint8_t x);
void lcdDisplayNumber(uint8_t liczba, uint8_t rodzaj);
void lcdChar(char c);
void clearLine( uint8_t line );
void lcdDefchar(uint8_t nr, uint8_t *def_znak);
#endif /* LCD_LCD_H_ */
