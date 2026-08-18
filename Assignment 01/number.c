/*******************************************************************
*       Problem 11: a Check Number is Positive or Negative
********************************************************************/

#include <stdio.h>

int main(void)
{
    float num;
    printf("\nEnter the number: ");
    scanf("%f", &num);

    if(num > 0) {
        printf("Your given %.2f is a Positive number.\n\n", num);
    } else if(num < 0) {
        printf("Your given %.2f is a Negative number.\n\n", num);
    } else {
        printf("You entered Zero. That's a Neutral number.\n\n");
    }

    return 0;
}
