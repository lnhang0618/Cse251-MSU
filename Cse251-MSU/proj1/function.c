#include <stdio.h>
#include <math.h>

#define Steps 1e5
#define error 1e-10
#define pi 3.1415926

int main()
{
	double begin = -1;
	double end = 1;
	double f;
	double delta;
	double sum;
	int i;
	double x;
	
	
	delta=(end-begin)/Steps;
	for(i=0;i<Steps;i++)
	{
		x=begin+(i-1/2)*delta;
		if (x!=0)
			f=sin(pi*x)/(pi*x);
		else
			f=1;
		sum+=f*delta;
	}
	printf("value of function(%f,%f) is %f: \n",begin,end,sum);
}
