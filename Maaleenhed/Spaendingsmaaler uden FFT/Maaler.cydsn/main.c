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
#include "stdio.h"
#include "sample.h"
#define SIZE 128

int main(void)
{
    //CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    ADC_DelSig_1_Start();
    ADC_DelSig_1_StartConvert();
    
    AMux_1_Start();
    AMux_2_Start();
    
    int SampleArrayU[SIZE/2]={0};
    int SampleArrayI[SIZE/2]={0};

    while(1)
    {
        /*Samplefunktion*/
    
    sampleUandI(SampleArrayU,SampleArrayI,SIZE);

    }
}

/* [] END OF FILE */
