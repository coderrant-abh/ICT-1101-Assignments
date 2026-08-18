/************************************************************************
*       Problem 04: Program for Finding Greater Between Two Number
*************************************************************************/

#include <stdio.h>

int main(void)
{
    float num1, num2;
    
    printf("\nEnter your 1st number: ");
    scanf("%f", &num1);

    printf("Enter your 2nd number: ");
    scanf("%f", &num2);

    if(num1 > num2) {
        printf("\nYour given 1st number '%.2f' is greater.\n\n", num1);
    } else if(num2 > num1) {
        printf("\nYour given 2nd number '%.2f' is greater.\n\n", num2);
    } else {
        printf("\nYour given numbers both are equal.\n\n");
    }

    return 0;
}
