/* question: write a program to print greater between two number . print one number if both are same */

#include<stdio.h>
int main()
{
	int number_1 ,number_2;
	printf("number_1and number_2 \n");
	scanf("%d",&number_1,&number_2);
	
	if(number_1>number_2)
	   printf("number_1 is greater\n");
	   
	 else if(number_1 == number_2)
	   printf("both are equal");
	   
	 else
	   printf("number_2 is greater");
	   
	   return 0;  
}
