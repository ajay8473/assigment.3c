/* write a program which takes takes the length of the sides of tringle as an input . display whether the triangle is valid or not */

#include<stdio.h>
int main()
{
	int a, b, c ;
	printf("%d",a,b,c);
	scanf("%d",&a,&b,&c);
	if((a+b>c )||(a+c>b)||(b+c>a))
	printf("triangle is valid\n");
	
	else
	 printf("triangle is not valid\n");
	   
	   
	   return 0;
}
