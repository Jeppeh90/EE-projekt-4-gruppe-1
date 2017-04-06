#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* test */
#define test__0__INTTYPE CYREG_PICU1_INTTYPE7
#define test__0__MASK 0x80u
#define test__0__PC CYREG_PRT1_PC7
#define test__0__PORT 1u
#define test__0__SHIFT 7u
#define test__AG CYREG_PRT1_AG
#define test__AMUX CYREG_PRT1_AMUX
#define test__BIE CYREG_PRT1_BIE
#define test__BIT_MASK CYREG_PRT1_BIT_MASK
#define test__BYP CYREG_PRT1_BYP
#define test__CTL CYREG_PRT1_CTL
#define test__DM0 CYREG_PRT1_DM0
#define test__DM1 CYREG_PRT1_DM1
#define test__DM2 CYREG_PRT1_DM2
#define test__DR CYREG_PRT1_DR
#define test__INP_DIS CYREG_PRT1_INP_DIS
#define test__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define test__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define test__LCD_EN CYREG_PRT1_LCD_EN
#define test__MASK 0x80u
#define test__PORT 1u
#define test__PRT CYREG_PRT1_PRT
#define test__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define test__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define test__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define test__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define test__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define test__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define test__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define test__PS CYREG_PRT1_PS
#define test__SHIFT 7u
#define test__SLW CYREG_PRT1_SLW

/* ProbeI1 */
#define ProbeI1__0__INTTYPE CYREG_PICU0_INTTYPE5
#define ProbeI1__0__MASK 0x20u
#define ProbeI1__0__PC CYREG_PRT0_PC5
#define ProbeI1__0__PORT 0u
#define ProbeI1__0__SHIFT 5u
#define ProbeI1__AG CYREG_PRT0_AG
#define ProbeI1__AMUX CYREG_PRT0_AMUX
#define ProbeI1__BIE CYREG_PRT0_BIE
#define ProbeI1__BIT_MASK CYREG_PRT0_BIT_MASK
#define ProbeI1__BYP CYREG_PRT0_BYP
#define ProbeI1__CTL CYREG_PRT0_CTL
#define ProbeI1__DM0 CYREG_PRT0_DM0
#define ProbeI1__DM1 CYREG_PRT0_DM1
#define ProbeI1__DM2 CYREG_PRT0_DM2
#define ProbeI1__DR CYREG_PRT0_DR
#define ProbeI1__INP_DIS CYREG_PRT0_INP_DIS
#define ProbeI1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define ProbeI1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define ProbeI1__LCD_EN CYREG_PRT0_LCD_EN
#define ProbeI1__MASK 0x20u
#define ProbeI1__PORT 0u
#define ProbeI1__PRT CYREG_PRT0_PRT
#define ProbeI1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define ProbeI1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define ProbeI1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define ProbeI1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define ProbeI1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define ProbeI1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define ProbeI1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define ProbeI1__PS CYREG_PRT0_PS
#define ProbeI1__SHIFT 5u
#define ProbeI1__SLW CYREG_PRT0_SLW

/* ProbeI2 */
#define ProbeI2__0__INTTYPE CYREG_PICU0_INTTYPE4
#define ProbeI2__0__MASK 0x10u
#define ProbeI2__0__PC CYREG_PRT0_PC4
#define ProbeI2__0__PORT 0u
#define ProbeI2__0__SHIFT 4u
#define ProbeI2__AG CYREG_PRT0_AG
#define ProbeI2__AMUX CYREG_PRT0_AMUX
#define ProbeI2__BIE CYREG_PRT0_BIE
#define ProbeI2__BIT_MASK CYREG_PRT0_BIT_MASK
#define ProbeI2__BYP CYREG_PRT0_BYP
#define ProbeI2__CTL CYREG_PRT0_CTL
#define ProbeI2__DM0 CYREG_PRT0_DM0
#define ProbeI2__DM1 CYREG_PRT0_DM1
#define ProbeI2__DM2 CYREG_PRT0_DM2
#define ProbeI2__DR CYREG_PRT0_DR
#define ProbeI2__INP_DIS CYREG_PRT0_INP_DIS
#define ProbeI2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define ProbeI2__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define ProbeI2__LCD_EN CYREG_PRT0_LCD_EN
#define ProbeI2__MASK 0x10u
#define ProbeI2__PORT 0u
#define ProbeI2__PRT CYREG_PRT0_PRT
#define ProbeI2__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define ProbeI2__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define ProbeI2__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define ProbeI2__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define ProbeI2__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define ProbeI2__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define ProbeI2__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define ProbeI2__PS CYREG_PRT0_PS
#define ProbeI2__SHIFT 4u
#define ProbeI2__SLW CYREG_PRT0_SLW

