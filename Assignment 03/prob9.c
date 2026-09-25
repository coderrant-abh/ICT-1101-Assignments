// Number Is a Palindrome or Not Using While Loop.

#include <stdio.h>

int main(void)
{
    int n, temp, digit, reverse = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (temp == reverse) {
        printf("\n%d is a palindrome number.\n\n", temp);
    } else {
        printf("\n%d is not a palindrome number.\n\n", temp);
    }

    return 0;
}