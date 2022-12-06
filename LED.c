/*
 * buzzer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: LENOVO
 */
#include<avr/io.h>
#include"GPIO0.0.1.h"
#include"common_macros.h"
#include"LED.h"

void LED_init()
{
	SET_BIT_DIRECTION_OUTPUT(LED_PORT_ID,LED_PIN_ID);
	LED_PORT&=~(1<<LED_PIN_ID);
}

void LED_on()
{
	LED_PORT|=(1<<LED_PIN_ID);
}

void LED_off()
{
	LED_PORT&=~(1<<LED_PIN_ID);
}
