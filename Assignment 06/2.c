// C Program to Remove Given Word from a String.
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[200], word[100];
    char *pos;
    int len;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the word want to remove: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    if (word[0] == '\0') {
        printf("\nThe word cannot be empty.\n");
        return 0;
    }

    len = strlen(word);

    while ((pos = strstr(str, word)) != NULL) {
        memmove(pos, pos + len, strlen(pos + len) + 1);
    }

    printf("\nResult: %s\n\n", str);

    return 0;
}