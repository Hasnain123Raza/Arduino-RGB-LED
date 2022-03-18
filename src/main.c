#include <avr/io.h>
#include <util/delay.h>

#include "led.h"

/**
 * @brief Main function of the program.
 * 
 * Makes an RGB LED phase through the colors.
 * Please make sure that the LED is connected to the
 * correct pins.
 * 
 * Red: PD6 / Digital Pin 6 (PWM)
 * Green: PD5 / Digital Pin 5 (PWM)
 * Blue: PD3 / Digital Pin 3 (PWM)
 * 
 * @param argc Argument count (unused).
 * @param argv Argument vector (unused).
 * @return int Exit code (unused).
 */
int main(char *argc, char *argv[]) {
    led_init();

    int red = 0;
    int green = 0;
    int blue = 0;

    while (1) {
        red = (red > 255) ? -255 : red;
        green = (green > 255) ? -255 : green;
        blue = (blue > 255) ? -255 : blue;

        led_red((red > 0) ? red : red * -1);
        led_green((green > 0) ? green : green * -1);
        led_blue((blue > 0) ? blue : blue * -1);

        red += 1;
        green += 2;
        blue += 3;

        _delay_ms(10);
    }

    return 0;
}