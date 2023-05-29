/* write a program check whether give aplabet is in uppercase or lowercase.*/
#include<stdio.h>
int main()
{
	char check = 'G';
	if((check >= 'A')&&(check <= 'Z'))
	  printf("upper\n");
	  
	else
	 printf("lower\n");
	 
	 return 0;  
}
