/* write a program to check whether a given character is an */

#include<stdio.h>
int main()
{
	char check = 'G';
	
	if((check >= 65)&&(check <= 90))
	  printf("upper\n");
	  
	else if((check >= 97)&&(check <=122))
	 printf("lower\n");
	 
	 else if((check >= 48)&&(check <=57))
      printf("digit\n");
      
      else
          printf("special character\n");
	 return 0;  

}
