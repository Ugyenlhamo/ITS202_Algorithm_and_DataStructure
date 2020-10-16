#include <stdio.h>
int main(){
	int x,y;  
    int sum, subtract, multiply, modulas;  
    float division;

		printf("enter the value x: ");
	 	scanf("%d", &x);

	 	printf("enter the value y: ");
	 	scanf("%d", &y);

	 	sum = x+y;
	    subtract = x-y;
	 	multiply = x*y;
	 	division =(float)x/y ;
	 	modulas = x%y;

	 	printf("sum of x and y is %d \n ", sum);
	 	printf("subtraction of x and y is %d \n ",subtract);
	 	printf("multiplication of x and y is %d \n ", multiply);
	 	printf("division of x and y is %f \n ", division);
	 	printf("modulus of x and y is %d \n ", modulas);

	 	return 0;

}