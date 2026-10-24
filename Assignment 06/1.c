// C Program to Remove All Vowels from a String.
#include <stdio.h>

int main(void)
{
    char str[100];
    int i, j = 0;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        
        if (str[i] != 'a' && str[i] != 'A' &&
            str[i] != 'e' && str[i] != 'E' &&
            str[i] != 'i' && str[i] != 'I' &&
            str[i] != 'o' && str[i] != 'O' &&
            str[i] != 'u' && str[i] != 'U') {
            
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("After removing vowels: %s\n", str);

    return 0;
}