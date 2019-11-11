Openocd:

cd /usr/local/share/openocd/scripts/board/

openocd -f st_nucleo_f103rb.cfg

Compile:

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m0plus -o bin/vectors.o src/vectors.c 

arm-none-eabi-gcc -x assembler-with-cpp -c -mcpu=cortex-m3 -g  startup.S -o bin/startup.o

arm-none-eabi-gcc -mcpu=cortex-m3 -nostartfiles -TSTM32F103xC_rom.ld -g -Wl,--cref,--no-warn-mismatch,--gc-sections bin/temp.o bin/labview.o bin/lcd.o bin/gpio.o bin/itoa.o bin/printf.o bin/vectors.o bin/serwo.o bin/klawiatura.o bin/fsm.o bin/config.o  bin/startup.o bin/main.o -lm -o bin/main.elf


Load firmware:

arm-none-eabi-gdb -tui main.elf

target extended-remote localhost:3333

monitor reset halt

load
