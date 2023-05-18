#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int frequency[MAX_SIZE];
    int size, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
        frequency[i] = -1;
    }
    for (i = 0; i < size; i++) {
        int count = 1;
        for (j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                count++;
                frequency[j] = 0; 
            }
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }

    printf("Frequency of each element:\n");
    for (i = 0; i < size; i++) {
        if (frequency[i] != 0) {
            printf("%d occurs %d times\n", array[i], frequency[i]);
        }
    }

    return 0;
}
