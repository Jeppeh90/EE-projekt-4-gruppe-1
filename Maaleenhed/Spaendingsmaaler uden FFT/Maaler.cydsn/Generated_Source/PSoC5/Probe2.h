/*******************************************************************************
* File Name: Probe2.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Probe2_H) /* Pins Probe2_H */
#define CY_PINS_Probe2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Probe2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Probe2__PORT == 15 && ((Probe2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Probe2_Write(uint8 value);
void    Probe2_SetDriveMode(uint8 mode);
uint8   Probe2_ReadDataReg(void);
uint8   Probe2_Read(void);
void    Probe2_SetInterruptMode(uint16 position, uint16 mode);
uint8   Probe2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Probe2_SetDriveMode() function.
     *  @{
     */
        #define Probe2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Probe2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Probe2_DM_RES_UP          PIN_DM_RES_UP
        #define Probe2_DM_RES_DWN         PIN_DM_RES_DWN
        #define Probe2_DM_OD_LO           PIN_DM_OD_LO
        #define Probe2_DM_OD_HI           PIN_DM_OD_HI
        #define Probe2_DM_STRONG          PIN_DM_STRONG
        #define Probe2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Probe2_MASK               Probe2__MASK
#define Probe2_SHIFT              Probe2__SHIFT
#define Probe2_WIDTH              1u

/* Interrupt constants */
#if defined(Probe2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Probe2_SetInterruptMode() function.
     *  @{
     */
        #define Probe2_INTR_NONE      (uint16)(0x0000u)
        #define Probe2_INTR_RISING    (uint16)(0x0001u)
        #define Probe2_INTR_FALLING   (uint16)(0x0002u)
        #define Probe2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Probe2_INTR_MASK      (0x01u) 
#endif /* (Probe2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Probe2_PS                     (* (reg8 *) Probe2__PS)
/* Data Register */
#define Probe2_DR                     (* (reg8 *) Probe2__DR)
/* Port Number */
#define Probe2_PRT_NUM                (* (reg8 *) Probe2__PRT) 
/* Connect to Analog Globals */                                                  
#define Probe2_AG                     (* (reg8 *) Probe2__AG)                       
/* Analog MUX bux enable */
#define Probe2_AMUX                   (* (reg8 *) Probe2__AMUX) 
/* Bidirectional Enable */                                                        
#define Probe2_BIE                    (* (reg8 *) Probe2__BIE)
/* Bit-mask for Aliased Register Access */
#define Probe2_BIT_MASK               (* (reg8 *) Probe2__BIT_MASK)
/* Bypass Enable */
#define Probe2_BYP                    (* (reg8 *) Probe2__BYP)
/* Port wide control signals */                                                   
#define Probe2_CTL                    (* (reg8 *) Probe2__CTL)
/* Drive Modes */
#define Probe2_DM0                    (* (reg8 *) Probe2__DM0) 
#define Probe2_DM1                    (* (reg8 *) Probe2__DM1)
#define Probe2_DM2                    (* (reg8 *) Probe2__DM2) 
/* Input Buffer Disable Override */
#define Probe2_INP_DIS                (* (reg8 *) Probe2__INP_DIS)
/* LCD Common or Segment Drive */
#define Probe2_LCD_COM_SEG            (* (reg8 *) Probe2__LCD_COM_SEG)
/* Enable Segment LCD */
#define Probe2_LCD_EN                 (* (reg8 *) Probe2__LCD_EN)
/* Slew Rate Control */
#define Probe2_SLW                    (* (reg8 *) Probe2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Probe2_PRTDSI__CAPS_SEL       (* (reg8 *) Probe2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Probe2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Probe2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Probe2_PRTDSI__OE_SEL0        (* (reg8 *) Probe2__PRTDSI__OE_SEL0) 
#define Probe2_PRTDSI__OE_SEL1        (* (reg8 *) Probe2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Probe2_PRTDSI__OUT_SEL0       (* (reg8 *) Probe2__PRTDSI__OUT_SEL0) 
#define Probe2_PRTDSI__OUT_SEL1       (* (reg8 *) Probe2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Probe2_PRTDSI__SYNC_OUT       (* (reg8 *) Probe2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Probe2__SIO_CFG)
    #define Probe2_SIO_HYST_EN        (* (reg8 *) Probe2__SIO_HYST_EN)
    #define Probe2_SIO_REG_HIFREQ     (* (reg8 *) Probe2__SIO_REG_HIFREQ)
    #define Probe2_SIO_CFG            (* (reg8 *) Probe2__SIO_CFG)
    #define Probe2_SIO_DIFF           (* (reg8 *) Probe2__SIO_DIFF)
#endif /* (Probe2__SIO_CFG) */

/* Interrupt Registers */
#if defined(Probe2__INTSTAT)
    #define Probe2_INTSTAT            (* (reg8 *) Probe2__INTSTAT)
    #define Probe2_SNAP               (* (reg8 *) Probe2__SNAP)
    
	#define Probe2_0_INTTYPE_REG 		(* (reg8 *) Probe2__0__INTTYPE)
#endif /* (Probe2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Probe2_H */


/* [] END OF FILE */
