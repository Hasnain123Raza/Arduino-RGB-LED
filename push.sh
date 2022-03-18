#!/bin/bash

# Push the main binary to the chip

avr-objcopy -O ihex -R .eeprom main main.hex
sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:main.hex