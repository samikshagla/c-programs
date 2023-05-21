#include <stdio.h>
#include <ctype.h>


void toggleCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    toggleCase(str);

    printf("String with toggled case: %s\n", str);

    return 0;
}
