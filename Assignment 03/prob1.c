// Reverse a Given Number Using While Loop

#include<stdio.h>

int main(void)
{
    int num, reminder, reverse = 0;

    printf("\nEnter the number you want to be Reversed : ");
    scanf("%d", &num);

    while (num >= 1) {
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num = num / 10;
    }

    printf("\nReverse order of the Number is : %d\n\n", reverse);

    return 0;
}