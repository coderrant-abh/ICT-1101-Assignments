// Print "I AM IDIOT" Instead fo Your Name, Using an Array.
#include <stdio.h>

int main(void)
{
    char name[100];
    char str[] = "I AM IDIOT";
    
    printf("Enter your name: ");
    
    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1;
    }
    
    printf("\n%s\n", str);
    
    return 0;
}