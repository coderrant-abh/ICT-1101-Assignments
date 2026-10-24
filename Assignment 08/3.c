// Open a File (open a Program Itself) Using Pointer.
#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ch;

    fp = fopen(__FILE__, "r");

    if (fp == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
