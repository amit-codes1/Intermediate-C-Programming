#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
Write a program to remove all spaces from a string without using another string.

Example:

Input:  "C is fun"
Output: "Cisfun"
*/

int main()
{

    int n = 0;

    printf("Enter the Desired Size of the String: ");
    scanf("%d", &n);

    char *str = (char *)malloc((n + 1) * sizeof(char));

    if (str == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    getchar();

    printf("Enter String: ");
    fgets(str, n + 1, stdin);

    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String without Spaces: %s", str);

    free(str);

    str = NULL;

    return 0;
}