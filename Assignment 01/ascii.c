/*****************************************************************
*        Problem 2: Print the ASCII value of a Character
******************************************************************/

#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter the Character: ");
    scanf("%c", &ch);

    printf("\nASCII value of the character '%c' is : %d\n\n", ch, ch);
    
    return 0;
}
