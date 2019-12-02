
#include"functions.h"
int main() 
{ 
  
    // This pointer will hold the 
    // base address of the block created 
    float* ptr; 
    int n=100,i;
  
   // Dynamically allocate memory using malloc() 
    ptr = (float*)malloc(n*sizeof(float)); 
  for (i = 0; i < n; i += 1)
  {
    printf("Element %d of array before assignment is %f\n",i,ptr[i]);
    ptr[i]=(i+1)*(i+1);
  }
  float res[2];
  mean_and_variance(ptr,res,n);
  printf("Mean is %f  and Variance is %f\n",res[0],res[1]);
  free(ptr);
  return 0;
  
}
