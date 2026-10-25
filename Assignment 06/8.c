// C Program for Check String Is Palindrome or NOt.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int i, j, palindrome = 1;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        
        if (str[i] != str[j]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("\nThe string is a palindrome.\n\n");
    } else {
        printf("\nThe string is not a palindrome.\n\n");
    }

    return 0;
}