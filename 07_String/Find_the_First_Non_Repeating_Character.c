#include <stdio.h>
#include <string.h>
/*
Write a program to find the first character in a string that occurs exactly once.

Example:

Input:  "aabbcddee"
Output: 'c'

If every character is repeated, print an appropriate message.
*/

int main()
{

    char str[20];

    printf("Enter String: ");
    scanf("%s", &str);

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        unsigned char c = (unsigned char)str[i];
        freq[c]++;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        unsigned char c = (unsigned char)str[i];

        if (freq[c] == 1)
        {
            printf("First non-repeating character: %c\n", c);
            break;
        }
    }

    return 0;
}