/* ProbeU1 */
#define ProbeU1__0__INTTYPE CYREG_PICU0_INTTYPE6
#define ProbeU1__0__MASK 0x40u
#define ProbeU1__0__PC CYREG_PRT0_PC6
#define ProbeU1__0__PORT 0u
#define ProbeU1__0__SHIFT 6u
#define ProbeU1__AG CYREG_PRT0_AG
#define ProbeU1__AMUX CYREG_PRT0_AMUX
#define ProbeU1__BIE CYREG_PRT0_BIE
#define ProbeU1__BIT_MASK CYREG_PRT0_BIT_MASK
#define ProbeU1__BYP CYREG_PRT0_BYP
#define ProbeU1__CTL CYREG_PRT0_CTL
#define ProbeU1__DM0 CYREG_PRT0_DM0
#define ProbeU1__DM1 CYREG_PRT0_DM1
#define ProbeU1__DM2 CYREG_PRT0_DM2
#define ProbeU1__DR CYREG_PRT0_DR
#define ProbeU1__INP_DIS CYREG_PRT0_INP_DIS
#define ProbeU1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define ProbeU1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define ProbeU1__LCD_EN CYREG_PRT0_LCD_EN
#define ProbeU1__MASK 0x40u
#define ProbeU1__PORT 0u
#define ProbeU1__PRT CYREG_PRT0_PRT
#define ProbeU1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define ProbeU1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define ProbeU1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define ProbeU1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define ProbeU1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define ProbeU1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define ProbeU1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define ProbeU1__PS CYREG_PRT0_PS
#define ProbeU1__SHIFT 6u
#define ProbeU1__SLW CYREG_PRT0_SLW

/* ProbeU2 */
#define ProbeU2__0__INTTYPE CYREG_PICU0_INTTYPE7
#define ProbeU2__0__MASK 0x80u
#define ProbeU2__0__PC CYREG_PRT0_PC7
#define ProbeU2__0__PORT 0u
#define ProbeU2__0__SHIFT 7u
#define ProbeU2__AG CYREG_PRT0_AG
#define ProbeU2__AMUX CYREG_PRT0_AMUX
#define ProbeU2__BIE CYREG_PRT0_BIE
#define ProbeU2__BIT_MASK CYREG_PRT0_BIT_MASK
#define ProbeU2__BYP CYREG_PRT0_BYP
#define ProbeU2__CTL CYREG_PRT0_CTL
#define ProbeU2__DM0 CYREG_PRT0_DM0
#define ProbeU2__DM1 CYREG_PRT0_DM1
#define ProbeU2__DM2 CYREG_PRT0_DM2
#define ProbeU2__DR CYREG_PRT0_DR
#define ProbeU2__INP_DIS CYREG_PRT0_INP_DIS
#define ProbeU2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define ProbeU2__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define ProbeU2__LCD_EN CYREG_PRT0_LCD_EN
#define ProbeU2__MASK 0x80u
#define ProbeU2__PORT 0u
#define ProbeU2__PRT CYREG_PRT0_PRT
#define ProbeU2__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define ProbeU2__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define ProbeU2__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define ProbeU2__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define ProbeU2__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define ProbeU2__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define ProbeU2__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define ProbeU2__PS CYREG_PRT0_PS
#define ProbeU2__SHIFT 7u
#define ProbeU2__SLW CYREG_PRT0_SLW

