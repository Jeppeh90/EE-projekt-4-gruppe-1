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
#define SIZE 5000

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
    
    int i, debugValue, dV;
    for(;;)
    {
        /* Place your application code here. */
        test_Write(1);
         int indexU = 0, indexI = 0;
        for(i=0;i<SIZE;i++)
        {
           
            if(i%2 == 0)
            {
                //Skriver spændingsmålong i ArrayU
                AMux_1_FastSelect(0);
                AMux_2_FastSelect(0);
                while(!ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_RETURN_STATUS));
                SampleArrayU[indexU++] = ADC_DelSig_1_CountsTo_mVolts( ADC_DelSig_1_GetResult16());
            }else
            {
                //Skriver strømmåling i ArrayI
                AMux_1_FastSelect(1);
                AMux_2_FastSelect(1);
                while(!ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_RETURN_STATUS));
                SampleArrayI[indexI++] = ADC_DelSig_1_CountsTo_mVolts( ADC_DelSig_1_GetResult16());
            }

            debugValue = SampleArrayU[i];
            dV = SampleArrayI[i];
            //CyDelay(1);
        }
        printf("Hello %d %d",debugValue,dV);
        //CyDelay(1000);
        test_Write(0);
    }
}

/* [] END OF FILE */
