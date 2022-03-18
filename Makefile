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
	$(OBJCOPY) -O ihex -R .eeprom main main.hex
	sudo $(AVRDUDE) -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:main.hex

.PHONY: clean
clean:
	rm main main.hex *.o