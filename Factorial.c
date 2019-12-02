#include<stdio.h>
#include<time.h>

long int factorial(int n);

int main()
{	
	clock_t start_time,end_time;
	int n,i;
	long int fact;
	double total_time;
	

	printf("Enter the number for factorial calculation:\n");
	scanf("%d",&n);
	
	start_time = clock();
	for(i=0;i<500;i++)
	{
		fact=factorial(n);
	}
	end_time = clock();
	
	total_time = ((double) ((end_time - start_time)) / CLOCKS_PER_SEC)/500;
	
	printf("Time taken = %.20e sec\n",total_time);
	printf("Factoral of %d is %ld\n",n,fact);
	
	return(0);
}

long int factorial(int n)
{
	int i;
	long int fact=1;
	//recursion to calculate factorial
	for(i=0;i<N;i++)
	{
		fact=fact*(i+1);
	}
	return(fact);
}
