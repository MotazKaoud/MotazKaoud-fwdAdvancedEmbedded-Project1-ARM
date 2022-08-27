/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  SysTick_Timer.h
 *       Module:  -
 *
 *  Description:  headerfile for systick timer driver
 *  
 *********************************************************************************************************************/
#ifndef SYSTICK_TIMER_H
#define SYSTICK_TIMER_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include <stdint.h>
#include "Mcu_Hw.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define NOTFICATION 1

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef uint8_t Systick_Counter ;

typedef enum
{DISABLE, ENABLE} Systick_Interrupt_Type ;

typedef enum 
{PIOSCby4, SYSTEM_CLOCK } Systick_Clock_Type ;

typedef uint32_t Systick_Current_Value_Type; // hold values from 0x0 to 0xFF.FFFF

/* NOTES ::
-> clock speed = 12Mhz
-> tick_time = Periodic_Timer * LoadReg_Value = (1/Clock_Freq) * LoadReg_Value
-> Max_Delay = Periodic_Timer * Max_LoadReg_Value = (1/Clock_Freq) * Max_LoadReg_Value = (1/12000000) * (0xFFFFFF) = 1.4 sec
=============> therefore : tick period range is from 0 sec to 1.4 sec
*/
typedef float Sys_Tick_Period ; // holds values from 0 to 1.4

typedef struct 
{
Systick_Interrupt_Type 		Systick_Int		 ;
Systick_Clock_Type 				Systick_Clock  ;
Sys_Tick_Period 					Systick_Period ;
} Systick_Configs ;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void Systick_Init (Systick_Configs *ConfigPtr);
void Start_Systick (void);
void Stop_Systick (void);
Systick_Current_Value_Type Systick_STCURRENT_Value (void);
void CBK (uint32_t *notif);

 
#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: SysTick_Timer.h
 *********************************************************************************************************************/
