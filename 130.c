#include <stdio.h>
#include <string.h>


void replaceOccurrences(char *str, char searchChar, char replaceChar) {
    int length = strlen(str);


    for (int i = 0; i < length; i++) {
       
        if (str[i] == searchChar) {
            str[i] = replaceChar;
        }
    }
}

int main() {
    char str[1000];
    char searchChar, replaceChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter the character to search for: ");
    scanf(" %c", &searchChar);

    printf("Enter the character to replace with: ");
    scanf(" %c", &replaceChar);

    replaceOccurrences(str, searchChar, replaceChar);

    printf("String after replacing all occurrences of '%c' with '%c': %s\n", searchChar, replaceChar, str);

    return 0;
}
