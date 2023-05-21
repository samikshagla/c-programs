#include <stdio.h>


void findAllOccurrences(const char *str, char ch) {
    printf("Occurrences of '%c' in the string: ", ch);

   
    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == ch) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    char str[1000];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter the character to search: ");
    scanf(" %c", &ch);

    findAllOccurrences(str, ch);

    return 0;
}
