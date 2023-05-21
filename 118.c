#include <stdio.h>

 
int findLastOccurrence(const char *str, char ch) {
    int index = -1;

   
    for (int i = 0; str[i] != '\0'; i++) {
       
        if (str[i] == ch) {
            index = i;
        }
    }

    return index;
}

int main() {
    char str[1000];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter the character to search: ");
    scanf(" %c", &ch);

    int occurrence = findLastOccurrence(str, ch);

    if (occurrence != -1) {
        printf("The last occurrence of '%c' is at index %d.\n", ch, occurrence);
    } else {
        printf("The character '%c' is not found in the string.\n", ch);
    }

    return 0;
}
