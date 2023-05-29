/* question: write a program to check whether a given number is a three digit number or not */

#include<stdio.h>
int main()
{
	int number;
	printf("enter a number");
	scanf("%d",&number);
	
	if((number>99)&&(number<1000))
	  printf("number is three digit");
	  
	  else
	   printf("number is not three digit");
	   
	   return 0;
}

