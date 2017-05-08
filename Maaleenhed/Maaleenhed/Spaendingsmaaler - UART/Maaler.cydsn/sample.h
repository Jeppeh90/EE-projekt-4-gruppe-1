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
#include "fft.h"
//#define SIZE 128
//
//
////Globale variabler:
//    int SampleArrayU[SIZE/2]={0};
//    int SampleArrayI[SIZE/2]={0};
//    int p = 0; 
//    double Amp_Volt = 0;
//    double RMS_Volt = 0;
//    double Amp_Ampere = 0;
//    double RMS_Ampere = 0;
//    double PF = 0;
//    double THD = 0;

void sampleUandI(int *, int *,int);

void sampleAndCalc();

uint8 makeMSB(double);

uint8 makeLSB(double);