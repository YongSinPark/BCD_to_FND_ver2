/*
 * Led.c
 *
 *  Created on: Oct 7, 2022
 *      Author: kccistc
 */
#include "Led.h"

enum {ACTIVE_NO, ACTIVE_PUSH, ACTIVE_RELEASE};
enum {PUSHED, RELEASED};

void Led_GetInstance(Led *led, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
	led->GPIOX = GPIOx;
	led->GPIO_Pin = GPIO_Pin;
}

void Led_On(Led *led)
{
	HAL_GPIO_WritePin(led->GPIOX, led->GPIO_Pin, GPIO_PIN_SET);
}

void Led_Off(Led *led)
{
	HAL_GPIO_WritePin(led->GPIOX, led->GPIO_Pin, GPIO_PIN_RESET);
}

void Led_Toggle(Led *led)
{
	HAL_GPIO_TogglePin(led->GPIOX, led->GPIO_Pin);
}

void Led_Level(int number, Led *led1, Led *led2, Led *led3, Led *led4, Led *led5)
{	
	switch(number / 100)
	{
		case 0:
			Led_Off(&led1);
			Led_Off(&led2);
			Led_Off(&led3);
			Led_Off(&led4);
			Led_Off(&led5); 
			break;
		case 1:
			Led_On(&led1);
			break;
		case 2:
			Led_On(&led2);
			break;
		case 3:
			Led_On(&led3);
			break;
		case 4:
			Led_On(&led4);
			break;
		case 5:
			Led_On(&led5);
			break;
	}
}
