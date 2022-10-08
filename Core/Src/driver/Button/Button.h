/*
 * Button.h
 *
 *  Created on: Oct 7, 2022
 *      Author: kccistc
 */
#ifndef SRC_DRIVER_BUTTON_H_
#define SRC_DRIVER_BUTTON_H_

#include "stm32f4xx_hal.h"

enum {ACTIVE_NO, ACTIVE_PUSH, ACTIVE_RELEASE};
enum {PUSHED, RELEASED};

// 버튼하나마다 함수를 만들어주기에는 코드가 너무 많아지니까 구조체를 이용해서 함수하나를 이용
typedef struct _button {
	GPIO_TypeDef* GPIOX;
	uint16_t GPIO_Pin;
	int prevState;
}Button;


#endif /* SRC_DRIVER_BUTTON_H_ */
