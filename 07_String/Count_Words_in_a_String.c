#include <stdio.h>
#include <string.h>
/*
Write a program to count the number of words in a string.

Example:

Input:  "C programming is interesting"
Output: 4
*/

int main()
{

    char str[50];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int count = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
        }
        
        i++;
    }

    printf("Total Words in a String are: %d", count + 1);

    return 0;
}