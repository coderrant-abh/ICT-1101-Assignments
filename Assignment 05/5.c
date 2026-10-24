// Check String Is Palindrome or Not, Using for Loop.
#include <stdio.h>

int main(void)
{
    char str[100];
    int i, length = 0, palindrome = 1;
    
    printf("\nEnter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }
    
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        length++;
    }
    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }
    
    if (palindrome == 1) {
        printf("The string is a palindrome.\n\n");
    } else {
        printf("The string is not a palindrome.\n\n");
    }
    
    return 0;
}