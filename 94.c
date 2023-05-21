#include <stdio.h>


int reverseNumber(int num) {
    int reversedNum = 0;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int num, reversedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    reversedNum = reverseNumber(num);

    printf("Reverse of %d is: %d\n", num, reversedNum);

    return 0;
}
