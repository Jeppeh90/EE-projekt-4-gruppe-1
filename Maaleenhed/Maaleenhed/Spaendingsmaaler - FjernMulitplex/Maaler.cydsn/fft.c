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

void FFT(int dir,long m,double *x,double *y, double *u)
{
   // dir:  forward (=1) o inverse (!=1) transform; 
   // m exponent;
   
   long n,i,i1,j,k,i2,l,l1,l2;
   double c1,c2,tx,ty,t1,t2,u1,u2,z;

   /* Calculate the number of points */
   n = 1;
   for (i=0;i<m;i++) 
      n *= 2;

   /* Do the bit reversal */
   i2 = n >> 1;
   j = 0;
   for (i=0;i<n-1;i++) {
      if (i < j) {
         tx = x[i];
         ty = y[i];
         x[i] = x[j];
         y[i] = y[j];
         x[j] = tx;
         y[j] = ty;
      }
      k = i2;
      while (k <= j) {
         j -= k;
         k >>= 1;
      }
      j += k;
   }

   /* Compute the FFT */
   c1 = -1.0; 
   c2 = 0.0;
   l2 = 1;
   for (l=0;l<m;l++) {
      l1 = l2;
      l2 <<= 1;
      u1 = 1.0; 
      u2 = 0.0;
      for (j=0;j<l1;j++) {
         for (i=j;i<n;i+=l2) {
            i1 = i + l1;
            t1 = u1 * x[i1] - u2 * y[i1];
            t2 = u1 * y[i1] + u2 * x[i1];
            x[i1] = x[i] - t1; 
            y[i1] = y[i] - t2;
            x[i] += t1;
            y[i] += t2;
         }
         z =  u1 * c1 - u2 * c2;
         u2 = u1 * c2 + u2 * c1;
         u1 = z;
      }
      c2 = sqrt((1.0 - c1) / 2.0);
      if (dir == 1) 
         c2 = -c2;
      c1 = sqrt((1.0 + c1) / 2.0);
   }

   /* Scaling factor for forward transform */
//   if (dir == 1) {
//      for (i=0;i<n;i++) {
//         x[i] /= n;
//         y[i] /= n;
//      }
//   }
   
   for(i=0;i<N_points;i++)
   {
    /* Absolute value */
   u[i]=2*sqrt((x[i]*x[i])+(y[i]*y[i]))/N_points;  
   }
}

double calculate_50Hz_Amp(double *u)
{
//    double fsample = 1067;  
//    double delta_f_bin = fsample/N_points;
//    int bin_number = frekvens/delta_f_bin;
    
    return u[1];
    
    
}

double calculate_50Hz_RMS(double *u)
{
    return u[1]/sqrt(2);  
}

double calculate_50Hz_PF()
{
    double angle_Volt = atan(Im_volt[1]/Re_volt[1]);
    double angle_Ampere = atan(Im_Ampere[1]/Re_Ampere[1]);
    
    return cos(angle_Ampere-angle_Volt);
    
}

double calculate_THD()
{
   return sqrt(Abs_volt[2]*Abs_volt[2]+Abs_volt[3]*Abs_volt[3]+Abs_volt[4]*Abs_volt[4]+Abs_volt[5]*Abs_volt[5])/Abs_volt[1];  
}

/* [] END OF FILE */