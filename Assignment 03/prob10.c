// Count Number of Digits of an Integer Using While Loop.

#include <stdio.h>

int main(void)
{
    int n, count = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            count++;
        }
    }

    printf("\nNumber of digits in this number: %d\n\n", count);

    return 0;
}