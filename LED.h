/*
 * buzzer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: LENOVO
 */

#ifndef LED_H_
#define LED_H_

#define LED_PORT_ID PORTC_ID
#define LED_PIN_ID  PIN7
#define LED_PORT PORTC

void LED_init();
void LED_on();
void LED_off();

#endif /* LED_H_ */
