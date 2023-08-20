/*
 * MGPIO_program.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ola Raafat
 */




#include "../../../Library/STD_Types.h"
#include "../../../Library/BIT_Math.h"

#include "../Inc/MGPIO_interface.h"
#include "../Inc/MGPIO_private.h"
#include "../Inc/MGPIO_configration.h"





void MGPIO_vSetPinMode(u8 A_u8PortId, u8 A_PinNo, u8 A_u8Mode){

	if(A_u8Mode == GPIO_MODE_INPUT){
		switch(A_u8PortId){
		case GPIO_PORTA:
			GPIOA -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOA -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOB -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOC -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		}
	}
	else if(A_u8Mode == GPIO_MODE_OUTPUT){
		switch(A_u8PortId){
		case GPIO_PORTA:
			GPIOA -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOA -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOB -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOC -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		}
	}
	else if(A_u8Mode == GPIO_MODE_ALTFUN){
		switch(A_u8PortId){
		case GPIO_PORTA:
			GPIOA -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOA -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOB -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOC -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		}
	}
	else if(A_u8Mode == GPIO_MODE_ANALOG){
		switch(A_u8PortId){
		case GPIO_PORTA:
			GPIOA -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOA -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOB -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> MODER &= ~(0b11 << (A_PinNo*2));
			GPIOC -> MODER |= (A_u8Mode <<(A_PinNo*2));
			break;
		}
	}

}

