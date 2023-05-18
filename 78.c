#include <stdio.h>

#define MAX_SIZE 10

int isIdentityMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size);

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

    if (isIdentityMatrix(matrix, size)) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}

int isIdentityMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
          
            if (i == j) {
                if (matrix[i][j] != 1) {
                    return 0;
                }
            } else {
                if (matrix[i][j] != 0) {
                    return 0;
                }
            }
        }
    }

    return 1;
}
