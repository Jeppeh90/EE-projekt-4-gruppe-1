#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* test */
test__0__INTTYPE EQU CYREG_PICU1_INTTYPE7
test__0__MASK EQU 0x80
test__0__PC EQU CYREG_PRT1_PC7
test__0__PORT EQU 1
test__0__SHIFT EQU 7
test__AG EQU CYREG_PRT1_AG
test__AMUX EQU CYREG_PRT1_AMUX
test__BIE EQU CYREG_PRT1_BIE
test__BIT_MASK EQU CYREG_PRT1_BIT_MASK
test__BYP EQU CYREG_PRT1_BYP
test__CTL EQU CYREG_PRT1_CTL
test__DM0 EQU CYREG_PRT1_DM0
test__DM1 EQU CYREG_PRT1_DM1
test__DM2 EQU CYREG_PRT1_DM2
test__DR EQU CYREG_PRT1_DR
test__INP_DIS EQU CYREG_PRT1_INP_DIS
test__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
test__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
test__LCD_EN EQU CYREG_PRT1_LCD_EN
test__MASK EQU 0x80
test__PORT EQU 1
test__PRT EQU CYREG_PRT1_PRT
test__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
test__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
test__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
test__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
test__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
test__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
test__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
test__PS EQU CYREG_PRT1_PS
test__SHIFT EQU 7
test__SLW EQU CYREG_PRT1_SLW

/* ProbeI1 */
ProbeI1__0__INTTYPE EQU CYREG_PICU0_INTTYPE5
ProbeI1__0__MASK EQU 0x20
ProbeI1__0__PC EQU CYREG_PRT0_PC5
ProbeI1__0__PORT EQU 0
ProbeI1__0__SHIFT EQU 5
ProbeI1__AG EQU CYREG_PRT0_AG
ProbeI1__AMUX EQU CYREG_PRT0_AMUX
ProbeI1__BIE EQU CYREG_PRT0_BIE
ProbeI1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
ProbeI1__BYP EQU CYREG_PRT0_BYP
ProbeI1__CTL EQU CYREG_PRT0_CTL
ProbeI1__DM0 EQU CYREG_PRT0_DM0
ProbeI1__DM1 EQU CYREG_PRT0_DM1
ProbeI1__DM2 EQU CYREG_PRT0_DM2
ProbeI1__DR EQU CYREG_PRT0_DR
ProbeI1__INP_DIS EQU CYREG_PRT0_INP_DIS
ProbeI1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
ProbeI1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
ProbeI1__LCD_EN EQU CYREG_PRT0_LCD_EN
ProbeI1__MASK EQU 0x20
ProbeI1__PORT EQU 0
ProbeI1__PRT EQU CYREG_PRT0_PRT
ProbeI1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
ProbeI1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
ProbeI1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
ProbeI1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
ProbeI1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
ProbeI1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
ProbeI1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
ProbeI1__PS EQU CYREG_PRT0_PS
ProbeI1__SHIFT EQU 5
ProbeI1__SLW EQU CYREG_PRT0_SLW

/* ProbeU1 */
ProbeU1__0__INTTYPE EQU CYREG_PICU0_INTTYPE6
ProbeU1__0__MASK EQU 0x40
ProbeU1__0__PC EQU CYREG_PRT0_PC6
ProbeU1__0__PORT EQU 0
ProbeU1__0__SHIFT EQU 6
ProbeU1__AG EQU CYREG_PRT0_AG
ProbeU1__AMUX EQU CYREG_PRT0_AMUX
ProbeU1__BIE EQU CYREG_PRT0_BIE
ProbeU1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
ProbeU1__BYP EQU CYREG_PRT0_BYP
ProbeU1__CTL EQU CYREG_PRT0_CTL
ProbeU1__DM0 EQU CYREG_PRT0_DM0
ProbeU1__DM1 EQU CYREG_PRT0_DM1
ProbeU1__DM2 EQU CYREG_PRT0_DM2
ProbeU1__DR EQU CYREG_PRT0_DR
ProbeU1__INP_DIS EQU CYREG_PRT0_INP_DIS
ProbeU1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
ProbeU1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
ProbeU1__LCD_EN EQU CYREG_PRT0_LCD_EN
ProbeU1__MASK EQU 0x40
ProbeU1__PORT EQU 0
ProbeU1__PRT EQU CYREG_PRT0_PRT
ProbeU1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
ProbeU1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
ProbeU1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
ProbeU1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
ProbeU1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
ProbeU1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
ProbeU1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
ProbeU1__PS EQU CYREG_PRT0_PS
ProbeU1__SHIFT EQU 6
ProbeU1__SLW EQU CYREG_PRT0_SLW

