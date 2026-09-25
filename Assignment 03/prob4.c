// Print Multiplication Table Using for Loop

#include <stdio.h>

int main(void)
{
    int n, i, ans = 1;

    printf("\nWhich number multification table do you wanna print: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= 10; i++) {
        ans = n * i;
        printf("%d x %d = %d\n", n, i, ans);
    }

    printf("\n");

    return 0;
}
