#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int size, searchElement, i;
    int isFound = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    for (i = 0; i < size; i++) {
        if (array[i] == searchElement) {
            isFound = 1;
            break;
        }
    }

    if (isFound) {
        printf("Element %d found at index %d\n", searchElement, i);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
