#include <stdio.h>
#include <string.h>
#include <ctype.h>


void trimTrailingWhitespace(char *str) {
    int length = strlen(str);

   
    int i = length - 1;

    
    while (i >= 0 && isspace(str[i])) {
        i--;
    }

   
    str[i + 1] = '\0';
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

  
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    trimTrailingWhitespace(str);

    printf("String after trimming trailing whitespace: %s\n", str);

    return 0;
}
