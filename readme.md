Toolchain:

sudo apt-get install gcc-arm-linux-gnueabi

sudo apt install gdb-multiarch

Openocd:

1)

cd /usr/local/share/openocd/scripts/board/

or

cd /usr/share/openocd/scripts/board/

2)

openocd -f st_nucleo_f103rb.cfg

Compile:

1)

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/vectors.o src/vectors.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/ds18b20.o src/ds18b20.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/microswitch.o src/microswitch.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/itoa.o src/itoa.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/gpio.o src/gpio.c 

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/printf.o src/printf.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/lcd.o src/lcd.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/config.o src/config.c

arm-none-eabi-gcc -O0 -c -g -mcpu=cortex-m3 -o bin/main.o src/main.c  

file file_name.o 

2)

arm-none-eabi-gcc -x assembler-with-cpp -c -mcpu=cortex-m3 -g  startup.S -o bin/startup.o

3)

arm-none-eabi-gcc -mcpu=cortex-m3 -nostartfiles -TSTM32F103xC_rom.ld -g -Wl,--cref,--no-warn-mismatch,--gc-sections bin/ds18b20.o bin/lcd.o bin/gpio.o bin/itoa.o bin/printf.o bin/vectors.o bin/microswitch.o bin/config.o  bin/startup.o bin/main.o -lm -o bin/main.elf


Load firmware:

1)

arm-none-eabi-gdb -tui main.elf

or

gdb-multiarch main.elf

2)

target extended-remote localhost:3333

3)

monitor reset halt

4)

load
