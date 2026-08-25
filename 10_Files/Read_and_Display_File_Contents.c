#include <stdio.h>
#include <string.h>

/*
Write a C program to open a text file named data.txt in read mode and display its entire contents on the screen character by character using fgetc().
*/

int main()
{
    FILE *read;

    read = fopen("data.txt", "r");

    if (read == NULL)
    {
        printf("File does not exist");
        return 1;
    }

    int ch;

    while ((ch = fgetc(read)) != EOF)
    {
        putchar(ch);
    }

    fclose(read);

    return 0;
}