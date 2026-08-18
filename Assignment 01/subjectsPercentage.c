/*****************************************************************************
*            Problem 08: Calculate the Percentage of 5 Subjects
******************************************************************************/

#include <stdio.h>

int main(void)
{
    float sub1, sub2, sub3, sub4, sub5, sum, percentage; 
    int total;

    printf("What were the total marks for the five subjects?  =  ");
    scanf("%d", &total);

    printf("\nHow much you got in all the 5 subjects; type that one by one: \n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (sum / (1.0 * total)) * 100;

    printf("\nToatl percentage of the 05 subjects: %f\n\n", percentage);

    return 0;
}
