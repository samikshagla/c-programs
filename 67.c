#include <stdio.h>

#define MAX_SIZE 10

int areMatricesEqual(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int rows, int cols);

int main() {
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    int rows, cols, i, j;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (areMatricesEqual(matrix1, matrix2, rows, cols)) {
        printf("Matrices are equal.\n");
    } else {
        printf("Matrices are not equal.\n");
    }

    return 0;
}

int areMatricesEqual(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                return 0; 
            }
        }
    }

    return 1; 
}
