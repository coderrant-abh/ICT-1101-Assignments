/***********************************************************************
*      Problem 07: Check Character is Vowel or Not, Using If/Else
************************************************************************/

#include <stdio.h>

int main(void)
{
    char ch;
    printf("\nTo check your character is Vowel or Not;\nPlease enter the character: ");
    scanf("%c", &ch);

    if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u') {
        printf("\nYour entered character '%c' is a Vowel.\n", ch);
    } else {
        printf("\nYour entered character '%c' is Not a Vowel.\n", ch);
    }

    return 0;
}