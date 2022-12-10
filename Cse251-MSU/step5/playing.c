#include <stdio.h>

int main()
{
	int i = 1;
	int sum = 0 ;
	
	while(i<5)
	{
		sum + = i;
		i++;
	}
	
	printf("sum = % d \n",sum);
}
