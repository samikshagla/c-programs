#include <stdio.h>


void printNumbersInRange(int start, int end, int isEven) {
    printf("Numbers between %d and %d:\n", start, end);

    for (int i = start; i <= end; i++) {
        if ((i % 2 == 0 && isEven) || (i % 2 != 0 && !isEven)) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int start, end;
    int isEven;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Enter 1 to print even numbers or 0 to print odd numbers: ");
    scanf("%d", &isEven);

    printNumbersInRange(start, end, isEven);

    return 0;
}
