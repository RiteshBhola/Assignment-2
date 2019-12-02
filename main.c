
#include"functions.h"
int main() 
{ 
  
    // This pointer will hold the 
    // base address of the block created 
    float* ptr; 
    int n=100,i;
  
   // Dynamically allocate memory using calloc() 
    ptr = (float*)calloc(n , sizeof(float)); 
  for (i = 0; i < n; i += 1)
  {
    printf("Element %d of array before assignment is %f\n",i,ptr[i]);
    ptr[i]=(i+1)*(i+1);
  }
  float res[2];
  mean_and_variance(ptr,res,n);
  
   FILE *filePointer ; 
      
   
    // Open the output.txt using fopen() 
    // in write mode using "w" attribute 
    filePointer = fopen("output.txt", "w") ; 
      
    // Check if this filePointer is null 
    // which maybe if the file does not exist 
    if ( filePointer == NULL ) 
    { 
        printf( "output.bin file failed to open." ) ; 
    } 
    else
    { 
          
        printf("The file is now opened.\n") ; 
          
        
       // writing in the file using fprintf() 
       fprintf(filePointer, "%f \n %f\n", res[0],res[1]);
            
       // Closing the file using fclose() 
       fclose(filePointer) ; 
          
        printf("Data successfully written in output.txt\n"); 
        printf("The file is now closed.") ; 
    } 
  
  
  
  free(ptr);
  return 0;
  
}
