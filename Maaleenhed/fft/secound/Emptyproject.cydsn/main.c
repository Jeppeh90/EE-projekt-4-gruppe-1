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

    double Amp_Volt = 0;
    double RMS_Volt = 0;
    double Amp_Ampere = 0;
    double RMS_Ampere = 0;
    double PF = 0;
    
    
    double samples_Ampere[N_points] = {3452,3579,3599,3509,3319,3048,2726,2386,2063,1792,1600,1510,1528,1654,1875,2168,2500,2838,3147,3393,3452,3579,3599,3509,3319,3048,2726,2386,2063,1792,1600,1510,1528,1654,1875,2168,2500,2838,3147,3393,3452,3579,3599,3509,3319,3048,2726,2386,2063,1792,1600,1510,1528,1654,1875,2168,2500,2838,3147,3393,3452,3579,3599,3509};
    
    double samples_volt[N_points] = {2386,2063,1792,1600,1510,1528,1654,1875,2168,2500,2838,3147,3393,3452,3579,3599,3509,3319,3048,2726,2386,2063,1792,1600,1510,1528,1654,1875,2168,2500,2838,3147,3393,3452,3579,3599,3509,3319,3048,2726,2386,2063,1792,1600,1510,1528,1654,1875,2168,2500,2838,3147,3393,3452,3579,3599,3509,3319,3048,2726,2386,2063,1792,1600};
 
    
    
    while(1)
    {
    
    for(p = 0; p<N_points ; p++)
    {
        Re_volt[p] = samples_volt[p];
    }
    
    for(p = 0; p<N_points ; p++)
    {
        Re_Ampere[p] = samples_Ampere[p];
    }    
    
    FFT(1,exponent,Re_volt,Im_volt,Abs_volt);
    FFT(1,exponent,Re_Ampere,Im_Ampere,Abs_Ampere);
    
    
    Amp_Volt = calculate_50Hz_Amp(Abs_volt);
    RMS_Volt = calculate_50Hz_RMS(Abs_volt);
    Amp_Ampere = calculate_50Hz_Amp(Abs_Ampere);
    RMS_Ampere = calculate_50Hz_RMS(Abs_Ampere);
    PF = calculate_50Hz_PF();
    
 
    
    
    }
}

/* [] END OF FILE */
