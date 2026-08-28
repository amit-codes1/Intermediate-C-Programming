#include <stdio.h>

/*
Using the students.dat binary file created in Q7, ask the user to enter a minimum marks value.

Read the records from the file and display only those students whose marks are greater than or equal to the given value.
*/

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    FILE *f = fopen("student.dat", "rb");

    if (f == NULL)
    {
        perror("File does not exits");
        return 1;
    }

    struct Student s;

    int min = 0;

    printf("Enter min marks val: ");
    scanf("%d", &min);

    while (fread(&s, sizeof(struct Student), 1, f) == 1)
    {
        if (s.marks >= min)
        {
            printf("===== Student Details ===== \n");

            printf("Name: %s \n", s.name);
            printf("Roll %d \n", s.roll);
            printf("Marks: %.2f \n", s.marks);
        }
    }

    fclose(f);

    return 0;
}