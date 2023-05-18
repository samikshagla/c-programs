#include <stdio.h>

#define MAX_SIZE 100

int isSymmetricMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size);

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

    if (isSymmetricMatrix(matrix, size)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}

int isSymmetricMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; 
            }
        }
    }

    return 1; 
}
