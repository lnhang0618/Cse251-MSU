#include <stdio.h>

/* 
 * Name : Lnhang
 * Program to experiment with character arrays
 */

#define MaxWord 20
 
int main ()
{
    char c;
    char str[MaxWord+1];
    int len =0;
  
    puts ("Enter text. Include a dot ('.') to end a sentence to exit:");
    do 
    {
        c=getchar();
        if(c!=' '&& c!='.')
        	if(len<MaxWord)
        	{
        		/* This is a chararcter of a word*/
        		str[len] = c;
        		len++;
        	}
        	else
			continue;
        else
        {
        	/* The word is done*/
        	str[len] = 0;
        	printf("%s\n",str);
        	len=0;
        }

    } while (c != '.'); 
}
