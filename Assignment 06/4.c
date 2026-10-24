// C Program to Upper Case and Lower Case Conversion and Vice-versa.
#include <stdio.h>

int main(void)
{
    char str[100];
    int i;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        
        if (str[i] >= 'a' && str[i] <= 'z') {
            
            str[i] = str[i] - 'a' + 'A';

        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            
            str[i] = str[i] - 'A' + 'a';

        }
    }

    printf("\nConverted string: %s\n", str);

    return 0;
}