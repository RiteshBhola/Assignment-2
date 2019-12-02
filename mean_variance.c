#include"functions.h"

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
