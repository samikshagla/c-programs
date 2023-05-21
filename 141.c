#include <stdio.h>
#include <string.h>
#include <ctype.h>


void removeExtraSpaces(char *str) {
    int length = strlen(str);
    int i, j;

   
    int previousSpace = 0;

   
    for (i = 0, j = 0; i < length; i++) {
        if (!isspace(str[i])) {
           
            str[j++] = str[i];
            previousSpace = 0;
        } else {
           
            if (!previousSpace) {
                
                str[j++] = str[i];
                previousSpace = 1;
            }
        }
    }

   
    str[j] = '\0';
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    removeExtraSpaces(str);

    printf("String after removing extra spaces: %s\n", str);

    return 0;
}
