#include <stdio.h> 
#include <stdlib.h> 
#include <gsl/gsl_statistics.h>
int main() 
{ 
  
    // This pointer will hold the 
    // base address of the block created 
    double* ptr,mean, variance; 
    int n=100,i;
  
   // Dynamically allocate memory using calloc() 
    ptr = (double*)malloc(n*sizeof(double)); 
  for (i = 0; i < n; i += 1)
  {
   // printf("Element %d of array before assignment is %f\n",i,ptr[i]);
    ptr[i]=(i+1)*(i+1);
     printf("Element %d of array before assignment is %f\n",i,ptr[i]);
  }
  
  mean     = gsl_stats_mean(ptr, 1, 100);
  variance = gsl_stats_variance(ptr, 1, 100);
 

  

  printf ("The sample mean is %g\n", mean);
  printf ("The estimated variance is %g\n", variance);

  free(ptr);
  return 0;
  
}
