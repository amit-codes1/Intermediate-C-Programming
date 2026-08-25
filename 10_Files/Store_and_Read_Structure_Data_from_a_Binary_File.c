#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5] = {
        {1, "Amit", 89.5},
        {2, "Roy", 79.4},
        {3, "Alex", 48.4},
        {4, "Alpesh", 58.8},
        {5, "Qlex", 59.46}};

    int count = 5;

    FILE *f;

    f = fopen("student.dat", "wb");

    if (f == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    size_t write = fwrite(&s, sizeof(struct Student), count, f);

    if (write == count)
    {
        printf("Successfully saved all %zu records", write);
    }
    else
    {
        printf("Error: Only saved %zu records", write);
    }

    fclose(f);

    // Reading the records the back using fread( )

    FILE *ptr;

    ptr = fopen("student.dat", "rb");

    if (ptr == NULL)
    {
        printf("File does not exist or failed to open the file");
        return 1;
    }

    struct Student temp;

    while (fread(&temp, sizeof(struct Student), 1, ptr) == 1)
    {
        printf("---- Student Details ---- \n");

        printf("Name: %s \n", temp.name);
        printf("Roll No.: %d \n", temp.roll);
        printf("Marks: %.2f \n", temp.marks);
    }

    fclose(ptr);

    return 0;
}