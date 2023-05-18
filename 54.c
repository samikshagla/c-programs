#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int size, i, j, k;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

   
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size;) {
            if (array[i] == array[j]) {
                // Shift elements to the left
                for (k = j; k < size - 1; k++) {
                    array[k] = array[k + 1];
                }
                size--; 
            } else {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
