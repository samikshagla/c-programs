#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array1[MAX_SIZE], array2[MAX_SIZE], mergedArray[MAX_SIZE * 2];
    int size1, size2, mergedSize, i, j;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter the elements of the second array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &array2[i]);
    }

   
    mergedSize = size1 + size2;
    for (i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }
    for (j = 0; j < size2; j++) {
        mergedArray[i++] = array2[j];
    }

    printf("Merged array:\n");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
