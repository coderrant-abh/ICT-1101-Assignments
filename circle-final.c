/***********************************************************************
*        Problem 1: Find the Area & Circumference of a circle
************************************************************************/

#include <stdio.h>

#define PI 3.1415926535f
// '#define' macros set the PI on 3.1415926535 as float literals.

int main(void)
{
    float radius, area, circumference;

    // Loop until the user provides a valid number.
    while (1) {
        printf("Enter the radius of the circle: ");
        
        // Check the input; Does it valid or not??
        if (scanf("%f", &radius) == 1 && radius >= 0) {
            break;
        } else {
            printf("\n       !!!  Error  !!!     \nPlease enter a valid radius vlaue.\n\n");
            while (getchar() != '\n'); // Clear the input buffer.
        }
    }
    
    printf("\n\nYour given radius: %.3f\n\n", radius);

    area = PI * radius * radius;
    printf("Area of the circle: %.3f\n", area);

    circumference = 2.0 * PI * radius;
    printf("Circumference of the circle: %.3f\n", circumference);

    return 0;
}

