#include <stdio.h>

#define MAX_SIZE 100

void bubbleSort(int array[], int size);

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

   
    bubbleSort(evenArray, evenSize);
    bubbleSort(oddArray, oddSize);

    printf("Sorted even elements array:\n");
    for (i = 0; i < evenSize; i++) {
        printf("%d ", evenArray[i]);
    }
    printf("\n");

    printf("Sorted odd elements array:\n");
    for (i = 0; i < oddSize; i++) {
        printf("%d ", oddArray[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int array[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