/* ADC_DelSig_1_DEC */
#define ADC_DelSig_1_DEC__COHER CYREG_DEC_COHER
#define ADC_DelSig_1_DEC__CR CYREG_DEC_CR
#define ADC_DelSig_1_DEC__DR1 CYREG_DEC_DR1
#define ADC_DelSig_1_DEC__DR2 CYREG_DEC_DR2
#define ADC_DelSig_1_DEC__DR2H CYREG_DEC_DR2H
#define ADC_DelSig_1_DEC__GCOR CYREG_DEC_GCOR
#define ADC_DelSig_1_DEC__GCORH CYREG_DEC_GCORH
#define ADC_DelSig_1_DEC__GVAL CYREG_DEC_GVAL
#define ADC_DelSig_1_DEC__OCOR CYREG_DEC_OCOR
#define ADC_DelSig_1_DEC__OCORH CYREG_DEC_OCORH
#define ADC_DelSig_1_DEC__OCORM CYREG_DEC_OCORM
#define ADC_DelSig_1_DEC__OUTSAMP CYREG_DEC_OUTSAMP
#define ADC_DelSig_1_DEC__OUTSAMPH CYREG_DEC_OUTSAMPH
#define ADC_DelSig_1_DEC__OUTSAMPM CYREG_DEC_OUTSAMPM
#define ADC_DelSig_1_DEC__OUTSAMPS CYREG_DEC_OUTSAMPS
#define ADC_DelSig_1_DEC__PM_ACT_CFG CYREG_PM_ACT_CFG10
#define ADC_DelSig_1_DEC__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_DEC__PM_STBY_CFG CYREG_PM_STBY_CFG10
#define ADC_DelSig_1_DEC__PM_STBY_MSK 0x01u
#define ADC_DelSig_1_DEC__SHIFT1 CYREG_DEC_SHIFT1
#define ADC_DelSig_1_DEC__SHIFT2 CYREG_DEC_SHIFT2
#define ADC_DelSig_1_DEC__SR CYREG_DEC_SR
#define ADC_DelSig_1_DEC__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DEC_M1
#define ADC_DelSig_1_DEC__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DEC_M2
#define ADC_DelSig_1_DEC__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DEC_M3
#define ADC_DelSig_1_DEC__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DEC_M4
#define ADC_DelSig_1_DEC__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DEC_M5
#define ADC_DelSig_1_DEC__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DEC_M6
#define ADC_DelSig_1_DEC__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DEC_M7
#define ADC_DelSig_1_DEC__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DEC_M8

/* ADC_DelSig_1_DSM */
#define ADC_DelSig_1_DSM__BUF0 CYREG_DSM0_BUF0
#define ADC_DelSig_1_DSM__BUF1 CYREG_DSM0_BUF1
#define ADC_DelSig_1_DSM__BUF2 CYREG_DSM0_BUF2
#define ADC_DelSig_1_DSM__BUF3 CYREG_DSM0_BUF3
#define ADC_DelSig_1_DSM__CLK CYREG_DSM0_CLK
#define ADC_DelSig_1_DSM__CR0 CYREG_DSM0_CR0
#define ADC_DelSig_1_DSM__CR1 CYREG_DSM0_CR1
#define ADC_DelSig_1_DSM__CR10 CYREG_DSM0_CR10
#define ADC_DelSig_1_DSM__CR11 CYREG_DSM0_CR11
#define ADC_DelSig_1_DSM__CR12 CYREG_DSM0_CR12
#define ADC_DelSig_1_DSM__CR13 CYREG_DSM0_CR13
#define ADC_DelSig_1_DSM__CR14 CYREG_DSM0_CR14
#define ADC_DelSig_1_DSM__CR15 CYREG_DSM0_CR15
#define ADC_DelSig_1_DSM__CR16 CYREG_DSM0_CR16
#define ADC_DelSig_1_DSM__CR17 CYREG_DSM0_CR17
#define ADC_DelSig_1_DSM__CR2 CYREG_DSM0_CR2
#define ADC_DelSig_1_DSM__CR3 CYREG_DSM0_CR3
#define ADC_DelSig_1_DSM__CR4 CYREG_DSM0_CR4
#define ADC_DelSig_1_DSM__CR5 CYREG_DSM0_CR5
#define ADC_DelSig_1_DSM__CR6 CYREG_DSM0_CR6
#define ADC_DelSig_1_DSM__CR7 CYREG_DSM0_CR7
#define ADC_DelSig_1_DSM__CR8 CYREG_DSM0_CR8
#define ADC_DelSig_1_DSM__CR9 CYREG_DSM0_CR9
#define ADC_DelSig_1_DSM__DEM0 CYREG_DSM0_DEM0
#define ADC_DelSig_1_DSM__DEM1 CYREG_DSM0_DEM1
#define ADC_DelSig_1_DSM__MISC CYREG_DSM0_MISC
#define ADC_DelSig_1_DSM__OUT0 CYREG_DSM0_OUT0
#define ADC_DelSig_1_DSM__OUT1 CYREG_DSM0_OUT1
#define ADC_DelSig_1_DSM__REF0 CYREG_DSM0_REF0
#define ADC_DelSig_1_DSM__REF1 CYREG_DSM0_REF1
#define ADC_DelSig_1_DSM__REF2 CYREG_DSM0_REF2
#define ADC_DelSig_1_DSM__REF3 CYREG_DSM0_REF3
#define ADC_DelSig_1_DSM__RSVD1 CYREG_DSM0_RSVD1
#define ADC_DelSig_1_DSM__SW0 CYREG_DSM0_SW0
#define ADC_DelSig_1_DSM__SW2 CYREG_DSM0_SW2
#define ADC_DelSig_1_DSM__SW3 CYREG_DSM0_SW3
#define ADC_DelSig_1_DSM__SW4 CYREG_DSM0_SW4
#define ADC_DelSig_1_DSM__SW6 CYREG_DSM0_SW6
#define ADC_DelSig_1_DSM__TR0 CYREG_NPUMP_DSM_TR0
#define ADC_DelSig_1_DSM__TST0 CYREG_DSM0_TST0
#define ADC_DelSig_1_DSM__TST1 CYREG_DSM0_TST1

