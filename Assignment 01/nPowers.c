/**********************************************************************************
*   Problem 14: Read Integer N and Print the First Three Powers (N^1, N^2, N^3)
***********************************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    printf("\nEnter an Integer: ");
    scanf("%d", &n);

    printf("\n");
    printf("N^1 value: %d\n", n);
    printf("N^2 value: %d\n", n * n);
    printf("N^3 value: %d\n\n", n * n * n);

    return 0;
}
