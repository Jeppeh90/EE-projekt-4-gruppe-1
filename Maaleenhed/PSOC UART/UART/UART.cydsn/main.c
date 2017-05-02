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
int i = 0, Strom = 40, Spanding = 50, THD = 60;

CY_ISR(isr_RX)
{
    
//    UART_1_WriteTxData(Rxcmd);
    if(UART_1_ReadRxData() == 'A')
    {
        UART_1_WriteTxData(Strom);
    }
    if(UART_1_ReadRxData() == 'B')
    {   
        UART_1_WriteTxData(Spanding);
    }
        if(UART_1_ReadRxData() == 'C')
    {   
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

        
    }
}

/* [] END OF FILE */
