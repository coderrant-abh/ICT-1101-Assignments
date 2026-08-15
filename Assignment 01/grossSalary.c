/**************************************************************************
*            Problem 07: Find the Gross Salary of An Employee
***************************************************************************/

#include <stdio.h>

int main(void) 
{
    /*Gross Salary is the total salary an employee earns before any
    deductions such as income tax, provident fund, insurance, etc.*/
    
    float annual_salary, extra_money, gross_salary;
    int pay_periods;

    printf("\nTo calculate your Gross Salary, please fill out the information below.\n\n");

    printf("Enter your annual base salary amount: ");
    scanf("%f", &annual_salary);

    printf("Enter pay periods per year (12, 24, 26, 52 or something else): ");
    scanf("%d", &pay_periods);

    printf("Enter any extra money earned this (per) period (like Bonouses, Commissions, Stipends etc.): ");
    scanf("%f", &extra_money);

    // Formula: (Annual Base Salary / Annual Pay Periods) + Extra Money per Pay Period
    gross_salary = (annual_salary / pay_periods) + extra_money;

    printf("\nYour total gross salary for this period is: $%.3f\n", gross_salary);

    return 0;
}