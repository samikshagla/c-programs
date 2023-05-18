#include <stdio.h>

#define MAX_SIZE 100

void rightRotate(int array[], int size, int rotateBy);
void printArray(int array[], int size);

int main() {
    int array[MAX_SIZE];
    int size, rotateBy;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the number of positions to right rotate: ");
    scanf("%d", &rotateBy);

    printf("Original array: ");
    printArray(array, size);

    rightRotate(array, size, rotateBy);

    printf("Array after right rotation: ");
    printArray(array, size);

    return 0;
}

void rightRotate(int array[], int size, int rotateBy) {
    int temp;

    for (int i = 0; i < rotateBy; i++) {
        temp = array[size - 1];

        for (int j = size - 1; j > 0; j--) {
            array[j] = array[j - 1];
        }

        array[0] = temp;
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
