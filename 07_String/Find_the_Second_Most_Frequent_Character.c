#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
Write a program to find the character having the second-highest frequency in a string.

Example:

Input:  "aabbccc"
Output: 'b'

Ignore spaces while calculating frequency.
*/

int main()
{
    int n = 0;

    printf("Enter desired size of the String: ");
    scanf("%d", &n);

    getchar();

    char *str = (char *)malloc((n + 1) * sizeof(char));

    if (str == NULL)
    {
        printf("Memory Allocation Failed!!\n");
        return 1;
    }

    printf("Enter String: ");
    fgets(str, n + 1, stdin);
    str[strcspn(str, "\n")] = '\0';

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        unsigned char c = (unsigned char)str[i];
        if (c == ' ')
            continue;
        freq[c]++;
    }

    int highFreq = 0;

    for (int c = 0; c < 256; c++)
    {
        if (freq[c] > highFreq)
            highFreq = freq[c];
    }

    if (highFreq == 0)
    {
        printf("The string has no valid (non-space) characters.\n");
        free(str);
        return 0;
    }

    int secondFreq = 0;

    for (int c = 0; c < 256; c++)
    {
        if (freq[c] < highFreq && freq[c] > secondFreq)
            secondFreq = freq[c];
    }

    if (secondFreq == 0)
    {
        printf("There is no second most frequent character ");
        free(str);
        return 0;
    }

    printf("The Second Most frequent Character(s) are: ");

    for (int c = 0; c < 256; c++)
    {
        if (freq[c] == secondFreq)
        {
            printf("'%c'   ", c);
        }
    }

    printf("%s", secondFreq);

    printf("\n");

    free(str);
    return 0;
}