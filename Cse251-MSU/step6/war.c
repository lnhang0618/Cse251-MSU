#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/* Function declaration */
void PrintWinner(int suit1,int suit2,int card1,int card2);

/* 
 * Name : <Insert name here>
 * Program to draw playing cards
 */

int main()
{
    int suit1,suit2;
    int card1,card2;
    
    /* 
     . This seeds the random number 
     . generator with the current time 
     */
    srand(time(NULL));
    
    /* Create a random card and suit */
    /* This will compute a random number from 0 to 3 */
    suit1 = rand() % 4;
    
    /* This will compute a random number from 1 to 13 */
    card1 = rand() % 13 + 1;
    
    suit2 = rand() % 4;
    
    card2 = rand() % 13 + 1;
    
    PrintWinner(suit1,suit2,card1,card2);
    
    printf("\n");       
}


void PrintWinner(int suit1,int suit2,int card1,int card2)
{
	if(card1-card2>0)
		printf("Player 1 win");
	else if(card1-card2<0)
		printf("Player 2 win");
	else
	{
		if(suit1-suit2>0)
			printf("Player 1 win");
		else if(suit1-suit2<0)
			printf("Player 2 win");
		else
			printf("There is a tie");
	}
}
