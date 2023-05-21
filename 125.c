#include <stdio.h>
#include <string.h>


void removeLastOccurrence(char *str, char ch) {
    int length = strlen(str);
    int lastOccurrence = -1;

    
    for (int i = 0; i < length; i++) {
        if (str[i] == ch) {
            lastOccurrence = i;
        }
    }

  
    if (lastOccurrence != -1) {
        for (int i = lastOccurrence; i < length - 1; i++) {
            str[i] = str[i + 1];
        }
        str[length - 1] = '\0';
    }
}

int main() {
    char str[1000];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

  
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter the character to remove: ");
    scanf(" %c", &ch);

    removeLastOccurrence(str, ch);

    printf("String after removing last occurrence of '%c': %s\n", ch, str);

    return 0;
}
