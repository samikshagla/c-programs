#include <stdio.h>

#define MAX_SIZE 10

void multiplyMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int rows2, int cols2);
void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols);

int main() {
    int mat1[MAX_SIZE][MAX_SIZE];
    int mat2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &rows1);

    printf("Enter the number of columns of the first matrix: ");
    scanf("%d", &cols1);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows of the second matrix: ");
    scanf("%d", &rows2);

    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &cols2);

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    if (cols1 != rows2) {
        printf("Error: The number of columns of the first matrix should be equal to the number of rows of the second matrix.\n");
        return 0;
    }

    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);

    printf("Resultant matrix:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}

void multiplyMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
