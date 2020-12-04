#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n,i,*p,arr[n],j,count;
 printf("Enter number of elements:\n");
 scanf("%d",&n);
 p=(int*)malloc(n * sizeof(int));
 if(p == NULL)
    {
        printf("Memory is not allocated\n");
    }
 else
    {
        printf("Enter number elements of array you want to store:\n");
 for(i=0;i<n;++i)
    {
        scanf("%d",&*(p+i));
        arr[i]=-1;
    }
        printf("Elements of array are: \n");
 for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
 for(i=0; i<n; i++)
    {
        count = 1;
    for(j=i+1; j<n; j++)
    {
    if(*(p+i)==*(p+j))

    {
        count++;

        arr[j] = 0;
    }
 }

 if(arr[i] != 0)
    {
        arr[i] = count;
    }
 }

 printf("\nFrequency of all elements of array : \n");
 for(i=0; i<n; i++)
    {
        if(arr[i] != 0)
    {
        printf("%d occurs %d times\n", *(p+i), arr[i]);
    }
}
 }
    free(p);
    return 0;
}