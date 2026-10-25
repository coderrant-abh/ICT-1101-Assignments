// Compare Two String Using STRCMP Function.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100], str2[100];

    printf("\nEnter 1st string: ");
    scanf("%99s", str1);

    printf("Enter 2nd string: ");
    scanf("%99s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("\nBoth String are equal.\n\n");
    } else {
        printf("\nStrings are not equal.\n\n");
    }

    return 0;
}