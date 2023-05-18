#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int size, position, element, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to insert the element: ");
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 0;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

   
    for (i = size; i > position; i--) {
        array[i] = array[i - 1];
    }

   
    array[position] = element;
    size++;

    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
