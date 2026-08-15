/*************************************************************************
*           Problem 04: Convert a Person's Name in Abbreviated
**************************************************************************/

#include <stdio.h>

int main(void)
{
    char fname[15], mname[15], lname[15];

    printf("Enter the First Name, Middle Name and Last name:\n");
    scanf("%14s %14s %14s", fname, mname, lname);

    printf("\nAbbreviated Name: ");
    printf("%c. %c. %s \n", fname[0], mname[0], lname);

    return 0;
}