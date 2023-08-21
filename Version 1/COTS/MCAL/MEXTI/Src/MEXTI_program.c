/*
 * MEXTI_program.c
 *
 *  Created on: Aug 14, 2023
 *      Author: Ola Raafat
 */

#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Math.h"

#include "../MEXTI_interface.h"
#include "../MEXTI_private.h"
#include "../MEXTI_configration.h"

void MEXTI_EnableInterrupt(EXTI_MEMMAP_t A_line)
{
	SET_BIT(EXTI -> EXTI_IMR,A_line);
}
void MEXTI_DisableInterrupt(A_line)
{
	CLR_BIT(EXTI -> EXTI_IMR,A_line);
}
void MEXTI_SoftwareInterrupt( u8 A_u8PinNum)
{
	SET_BIT(EXTI ->EXTI_SWIER,A_u8PinNum);
	break;
}

void MEXTI_EdgeTriggerInterrupt(u8 A_u8Type,u8 A_u8PinNum)
{
	switch (A_u8Type)
	{
	case RisingTrigger:
		SET_BIT(EXTI ->EXTI_RTSR,A_u8PinNum);
		break;
	case FallingTrigger:
		SET_BIT(EXTI ->EXTI_FTSR,A_u8PinNum);
		break;
	case OnChange:
		SET_BIT(EXTI ->EXTI_RTSR,A_u8PinNum);

		SET_BIT(EXTI ->EXTI_FTSR,A_u8PinNum);
		break;
	}
}


void MEXTI_PendingInterrupt( u8 A_u8PinNum)
{
	switch(A_u8State)
	{
	case Enable:
		SET_BIT(EXTI ->EXTI_SWIER,A_u8PinNum);
		break;
	case Disable:
		CLR_BIT(EXTI ->EXTI_SWIER,A_u8PinNum);
		break;
	}
}

static void (*EXTI0_callBack)(void) = NULL;

static void (*EXTI1_callBack)(void) = NULL;


void MEXTI0_callBack(void (*ptr)(void))
{
	EXTI0_callBack =ptr;
}

void MEXTI1_callBack(void (*ptr)(void))
{
	EXTI1_callBack =ptr;
}

void MEXTI0_Handler(void)
{
	MEXTI0_callBack();
	SET_BIT(EXTI ->EXTI_PR,1);
}
void MEXTI1_Handler(void)
{
	MEXTI1_callBack();
	SET_BIT(EXTI ->EXTI_PR,1);
}
