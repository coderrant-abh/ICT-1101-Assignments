/********************************************************************************
*        Problem 06: Find the Greater No. Among the Given Three Number.
*********************************************************************************/

#include <stdio.h>

int main(void)
{
    float num1, num2, num3;

    printf("\nEnter your 1st number: ");
    scanf("%f", &num1);

    printf("Enter your 2nd number: ");
    scanf("%f", &num2);

    printf("Enter your 3rd number: ");
    scanf("%f", &num3);

    // Applying the conditions; Which one is Greater?

    if (num1 == num2 && num2 == num3){
        printf("\nAll the given numbers are equal.\n\n");
    } else if (num1 >= num2 && num1 >= num3) {
        printf("\n1st Number (%.3f) is the Greater Number.\n\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("\n2nd Number (%.3f) is the Greater Number.\n\n", num2);
    } else {
        printf("\n3rd Number (%.3f) is the Greater Number.\n\n", num3);
    }

    return 0;
}