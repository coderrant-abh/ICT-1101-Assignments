// Check Whether a Number Is Divisible by 11 Using (Vedic Maths).
#include <stdio.h>

int main(void)
{
    int number, digit;
    int oddSum = 0, evenSum = 0;
    int position = 1;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;

        if (position % 2 == 1) {
            oddSum = oddSum + digit;
        } else {
            evenSum = evenSum + digit;
        }
        number = number / 10;
        position++;
    }

    if ((oddSum - evenSum) % 11 == 0) {
        printf("\nThe number is divisible by 11.\n");
    } else {
        printf("\nThe number is not divisible by 11.\n");
    }

    return 0;
}