#include <stdio.h>
#include <string.h>


int countOccurrences(const char *str, const char *word) {
    int count = 0;
    int wordLength = strlen(word);

   
    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == word[0]) {
            int match = 1;

            
            for (int j = 1; word[j] != '\0'; j++) {
                if (str[i + j] != word[j]) {
                    match = 0;
                    break;
                }
            }

          
            if (match) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    char str[1000];
    char word[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter the word to count: ");
    scanf("%s", word);

    int occurrenceCount = countOccurrences(str, word);

    printf("Number of occurrences of '%s' in the string: %d\n", word, occurrenceCount);

    return 0;
}
