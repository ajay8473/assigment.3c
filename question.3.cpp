/* question: write a program to check whether a given number is even or odd */

#include<stdio.h>
int main()
{
	int number;
	printf("enter a number\n");
	scanf("%d",&number);
	
	if((number %2) == 0)
	  printf("number is even \n");
	  
	  else
	   printf("number is odd");
	   
	   return 0;
}

