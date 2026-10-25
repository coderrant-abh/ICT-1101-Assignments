// Display Prime Numbers Between Intervals.
#include <stdio.h>

int isPrime(int n);

int main(void)
{
    int start, end, i;

    printf("\nEnter the intervals (Start & End): ");
    scanf("%d %d", &start, &end);

    printf("\nPrime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n\n");
    
    return 0;
}

int isPrime(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}