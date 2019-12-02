#include<stdio.h>

long int factorial(int n)
{
	int i;
	long int fact=1;
	
	for(i=0;i<n;i++)
	{
		fact=fact*(i+1);
	}
	return(fact);
}
