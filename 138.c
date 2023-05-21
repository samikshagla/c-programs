#include <stdio.h>
#include <string.h>
#include <ctype.h>


void trimLeadingWhiteSpace(char *str) {
    int length = strlen(str);
    int startIndex = 0;

    
    while (isspace(str[startIndex])) {
        startIndex++;
    }

  
    int i;
    for (i = 0; i < length - startIndex; i++) {
        str[i] = str[i + startIndex];
    }

   
    str[i] = '\0';
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    trimLeadingWhiteSpace(str);

    printf("String after trimming leading white space: %s\n", str);

    return 0;
}
