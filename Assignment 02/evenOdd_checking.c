/**************************************************************
*         Problem 05: Checking Number is Even or Odd
***************************************************************/

#include <stdio.h>

int main(void) 
{
    int num;
    printf("\nEnter a number to check it Even or Odd: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("\nYou entered an Even number.\n\n");
    } else {
        printf("\nYou entered an Odd number.\n\n");
    }

    return 0;
}