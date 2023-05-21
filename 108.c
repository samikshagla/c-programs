#include <stdio.h>


void stringToLowercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            
            str[i] += 32;
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    scanf("%[^\n]", str);

    stringToLowercase(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}
