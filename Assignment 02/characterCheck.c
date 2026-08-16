/******************************************************************************
*       Problem 01: Program to Check Character is Uppercase, Lowercae 
*                       Alphabet or a Digit or a Special Symbol
*******************************************************************************/

#include <stdio.h>

int main(void)
{
    char ch;
    printf("\nTo check a Character is Uppercase, Lowercase alphabet or something else,\n");
    printf("Pease enter the CHARACTER: ");
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90) {
        printf("\nYour entered character '%c' is a ""Uppercase Alphabet""\n", ch);
    } else if (ch >= 97 && ch <= 122) {
        printf("\nYour entered character '%c' is a ""Lowercase Alphabet""\n", ch);
    } else if (ch >= 48 && ch <= 57) {
        printf("\nYour entered character '%c' is a ""Digit""\n", ch);
    } else {
        printf("\nYour entered character '%c' is a ""Special Symbol""\n", ch);
    }

    return 0;
}