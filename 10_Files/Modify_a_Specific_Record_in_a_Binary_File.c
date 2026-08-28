#include <stdio.h>

/*
Using the students.dat file from Q7, ask the user to enter a student's roll number.

If the student exists:

Ask for the new marks.
Modify the student's marks directly in the file.
Display a confirmation message.

If the roll number does not exist, display "Student not found".
*/

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    FILE *file = fopen("student.dat", "rb+");

    if (file == NULL)
    {
        perror("File does not exist");
        return 1;
    }

    struct Student s;

    int roll = 0;
    long int record_pos = 0;

    printf("Enter roll num: ");
    scanf("%d", &roll);

    int check = 0;

    while (record_pos = ftell(file), fread(&s, sizeof(struct Student), 1, file) == 1)
    {
        if (s.roll == roll)
        {
            check = 1;
            float new_marks = 0;

            printf("Enter marks: ");
            scanf("%f", &new_marks);

            s.marks = new_marks;

            fseek(file, record_pos, SEEK_SET);

            fwrite(&s, sizeof(struct Student), 1, file);

            break;
        }
    }

    if (check)
    {
        printf("Marks has been modified successfully");
    }
    else
        printf("Roll num not found!!");

    fclose(file);

    return 0;
}