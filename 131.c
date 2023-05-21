#include <stdio.h>
#include <string.h>


char *findFirstOccurrence(const char *str, const char *word) {
    char *ptr = strstr(str, word);
    return ptr;
}

int main() {
    char str[1000];
    char word[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   s
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter the word to search for: ");
    scanf("%s", word);

    char *occurrence = findFirstOccurrence(str, word);

    if (occurrence != NULL) {
        printf("First occurrence of '%s' found at index: %ld\n", word, occurrence - str);
    } else {
        printf("'%s' not found in the string.\n", word);
    }

    return 0;
}
