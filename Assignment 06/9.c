// Find Number of Vowels, Consonants, Digits and White Space Character.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[200];
    int i, vowels = 0, consonants = 0;
    int digits = 0, spaces = 0;
    char ch;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        
        ch = tolower((unsigned char)str[i]);

        if (ch >= 'a' && ch <= 'z') {
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit((unsigned char)str[i])) {
            digits++;
        } else if (isspace((unsigned char)str[i])) {
            spaces++;
        }
    }

    printf("\nVowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Whitespace characters = %d\n\n", spaces);

    return 0;
}