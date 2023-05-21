#include <stdio.h>


int calculateSum(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = calculateSum(n);

    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
