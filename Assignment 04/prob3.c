// Program for Calculator.
#include <stdio.h>

int main(void)
{
    char operator;
    float a, b;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (operator)
    {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0) {
                printf("Result = %.2f\n", a / b);
            } else {
                printf("Cannot divide by zero\n");
            }
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}