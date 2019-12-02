#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	FILE *in;
  if ((in=fopen("output.bin","rb"))==NULL)
  {
  	printf("Failed to open file\n");
  }
  else
   {
    printf("File opened successfully\n");
   }
  float num;
  int n;
  for(n = 0; n < 2; ++n)
   {
      fread(&num, sizeof(float), 1, in); 
      printf("%f\n",num);
   }
   fclose(in); 
   printf("file closed\n");
  
  return 0;
}
