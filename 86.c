#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    while (num > 1) {
        fact *= num;
        num--;
    }
    return fact;
}

int isStrong(int num) {
    int temp = num, sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == num);
}

void printStrongNumbers(int start, int end) {
    printf("Strong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printStrongNumbers(start, end);

    return 0;
}
