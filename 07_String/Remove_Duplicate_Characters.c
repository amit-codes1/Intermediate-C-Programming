#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
Write a program to remove duplicate characters from a string while keeping the first occurrence.

Example:

Input:  "programming"
Output: "progamin"
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

    int k = 0;

    char *str1 = (char *)malloc((n + 1) * sizeof(char));

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str1[j] == str[i])
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            str1[k++] = str[i];
        }
    }

    printf("String after Removing Duplicate Elements: %s \n", str1);
    return 0;
}