#include <stdio.h>
#include <string.h>

/*
Write a C program to copy the contents of source.txt into destination.txt using file handling functions.

If source.txt does not exist, display an appropriate error message.
*/

int main()
{
    FILE *f1;

    f1 = fopen("source.txt", "w");

    if (f1 == NULL)
    {
        printf("File does not exist");
        return 1;
    }

    char str[100];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    fputs(str, f1);

    fclose(f1);

    // Copying one file to another - 

    FILE *f2;
    FILE *r;

    f2 = fopen("destination.txt", "w");

    if (f2 == NULL)
    {
        printf("File does not exist");
        return 1;
    }

    char str1[100];

    r = fopen("source.txt", "r");

    if (r == NULL)
    {
        printf("File does not exist");
        return 1;
    }

    while (fgets(str1, 100, r) != NULL)
    {
        fputs(str1, f2);
    }

    fclose(f2);

    return 0;
}