// C Program for Reverse a String Using Pointer.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char *start, *end, temp;

    printf("\nEnter a string: ");
    scanf("%99s", str);

    start = str;
    end = str + strlen(str) - 1;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("\nReversed string: %s\n\n", str);

    return 0;
}