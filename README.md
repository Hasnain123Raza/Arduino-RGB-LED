# Arduino RGB LED

## Introduction

Arduino is an open-source electronics platform based on easy-to-use hardware and software. Arduino boards are able to read inputs - light on a sensor, a finger on a button, or a Twitter message - and turn it into an output - activating a motor, turning on an LED, publishing something online. You can tell your board what to do by sending a set of instructions to the microcontroller on the board. To do so you use the Arduino programming language (based on Wiring), and the Arduino Software (IDE), based on Processing (https://www.arduino.cc/en/Guide/Introduction).

This program needs to be deployed to Uno R3 Controller Board, which has the ATmega328P chip. Please make sure an RGB LED is connected to the board. The red component of the LED needs to be connected to the digital pin 6. The green component of the LED needs to be connected to the pin 5. The blue component of the LED needs to be connected to the digital pin 3. These are PWM (Pulse Width Modulation) pins that means they are able to simulate analog output and thus the RGB components of the LED can be mixed in different proportions to create more colors.

## Building and Deploying

Make sure that the board is connected to your computer. Please install `gcc-avr`, `avr-libc`, and `avrdude`. After that simply navigate to the root directory of the project and type `make`.