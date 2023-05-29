/* write a program to check whether a given number is positive , negative or zero . */

#include<stdio.h>
int main()
{ 
   int number;
   printf("Enter a number\n");
   scanf("%d",&number);
   
   if(number>0)
     printf("number is positive\n");
     
    else if(number<0)
	   printf("number is negative\n");
	   
	   else
	    printf("number is zero\n"); 
	return 0;
}
