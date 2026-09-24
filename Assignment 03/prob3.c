// Calculate the Sum of Natural Numbers Using While Loop

#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;

    printf("\nEnter the number  : ");
    scanf("%d", &n);
    
    i = 0;
    while (i <= n) {
        sum = sum + i;
        i++;
    }

    printf("Summation (1 to %d): %d\n\n", n, sum);

    return 0;
}