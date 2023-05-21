#include <stdio.h>
#include <string.h>


void removeFirstOccurrence(char *str, const char *word) {
    int length = strlen(word);
    char *occurrence = strstr(str, word);

    if (occurrence != NULL) {
        memmove(occurrence, occurrence + length, strlen(occurrence + length) + 1);
    }
}

int main() {
    char str[1000];
    char word[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter the word to remove: ");
    scanf("%s", word);

    removeFirstOccurrence(str, word);

    printf("String after removing the first occurrence of '%s': %s\n", word, str);

    return 0;
}
