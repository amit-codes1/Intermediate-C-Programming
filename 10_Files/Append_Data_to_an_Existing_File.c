#include <stdio.h>
#include <string.h>

/*
Write a C program that accepts a sentence from the user and appends it to an existing file named notes.txt.

The existing contents of the file should not be overwritten.
*/

int main()
{
    FILE *f1;

    f1 = fopen("notes.txt", "w");

    if (f1 == NULL)
    {
        printf("File does not exist");
        return 1;
    }

    char s1[50];

    printf("Enter String: ");
    fgets(s1, sizeof(s1), stdin);

    fputs(s1, f1);

    fclose(f1);

    // Asking user to append another sentence

    char res[5];

    printf("Do you want to append another line?? Type(yes/no): ");
    scanf("%s", res);
    getchar();

    if (strcmp(res, "yes") == 0)
    {
        char s2[50];

        printf("Enter the string: ");
        fgets(s2, sizeof(s2), stdin);

        FILE *f2;

        f2 = fopen("notes.txt", "a");

        if (f2 == NULL)
        {
            printf("File does not exist");
            return 1;
        }

        fputs(s2, f2);

        fclose(f2);
    }

    return 0;
}