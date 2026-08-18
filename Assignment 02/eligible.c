/***********************************************************************
*       Problem 03: Checking You Are Eligible for Voting or Not
************************************************************************/

#include <stdio.h>

int main(void)
{
    float age;
    printf("\nTo check, are you really eligible for voting or not;\nPlease Enter your age: ");
    scanf("%f", &age);

    if(age >= 18) {
        printf("\nCongratulations!\nYou're eligible for voting.\n\n");
    } else if(age <= 0) {
        printf("\nPlease enter a valid age number.\n\n");
    } else {
        printf("\nSorry!\nYou're not eligible for voting yet.\n\n");
    }

    return 0;
}
