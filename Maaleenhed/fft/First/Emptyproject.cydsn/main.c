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
#include "fft.h"


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    int p = 0;

    double Amp = 0;
    double RMS = 0;
    
    
    
    double samples[N_points] = {3452,3579,3599,3509,3319,3048,2726,2386,2063,1792,1600,1510,1528,1654,1875,2168,2500,2838,3147,3393,3452,3579,3599,3509,3319,3048,2726,2386,2063,1792,1600,1510,1528,1654,1875,2168,2500,2838,3147,3393,3452,3579,3599,3509,3319,3048,2726,2386,2063,1792,1600,1510,1528,1654,1875,2168,2500,2838,3147,3393,3452,3579,3599,3509};
      
    while(1)
    {
    p = 0;
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    for(p = 0; p<N_points ; p++)
    {
        data_re[p] = samples[p];
    }
    
    FFT(1,exponent,data_re,data_imm);
    
    Amp = calculate_50Hz_Amp();
    RMS = calculate_50Hz_RMS();
 
    
    
    }
}

/* [] END OF FILE */
