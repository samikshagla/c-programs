#include <stdio.h>

#define MAX_SIZE 1000


void countCharacterFrequency(const char *str) {
    int frequency[256] = {0};

   
    for (int i = 0; str[i] != '\0'; i++) {
       
        frequency[str[i]]++;
    }

    printf("Character Frequency\n");

   
    for (int i = 0; i < 256; i++) {
        
        if (frequency[i] != 0) {
            printf("%c         %d\n", i, frequency[i]);
        }
    }
}

int main() {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    countCharacterFrequency(str);

    return 0;
}
