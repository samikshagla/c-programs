#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int size, position, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position of the element to delete: ");
    scanf("%d", &position);

    if (position < 0 || position >= size) {
        printf("Invalid position!\n");
        return 0;
    }

    
    for (i = position; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    size--;

    printf("Array after deletion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
