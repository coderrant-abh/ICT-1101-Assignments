/*************************************************************************
*           Problem 04: Convert a Person's Name in Abbreviated
**************************************************************************/

#include <stdio.h>

int main(void)
{
    char fname[18], mname[18], lname[18];

    printf("Enter the First Name, Middle Name and Last name:\n");
    scanf("%17s %17s %17s", fname, mname, lname);

    printf("\nAbbreviated Name: ");
    printf("%c. %c. %s \n", fname[0], mname[0], lname);

    return 0;
}
