/********************************************************************************
*        Problem 10: Program to Display the Size of the Different Datatype 
*********************************************************************************/

#include <stdio.h>

int main(void)
{
    /**********************************************************
    *             Size of Core C Data Types:
    *
    *               char:        1 byte(s)
    *               short int:   2 byte(s)
    *               int:         4 byte(s)
    *               long int:    8 byte(s)
    *               long long:   8 byte(s)
    *               float:       4 byte(s)
    *               double:      8 byte(s)
    *               long double: 16 byte(s)
    ************************************************************/

    printf("\n--- Size of the Datatypes ---\n\n");
    
    // Integer types size
    printf("   char:         %lu byte(s)\n", sizeof(char));
    printf("   short int:    %lu byte(s)\n", sizeof(short int));
    printf("   int:          %lu byte(s)\n", sizeof(int));
    printf("   long int:     %lu byte(s)\n", sizeof(long int));
    printf("   long long:    %lu byte(s)\n\n", sizeof(long long));

    // Float types size
    printf("   float:        %lu byte(s)\n", sizeof(float));
    printf("   double:       %lu byte(s)\n", sizeof(double));
    printf("   long double:  %lu byte(s)\n", sizeof(long double));

    return 0;
}
