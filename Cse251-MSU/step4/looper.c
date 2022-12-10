#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*
 * Simple program to experiment with looping
 */
 
 int main()
 {
 	int i = 1;
 	int f ;
 	int fac = 1;
 	
 	
 	while(i <= 10)
 	{
 		printf(" i =%d \n ",i);
 		i = i+1;
 	}
 	printf("Number to compute the factorial of:");
 	scanf(" %d",&f);
 	while(f>0)
 	{
 		fac = fac * f;
 		f--;
 	}
 	
 	printf("Factorial = %d \n ",fac);
 		
 	printf("My looper program!\n");
 }
