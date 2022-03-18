#ifndef LED_H
#define LED_H

#include <avr/io.h>

/**
 * @brief Initializes the LED.
 * 
 */
void led_init(void);

/**
 * @brief Sets the brightness of the red color.
 * 
 * Controls PD6 / Digital Pin 6 (PWM).
 * 
 * @param red Brightness value between 0 and 255.
 */
void led_red(char red);
/**
 * @brief Sets the brightness of the green color.
 * 
 * Controls PD5 / Digital Pin 5 (PWM).
 * 
 * @param green Brightness value between 0 and 255.
 */
void led_green(char green);
/**
 * @brief Sets the brightness of the blue color.
 * 
 * Controls PD3 / Digital Pin 3 (PWM).
 * 
 * @param blue Brightness value between 0 and 255.
 */
void led_blue(char blue);

#endif