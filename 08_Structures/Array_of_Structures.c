#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Define a structure Student containing roll_no, name, and marks. Write a C program to store information for 5 students and display the student who has obtained the highest marks.
*/

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[5];

    for (int i = 0; i < 5; i++)
    {
        printf("---- Enter Student Details ---- \n");

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        getchar();
    }

    int highest;
    int index;

    for (int i = 0; i < 5; i++)
    {
        if (s[i].marks > highest)
        {
            highest = s[i].marks;
            index = i;
        }
    }
    printf("\n");

    printf("---- Student with Highest Marks ---- \n\n");

    printf("Name: %s \n", s[index].name);
    printf("Roll No: %d \n", s[index].roll);
    printf("Marks: %.2f \n", s[index].marks);

    return 0;
}