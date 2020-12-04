#include <stdio.h>
struct number
{
   int real_num, imginary_num;
};

int main()
{
   struct number x, y, z;

   printf("Enter x and y where x + iy is the first complex number.\n");
   scanf("%d%d", &x.real_num, &x.imginary_num);
   printf("Enter z and d where z + id is the second complex number.\n");
   scanf("%d%d", &y.real_num, &y.imginary_num);

   z.real_num = x.real_num + y.real_num;
   z.imginary_num = x.imginary_num + y.imginary_num;

   printf("Sum Of Complex Numbers: %d + (%di)\n", z.real_num, z.imginary_num);

   return 0;
}