#include <stdio.h>

int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[100][100], matrix2[100][100], temp;

    // Input elements of first matrix
    printf("\nEnter elements of Matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of second matrix
    printf("\nEnter elements of Matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Swapping elements of matrix1 and matrix2
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp = matrix1[i][j];
            matrix1[i][j] = matrix2[i][j];
            matrix2[i][j] = temp;
        }
    }

    // Printing matrices after swapping
    printf("\nMatrix 1 after swapping:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2 after swapping:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
