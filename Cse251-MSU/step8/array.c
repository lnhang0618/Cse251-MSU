#include <stdio.h>

/*
 * Name : Lnhang
 * Program to experiment with arrays
 */
 #define NumMovies 10
 #define MaxGrosses 5
 
 int main()
 {
 	double gross[NumMovies] = {4633070,3856195,3171189,1877685,3251622,
 					3156594,1629735,2659234,2028036,510768};
        char *names[NumMovies] = {"Hall Pass","Unknown","I am Number Four","The King's Speech",
        				"Just Go With It","Gnomeo and Juliet", "Drive Angry", \
                         		"Justin Beiber: Never Say Never",\
                         		 "Big Mommas: Like Father, Like Son", "True Grit"};
        
        double maxGross[MaxGrosses]={500000,10000000,2000000,4000000,10000000};
        
        int highestGrossIndex = 0;
        double highestGross = 0;
        
        
        double sum;
        int i,j;
        
        //sum = gross [0]+gross[1]+gross[2]+gross[3]+gross[4];
        //printf("Total gross for these films was $%.0f\n",sum);
        
        //sum=0;
        
        for(i=0;i<MaxGrosses;i++)
        {	
        	highestGross = 0;
        	for(j=0;j<NumMovies;j++)
        	{
        		if(gross[j] > highestGross && gross[j]<maxGross[j])
        		{
        			highestGrossIndex = i;
        			highestGross = gross[highestGrossIndex];
        		}
        
        	//sum+=gross[i];
        	//printf("Movie %2d %35s:%.0f\n",i+1,name[i],gross[i]);
        	} 
 	//printf("Total gross for these films was $%.0f\n",sum);
 		if (highestGross == 0)
 			printf("No film made less than %f\n",maxGross[i]);
 		else
 			printf(\
 			"The highest gross less than %.0f is %s at %.0f\n",\
 			maxGross[i],names[highestGrossIndex],highestGross);
 	}
 }
 
