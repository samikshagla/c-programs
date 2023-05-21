#include <stdio.h>


char findHighestFrequencyChar(const char *str) {
    int frequency[256] = {0}; 

   
    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(int)str[i]]++;
    }

    char highestFreqChar = '\0';
    int highestFreq = 0;

    
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > highestFreq) {
            highestFreq = frequency[i];
            highestFreqChar = (char)i;
        }
    }

    return highestFreqChar;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    char highestFreqChar = findHighestFrequencyChar(str);

    if (highestFreqChar != '\0') {
        printf("Character with the highest frequency: %c\n", highestFreqChar);
    } else {
        printf("No character found in the string.\n");
    }

    return 0;
}