/* ProbeU2 */
ProbeU2__0__INTTYPE EQU CYREG_PICU0_INTTYPE7
ProbeU2__0__MASK EQU 0x80
ProbeU2__0__PC EQU CYREG_PRT0_PC7
ProbeU2__0__PORT EQU 0
ProbeU2__0__SHIFT EQU 7
ProbeU2__AG EQU CYREG_PRT0_AG
ProbeU2__AMUX EQU CYREG_PRT0_AMUX
ProbeU2__BIE EQU CYREG_PRT0_BIE
ProbeU2__BIT_MASK EQU CYREG_PRT0_BIT_MASK
ProbeU2__BYP EQU CYREG_PRT0_BYP
ProbeU2__CTL EQU CYREG_PRT0_CTL
ProbeU2__DM0 EQU CYREG_PRT0_DM0
ProbeU2__DM1 EQU CYREG_PRT0_DM1
ProbeU2__DM2 EQU CYREG_PRT0_DM2
ProbeU2__DR EQU CYREG_PRT0_DR
ProbeU2__INP_DIS EQU CYREG_PRT0_INP_DIS
ProbeU2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
ProbeU2__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
ProbeU2__LCD_EN EQU CYREG_PRT0_LCD_EN
ProbeU2__MASK EQU 0x80
ProbeU2__PORT EQU 0
ProbeU2__PRT EQU CYREG_PRT0_PRT
ProbeU2__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
ProbeU2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
ProbeU2__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
ProbeU2__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
ProbeU2__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
ProbeU2__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
ProbeU2__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
ProbeU2__PS EQU CYREG_PRT0_PS
ProbeU2__SHIFT EQU 7
ProbeU2__SLW EQU CYREG_PRT0_SLW

/* ADC_DelSig_1_DEC */
ADC_DelSig_1_DEC__COHER EQU CYREG_DEC_COHER
ADC_DelSig_1_DEC__CR EQU CYREG_DEC_CR
ADC_DelSig_1_DEC__DR1 EQU CYREG_DEC_DR1
ADC_DelSig_1_DEC__DR2 EQU CYREG_DEC_DR2
ADC_DelSig_1_DEC__DR2H EQU CYREG_DEC_DR2H
ADC_DelSig_1_DEC__GCOR EQU CYREG_DEC_GCOR
ADC_DelSig_1_DEC__GCORH EQU CYREG_DEC_GCORH
ADC_DelSig_1_DEC__GVAL EQU CYREG_DEC_GVAL
ADC_DelSig_1_DEC__OCOR EQU CYREG_DEC_OCOR
ADC_DelSig_1_DEC__OCORH EQU CYREG_DEC_OCORH
ADC_DelSig_1_DEC__OCORM EQU CYREG_DEC_OCORM
ADC_DelSig_1_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
ADC_DelSig_1_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
ADC_DelSig_1_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
ADC_DelSig_1_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
ADC_DelSig_1_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
ADC_DelSig_1_DEC__PM_ACT_MSK EQU 0x01
ADC_DelSig_1_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
ADC_DelSig_1_DEC__PM_STBY_MSK EQU 0x01
ADC_DelSig_1_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
ADC_DelSig_1_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
ADC_DelSig_1_DEC__SR EQU CYREG_DEC_SR
ADC_DelSig_1_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
ADC_DelSig_1_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
ADC_DelSig_1_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
ADC_DelSig_1_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
ADC_DelSig_1_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
ADC_DelSig_1_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
ADC_DelSig_1_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
ADC_DelSig_1_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8

