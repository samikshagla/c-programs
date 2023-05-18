#include <stdio.h>

#define MAX_SIZE 100

void transposeMatrix(int matrix[][MAX_SIZE], int rows, int columns);
void printMatrix(int matrix[][MAX_SIZE], int rows, int columns);

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, columns;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &columns);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original matrix:\n");
    printMatrix(matrix, rows, columns);

    printf("Transpose of the matrix:\n");
    transposeMatrix(matrix, rows, columns);
    printMatrix(matrix, columns, rows);

    return 0;
}

void transposeMatrix(int matrix[][MAX_SIZE], int rows, int columns) {
    int transpose[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            matrix[i][j] = transpose[i][j];
        }
    }
}

void printMatrix(int matrix[][MAX_SIZE], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
