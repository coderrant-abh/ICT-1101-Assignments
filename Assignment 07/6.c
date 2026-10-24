// C Program to Check Prime or Armstrong Number.
#include <stdio.h>

int isPrime(int n);
int isArmstrong(int n);

int main(void)
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("\n%d is a Prime number\n", n);
    else
        printf("\n%d is NOT a Prime number\n", n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is NOT an Armstrong number\n", n);

    return 0;
}

// returns 1 if prime, otherwise 0
int isPrime(int n) {
    int i;
    if (n < 2)
        return 0;
    
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0;
    }
    
    return 1;
}

// returns 1 if Armstrong, otherwise 0
int isArmstrong(int n) {
    
    int temp = n, digits = 0, sum = 0, digit, power, i;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // add each digit raised to the power of total digits
    temp = n;
    
    while (temp != 0) {
        
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == n)
        return 1;
    else
        return 0;

    /************************************************************
    *  Here we can also just use 'return sum == n;' instead of
    *            this every last if-else condition
    *************************************************************/
}