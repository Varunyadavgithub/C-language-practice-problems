// WAP to store and display students records uding structure...

#include <stdio.h>

// enter std id
// enter std name
// enter 5 sub marks
// total marks
// average marks

struct std
{
    int std_id;
    char std_name[20];
    int std_marks[5];
} s;

int main()
{
    int total = 0;
    float avg;

    printf("Enter student ID: ");
    scanf("%d",&s.std_id);

    printf("Enter the name of student: ");
    scanf("%s",&s.std_name);

    printf("Enter marks of 5 subject: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&s.std_marks[i]);

        total = total + s.std_marks[i];
        avg = (float)total / 5;
    }

    printf("ID of student is: %d\n", s.std_id);
    printf("Name of student is: %s\n", s.std_name);
    printf("Total marks of student is: %d\n", total);
    printf("Average marks of student is: %f\n", avg);

    return 0;
}
