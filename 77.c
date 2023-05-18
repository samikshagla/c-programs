#include <stdio.h>

#define MAX_SIZE 10

float determinant(float matrix[MAX_SIZE][MAX_SIZE], int size);
void getCofactor(float matrix[MAX_SIZE][MAX_SIZE], float cofactor[MAX_SIZE][MAX_SIZE], int p, int q, int size);

int main() {
    float matrix[MAX_SIZE][MAX_SIZE];
    int size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    float det = determinant(matrix, size);

    printf("Determinant of the matrix: %.2f\n", det);

    return 0;
}

float determinant(float matrix[MAX_SIZE][MAX_SIZE], int size) {
    float det = 0;

    if (size == 1) {
       
        return matrix[0][0];
    } else if (size == 2) {
       
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    } else {
       
        float cofactor[MAX_SIZE][MAX_SIZE];
        int sign = 1;

        for (int i = 0; i < size; i++) {
            
            getCofactor(matrix, cofactor, 0, i, size);
            det += sign * matrix[0][i] * determinant(cofactor, size - 1);

           
            sign = -sign;
        }
    }

    return det;
}

void getCofactor(float matrix[MAX_SIZE][MAX_SIZE], float cofactor[MAX_SIZE][MAX_SIZE], int p, int q, int size) {
    int i = 0, j = 0;

   
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            
            if (row != p && col != q) {
                cofactor[i][j++] = matrix[row][col];

               
                if (j == size - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
