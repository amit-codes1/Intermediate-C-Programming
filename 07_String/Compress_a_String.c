#include <stdio.h>
#include <string.h>
/*
Write a program to perform basic string compression by replacing consecutive repeated characters with the character followed by its count.

Example:

Input:  "aaabbccccd"

Output: "a3b2c4d1"

For example:

"xxx" → "x3"
"hello" → "h1e1l2o1"
*/

int main()
{
    char str[20];

    printf("Enter String:  ");
    scanf("%19s", str);

    int len = strlen(str);

    char val[40];

    int k = 0;

    for (int i = 0; i < len; i++)
    {
        int count = 1;

        while (i + 1 < len && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        val[k++] = str[i];
        k = k + snprintf(&val[k], sizeof(val - k), "%d", count);
    }
    val[k] = '\0';

    printf("Compressed: %s\n", val);

    return 0;
}