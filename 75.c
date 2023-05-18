#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size, i, j, sum = 0;

    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Lower triangular matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (j <= i) {
                printf("%d ", matrix[i][j]);
                sum += matrix[i][j];
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("Sum of lower triangular matrix: %d\n", sum);

    return 0;
}
