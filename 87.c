#include <stdio.h>
#include <math.h>

int isArmstrong(int num);
void printArmstrongNumbers(int start, int end);

int main() {
    int start, end;

    printf("Enter the interval (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);
    printArmstrongNumbers(start, end);

    return 0;
}

int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

   
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

   
    if (result == num)
        return 1;
    else
        return 0;
}

void printArmstrongNumbers(int start, int end) {
    int i;

    for (i = start; i <= end; ++i) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    printf("\n");
}
