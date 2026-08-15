/***********************************************************
*         Problem 3: Find the Area of a Triangle
************************************************************/

#include <stdio.h>

int main(void)
{
    printf("\nTo calculate the area of Triangle; Please input the Base & Height value.\n\n");

    float base, height, area;
    printf("Enter the base: ");
    scanf("%f", &base);

    printf("Enter the height: ");
    scanf("%f", &height);

    area = (1.0/2.0) * base * height;
    printf("Here's the area of your Triangle: %.3f\n\n", area);

    return 0;
}
