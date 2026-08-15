/*********************************************************************
*            Problem 05: Calculate a Simple Interest
**********************************************************************/

#include <stdio.h>

int main(void)
{
    float amount, rate, time, interest;

    printf("\nEnter the Principal amount value: ");
    scanf("%f", &amount);

    printf("What interest rate(%%) do you wanna calculate: ");
    scanf("%f", &rate);

    printf("Enter the time period (in year): ");
    scanf("%f", &time);

    /***************************************************************
    * We konw; I = pnr    Where; I = Simple Interest
    *                            p = Principal Amount
    *                            n = Time in year
    *                            r = Interest Rate
    ****************************************************************/
    interest = amount * time * (rate / 100);

    printf("\nThe Simple Interest of your amount: %.3f\n\n", interest);

    return 0;
}
