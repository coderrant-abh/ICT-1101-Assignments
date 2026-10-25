// Program for Reverse a String Without Using Library.
#include <stdio.h>

int main(void)
{
    char str[100], temp;
    int i, j, length = 0;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    str[length] = '\0';

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("\nReversed string: %s\n\n", str);

    return 0;
}