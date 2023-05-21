#include <stdio.h>


int gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}


unsigned long long lcm(int num1, int num2) {
    unsigned long long lcm_value = (unsigned long long)num1 * num2 / gcd(num1, num2);
    return lcm_value;
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    unsigned long long lcm_value = lcm(num1, num2);

    printf("LCM of %d and %d is: %llu\n", num1, num2, lcm_value);

    return 0;
}
