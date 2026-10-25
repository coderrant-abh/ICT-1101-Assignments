// Add Two Complex Numbers by Passing Structure with Function.
#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};

struct Complex add(struct Complex c1, struct Complex c2)
{
    struct Complex sum;

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    return sum;
}

int main(void)
{
    struct Complex c1, c2, result;

    printf("\nEnter first complex number (real imaginary): ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number (real imaginary): ");
    scanf("%f %f", &c2.real, &c2.imag);

    result = add(c1, c2);

    printf("\nSum = %.2f + %.2fi\n\n", result.real, result.imag);

    return 0;
}