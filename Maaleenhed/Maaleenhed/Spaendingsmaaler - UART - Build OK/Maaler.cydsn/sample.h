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
#include "math.h"

//FFT variabler:

// FFT parameters
#define N_points 64              //number of points				
#define exponent log(64)/log(2)  //log2(N_points); for N_points=64 -> exponent=6
#define pi 3.14159265359
#define V_faktor 5.4391
#define I_faktor 0.3291



// FFT variables
double Abs_volt[N_points];        //arrays
double Re_volt[N_points];
double Im_volt[N_points];

double Abs_Ampere[N_points];        //arrays
double Re_Ampere[N_points];
double Im_Ampere[N_points];

double Amp_Volt;
double RMS_Volt;
double Amp_Ampere;
double RMS_Ampere;
double PF;
double THD;




//Sample variabler:
#define SIZE 128
int SampleArrayU[SIZE/2];
int SampleArrayI[SIZE/2];
    

//sample.h
void sampleUandI(int *, int *,int);

void sampleAndCalc();

uint8 makeMSB(double);

uint8 makeLSB(double);


//FFT.h

void FFT(int dir,long m,double *x,double *y, double *u);


double calculate_50Hz_Amp(double *u);


double calculate_50Hz_RMS(double *u);


double calculate_50Hz_PF();


double calculate_THD();