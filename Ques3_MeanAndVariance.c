#include <stdio.h> 
#include <stdlib.h> 
void mean_and_variance(float *input,float output[],int size);
int main() 
{ 
  
    // This pointer will hold the 
    // base address of the block created 
    float* ptr; 
    int n=100,i;
  
   // Dynamically allocate memory using malloc() 
    ptr = (float*)malloc(n * sizeof(float)); 
  for (i = 0; i < n; i += 1)
  {
    ptr[i]=(i+1)*(i+1);
  }
  float res[2];
  mean_and_variance(ptr,res,n);
  printf("Mean is %f  and Variance is %f\n",res[0],res[1]);
  free(ptr);
  return 0;
  
}
void mean_and_variance(float *input,float output[],int size)
{
  float sum=0,variance;
  int i;
   
 
  for (i = 0; i < size; i += 1)
  {
    sum += *input;
    input++;
  }
  output[0]=sum/size;
  sum=0;
  for (i = 0; i < size; i += 1)
  {
    input--;
    sum += (*input)  *  (*input);
    
  }
  
  output[1]= sum/size - output[0]*output[0];
   
}
