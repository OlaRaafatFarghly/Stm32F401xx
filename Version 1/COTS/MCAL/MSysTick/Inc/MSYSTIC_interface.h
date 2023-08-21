/*
 * MSYSTIC_interface.h
 *
 *  Created on: Aug 15, 2023
 *      Author:  Ola Raafat
 */

#ifndef MCAL_MSYSTIC_MSYSTIC_INTERFACE_H_
#define MCAL_MSYSTIC_MSYSTIC_INTERFACE_H_

void MSYSTIC_voidInit();


void MSYSTIC_voidEnableRequist(u8 A_state);


u32 MSYSTIC_voidGetElapsedTime(void);
u32 voidGetRemindingTime(void);

void MSYSTIC_voidDelayms(u8 A_Delay);
#endif /* MCAL_MSYSTIC_MSYSTIC_INTERFACE_H_ */
