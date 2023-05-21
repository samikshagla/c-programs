#include <stdio.h>
#include <string.h>
#include <ctype.h>


void trimWhitespace(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

   
    while (isspace(str[start])) {
        start++;
    }

    
    while (isspace(str[end]) && end >= start) {
        end--;
    }


    for (int i = 0; i <= end - start; i++) {
        str[i] = str[start + i];
    }

    
    str[end - start + 1] = '\0';
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    trimWhitespace(str);

    printf("String after trimming whitespace: %s\n", str);

    return 0;
}
