#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 *Name:<Insert name>
 *Program to determine combinations
 */
 int Factorial(int n);
 int Binomial(int n,int k);
 
 int main()
 {
  	int n;
  	int k;
  	int b;
  	
  	printf("Input n:");
  	scanf("%d",&n);
  	if(n<1)
  	{
  		printf("Must be greater than zero \n");
  		exit(1);
  	}
  	
  	printf("Input k :");
  	scanf("%d",&k);
  	if(k<0||k>n)
  	{
  		printf("Must be betwwen 0 and %d inclusive \n",n);
  		exit(1);
  	}
  	
  	b = Binomial(n,k);
  	printf("%d items taken %d ways is %d\n",n,k,b);
  	
  	//printf("n! = %d \n",Factorial(n));
 	 
 	 
  }
  
  /* Factorial Function */
  int Factorial(int n )
  {
  	int f = 1;
  	int i;
  	for(i=1;i<=n;i++)
  	{
  		f*=i;
  	}
  	return f;
  }
  
  int Binomial(int n,int k )
  {
  	int b;
  	b=Factorial(n) / (Factorial(k) * Factorial(n - k));
  	return b;
  }
