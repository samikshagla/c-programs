#include <stdio.h>
#include <ctype.h>


void countVowelsAndConsonants(const char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    int i = 0;

    while (str[i] != '\0') {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }

        i++;
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}
