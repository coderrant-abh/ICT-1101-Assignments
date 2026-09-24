// Print Multiplication Table Using for Loop

#include <stdio.h>

int main(void)
{
    int n, i = 1, ans = 1;

    printf("\nWhich number multification table do you wanna print: ");
    scanf("%d", &n);
    printf("\n");

    while (i <= 10) {
        ans = n * i;
        printf("%d x %d = %d\n", n, i, ans);
        i++;
    }

    printf("\n");

    return 0;
}