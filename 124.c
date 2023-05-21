#include <stdio.h>
#include <string.h>


void removeFirstOccurrence(char *str, char ch) {
    int length = strlen(str);
    int found = 0;

   
    for (int i = 0; i < length; i++) {
        
        if (str[i] == ch && !found) {
            found = 1;
        }

        
        if (found) {
            str[i] = str[i + 1];
        }
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

    removeFirstOccurrence(str, ch);

    printf("String after removing first occurrence of '%c': %s\n", ch, str);

    return 0;
}
