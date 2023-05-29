/* question: write a program to check whether roots of a given quadratic equation are real & distinct ,real & equal or imaginary roots */
 #include<stdio.h>
 int main ()
 {
 	double a, b ,c , discriminant , root1, root2, realpart, imagpart;
 	printf("enter coefficients a,b amd c");
 	scanf("% %f %f",&a, &b, &c);
 	
 	discriminant = b*b-4*a*c;
 	
 	if(discriminant >0)
 	  printf("real and distinct\n");
 	  
 	else if(discriminant == 0)
	 {
	   printf("real and distinct\n");
}
	else
	{
		printf("real and distinct\n");
	  }  
 }
