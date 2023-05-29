/*write a program to find the greatest among three given  number . print number once if the greatest number appears two three times */
#include<stdio.h>
int main ()
{
	int a =30 ,b = 10, c = 20;
	if((a>b)&&(a>c))
	  printf("%d is greatest\n",a);
	  
	else if((b>a) && (b>c)) 
	  printf("%d is greatest\n",b);
	  
	else if((a == b) ||(b == c) ||(a == c)) 
	     printf("greatest number is repeated!\n");
		 
		 return 0; 
	   
}
