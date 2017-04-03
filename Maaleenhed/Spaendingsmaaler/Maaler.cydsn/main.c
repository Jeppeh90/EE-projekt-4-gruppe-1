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
#include "fft.h"
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
    
        int p = 0;

    double Amp_Volt = 0;
    double RMS_Volt = 0;
    double Amp_Ampere = 0;
    double RMS_Ampere = 0;
    double PF = 0;
    
    int i, debugValue, dV;
    for(;;)
    {
        /* Place your application code here. */
        //test_Write(1);
         int indexU = 0, indexI = 0;
        for(i=0;i<SIZE;i++)
        {
           //CyDelay(1);
            if(i%2 == 0)
            {
                //Skriver spændingsmålong i ArrayU
                AMux_1_FastSelect(0u);
                AMux_2_FastSelect(0u);
                //while(!ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_RETURN_STATUS));
                SampleArrayU[indexU++] = ADC_DelSig_1_CountsTo_mVolts( ADC_DelSig_1_Read16());
                test_Write(1);
            }else
            {
                //Skriver strømmåling i ArrayI
                AMux_1_FastSelect(1u);
                AMux_2_FastSelect(1u);
                //while(!ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_RETURN_STATUS));
                SampleArrayI[indexI++] = ADC_DelSig_1_CountsTo_mVolts( ADC_DelSig_1_Read16());
                test_Write(0);
            }

            debugValue = SampleArrayU[i];
            dV = SampleArrayI[i];
            if(i%2 != 0)
            CyDelayUs(500);
        }
        

    
        
         for(p = 0; p<N_points ; p++)
    {
        Re_volt[p] = SampleArrayU[p];
        Im_volt[p] = 0;
        
        Re_Ampere[p] = SampleArrayI[p];
        Im_Ampere[p] = 0;
    }
      
    
    FFT(2,exponent,Re_volt,Im_volt,Abs_volt);
    FFT(2,exponent,Re_Ampere,Im_Ampere,Abs_Ampere);
    
    
    Amp_Volt = calculate_50Hz_Amp(Abs_volt);
    RMS_Volt = calculate_50Hz_RMS(Abs_volt);
    Amp_Ampere = calculate_50Hz_Amp(Abs_Ampere);
    RMS_Ampere = calculate_50Hz_RMS(Abs_Ampere);
    PF = calculate_50Hz_PF();
        
        
        
        
        
        
        printf("Hello %d %d",debugValue,dV);
        //CyDelay(1000);
        //test_Write(0);
    }
}

/* [] END OF FILE */
