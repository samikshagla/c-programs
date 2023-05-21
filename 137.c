#include <stdio.h>
#include <string.h>


void removeOccurrences(char *str, const char *word) {
    int wordLength = strlen(word);
    int stringLength = strlen(str);

  
    for (int i = 0; i <= stringLength - wordLength; i++) {
        int match = 1;

      
        for (int j = 0; j < wordLength; j++) {
            if (str[i + j] != word[j]) {
                match = 0;
                break;
            }
        }

        
        if (match) {
            for (int k = i; k < stringLength - wordLength; k++) {
                str[k] = str[k + wordLength];
            }

           
            stringLength -= wordLength;
            i--; 
        }
    }

    
    str[stringLength] = '\0';
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

    removeOccurrences(str, word);

    printf("String after removing all occurrences of '%s': %s\n", word, str);

    return 0;
}
