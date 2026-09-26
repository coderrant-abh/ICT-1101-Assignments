// Temperature Conversion Celsius to Fahrenheit and Vice Versa.
#include <stdio.h>

int main(void)
{
    int choice;
    float temp, result;

    printf("\n1. Celsius to Fahrenheit, Or\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\nEnter temperature: ");
    scanf("%f", &temp);

    switch (choice)
    {
        case 1:
            result = (temp * 9 / 5) + 32;
            printf("\nFahrenheit = %.2f\n", result);
            break;

        case 2:
            result = (temp - 32) * 5 / 9;
            printf("\nCelsius = %.2f\n", result);
            break;

        default:
            printf("\nInvalid choice\n");
    }

    return 0;
}