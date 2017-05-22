/*******************************************************************************
* File Name: ProbeI2.h  
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

#if !defined(CY_PINS_ProbeI2_H) /* Pins ProbeI2_H */
#define CY_PINS_ProbeI2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "ProbeI2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 ProbeI2__PORT == 15 && ((ProbeI2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    ProbeI2_Write(uint8 value);
void    ProbeI2_SetDriveMode(uint8 mode);
uint8   ProbeI2_ReadDataReg(void);
uint8   ProbeI2_Read(void);
void    ProbeI2_SetInterruptMode(uint16 position, uint16 mode);
uint8   ProbeI2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the ProbeI2_SetDriveMode() function.
     *  @{
     */
        #define ProbeI2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define ProbeI2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define ProbeI2_DM_RES_UP          PIN_DM_RES_UP
        #define ProbeI2_DM_RES_DWN         PIN_DM_RES_DWN
        #define ProbeI2_DM_OD_LO           PIN_DM_OD_LO
        #define ProbeI2_DM_OD_HI           PIN_DM_OD_HI
        #define ProbeI2_DM_STRONG          PIN_DM_STRONG
        #define ProbeI2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define ProbeI2_MASK               ProbeI2__MASK
#define ProbeI2_SHIFT              ProbeI2__SHIFT
#define ProbeI2_WIDTH              1u

/* Interrupt constants */
#if defined(ProbeI2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in ProbeI2_SetInterruptMode() function.
     *  @{
     */
        #define ProbeI2_INTR_NONE      (uint16)(0x0000u)
        #define ProbeI2_INTR_RISING    (uint16)(0x0001u)
        #define ProbeI2_INTR_FALLING   (uint16)(0x0002u)
        #define ProbeI2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define ProbeI2_INTR_MASK      (0x01u) 
#endif /* (ProbeI2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define ProbeI2_PS                     (* (reg8 *) ProbeI2__PS)
/* Data Register */
#define ProbeI2_DR                     (* (reg8 *) ProbeI2__DR)
/* Port Number */
#define ProbeI2_PRT_NUM                (* (reg8 *) ProbeI2__PRT) 
/* Connect to Analog Globals */                                                  
#define ProbeI2_AG                     (* (reg8 *) ProbeI2__AG)                       
/* Analog MUX bux enable */
#define ProbeI2_AMUX                   (* (reg8 *) ProbeI2__AMUX) 
/* Bidirectional Enable */                                                        
#define ProbeI2_BIE                    (* (reg8 *) ProbeI2__BIE)
/* Bit-mask for Aliased Register Access */
#define ProbeI2_BIT_MASK               (* (reg8 *) ProbeI2__BIT_MASK)
/* Bypass Enable */
#define ProbeI2_BYP                    (* (reg8 *) ProbeI2__BYP)
/* Port wide control signals */                                                   
#define ProbeI2_CTL                    (* (reg8 *) ProbeI2__CTL)
/* Drive Modes */
#define ProbeI2_DM0                    (* (reg8 *) ProbeI2__DM0) 
#define ProbeI2_DM1                    (* (reg8 *) ProbeI2__DM1)
#define ProbeI2_DM2                    (* (reg8 *) ProbeI2__DM2) 
/* Input Buffer Disable Override */
#define ProbeI2_INP_DIS                (* (reg8 *) ProbeI2__INP_DIS)
/* LCD Common or Segment Drive */
#define ProbeI2_LCD_COM_SEG            (* (reg8 *) ProbeI2__LCD_COM_SEG)
/* Enable Segment LCD */
#define ProbeI2_LCD_EN                 (* (reg8 *) ProbeI2__LCD_EN)
/* Slew Rate Control */
#define ProbeI2_SLW                    (* (reg8 *) ProbeI2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define ProbeI2_PRTDSI__CAPS_SEL       (* (reg8 *) ProbeI2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define ProbeI2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) ProbeI2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define ProbeI2_PRTDSI__OE_SEL0        (* (reg8 *) ProbeI2__PRTDSI__OE_SEL0) 
#define ProbeI2_PRTDSI__OE_SEL1        (* (reg8 *) ProbeI2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define ProbeI2_PRTDSI__OUT_SEL0       (* (reg8 *) ProbeI2__PRTDSI__OUT_SEL0) 
#define ProbeI2_PRTDSI__OUT_SEL1       (* (reg8 *) ProbeI2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define ProbeI2_PRTDSI__SYNC_OUT       (* (reg8 *) ProbeI2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(ProbeI2__SIO_CFG)
    #define ProbeI2_SIO_HYST_EN        (* (reg8 *) ProbeI2__SIO_HYST_EN)
    #define ProbeI2_SIO_REG_HIFREQ     (* (reg8 *) ProbeI2__SIO_REG_HIFREQ)
    #define ProbeI2_SIO_CFG            (* (reg8 *) ProbeI2__SIO_CFG)
    #define ProbeI2_SIO_DIFF           (* (reg8 *) ProbeI2__SIO_DIFF)
#endif /* (ProbeI2__SIO_CFG) */

/* Interrupt Registers */
#if defined(ProbeI2__INTSTAT)
    #define ProbeI2_INTSTAT            (* (reg8 *) ProbeI2__INTSTAT)
    #define ProbeI2_SNAP               (* (reg8 *) ProbeI2__SNAP)
    
	#define ProbeI2_0_INTTYPE_REG 		(* (reg8 *) ProbeI2__0__INTTYPE)
#endif /* (ProbeI2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_ProbeI2_H */


/* [] END OF FILE */
