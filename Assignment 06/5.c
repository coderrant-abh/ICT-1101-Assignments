// Program for reverse a string using library.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int i, j, length;
    char temp;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("\nReversed string: %s\n\n", str);

    return 0;
}