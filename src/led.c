#include "led.h"

void led_init(void) {
    DDRD |= _BV(PD3) | _BV(PD5) | _BV(PD6);
    TCCR2A |= _BV(WGM21) | _BV(WGM20);
    TCCR2B |= _BV(CS20);

    TCCR0A |= _BV(WGM01) | _BV(WGM00);
    TCCR0B |= _BV(CS00);
}



void led_red(char red) {
    if (red == 0) {
        TCCR0A &= ~(_BV(COM0A1) | _BV(COM0A0));
    } else {
        TCCR0A |= _BV(COM0A1);
        OCR0A = red;
    }
}

void led_green(char green) {
    if (green == 0) {
        TCCR0A &= ~(_BV(COM0B1) | _BV(COM0B0));
    } else {
        TCCR0A |= _BV(COM0B1);
        OCR0B = green;
    }
}

void led_blue(char blue) {
    if (blue == 0) {
        TCCR2A &= ~(_BV(COM2B0) | _BV(COM2B1));
    } else {
        TCCR2A |= _BV(COM2B1);
        OCR2B = blue;
    }
}