// C Program for Convert Binary to Octal and Vice Versa.
#include <stdio.h>

long long binaryToOctal(long long binary);
long long octalToBinary(long long octal);

int main(void)
{
    int choice;
    long long num, result;

    printf("1. Binary to Octal\n");
    printf("2. Octal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nEnter a binary number: ");
        scanf("%lld", &num);

        result = binaryToOctal(num);

        if (result == -1) {
            printf("\nInvalid binary number.\n");
        } else {
            printf("\nOctal = %lld\n", result);
        }

    } else if (choice == 2) {
        printf("\nEnter an octal number: ");
        scanf("%lld", &num);

        result = octalToBinary(num);

        if (result == -1) {
            printf("\nInvalid octal number.\n");
        } else {
            printf("\nBinary = %lld\n", result);
        }

    } else {
        printf("\nInvalid choice.\n");
    }

    return 0;
}

long long binaryToOctal(long long binary) {
    
    long long decimal = 0, base = 1;
    long long digit, octal = 0, place = 1;

    while (binary > 0) {
        digit = binary % 10;

        if (digit > 1) {
            return -1;
        }

        decimal = decimal + digit * base;
        base = base * 2;
        binary = binary / 10;
    }

    while (decimal > 0) {
        digit = decimal % 8;
        octal = octal + digit * place;
        place = place * 10;
        decimal = decimal / 8;
    }

    return octal;
}

long long octalToBinary(long long octal) {
    
    long long decimal = 0, base = 1;
    long long digit, binary = 0, place = 1;

    while (octal > 0) {
        digit = octal % 10;

        if (digit > 7) {
            return -1;
        }

        decimal = decimal + digit * base;
        base = base * 8;
        octal = octal / 10;
    }

    while (decimal > 0) {
        digit = decimal % 2;
        binary = binary + digit * place;
        place = place * 10;
        decimal = decimal / 2;
    }

    return binary;
}