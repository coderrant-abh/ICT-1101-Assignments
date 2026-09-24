// Display Fibonacci Series Using While Loop.

#include <stdio.h>

int main(void)
{
    int n, i, first = 0, second = 1, next;

    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci series up to %d terms: ", n);

    i = 1;
    while (i <= n) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;

        i++;
    }

    printf("\n\n");

    return 0;
}