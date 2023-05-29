/* question: write a program to check whether a given  year is a leap year or not*/

#include<stdio.h>
int main()
{
	int year;
	printf("enter a leap year");
	scanf("%d",&year);
	
   	if (year %4 == 0) &&(year%100!= 0)||(year%400 == 0))
	  printf("year is a leap year\n")
	   
    else 
      printf("year is not leap year\n");
      return 0;
	
	
}

