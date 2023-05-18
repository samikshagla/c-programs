#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int size, i, j;
    int count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                count++;
                break; 
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}
