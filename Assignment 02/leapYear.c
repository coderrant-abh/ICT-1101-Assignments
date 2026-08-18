/****************************************************************************
*       Problem 06: Program to Check Leap Year or Not, Using If/Else
*****************************************************************************/

#include <stdio.h>

int main(void)
{
    int year;
    printf("To check a Year is Leap year or Not;\nPlease enter the year: ");
    scanf("%d", &year);

    if(year % 400 == 0) {
        printf("\n%d: A Leap Year.\n\n", year);
    } else {
        if(year % 100 == 0) {
            printf("\n%d: Not a Leap Year.\n\n", year);
        } else {
            if(year % 4 == 0) {
                printf("\n%d: A Leap Year.\n\n", year);
            } else {
                printf("\n%d: Not a Leap Year.\n\n", year);
            }
        }
    }

    return 0;
}
