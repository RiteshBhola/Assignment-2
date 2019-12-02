#include<stdio.h>
#include<math.h>
#include<float.h>

int main()
{
	float error_in_pi,error_in_two;
	
	//mahine precision from float.h
	printf("machine preceision for float data type: %e\n",FLT_EPSILON);
	
	
	float PI = 3.14159265; // since machine precession 10^(-7)
	
	error_in_pi=(fabs(PI-3.14159265))/3.14159265;
	printf("Relative error in storing Pi : %.5e  \n",error_in_pi);
	
	
	float Two=2.0;
	
	error_in_two = (fabs(Two-2.0))/2.0;
	printf("Relative error in storing 2.0 : %.5e  \n",error_in_two);
	
	/*
	   2 is a machine no. so there is no relative error in storing 2.
	   Whereas PI is not a machine no. and we see relative error.
	*/
	
	return 0;
}
