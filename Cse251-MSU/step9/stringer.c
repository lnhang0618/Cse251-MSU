#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Name : Lnhang
 * Program to experiment with strings
 */
 int StringLength(char str[]);
 void PrintLength(char str[]);
 void Reverse(char str[]);
 
 int main()
 {
 	char myWord[80];
 	char word[]="chudge";
 	char mySentence[80];
 	int i;
 	int len;
 	
 	
 	//sentence 	
 	printf("Enter a sentence:");
 	fgets(mySentence,80,stdin);
 	printf("The entered sentence is :%s\n",mySentence);
 	
 	//word
 	printf("Enter a word:");
 	scanf("%79s",myWord);
 	myWord[79]='\0';
 	printf("The entered word is:%s\n",myWord);
 	
 	Reverse(mySentence);
 	printf("%s \n",mySentence);
 	

 	
 	
	PrintLength(word);
	PrintLength(myWord);
	PrintLength(mySentence);
 	
 }
 
 
 int StringLength(char str[])
 {
 	int numChars = 0;
 	
 	while(str[numChars] !='\0')
 	{
 		numChars++;
 	}
 	
 	return numChars;
 }
 
 void PrintLength(char str[])
 {
 	printf("The string %s is %ld characters long\n",str,strlen(str));
 }
 
 void Reverse(char str[])
 {
 	int front =0;
 	int back = strlen(str)-1;
 	char t;             /*A temporary place to put a character */
 	
 	while (front <back)
 	{
 		t = str[front];
 		str[front]=str[back];
 		str[back]=t;
 		front++;
 		back--;
 	}
 }
 
