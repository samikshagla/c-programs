#include <stdio.h>


int countOccurrences(const char *str, char ch) {
    int count = 0;

   
    for (int i = 0; str[i] != '\0'; i++) {
       
        if (str[i] == ch) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[1000];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Enter the character to count: ");
    scanf(" %c", &ch);

    int occurrenceCount = countOccurrences(str, ch);

    printf("Number of occurrences of '%c' in the string: %d\n", ch, occurrenceCount);

    return 0;
}
