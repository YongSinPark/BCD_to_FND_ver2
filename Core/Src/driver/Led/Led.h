/*
 * Led.h
 *
 *  Created on: Oct 7, 2022
 *      Author: kccistc
 */

#ifndef SRC_DRIVER_LED_LED_H_
#define SRC_DRIVER_LED_LED_H_

#include "stm32f4xx_hal.h"

// 버튼하나마다 함수를 만들어주기에는 코드가 너무 많아지니까 구조체를 이용해서 함수하나를 이용
typedef struct _led {
	GPIO_TypeDef* GPIOX;
	uint16_t GPIO_Pin;
}Led;

void Led_GetInstance(Led *led, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void Led_On(Led *led);
void Led_Off(Led *led);
void Led_Toggle(Led *led);
void Led_Level(int number, Led *led1, Led *led2, Led *led3, Led *led4, Led *led5);

#endif /* SRC_DRIVER_LED_LED_H_ */
