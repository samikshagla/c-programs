#include <stdio.h>


unsigned long long factorial(int num) {
    unsigned long long fact = 1;

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    unsigned long long result = factorial(num);

    printf("Factorial of %d is: %llu\n", num, result);

    return 0;
}
