/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "sample.h"



CY_ISR(isr_RX)
{
    switch (UART_1_ReadRxData()){
        case 'A':
                    sampleAndCalc();
                    UART_1_WriteTxData(makeMSB(RMS_Ampere));
                    UART_1_WriteTxData(makeLSB(RMS_Ampere));
                    break;
        case 'B':
                    UART_1_WriteTxData(makeMSB(RMS_Volt));
                    UART_1_WriteTxData(makeLSB(RMS_Volt));
                    break;
        case 'C':
                    UART_1_WriteTxData(makeMSB(THD*1000));
                    UART_1_WriteTxData(makeLSB(THD*1000));
                    break;
        case 'D':
                    UART_1_WriteTxData(makeMSB(PF*1000));
                    UART_1_WriteTxData(makeLSB(PF*1000));
                    break;
    }
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    isr_RX_StartEx(isr_RX);
    UART_1_Start();
    
    ADC_DelSig_1_Start();
    ADC_DelSig_1_StartConvert();
    
    AMux_1_Start();
    AMux_2_Start();
    
   
    

    while(1)
    {

    }   
    
    
}

/* [] END OF FILE */
