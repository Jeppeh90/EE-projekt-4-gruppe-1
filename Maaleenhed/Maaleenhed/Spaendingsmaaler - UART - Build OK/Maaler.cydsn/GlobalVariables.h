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

/* [] END OF FILE */

#include "project.h"
#include "math.h"

//FFT variabler:

// FFT parameters
#define N_points 64              //number of points				
#define exponent log(64)/log(2)  //log2(N_points); for N_points=64 -> exponent=6
#define pi 3.14159265359
#define V_faktor 5.4391
#define I_faktor 0.3291



// FFT variables
double Abs_volt[N_points]={0};        //arrays
double Re_volt[N_points]={0};
double Im_volt[N_points]={0};

double Abs_Ampere[N_points]={0};        //arrays
double Re_Ampere[N_points]={0};
double Im_Ampere[N_points]={0};


//Sample variabler:

#define SIZE 128
//Globale variabler:
    int SampleArrayU[SIZE/2]={0};
    int SampleArrayI[SIZE/2]={0};
    int p = 0;
    double Amp_Volt = 0;
    double RMS_Volt = 0;
    double Amp_Ampere = 0;
    double RMS_Ampere = 0;
    double PF = 0;
    double THD = 0;
    
    
