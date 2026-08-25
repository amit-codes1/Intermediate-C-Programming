#include <stdio.h>
#include <string.h>

/*
Write a C program that reads a text file input.txt and counts:

Number of characters
Number of words
Number of lines

Display all three counts.
*/

int main()
{
    // Creating the file -

    FILE *ptr;

    ptr = fopen("input.txt", "w");

    if (ptr == NULL)
    {
        printf("File does not exist");
        return 1;
    }

    char s[100];

    printf("Enter String: ");
    fgets(s, sizeof(s), stdin);

    fputs(s, ptr);

    fclose(ptr);

    // Count of chars, words and lines

    FILE *f;

    f = fopen("input.txt", "r");

    if (f == NULL)
    {
        printf("File does not exist");
        return 1;
    }

    int ch;

    int char_count = 0;
    int words_count = 0;
    int line_count = 0;
    int in_word = 0;

    while ((ch = fgetc(f)) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            char_count++;
        }

        if (ch != ' ' && ch != '\n' && ch != '\t')
        {
            if (in_word == 0)
            {
                words_count++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0;
        }

        if (ch == '\n')
        {
            line_count++;
        }
    }

    printf("Total number of Char are: %d \n", char_count);
    printf("Total numbers of words are: %d \n", words_count);
    printf("Total number of lines are: %d \n", line_count);

    fclose(f);

    return 0;
}