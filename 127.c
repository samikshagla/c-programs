#include <stdio.h>
#include <string.h>


    int length = strlen(str);
    int uniqueIndex = 0;

   
    for (int i = 0; i < length; i++) {
        int j;
        
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
       
        if (j == i) {
            str[uniqueIndex++] = str[i];
        }
    }
    
    str[uniqueIndex] = '\0';
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    removeRepeatedCharacters(str);

    printf("String after removing repeated characters: %s\n", str);

    return 0;
}