/* ADC_DelSig_1_Ext_CP_Clk */
#define ADC_DelSig_1_Ext_CP_Clk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_DelSig_1_Ext_CP_Clk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_DelSig_1_Ext_CP_Clk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__CFG2_SRC_SEL_MASK 0x07u
#define ADC_DelSig_1_Ext_CP_Clk__INDEX 0x00u
#define ADC_DelSig_1_Ext_CP_Clk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_Ext_CP_Clk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__PM_STBY_MSK 0x01u

/* ADC_DelSig_1_IRQ */
#define ADC_DelSig_1_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_DelSig_1_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_DelSig_1_IRQ__INTC_MASK 0x20000000u
#define ADC_DelSig_1_IRQ__INTC_NUMBER 29u
#define ADC_DelSig_1_IRQ__INTC_PRIOR_NUM 7u
#define ADC_DelSig_1_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_29
#define ADC_DelSig_1_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_DelSig_1_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_DelSig_1_theACLK */
#define ADC_DelSig_1_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_DelSig_1_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_DelSig_1_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_DelSig_1_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_DelSig_1_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_DelSig_1_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_DelSig_1_theACLK__INDEX 0x00u
#define ADC_DelSig_1_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_DelSig_1_theACLK__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_DelSig_1_theACLK__PM_STBY_MSK 0x01u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "Maaler"
#define CY_VERSION "PSoC Creator  4.0 Update 1"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 12u
#define CYDEV_CHIP_DIE_PSOC5LP 19u
#define CYDEV_CHIP_DIE_PSOC5TM 20u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 4u
#define CYDEV_CHIP_FAMILY_FM3 5u
#define CYDEV_CHIP_FAMILY_FM4 6u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 12u
#define CYDEV_CHIP_MEMBER_4C 18u
#define CYDEV_CHIP_MEMBER_4D 8u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 13u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 11u
#define CYDEV_CHIP_MEMBER_4I 17u
#define CYDEV_CHIP_MEMBER_4J 9u
#define CYDEV_CHIP_MEMBER_4K 10u
#define CYDEV_CHIP_MEMBER_4L 16u
#define CYDEV_CHIP_MEMBER_4M 15u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4P 14u
#define CYDEV_CHIP_MEMBER_4Q 7u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 20u
#define CYDEV_CHIP_MEMBER_5B 19u
#define CYDEV_CHIP_MEMBER_FM3 24u
#define CYDEV_CHIP_MEMBER_FM4 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 21u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 22u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 23u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
