#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int evenArray[MAX_SIZE], oddArray[MAX_SIZE];
    int size, evenSize = 0, oddSize = 0, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

   
    for (i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            evenArray[evenSize++] = array[i];
        } else {
            oddArray[oddSize++] = array[i];
        }
    }

    printf("Even elements array:\n");
    for (i = 0; i < evenSize; i++) {
        printf("%d ", evenArray[i]);
    }
    printf("\n");

    printf("Odd elements array:\n");
    for (i = 0; i < oddSize; i++) {
        printf("%d ", oddArray[i]);
    }
    printf("\n");

    return 0;
}
