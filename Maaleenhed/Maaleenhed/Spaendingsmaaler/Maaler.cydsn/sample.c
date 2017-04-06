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
/* [] END OF FILE */

void sampleUandI(int *Uarray, int *Iarray, int size)
{       
    /*Oprettelse af interne variabler*/
        int indexU = 0, indexI = 0, i;
    /*for-løkke som tager 64 samples af spænding og af strøm målingerne.
    Disse samples ligges i de arrays, som er givet med funktione som parametre*/
        for(i=0;i<size;i++)
        {
           /*Test bruges til at måle sampletiden*/
            test_Write(1);
            /*Tager sample af spændingen ved alle lige værdier af i*/
            if(i%2 == 0)
            {
                AMux_1_FastSelect(0u);
                AMux_2_FastSelect(0u);
                Uarray[indexU++] = ADC_DelSig_1_CountsTo_mVolts( ADC_DelSig_1_Read16());
            }
            /*Tager sample af strømmen ved alle ulige værdier af i*/
            else
            {
                AMux_1_FastSelect(1u);
                AMux_2_FastSelect(1u);
                Iarray[indexI++] = ADC_DelSig_1_CountsTo_mVolts( ADC_DelSig_1_Read16());
            }
            /*Efter hvert andet sample indsættes et delay, som er udregnet således sampletiden passer med 
            20ms. Se udregninger i mathcad*/
            if(i%2 != 0)
            CyDelayUs(40);
        }
}
