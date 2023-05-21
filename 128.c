#include <stdio.h>
#include <string.h>


void replaceFirstOccurrence(char *str, char oldChar, char newChar) {
    int length = strlen(str);

   
    for (int i = 0; i < length; i++) {
        
        if (str[i] == oldChar) {
            str[i] = newChar;
            break;
        }
    }
}

int main() {
    char str[1000];
    char oldChar, newChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter the character to replace: ");
    scanf(" %c", &oldChar);

    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    replaceFirstOccurrence(str, oldChar, newChar);

    printf("String after replacing first occurrence of '%c' with '%c': %s\n", oldChar, newChar, str);

    return 0;
}
