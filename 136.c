#include <stdio.h>
#include <string.h>


void removeLastOccurrence(char *str, const char *word) {
    int length = strlen(str);
    int wordLength = strlen(word);
    char *lastOccurrence = NULL;

   
    char *currentOccurrence = strstr(str, word);
    while (currentOccurrence != NULL) {
        lastOccurrence = currentOccurrence;
        currentOccurrence = strstr(currentOccurrence + 1, word);
    }

    
    if (lastOccurrence != NULL) {
        memmove(lastOccurrence, lastOccurrence + wordLength, length - (lastOccurrence - str) - wordLength + 1);
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

    removeLastOccurrence(str, word);

    printf("String after removing last occurrence of '%s': %s\n", word, str);

    return 0;
}
