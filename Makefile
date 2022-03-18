CC = /bin/avr-gcc
CPPFLAGS = -DF_CPU=16000000UL
CFLAGS = -Os -mmcu=atmega328p

OBJCOPY = /usr/bin/avr-objcopy
AVRDUDE = /usr/bin/avrdude

VPATH = src

.PHONY: all
all: main push clean

main: led.o
led.o: led.h

.PHONY: push
push:
	./push.sh

.PHONY: clean
clean:
	rm main main.hex *.o