/* ADC_DelSig_1_DSM */
ADC_DelSig_1_DSM__BUF0 EQU CYREG_DSM0_BUF0
ADC_DelSig_1_DSM__BUF1 EQU CYREG_DSM0_BUF1
ADC_DelSig_1_DSM__BUF2 EQU CYREG_DSM0_BUF2
ADC_DelSig_1_DSM__BUF3 EQU CYREG_DSM0_BUF3
ADC_DelSig_1_DSM__CLK EQU CYREG_DSM0_CLK
ADC_DelSig_1_DSM__CR0 EQU CYREG_DSM0_CR0
ADC_DelSig_1_DSM__CR1 EQU CYREG_DSM0_CR1
ADC_DelSig_1_DSM__CR10 EQU CYREG_DSM0_CR10
ADC_DelSig_1_DSM__CR11 EQU CYREG_DSM0_CR11
ADC_DelSig_1_DSM__CR12 EQU CYREG_DSM0_CR12
ADC_DelSig_1_DSM__CR13 EQU CYREG_DSM0_CR13
ADC_DelSig_1_DSM__CR14 EQU CYREG_DSM0_CR14
ADC_DelSig_1_DSM__CR15 EQU CYREG_DSM0_CR15
ADC_DelSig_1_DSM__CR16 EQU CYREG_DSM0_CR16
ADC_DelSig_1_DSM__CR17 EQU CYREG_DSM0_CR17
ADC_DelSig_1_DSM__CR2 EQU CYREG_DSM0_CR2
ADC_DelSig_1_DSM__CR3 EQU CYREG_DSM0_CR3
ADC_DelSig_1_DSM__CR4 EQU CYREG_DSM0_CR4
ADC_DelSig_1_DSM__CR5 EQU CYREG_DSM0_CR5
ADC_DelSig_1_DSM__CR6 EQU CYREG_DSM0_CR6
ADC_DelSig_1_DSM__CR7 EQU CYREG_DSM0_CR7
ADC_DelSig_1_DSM__CR8 EQU CYREG_DSM0_CR8
ADC_DelSig_1_DSM__CR9 EQU CYREG_DSM0_CR9
ADC_DelSig_1_DSM__DEM0 EQU CYREG_DSM0_DEM0
ADC_DelSig_1_DSM__DEM1 EQU CYREG_DSM0_DEM1
ADC_DelSig_1_DSM__MISC EQU CYREG_DSM0_MISC
ADC_DelSig_1_DSM__OUT0 EQU CYREG_DSM0_OUT0
ADC_DelSig_1_DSM__OUT1 EQU CYREG_DSM0_OUT1
ADC_DelSig_1_DSM__REF0 EQU CYREG_DSM0_REF0
ADC_DelSig_1_DSM__REF1 EQU CYREG_DSM0_REF1
ADC_DelSig_1_DSM__REF2 EQU CYREG_DSM0_REF2
ADC_DelSig_1_DSM__REF3 EQU CYREG_DSM0_REF3
ADC_DelSig_1_DSM__RSVD1 EQU CYREG_DSM0_RSVD1
ADC_DelSig_1_DSM__SW0 EQU CYREG_DSM0_SW0
ADC_DelSig_1_DSM__SW2 EQU CYREG_DSM0_SW2
ADC_DelSig_1_DSM__SW3 EQU CYREG_DSM0_SW3
ADC_DelSig_1_DSM__SW4 EQU CYREG_DSM0_SW4
ADC_DelSig_1_DSM__SW6 EQU CYREG_DSM0_SW6
ADC_DelSig_1_DSM__TR0 EQU CYREG_NPUMP_DSM_TR0
ADC_DelSig_1_DSM__TST0 EQU CYREG_DSM0_TST0
ADC_DelSig_1_DSM__TST1 EQU CYREG_DSM0_TST1

/* ADC_DelSig_1_Ext_CP_Clk */
ADC_DelSig_1_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
ADC_DelSig_1_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
ADC_DelSig_1_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
ADC_DelSig_1_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
ADC_DelSig_1_Ext_CP_Clk__INDEX EQU 0x00
ADC_DelSig_1_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
ADC_DelSig_1_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
ADC_DelSig_1_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
ADC_DelSig_1_Ext_CP_Clk__PM_STBY_MSK EQU 0x01

/* ADC_DelSig_1_IRQ */
ADC_DelSig_1_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_DelSig_1_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_DelSig_1_IRQ__INTC_MASK EQU 0x20000000
ADC_DelSig_1_IRQ__INTC_NUMBER EQU 29
ADC_DelSig_1_IRQ__INTC_PRIOR_NUM EQU 7
ADC_DelSig_1_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_29
ADC_DelSig_1_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_DelSig_1_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* ADC_DelSig_1_theACLK */
ADC_DelSig_1_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ADC_DelSig_1_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ADC_DelSig_1_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ADC_DelSig_1_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ADC_DelSig_1_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ADC_DelSig_1_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
ADC_DelSig_1_theACLK__INDEX EQU 0x00
ADC_DelSig_1_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ADC_DelSig_1_theACLK__PM_ACT_MSK EQU 0x01
ADC_DelSig_1_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ADC_DelSig_1_theACLK__PM_STBY_MSK EQU 0x01

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 12
CYDEV_CHIP_DIE_PSOC5LP EQU 19
CYDEV_CHIP_DIE_PSOC5TM EQU 20
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 4
CYDEV_CHIP_FAMILY_FM3 EQU 5
CYDEV_CHIP_FAMILY_FM4 EQU 6
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 12
CYDEV_CHIP_MEMBER_4C EQU 18
CYDEV_CHIP_MEMBER_4D EQU 8
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 13
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 11
CYDEV_CHIP_MEMBER_4I EQU 17
CYDEV_CHIP_MEMBER_4J EQU 9
CYDEV_CHIP_MEMBER_4K EQU 10
CYDEV_CHIP_MEMBER_4L EQU 16
CYDEV_CHIP_MEMBER_4M EQU 15
CYDEV_CHIP_MEMBER_4N EQU 6
CYDEV_CHIP_MEMBER_4O EQU 5
CYDEV_CHIP_MEMBER_4P EQU 14
CYDEV_CHIP_MEMBER_4Q EQU 7
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 20
CYDEV_CHIP_MEMBER_5B EQU 19
CYDEV_CHIP_MEMBER_FM3 EQU 24
CYDEV_CHIP_MEMBER_FM4 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 21
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 22
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 23
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */