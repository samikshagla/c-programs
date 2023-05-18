#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int size, i, j;
    int isUnique;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Unique elements in the array: ");
    for (i = 0; i < size; i++) {
        isUnique = 1; 

      
        for (j = 0; j < size; j++) {
            if (i != j && array[i] == array[j]) {
                isUnique = 0;
                break;
            }
        }

       
        if (isUnique) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}
