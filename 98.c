#include <stdio.h>


unsigned long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    unsigned long long prev = 0;
    unsigned long long current = 1;
    unsigned long long fib;

    for (int i = 2; i <= n; i++) {
        fib = prev + current;
        prev = current;
        current = fib;
    }

    return fib;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input! n should be a non-negative integer.\n");
        return 0;
    }

    unsigned long long result = fibonacci(n);

    printf("The %dth Fibonacci term is: %llu\n", n, result);

    return 0;
}
