#include <stdio.h>
#include <math.h>

int isPrime(int number);
int isArmstrong(int number);
int isPerfect(int number);

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}

int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0; 
        }
    }

    return 1; 
}

int isArmstrong(int number) {
    int originalNumber = number;
    int digits = 0, result = 0;

    while (originalNumber != 0) {
        originalNumber /= 10;
        digits++;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        int remainder = originalNumber % 10;
        result += pow(remainder, digits);
        originalNumber /= 10;
    }

    if (result == number) {
        return 1; 
    } else {
        return 0; 
    }
}

int isPerfect(int number) {
    int sum = 0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        return 1; 
    } else {
        return 0; 
    }
}
