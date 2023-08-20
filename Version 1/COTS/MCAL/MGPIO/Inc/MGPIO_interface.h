/*
 * MGPIO_interface.h
 *
 *  Created on: Aug 13, 2023
 *      Author: Ola Raafat
 */

#ifndef MCAL_MGPIO_MGPIO_INTERFACE_H_
#define MCAL_MGPIO_MGPIO_INTERFACE_H_


#define GPIO_MODE_INPUT   0b00
#define GPIO_MODE_OUTPUT  0b01
#define GPIO_MODE_ALTFUN  0b10
#define GPIO_MODE_ANALOG  0b11


#define GPIO_PORTA 0
#define GPIO_PORTB 1
#define GPIO_PORTC 2

#define GPIO_PUSHPULL 0
#define GPIO_OPENDRAIN 1

#define GPIO_LOW_SPEED       00
#define GPIO_MEDIUM_SPEED    01
#define GPIO_HIGH_SPEED      10
#define GPIO_VERY_HIGH_SPEED 11

#define GPIO_NO_PULL 00
#define GPIO_PULL_UP 01
#define GPIO_PULL_DOWN 10

#define GPIO_LOW 0
#define GPIO_HIGH 1


void MGPIO_vSetPinMode(u8 A_u8PortId, u8 A_PinNo, u8 A_u8Mode);
void MGPIO_vSetPinType(u8 A_u8PortId, u8 A_PinNo, u8 A_u8OutputType);
void MGPIO_vSetPinOutputSpeed(u8 A_u8PortId, u8 A_PinNo, u8 A_u8OutputSpeed);
void MGPIO_vSetPinInputPull(u8 A_u8PortId, u8 A_PinNo, u8 A_u8PullType);

void MGPIO_vGetPinValue(u8 A_u8PortId, u8 A_PinNo);

void MGPIO_vSetPinValue(u8 A_u8PortId, u8 A_PinNo);

void MGPIO_vSetPinValueFast(u8 A_u8PortId, u8 A_PinNo, u8 A_PinValue);
void MGPIO_vAlternativeFunction(u8 A_u8PortId, u8 A_PinNo, u8 A_AltFunc);




#endif /* MCAL_MGPIO_MGPIO_INTERFACE_H_ */
