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
#define SIZE 20


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    while(1)
    {
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    double samples_voltage[SIZE] = {3452,3579,3599,3509,3319,3048,2726,2386,2063,1792,1600,1510,1528,1654,1875,2168,2500,2838,3147,3393
        };

    FFT(samples_voltage,SIZE);
    }
}

/* [] END OF FILE */
