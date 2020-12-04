#include<stdio.h>

 
int add(int x,int y){
		return x+y;
	}
int subtract(int x, int y){
		return x-y;
	}
int multiply(int x, int y){
		return x*y;
	}
int divide(int x, int y){
		return x/y;
	}
int main(){
	
	char operator;
 	int x, y;
 	int result = 0;
     printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
 	printf("Enter an operator........ \n");
 	printf("Enter + for addition: \n");
	printf("Enter - for subtraction: \n");
	printf("Enter * for multiplication: \n");
	printf("Enter / for division: \n");
	scanf("%c", &operator);
 	
 	printf("Enter two operands: \n");
	scanf("%d %d",&x, &y);
 switch(operator)
 {
 	case '+':
 		result = add(x,y);
 		break;
 	case '-':
 		result = subtract(x,y);
 		break;
 	case '*':
 		result = multiply(x,y);
 		break;
 	case '/':
 		result = divide(x,y);
 		break;
 	// operator doesn't match if the operator number is wrong
 	default:
 		printf("Error! operator is not correct");
 	}
 	    /* Print the result */
    printf("%d %c %.d = %.d\n", x, operator, y, result);
 	return 0;
	}
