#include "math.h"
#include "GlobalVariables.h"
//mathematical library

//// FFT parameters
//#define N_points 64              //number of points				
//#define exponent log(64)/log(2)  //log2(N_points); for N_points=64 -> exponent=6
//#define pi 3.14159265359
//#define V_faktor 5.4391
//#define I_faktor 0.3291
//
//
//
//// FFT variables
//double Abs_volt[N_points]={0};        //arrays
//double Re_volt[N_points]={0};
//double Im_volt[N_points]={0};
//
//double Abs_Ampere[N_points]={0};        //arrays
//double Re_Ampere[N_points]={0};
//double Im_Ampere[N_points]={0};


// FFT function
void FFT(int dir,long m,double *x,double *y, double *u);


double calculate_50Hz_Amp(double *u);


double calculate_50Hz_RMS(double *u);


double calculate_50Hz_PF();


double calculate_THD();




