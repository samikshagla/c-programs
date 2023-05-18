#include <stdio.h>

#define MAX_SIZE 100

void findLowerTriangularMatrix(int matrix[][MAX_SIZE], int size);

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Lower Triangular Matrix:\n");
    findLowerTriangularMatrix(matrix, size);

    return 0;
}

void findLowerTriangularMatrix(int matrix[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j > i) {
                printf("0 ");
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}
