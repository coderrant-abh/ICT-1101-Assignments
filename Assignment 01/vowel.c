/*****************************************************************
*       Problem 12: Find the Character Is Vowel or Not
******************************************************************/

#include <stdio.h>

int main(void)
{
    char ch;
    printf("\nEnter the alphabet you want to check Vowel or not: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("\nYour given alphabet '%c' is a Vowel.\n\n", ch);
    } else {
        printf("\nYour given alphabet '%c' is not a Vowel.\n\n", ch);
    }

    return 0;
}
