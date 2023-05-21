#include <stdio.h>


void stringConcatenate(char *str1, const char *str2) {
    int i, j;

   
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    
    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    
    str1[i] = '\0';
}

int main() {
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    scanf("%[^\n]", str1);

    printf("Enter the second string: ");
    scanf(" %[^\n]", str2);

    stringConcatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
