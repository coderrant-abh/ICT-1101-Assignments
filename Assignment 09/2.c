// C Program to Store Students Information on Using a Structure.
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main(void)
{
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter information for student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Information ---\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }
    
    printf("\n");

    return 0;
}