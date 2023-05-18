#include <stdio.h>

int findMaximum(int num1, int num2);
int findMinimum(int num1, int num2);

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int maximum = findMaximum(num1, num2);
    int minimum = findMinimum(num1, num2);

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}

int findMaximum(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int findMinimum(int num1, int num2) {
    return (num1 < num2) ? num1 : num2;
}
