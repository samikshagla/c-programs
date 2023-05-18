#include <stdio.h>

#define MAX_SIZE 100

void scalarMatrixMultiplication(int matrix[][MAX_SIZE], int rows, int cols, int scalar);
void printMatrix(int matrix[][MAX_SIZE], int rows, int cols);

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols, scalar;

    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the scalar value: ");
    scanf("%d", &scalar);

    printf("Original matrix:\n");
    printMatrix(matrix, rows, cols);

    scalarMatrixMultiplication(matrix, rows, cols, scalar);

    printf("Matrix after scalar multiplication:\n");
    printMatrix(matrix, rows, cols);

    return 0;
}

void scalarMatrixMultiplication(int matrix[][MAX_SIZE], int rows, int cols, int scalar) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] *= scalar;
        }
    }
}

void printMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
