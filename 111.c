#include <stdio.h>
#include <ctype.h>


void countCharacters(const char *str, int *alphabets, int *digits, int *special) {
    int i = 0;

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            (*alphabets)++;
        } else if (isdigit(str[i])) {
            (*digits)++;
        } else {
            (*special)++;
        }
        i++;
    }
}

int main() {
    char str[100];
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    countCharacters(str, &alphabets, &digits, &special);

    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}
