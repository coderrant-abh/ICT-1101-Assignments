// Add Two Distances (in Inch-Feet) System Using Structures.
#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
};

int main(void)
{
    struct Distance d1, d2, sum;

    printf("\nEnter first distance (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inch);

    printf("Enter second distance (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inch);

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    if (sum.inch >= 12) {
        sum.feet = sum.feet + sum.inch / 12;
        sum.inch = sum.inch % 12;
    }

    printf("Total distance = %d feet %d inches\n\n", sum.feet, sum.inch);

    return 0;
}