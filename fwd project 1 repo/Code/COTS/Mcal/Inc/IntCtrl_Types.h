/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File: IntCtrl_Types.h
 *       Module:  -
 *
 *  Description:  header file includes the required types Interrupt Driver     
 *  
 *********************************************************************************************************************/
#ifndef INTCTRL_TYPES_H
#define INTCTRL_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include <stdint.h>

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


#define INT_GPIOPortA 0
#define INT_GPIOPortB 1
#define INT_GPIOPortC 2
#define INT_GPIOPortD 3
#define INT_GPIOPortE 4
#define INT_UART0  		5
#define INT_UART1 		6
#define INT_SSIO  		7
#define INT_I2C0  		8
//.......................... so on till last interrupt	

typedef enum 
{XXX=4, XXY=5, XYY=6, YYY=7} APINT_Type;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: IntrCtrl_Types.h
 *********************************************************************************************************************/
