#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*
 * Simple program to experiment with looping
 */
 
 int main()
 {
	double angle;
	int numSteps = 20;
	double maxAngle = M_PI * 2;
	int i ,j;
	double sinVal;
	int numSpaces;
	double fraction;
	
	for(i=0;i<numSteps;i++)
	{
	//	printf("%3d:\n",i);
	
	
		angle = (double)i /(double) numSteps * maxAngle;
		sinVal = sin (angle);
		fraction = cos (angle);
		numSpaces = (int)(30*(1+sinVal));
		printf("%3d:%5.2f ",i,angle);
		//printf("%3d: ----- ",i);
		
		for(j=0;j<numSpaces;j++)
			printf(" ");
		if(fabs(fraction)<0.1)
			printf("*");
		if(fraction>0.1)
			printf("\\"); /* Single \ is invalid */
		else if(fraction<-0.1)
			printf("/");
		
		printf("\n");
	}
	
	
	
 }
