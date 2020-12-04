#include <stdio.h>
#include <stdlib.h>

int main()
{

 int *ptr, *ptr1;
 int n, i;



 printf("Enter number of Elements: \n");
 scanf("\n%d", &n);


 ptr = (int*)malloc(n * sizeof(int));


 ptr1 = (int*)calloc(n, sizeof(int));


 if (ptr == NULL || ptr1 == NULL) {
 printf("Memory not allocated.\n");
 exit(0);
 }
 else {


 printf("Memory successfully allocated using malloc.\n");



 printf("\nMemory successfully allocated using calloc.\n");

 free(ptr);
 printf("\nMalloc Memory successfully de-allocated.\n");

 free(ptr1);
 printf("\nCalloc Memory successfully de-allocated.\n");
 }

 return 0;
}