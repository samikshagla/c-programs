#include <stdio.h>



int countWords(const char *str) {
    int wordCount = 0;
    bool isWord = false;

   
    for (int i = 0; str[i] != '\0'; i++) {
       
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?') {
            isWord = false;
        }
        
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) {
            if (!isWord) {
                wordCount++;
                isWord = true;
            }
        }
    }

    return wordCount;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int count = countWords(str);

    printf("Total number of words: %d\n", count);

    return 0;
}
