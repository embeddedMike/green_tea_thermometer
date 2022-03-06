#!/bin/bash
mkdir bin

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/vectors.o src/vectors.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/ds18b20.o src/ds18b20.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/microswitch.o src/microswitch.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/itoa.o src/itoa.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/gpio.o src/gpio.c 

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/printf.o src/printf.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/lcd.o src/lcd.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/config.o src/config.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/main.o src/main.c