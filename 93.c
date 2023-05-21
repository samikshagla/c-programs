#include <stdio.h>


int sumEvenOrOdd(int n, int isEven) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if ((i % 2 == 0 && isEven) || (i % 2 != 0 && !isEven)) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int n, sum;
    int isEven;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter 1 to calculate the sum of even numbers or 0 to calculate the sum of odd numbers: ");
    scanf("%d", &isEven);

    if (isEven != 0 && isEven != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if (isEven) {
        sum = sumEvenOrOdd(n, 1);
        printf("Sum of even numbers between 1 and %d: %d\n", n, sum);
    } else {
        sum = sumEvenOrOdd(n, 0);
        printf("Sum of odd numbers between 1 and %d: %d\n", n, sum);
    }

    return 0;
}
