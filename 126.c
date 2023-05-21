#include <stdio.h>
#include <string.h>


void removeAllOccurrences(char *str, char ch) {
    int length = strlen(str);
    int shift = 0;

   
    for (int i = 0; i < length; i++) {
       
        if (str[i] == ch) {
            shift++;
            continue;
        }
        
        str[i - shift] = str[i];
    }

   
    str[length - shift] = '\0';
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

    removeAllOccurrences(str, ch);

    printf("String after removing all occurrences of '%c': %s\n", ch, str);

    return 0;
}
