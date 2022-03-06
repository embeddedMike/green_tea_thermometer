/*
 * lcd.h
 *      Author: Michal Balicki
 */

#include "config.h"

#ifndef LCD_LCD_H_
#define LCD_LCD_H_

void gpioInit(void);
void lcdReadPartialByte(uint8_t byte);
void lcdInit(void);
void lcdReadCommand(uint8_t command);
void lcdReadPartialAscii(uint8_t ascii);
void lcdString(char* str);
void lcdCursorPositon(uint8_t y, uint8_t x);
void lcdDisplayNumber(uint8_t number, uint8_t type);
void lcdChar(char c);
void clearLine(uint8_t line);
void lcdDefchar(uint8_t nr, uint8_t *defChar);

#endif /* LCD_LCD_H_ */
