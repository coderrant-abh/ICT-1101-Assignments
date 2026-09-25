// Find GCD of Two Numbers Using for Loop.

#include <stdio.h>

int main(void)
{
    int a, b, i, gcd;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("\nGCD = %d\n\n", gcd);

    return 0;
}