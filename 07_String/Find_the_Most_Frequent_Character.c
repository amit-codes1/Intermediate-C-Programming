#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
Write a program to find the character that occurs most frequently in a string.

Example:

Input:  "programming"
Output: 'r'

If there is a tie, you may print the character that appears first.
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
        printf("Memory Allocation Failed!!");
        return 1;
    }

    printf("Enter String: ");
    fgets(str, n + 1, stdin);
    str[strcspn(str, "\n")] = '\0';

    char freq[2];

    int highFreq = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] != ' ')
            {
                if (str[j] == str[i])
                {
                    count++;
                }
            }
        }

        if (count > highFreq)
        {
            highFreq = count;
            freq[0] = str[i];
        }
    }
    freq[1] = '\0';

    printf("The most frequent Char is: %s \n", freq);

    free(str);

    return 0;
}