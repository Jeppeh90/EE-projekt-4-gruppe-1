/*******************************************************************************
* File Name: ProbeU1.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_ProbeU1_ALIASES_H) /* Pins ProbeU1_ALIASES_H */
#define CY_PINS_ProbeU1_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define ProbeU1_0			(ProbeU1__0__PC)
#define ProbeU1_0_INTR	((uint16)((uint16)0x0001u << ProbeU1__0__SHIFT))

#define ProbeU1_INTR_ALL	 ((uint16)(ProbeU1_0_INTR))

#endif /* End Pins ProbeU1_ALIASES_H */


/* [] END OF FILE */
