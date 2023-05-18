#include <stdio.h>

#define MAX_SIZE 100

void interchangeDiagonals(int matrix[][MAX_SIZE], int size);
void printMatrix(int matrix[][MAX_SIZE], int size);

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original matrix:\n");
    printMatrix(matrix, size);

    interchangeDiagonals(matrix, size);

    printf("Matrix after interchanging diagonals:\n");
    printMatrix(matrix, size);

    return 0;
}

void interchangeDiagonals(int matrix[][MAX_SIZE], int size) {
    int temp;

    for (int i = 0; i < size; i++) {
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][size - 1 - i];
        matrix[i][size - 1 - i] = temp;
    }
}

void printMatrix(int matrix[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
