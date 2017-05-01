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
    double THD = 0;

    while(1)
    {
    /*Samplefunktion*/
    
    sampleUandI(SampleArrayU,SampleArrayI,SIZE);

    
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
    THD = calculate_THD();
    }   
    
    
}

/* [] END OF FILE */
