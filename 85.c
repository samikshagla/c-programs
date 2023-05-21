#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

void printPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the interval:\n");
    printf("Start: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);

    printPrimes(start, end);

    return 0;
}