void MGPIO_vSetPinOutputType(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8OutPutType){

	if (A_u8OutPutType == GPIO_OPENDRAIN){
		switch(A_u8PortId){
		case GPIO_PORTA:
			SET_BIT(GPIOA -> OTYPER, A_u8PinNo);
			break;
		case GPIO_PORTB:
			SET_BIT(GPIOB -> OTYPER, A_u8PinNo);
			break;
		case GPIO_PORTC:
			SET_BIT(GPIOC -> OTYPER, A_u8PinNo);
			break;
		}
	}
	else if (A_u8OutPutType == GPIO_PUSHPULL){
		switch(A_u8PortId){
		case GPIO_PORTA:
			CLR_BIT(GPIOA -> OTYPER, A_u8PinNo);
			break;
		case GPIO_PORTB:
			CLR_BIT(GPIOB -> OTYPER, A_u8PinNo);
			break;
		case GPIO_PORTC:
			CLR_BIT(GPIOC -> OTYPER, A_u8PinNo);
			break;
		}
	}

}
void MGPIO_vSetPinOutputSpeed(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8OutputSpeed){
	if(A_u8OutputSpeed == GPIO_LOW_SPEED){
		switch(A_u8PortId){
		case GPIO_PORTA:
			GPIOA -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOA -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOB -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOC -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		}
	}
	else if(A_u8OutputSpeed == GPIO_MEDIUM_SPEED){
		switch(A_u8PortId){
		case GPIO_PORTA:
			GPIOA -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOA -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOB -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOC -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		}
	}
	else if(A_u8OutputSpeed == GPIO_HIGH_SPEED){
		switch(A_u8PortId){
		case GPIO_PORTA:
			GPIOA -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOA -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOB -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOC -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		}
	}
	else if(A_u8OutputSpeed == GPIO_VERY_HIGH_SPEED){
		switch(A_u8PortId){
		case GPIO_PORTA:
			GPIOA -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOA -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOB -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOC -> OSPEEDR |= (A_u8OutputSpeed <<(A_u8PinNo*2));
			break;
		}
	}
}
void MGPIO_vSetPinInputPull(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8PullType){
	if(A_u8PullType == GPIO_NO_PULL){
		switch(A_u8PortId){
		case GPIO_PORTA:
			GPIOA -> PUPDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOA -> PUPDR |= (A_u8PullType <<(A_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> PUPDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOB -> PUPDR |= (A_u8PullType <<(A_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> PUPDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOC -> PUPDR |= (A_u8PullType <<(A_u8PinNo*2));
			break;
		}
	}
	else if(A_u8PullType == GPIO_PULL_UP){
		switch(A_u8PortId){
		case GPIO_PORTA:
			GPIOA -> PUPDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOA -> PUPDR |= (A_u8PullType <<(A_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> PUPDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOB -> PUPDR |= (A_u8PullType <<(A_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> PUPDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOC -> PUPDR |= (A_u8PullType <<(A_u8PinNo*2));
			break;
		}
	}
	else if(A_u8PullType == GPIO_PULL_DOWN){
		switch(A_u8PortId){
		case GPIO_PORTA:
			GPIOA -> PUPDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOA -> PUPDR |= (A_u8PullType <<(A_u8PinNo*2));
			break;
		case GPIO_PORTB:
			GPIOB -> PUPDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOB -> PUPDR |= (A_u8PullType <<(A_u8PinNo*2));
			break;
		case GPIO_PORTC:
			GPIOC -> PUPDR &= ~(0b11 << (A_u8PinNo*2));
			GPIOC -> PUPDR |= (A_u8PullType <<(A_u8PinNo*2));
			break;
		}
	}

}

u8 MGPIO_u8GetPinValue(u8 A_u8PortId, u8 A_u8PinNo){

	u8 L_u8PinValue = 0;
	switch(A_u8PortId){
	case GPIO_PORTA:
		L_u8PinValue = GET_BIT(GPIOA -> IDR, A_u8PinNo);
		break;
	case GPIO_PORTB:
		L_u8PinValue = GET_BIT(GPIOB -> IDR, A_u8PinNo);
		break;
	case GPIO_PORTC:
		L_u8PinValue = GET_BIT(GPIOC -> IDR, A_u8PinNo);
		break;
	}
	return L_u8PinValue;
}

void MGPIO_vSetPinVal(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8PinVal){

	if (A_u8PinVal == GPIO_HIGH){
		switch(A_u8PortId){
		case GPIO_PORTA:
			SET_BIT(GPIOA -> ODR, A_u8PinNo);
			break;
		case GPIO_PORTB:
			SET_BIT(GPIOB -> ODR, A_u8PinNo);
			break;
		case GPIO_PORTC:
			SET_BIT(GPIOC -> ODR, A_u8PinNo);
			break;
		}
	}
	if (A_u8PinVal == GPIO_LOW){
		switch(A_u8PortId){
		case GPIO_PORTA:
			CLR_BIT(GPIOA -> ODR, A_u8PinNo);
			break;
		case GPIO_PORTB:
			CLR_BIT(GPIOB -> ODR, A_u8PinNo);
			break;
		case GPIO_PORTC:
			CLR_BIT(GPIOC -> ODR, A_u8PinNo);
			break;
		}
	}

}
void MGPIO_vSetPinVal_fast(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8PinVal){
	switch(A_u8PortId){
	case GPIO_PORTA:
		GPIOA -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
		GPIOA -> OSPEEDR |= (A_u8PinVal <<(A_u8PinNo*2));
		break;
	case GPIO_PORTB:
		GPIOB -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
		GPIOB -> OSPEEDR |= (A_u8PinVal <<(A_u8PinNo*2));
		break;
	case GPIO_PORTC:
		GPIOC -> OSPEEDR &= ~(0b11 << (A_u8PinNo*2));
		GPIOC -> OSPEEDR |= (A_u8PinVal <<(A_u8PinNo*2));
		break;
	}
}

void MGPIO_vSetAlternativeFunction(u8 A_u8PortId, u8 A_u8PinNo, u8 A_u8AltFun){
	switch(A_u8PortId){
	uint8_t Local_u8RegNum =(A_u8PinNo/ 8);
	uint8_t Local_u8BitNum =(A_u8PinNo% 8);
	switch(A_u8PortId){
	case GPIO_PORTA:
		GPIOA -> AFR[Local_u8RegNum]  &= ~(0b1111 << (A_u8PinNo*4));
		GPIOA -> AFR[Local_u8RegNum]  |= (A_u8AltFun <<(A_u8PinNo*4));
		break;
	case GPIO_PORTB:
		GPIOB -> AFR[Local_u8RegNum]  &= ~(0b1111 << (A_u8PinNo*4));
		GPIOB -> AFR[Local_u8RegNum]  |= (A_u8AltFun <<(A_u8PinNo*4));
		break;
	case GPIO_PORTC:
		GPIOC -> AFR[Local_u8RegNum]  &= ~(0b1111 << (A_u8PinNo*4));
		GPIOC -> AFR[Local_u8RegNum]  |= (A_u8AltFun <<(A_u8PinNo*4));
		break;
	}}
