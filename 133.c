#include <stdio.h>
#include <string.h>


void searchOccurrences(const char *str, const char *word) {
    int wordLength = strlen(word);
    const char *currentOccurrence = str;

    while ((currentOccurrence = strstr(currentOccurrence, word)) != NULL) {
        printf("Word '%s' found at index: %ld\n", word, currentOccurrence - str);
        currentOccurrence += wordLength;
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

    printf("Enter the word to search for: ");
    scanf("%s", word);

    searchOccurrences(str, word);

    return 0;
}
