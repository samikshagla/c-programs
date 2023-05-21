#include <stdio.h>
#include <string.h>


char* findLastOccurrence(const char *str, const char *word) {
    char *lastOccurrence = NULL;
    char *currentOccurrence = strstr(str, word);

    while (currentOccurrence != NULL) {
        lastOccurrence = currentOccurrence;
        currentOccurrence = strstr(currentOccurrence + 1, word);
    }

    return lastOccurrence;
}

int main() {
    char str[1000];
    char word[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter the word to find: ");
    scanf("%s", word);

    char *lastOccurrence = findLastOccurrence(str, word);

    if (lastOccurrence != NULL) {
        printf("Last occurrence of '%s' found at index: %ld\n", word, lastOccurrence - str);
    } else {
        printf("Word '%s' not found in the string.\n", word);
    }

    return 0;
}
