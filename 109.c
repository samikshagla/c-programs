#include <stdio.h>
#include <ctype.h>


void stringToLower(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string in uppercase: ");
    scanf("%[^\n]", str);

    stringToLower(str);

    printf("String in lowercase: %s\n", str);

    return 0;
}
