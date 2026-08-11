#include <stdio.h>
#include <string.h>
/*
Write a program to find the longest word in a sentence and display both the word and its length.

Example:

Input:  "C programming is powerful"

Output:
Longest word: programming
Length: 11

If multiple words have the same maximum length, print the first one.
*/

int main()
{
    char str[100];

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int maxLength = 0;

    int len = strlen(str);

    int Checklength = 0;

    int start = 0;

    int end = 0;

    for (int i = 0; i <= len; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            Checklength++;
        }

        else
        {
            if (Checklength > maxLength)
            {
                maxLength = Checklength;

                start = i - Checklength;
                end = i - 1;
            }

            Checklength = 0;
        }
    }

    printf("---- The Longest Word in the String is ---- \n\n");

    for (int i = start; i <= end; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    printf("Length: %d", maxLength);

    return 0;
}