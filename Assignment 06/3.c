// Convert string to Integer without using library functions.
#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0, num = 0, sign = 1;

    printf("\nEnter a number as a string: ");
    scanf("%99s", str);

    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    while (str[i] != '\0') {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    num = num * sign;

    printf("\nInteger = %d\n", num);

    return 0;
}