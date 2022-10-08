/*
 * Button.c
 *
 *  Created on: Oct 7, 2022
 *      Author: kccistc
 */

#include "Button.h"
//
//enum {ACTIVE_NO, ACTIVE_PUSH, ACTIVE_RELEASE};
//// 버튼하나마다 함수를 만들어주기에는 코드가 너무 많아지니까 구조체를 이용해서 함수하나를 이용
//typedef struct _button {
//	GPIO_TypeDef* GPIOX;
//	uint16_t GPIO_Pin;
//	int prevState;
//}Button;
//void HAL_GPIO_WritePin()
//int prevState = 0;
//int prevState1 = 0;
void Button_GetInstance(Button *btn, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
	btn->GPIOX = GPIOx;
	btn->GPIO_Pin = GPIO_Pin;
	btn->prevState = RELEASED;
}

int Button_GetState(Button *btn)
{
	int curState;
	curState = HAL_GPIO_ReadPin(btn->GPIOX, btn->GPIO_Pin);
	if (curState == PUSHED && btn->prevState == RELEASED) {
		btn->prevState = PUSHED;
		return ACTIVE_PUSH;
	}
	else if (curState == RELEASED && btn->prevState == PUSHED) {
		btn->prevState = RELEASED;
		return ACTIVE_RELEASE;
	}
	return ACTIVE_NO;
}