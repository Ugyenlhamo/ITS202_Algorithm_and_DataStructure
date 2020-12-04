#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
 int rows = 0;
 int cols = 0;
 int height = 0;
 int ***array;
 int r, c, h;
 printf ("3D Array has rows : ");
 scanf ("%d", &rows);
 printf ("3D Array has columns : ");
 scanf ("%d", &cols);
 printf ("3D Array has height : ");
 scanf ("%d", &height);
 array = (int ***) calloc (height,sizeof(int ***));
 for (h = 0; h < height; h++) {
 array[h] = (int **) calloc(rows,sizeof(int*));
 for (r = 0; r < rows; r++) {
 array[h][r] = (int *) calloc(cols,sizeof(int));
 }
 }
 for (h = 0; h < height; h++) {
 for (r = 0; r < rows; r++) {
 for (c = 0; c < cols; c++) {
 printf ("Enter Array Element [%d][%d][%d] : ", h, r, c);
 scanf ("%d", &array[h][r][c]);
 }
 }
 }
 printf("Printing 3D Array:\n");
 for (h = 0; h < height; h++) {
 printf("Height %d\n", h);
 for (r = 0; r < rows; r++) {
 for (c = 0; c < cols; c++) {
 printf("%.2d ", array[h][r][c]);
 }
 printf("\n");
 }
 printf("\n");
 }
 return 0;
}