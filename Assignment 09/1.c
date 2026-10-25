// Store Student Information Like (Name, Roll & Marks) in C.
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main(void)
{
    struct Student s;

    printf("\nEnter student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Information\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n\n", s.marks);

    return 0;
}