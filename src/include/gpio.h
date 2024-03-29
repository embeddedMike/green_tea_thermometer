/** \file gpio.h
 * \brief Header for gpio.c
 * \details Header for gpio.c
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-01-07
 */

/******************************************************************************
* chip: STM32F1x
* compiler: arm-none-eabi-gcc (Sourcery CodeBench Lite 2011.09-69) 4.6.1
******************************************************************************/

#ifndef GPIO_H_
#define GPIO_H_

#include "../../inc/stm32f103xe.h"
#include "../../hdr/hdr_gpio.h"

void gpio_init(void);
void gpio_pin_cfg(GPIO_TypeDef *port_ptr, uint32_t pin, uint32_t mode_cnf_value);

#endif /* GPIO_H_ */
