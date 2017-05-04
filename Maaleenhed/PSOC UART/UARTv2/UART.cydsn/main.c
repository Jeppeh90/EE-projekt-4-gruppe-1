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
#include "project.h"

char RxData[20];
uint8 i = 0, Strom1 = 48, Spanding = 49, pf=50, THD = 51;

CY_ISR(isr_RX)
{
    
//    Uarten interruptes fordi den modtager noget
//    Der checkes hvad der modtages
    if(UART_1_ReadRxData() == 'A')
    {
        UART_1_WriteTxData(Strom1);
        UART_1_WriteTxData(Strom1);
    }
    if(UART_1_ReadRxData() == 'B')
    {   
        UART_1_WriteTxData(Spanding);
        UART_1_WriteTxData(Spanding);
    }
    if(UART_1_ReadRxData() == 'C')
    {   
        UART_1_WriteTxData(pf);
        UART_1_WriteTxData(pf);
    }
    if(UART_1_ReadRxData() == 'D')
    {   
        UART_1_WriteTxData(THD);
        UART_1_WriteTxData(THD);
    }

}


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    isr_RX_StartEx(isr_RX);
    UART_1_Start();
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
//        Strom1++;
//        Spanding++;
//        pf++;
//        THD++;
//        if(Strom1 > 200) Strom1=0;
//        if(Spanding >200) Spanding=0;
//        if(pf>200) pf=0;
//        if(THD>200) THD=0;
    }
}

/* [] END OF FILE */
