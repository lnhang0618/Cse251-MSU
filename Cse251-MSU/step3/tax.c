#include <stdio.h>
#include <stdlib.h>

int main()
{
 	const int DepenDeduct = 3650;	

 	int income;
 	double tax;
 	int status;
 	int dependents;
 	int deduction;
 	int NumChild;
 	int totaldeduction;
 	
 	int taxableIncome;
 
 
 	printf("Enter your annual income:");
 	scanf("%d",&income);
 	if(income<9350)
 	{
  	tax = 0;
  	printf("the tax you need to pay is %.2f ",tax);
  	return 0;
 	}
 
 	printf("What if your filing status?");
 	printf("1)single \n");
 	printf("2)married filing jointly \n");
 	printf("3)married filing separately \n");
 	printf("Please enter a number:");
 	scanf("%d",&status);
 	switch(status)
 	{
  		case 1:
  			dependents =1 ;
  			deduction = 5700;
  			break;
		case 2:
			printf("Please enter the number of your children:");
			scanf("%d",&NumChild);
			if(NumChild<0)
			{
				printf("Invalid input.\n");
				exit(1);
			}
			dependents = 2 + NumChild;
			deduction = 11400;
			break;
		case 3:
			dependents =1;
			deduction = 5700;
			break;
 	}
 	totaldeduction = deduction + dependents * DepenDeduct;
 	taxableIncome = income -totaldeduction;
 
 	if (taxableIncome<=16750)
 		tax = 0+ 0.1*taxableIncome;
 	else if (taxableIncome<=68000)
 		tax = 1675+0.15*(taxableIncome-16750);
 	else if (taxableIncome < 137300)
 		tax = 9352.50+0.25*(taxableIncome - 68000);
 	else
 		tax = 25587.50+0.28*(taxableIncome - 137300);
 
 	printf("The calculated tax is:%.2f \n",tax);
 	return 0;
} 
		
