/*
 * MSYSTIC_program.c
 *
 *  Created on: Aug 15, 2023
 *      Author: Ola Raafat
 */
#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Math.h"


#include "../MSYSTIC_private.h"
#include "../MSYSTIC_configration.h"


void MSYSTIC_voidInit(void)
{
	SET_BIT(SYSTIC-> STK_CTRL,ENABLE);
	SET_BIT(SYSTIC-> STK_CTRL, CLKSOURCE);
}

void MSYSTIC_voidEnableRequist(u8 A_state)
{
	switch(A_state)
	{
	case ENABLE:
		SET_BIT(SYSTIC-> STK_CTRL,TICKINT);
		break;
	case DISABLED:
		CLR_BIT(SYSTIC-> STK_CTRL,TICKINT);
		break;
	}
}

u32 MSYSTIC_voidGetElapsedTime(void)
{
	return SYSTIC->STK_VAL;
}

u32 voidGetRemindingTime(void)
{
	return ((SYSTIC -> STK_LOAD)-(SYSTIC -> STK_VAL));
}



void MSYSTIC_voidDelayms(u8 A_Delay)
{
	MSYSTIC_voidEnableRequist(ENABLE);
	SYSTIC-> STK_LOAD =A_Delay*2;
	SYSTIC-> STK_VAL =0 ;
	SET_BIT(SYSTIC-> STK_CTRL,ENABLE);
	while(GET_BIT(SYSTIC-> STK_CTRL,COUNTFLAG)==0);

}
