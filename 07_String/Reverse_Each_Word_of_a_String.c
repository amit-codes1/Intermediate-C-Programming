#include <stdio.h>
#include <string.h>
/*
Example:

Input:  "I love C programming"
Output: "I evol C gnimmargorp"
*/

int main()
{
    char str[100];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int count = 0;

    int start = 0;
    int end = 0;

    int len = strlen(str);

    for (int i = 0; i <= len; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            count++;
        }

        else
        {
            start = i - count;
            end = i - 1;

            if (count % 2 == 0)
            {
                int k = end;

                for (int i = start; i <= end; i++)
                {
                    if (k > i)
                    {
                        int swap = str[i];
                        str[i] = str[k];
                        str[k] = swap;

                        k--;
                    }

                    else
                        break;
                }
            }

            else
            {
                int k = end;

                for (int i = start; i <= end; i++)
                {
                    if (k != i)
                    {
                        int swap = str[i];
                        str[i] = str[k];
                        str[k] = swap;

                        k--;
                    }

                    else
                        break;
                }
            }

            count = 0;
        }
    }

    printf("--- String after Reversing ---- \n\n");

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}