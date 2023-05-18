#include <stdio.h>

#define MAX_SIZE 10

void findRowSum(int matrix[][MAX_SIZE], int rows, int cols);
void findColumnSum(int matrix[][MAX_SIZE], int rows, int cols);

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows (max 10): ");
    scanf("%d", &rows);

    printf("Enter the number of columns (max 10): ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    findRowSum(matrix, rows, cols);
    findColumnSum(matrix, rows, cols);

    return 0;
}

void findRowSum(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Row sums:\n");
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        printf("Row %d: %d\n", i+1, sum);
    }
}

void findColumnSum(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Column sums:\n");
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        printf("Column %d: %d\n", j+1, sum);
    }
}
