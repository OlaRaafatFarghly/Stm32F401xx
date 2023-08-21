/*
 * MSYSTIC_private.h
 *
 *  Created on: Aug 15, 2023
 *      Author:  Ola Raafat
 */

#ifndef MCAL_MSYSTIC_MSYSTIC_PRIVATE_H_
#define MCAL_MSYSTIC_MSYSTIC_PRIVATE_H_

#define SYSTIC_BASE_ADDRESS 0xE000E010UL
typedef struct
{
	u32 STK_CTRL;
	u32 STK_LOAD;
	u32 STK_VAL;
	u32 STK_CALIB;
}SYSTIC_MEMMAP_t;

SYSTIC_MEMMAP_t * SYSTIC = (volatile SYSTIC_MEMMAP_t*)(SYSTIC_BASE_ADDRESS) ;


#define	ENABLE    0
#define	TICKINT   1
#define	CLKSOURCE 2
#define	COUNTFLAG 16

#define	DISABLED    1


#endif /* MCAL_MSYSTIC_MSYSTIC_PRIVATE_H_ */
