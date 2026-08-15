/****************************************************************************
*           Problem 13: Calculate Factorial of a Given Number
*****************************************************************************/

#include <stdio.h>

int main(void)
{
    int n, i;
    long long factorial = 1;

    printf("\nEnter the number; You want to see the 'factorial' value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("\nHere is the factorial value: %lld\n\n", factorial);

    return 0;
}
