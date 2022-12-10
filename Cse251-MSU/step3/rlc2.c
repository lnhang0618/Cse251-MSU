#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 *this is a simple program to compute the resonant frequency
 *of an RLC circuit
 */
 
 int main()
 {
  double capicitance;
  double inductance;
  double omega;
  double frequency;
  
  bool valid = true;
  
  printf("Input Capacitance(microfarads):");
  scanf("%lf",&capicitance);
  /* Test to see if the user entered an invalid value */
  if(capicitance < 0 )
  {
   printf("You moron,you entered a negative capicitance!\n");
   //exit(1); /*Exit with an error indicated */
   valid = false;	  
  }
  else if (capicitance ==0)
  {
   printf("You are really dumb,you entered zero.\n");
   valid = false;
  }
  else
  {
   printf("Okay,I guess that's reasonable \n ");
  }
  printf("Input inductance (milihenrys):");
  scanf("%lf",&inductance);
  if(inductance < 0 )
  {
   printf("You moron,you entered a negative capicitance!\n");
  }
  else if (inductance ==0)
  {
   printf("You are really dumb,you entered zero.\n");
  }
  else
   printf("Okay,I guess that's reasonable \n ");
   
  if(valid)
  {
  	omega=1.0/sqrt(inductance/1000*capicitance/1000000);
  	frequency=omega/(2*M_PI);
  
  	printf("Resonant frequency: %.2f\n",frequency);
  }
  return 0 ;
  }
