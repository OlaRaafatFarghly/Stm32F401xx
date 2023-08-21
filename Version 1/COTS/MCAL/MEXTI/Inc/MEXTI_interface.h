/*
 * MEXTI_interface.h
 *
 *  Created on: Aug 14, 2023
 *      Author: Ola Raafat
 */

#ifndef MCAL_MEXTI_MEXTI_INTERFACE_H_
#define MCAL_MEXTI_MEXTI_INTERFACE_H_

void MEXTI_EnableInterrupt(u8 A_line);
void MEXTI_DisableInterrupt(A_line);
void MEXTI_SoftwareInterrupt(u8 A_u8State, u8 A_u8PinNum);
void MEXTI_EdgeTriggerInterrupt(u8 A_u8Type,u8 A_u8State, u8 A_u8PinNum);








#endif /* MCAL_MEXTI_MEXTI_INTERFACE_H_ */
