#include <stdio.h>
#include <string.h>


void replaceLastOccurrence(char *str, char oldChar, char newChar) {
    int length = strlen(str);
    int lastOccurrence = -1;

    
    for (int i = 0; i < length; i++) {
        if (str[i] == oldChar) {
            lastOccurrence = i;
        }
    }

   
    if (lastOccurrence != -1) {
        str[lastOccurrence] = newChar;
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

    replaceLastOccurrence(str, oldChar, newChar);

    printf("String after replacing last occurrence of '%c' with '%c': %s\n", oldChar, newChar, str);

    return 0;
}
