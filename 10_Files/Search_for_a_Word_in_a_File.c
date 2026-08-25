#include <stdio.h>
#include <string.h>

/*
Write a C program that asks the user for a word and searches for that word in data.txt.

Display:

Whether the word was found or not.
The number of times it occurs in the file.
*/

int main()
{
    FILE *f;

    f = fopen("data.txt", "r");

    if (f == NULL)
    {
        printf("File does not exist or failed to open");
        return 1;
    }

    char search[20];

    printf("Enter the word you want to search: ");
    scanf("%s", search);

    int ch;
    int words_count = 0;

    int count = 0;
    int i = 0;

    int len = strlen(search);

    while ((ch = fgetc(f)) != EOF)
    {
        if (ch == search[i])
        {
            count++;
            i++;
        }
        else
        {
            count = 0;
            i = 0;
        }

        if (count == len)
        {
            words_count++;
        }
    }

    if (words_count > 0)
    {
        printf("Target word has been found!! \n");
        printf("Number of times the word appears in the file is: %d", words_count);
    }
    else
    {
        printf("Target word is not present in the file!!");
    }

    fclose(f);

    return 0;
}