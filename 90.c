#include <stdio.h>


void printNaturalNumbers(int n) {
    printf("Natural numbers from 1 to %d:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printNaturalNumbers(n);

    return 0;
}
