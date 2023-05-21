#include <stdio.h>
#include <string.h>


void reverseWords(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    
    start = 0;
    end = 0;
    while (start < length) {
       
        while (str[start] == ' ' && start < length) {
            start++;
        }

        
        end = start;
        while (str[end] != ' ' && str[end] != '\0') {
            end++;
        }

        
        int wordStart = start;
        int wordEnd = end - 1;
        while (wordStart < wordEnd) {
            char temp = str[wordStart];
            str[wordStart] = str[wordEnd];
            str[wordEnd] = temp;
            wordStart++;
            wordEnd--;
        }

        start = end;
    }
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character from fgets
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    reverseWords(str);

    printf("String with reversed order of words: %s\n", str);

    return 0;
}
