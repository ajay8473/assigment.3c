/* write a program to take  marks of 5 subject from the user . assume marks are given out of 100 and passing marks 33.
 now display whether the candidate passed the examination or failed */
 
 #include<stdio.h>
 int main ()
 {
 	float s1 ,s2 , s3 ,s4 ,s5 ,totalmark , percentage;
 	printf("enter a marks \n");
 	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
 	
 	totalmark = s1+s2+s3+s4+s5;
 	 printf("total marks is %f\n", totalmark);
 	 
 	 // percentage
 	 percentage = (totalmark/500)*100;
 	 
 	 printf("percentage is %f\n", percentage);
 	 
 	 if(percentage > 33)
 	   printf("passed\n");
 	   
 	   else 
 	   printf("failed\n");
 	   
 	   return 0;
 }
