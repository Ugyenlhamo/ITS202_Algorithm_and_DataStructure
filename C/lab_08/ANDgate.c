#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, output;
 	int A[8] = { 0, 0, 0, 0,1,1,1,1 };
 	int B[8] = { 0, 0, 1, 1,0,0,1,1 };
 	int C[8] = { 0, 1, 0, 1,0,1,0,1 };

 	for (i = 0; i < 8; i++) {
	// using ‘&&’ Operator 

 	output = A[i] * B[i] * C[i];
 	printf("\n %d AND %d AND %d = %d",A[i], B[i],C[i], output);
 
 	}
}