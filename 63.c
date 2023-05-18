#include <stdio.h>

#define MAX_SIZE 100

void addMatrices(int matrixA[][MAX_SIZE], int matrixB[][MAX_SIZE], int result[][MAX_SIZE], int rows, int columns);
void displayMatrix(int matrix[][MAX_SIZE], int rows, int columns);

int main() {
    int matrixA[MAX_SIZE][MAX_SIZE];
    int matrixB[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    addMatrices(matrixA, matrixB, result, rows, columns);

    printf("Resultant matrix after addition:\n");
    displayMatrix(result, rows, columns);

    return 0;
}

void addMatrices(int matrixA[][MAX_SIZE], int matrixB[][MAX_SIZE], int result[][MAX_SIZE], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

void displayMatrix(int matrix[][MAX_SIZE], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
