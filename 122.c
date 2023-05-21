#include <stdio.h>
#include <string.h>


char findLowestFrequency(const char *str) {
    int charCount[256] = {0}; 
    int length = strlen(str);
    int minFrequency = length + 1; 
    char lowestChar = '\0';

    
    for (int i = 0; i < length; i++) {
        charCount[str[i]]++;
    }

    
    for (int i = 0; i < length; i++) {
        if (charCount[str[i]] != 0 && charCount[str[i]] < minFrequency) {
            minFrequency = charCount[str[i]];
            lowestChar = str[i];
        }
    }

    return lowestChar;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    char lowestFrequencyChar = findLowestFrequency(str);

    if (lowestFrequencyChar != '\0') {
        printf("Lowest frequency character: '%c'\n", lowestFrequencyChar);
    } else {
        printf("No characters found in the string.\n");
    }

    return 0;
}
