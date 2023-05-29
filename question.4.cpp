/* question: write a program to check whether a given number is even number or an odd number without using % operator */

#include<stdio.h>
int main()
{
	int number ;
	printf("enter a number");
	scanf("%d",&number);
	
	if((number & 1)==1)
	 printf("number is odd\n");
	 
	 else
	   printf("number is even\n");
	   
		return 0
}

