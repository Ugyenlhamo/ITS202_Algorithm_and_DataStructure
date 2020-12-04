#include<stdio.h>

int convertBinary(int n)
{
    static int biNo,r,fctor = 1;

    if(n != 0)
    {
         r = n % 2;
         biNo = biNo + r * fctor;
         fctor = fctor * 10;
         convertBinary(n / 2);//calling the function convertBinary itself recursively
    }
    return biNo;
}
int main()
{
    int biNo;
    int n;
    
    printf("\n\n Recursion : Converting number to binary :\n");
    printf("---------------------------------------------------\n");

    printf(" Input any  number : ");
    scanf("%d",&n);

    biNo = convertBinary(n);//call the function convertBinary
    printf(" The Binary value of given number is no. %d is : %d\n\n",n,biNo);
    return 0;
}