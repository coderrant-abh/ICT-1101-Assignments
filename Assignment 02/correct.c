/*****************************************************************************************
*       Problem 08: Given Date Month and the Year Is Correct or Not, Using If/Else
******************************************************************************************/

#include <stdio.h>

int main(void)
{
    int day, month, year;
    printf("\nEnter the date :  ");
    scanf("%d", &day);

    printf("Enter the month:  ");
    scanf("%d", &month);

    printf("Enter the year :  ");
    scanf("%d", &year);


    if (year <= 0 || month < 1 || month > 12 || day < 1 || day > 31) {
         printf("\n-- !!! Invalid Date !!! --\nPlease enter a valid date.\n\n");
    } 
    
    else if (month == 2) {
        //This condition to check Leap Year.
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            if (day <= 29) {
                printf("\nThat's a Valid Date.\n\n");
            } else {
                printf("\n-- !!! Invalid Date !!! --\nPlease enter a Valid date.\n\n");
            }
        } else {
            if (day <= 28) {
                printf("\nThat's a Valid Date.\n\n");
            } else {
                printf("\n-- !!! Invalid Date !!! --\nPlease enter a Valid date.\n\n");
            }
        }
    }

    // This conditions for Months with 31 days
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day <= 31) {
            printf("\nThat's a Valid Date.\n\n");
        } else {
            printf("\n-- !!! Invalid Date !!! --\nPlease enter a Valid date.\n\n");
        }
    }

    // And this condition for Months with 30 days
    else {
        if (day <= 30) {
            printf("\nThat's a Valid Date.\n\n");
        } else {
            printf("\n-- !!! Invalid Date !!! --\nPlease enter a Valid date.\n\n");
        }
    }

    return 0;
}
