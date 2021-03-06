//*****************************************************************************
//*****************************************************************************
//  FILENAME: CH3_OUT.h
//   Version: 2.00, Updated on 2015/3/4 at 22:26:37                                          
//  Generated by PSoC Designer 5.4.3191
//
//  DESCRIPTION: CH3_OUT User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef CH3_OUT_INCLUDE
#define CH3_OUT_INCLUDE

#include <m8c.h>


/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  CH3_OUT_Stop
#pragma fastcall16  CH3_OUT_Start
#pragma fastcall16  CH3_OUT_On
#pragma fastcall16  CH3_OUT_Off
#pragma fastcall16  CH3_OUT_Switch
#pragma fastcall16  CH3_OUT_Invert
#pragma fastcall16  CH3_OUT_GetState


//-------------------------------------------------
// Constants for CH3_OUT API's.
//-------------------------------------------------
//
#define  CH3_OUT_ON   1
#define  CH3_OUT_OFF  0

//-------------------------------------------------
// Prototypes of the CH3_OUT API.
//-------------------------------------------------
extern void  CH3_OUT_Start(void);                                     
extern void  CH3_OUT_Stop(void);                                      
extern void  CH3_OUT_On(void);                                      
extern void  CH3_OUT_Off(void);                                      
extern void  CH3_OUT_Switch(BYTE bSwitch);
extern void  CH3_OUT_Invert(void);                                         
extern BYTE  CH3_OUT_GetState(void);                                         

//-------------------------------------------------
// Define global variables.                 
//-------------------------------------------------



#endif
