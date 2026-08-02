#include <stdio.h>
/*
Write a program to print all duplicate elements present in an array.

Example:

Input:
2 5 3 2 7 5 8 5

Output:
2
5

Conditions:

Print each duplicate only once.
*/

int main()
{
    int arr[10];
    int arr_1[10];
    int n = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        int count = 0;

        for (int j = 0; j < 10; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }

        if (count > 1)
        {
            int already_added = 0;

            for (int k = 0; k < n; k++)
            {
                if (arr_1[k] == arr[i])
                {
                    already_added = 1;
                    break;
                }
            }

            if (!already_added)
            {
                arr_1[n++] = arr[i];
            }
        }
    }

    printf("---- All Duplicate Elements in the Array are ---- \n");

    if (n == 0)
    {
        printf("No Duplicate Elements Found!!");
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d   ", arr_1[i]);
        }
    }
    printf("\n");

    return 0;
}