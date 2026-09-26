// Finding Radius Circumference.
#include <stdio.h>

#define PI 3.14159

int main(void)
{
    int choice;
    float radius, result;

    printf("1. Find Circumference\n");
    printf("2. Find Area\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter radius: ");
    scanf("%f", &radius);

    switch (choice)
    {
        case 1:
            result = 2 * PI * radius;
            printf("Circumference = %.2f\n", result);
            break;

        case 2:
            result = PI * radius * radius;
            printf("Area = %.2f\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}