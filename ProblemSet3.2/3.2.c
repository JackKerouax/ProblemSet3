/* Solution for for statement exercise

To compile and run this program, type:
gcc 3.2.c -o 3.2 && ./3.2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* conditional compilation - is M_PI defined?*/
#ifndef M_PI 
#define M_PI (3.141592654)
#endif

/*define our program argument list */

int main () 
{
   int i, nsamps;
   double samp, freq, srate;
   double twopi = 2* M_PI;
   double angleincr;
   /* set number of points to create */
   nsamps = 1000; 

   /* make one complete cycle */
   angleincr = twopi/nsamps;

   for (i=0; i<nsamps; i++){
      samp = sin(angleincr * i);
         fprintf(stdout, "%lf\n", samp);
   }
   fprintf(stderr, "done\n");
   return(0);
}