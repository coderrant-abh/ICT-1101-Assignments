// Calculate the Difference Between the Two Time Period (HH: MM: SS).
#include <stdio.h>

struct Time
{
    int hour;
    int minute;
    int second;
};

int main(void)
{
    struct Time t1, t2, diff;
    int sec1, sec2, difference;

    printf("\nEnter first time (HH MM SS): ");
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);

    printf("Enter second time (HH MM SS): ");
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);

    sec1 = t1.hour * 3600 + t1.minute * 60 + t1.second;
    sec2 = t2.hour * 3600 + t2.minute * 60 + t2.second;

    difference = sec1 - sec2;

    if (difference < 0) {
        difference = -difference;
    }

    diff.hour = difference / 3600;
    diff.minute = (difference % 3600) / 60;
    diff.second = difference % 60;

    printf("\nTime difference = %02d:%02d:%02d\n\n", diff.hour, diff.minute, diff.second);

    return 0;
}