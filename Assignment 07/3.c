// Convert Octal Number to Decimal and Vice Versa.
#include <stdio.h>

int octalToDecimal(int octal);
int decimalToOctal(int decimal);

int main(void)
{
    int choice, num, result;

    printf("1. Octal to Decimal\n");
    printf("2. Decimal to Octal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nEnter an octal number: ");
        scanf("%d", &num);

        result = octalToDecimal(num);

        if (result == -1) {
            printf("\nInvalid octal number.\n");
        } else {
            printf("\nDecimal = %d\n", result);
        }
        
    } else if (choice == 2) {
        printf("\nEnter a decimal number: ");
        scanf("%d", &num);

        result = decimalToOctal(num);

        printf("\nOctal = %d\n", result);
    } else {
        printf("\nInvalid choice.\n");
    }

    return 0;
}

int octalToDecimal(int octal) {
    int decimal = 0, base = 1, digit;

    while (octal > 0) {
        digit = octal % 10;

        if (digit > 7) {
            return -1;
        }

        decimal = decimal + digit * base;
        base = base * 8;
        octal = octal / 10;
    }

    return decimal;
}

int decimalToOctal(int decimal) {
    int octal = 0, remainder, place = 1;

    while (decimal > 0) {
        remainder = decimal % 8;
        octal = octal + remainder * place;
        place = place * 10;
        decimal = decimal / 8;
    }

    return octal;
}