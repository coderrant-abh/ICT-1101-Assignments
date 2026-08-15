/************************************************************************
*         Problem 1: Find the Area & Circumference of a circle
*************************************************************************/

#include <stdio.h>

#define PI 3.1415926535f
//  '#define' macros set the PI on 3.1415926535 as float literals.

int main(void)
{
    float radius, area, circumference;

    printf("Enter the circle radius value: ");
    scanf("%f", &radius);

    printf("\n\nYour given radius: %.3f\n\n", radius);

    // Calculation && output.
    area = PI * radius * radius;
    printf("Area of the circle: %.3f\n", area);

    circumference = 2 * PI * radius;
    printf("Circumference fo the circle: %.3f\n", circumference);

    return 0;
}