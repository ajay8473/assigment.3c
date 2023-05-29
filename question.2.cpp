/* question: write a program to check whether a given number is divisible by 5or not */

#include<stdio.h>
int main()
{
	int number ;
	printf("enter a number \n");
	scanf("%d",&number);
	if((number %5) ==0)
	
	printf("number is divisible \n");
	
	else
	    printf("number is not divisible");
	
	
	return 0;
}
