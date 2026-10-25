// Convert Binary Number to Decimal or Decimal Number to Binary.
#include <stdio.h>

int binaryToDecimal(int binary);
void decimalToBinary(int decimal);

int main(void)
{
    int choice, number;

    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nEnter a binary number: ");
        scanf("%d", &number);

        printf("\nDecimal number = %d\n\n", binaryToDecimal(number));
    }
    else if (choice == 2) {
        printf("\nEnter a decimal number: ");
        scanf("%d", &number);

        decimalToBinary(number);
    } else {
        printf("\nInvalid choice!\n\n");
    }

    return 0;
}

int binaryToDecimal(int binary) {
    
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
        binary = binary / 10;
    }

    return decimal;
}

void decimalToBinary(int decimal) {
    
    int binary = 0, base = 1, remainder;

    if (decimal == 0) {
        printf("\nBinary number = 0\n\n");
        return;
    }

    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + remainder * base;
        base = base * 10;
        decimal = decimal / 2;
    }

    printf("\nBinary number = %d\n\n", binary);
}