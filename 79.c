#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int isSparseMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols);

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isSparseMatrix(matrix, rows, cols)) {
        printf("The matrix is sparse.\n");
    } else {
        printf("The matrix is not sparse.\n");
    }

    return 0;
}

int isSparseMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int zeroCount = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    
  
    int threshold = rows * cols * 0.1;

    if (zeroCount > threshold) {
        return 1; 
    } else {
        return 0; 
    }
}
