#include <stdio.h>
int main() {
    int a[5][5], transpose[5][5], rows, columns, i, j;
   
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    // Assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < rows; ++i)
        for (j = 0; j < columns; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // Displaying the matrix a[][]
    printf("\nEntered matrix: \n");
    for (i = 0; i < rows; ++i)
        for (j = 0; j < columns; ++j) {
            printf("%d  ", a[i][j]);
            if (j == columns - 1)
                printf("\n");
        }

    // Finding the transpose of matrix a
    for (i = 0; i < rows; ++i)
        for (j = 0; j < columns; ++j) {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < columns; ++i)
        for (j = 0; j < rows; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == rows - 1)
                printf("\n");
        }
    return 0;
}