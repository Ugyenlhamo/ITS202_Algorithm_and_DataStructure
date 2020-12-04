#include <stdio.h>
#include <string.h>
int main()
{
 char s[] = "winter";
 char ss[] = "winTeR";
 char sss[] = "winter";
 int result;
 // comparing strings s and ss
 result = strcmp(s, ss);
 printf("Compare s Vs ss or 1st and 2nd = %d\n", result);
 // comparing strings s and sss
 result = strcmp(s, sss);
 printf("compare s Vs sss or 1st and 3rd = %d\n", result);
 // comparing strings s and sss
 result = strcmp(ss, sss);
 printf("compare ss Vs sss or 2nd and 3rd = %d\n", result);
 return 0;
}