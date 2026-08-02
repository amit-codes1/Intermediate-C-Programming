#include <stdio.h>
/*
Write a program to move all zeros to the end of the array while maintaining the order of the non-zero elements.

Example:

Input:
4 0 10 0 2 8 0

Output:
4 10 2 8 0 0 0
*/

int main()
{

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (arr[j] != 0)
                {
                    int swap = arr[i];
                    arr[i] = arr[j];
                    arr[j] = swap;
                    break;
                }
            }
        }
    }

    printf("---- Array after Moving all Zeros to the End ---- \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d   ", arr[i]);
    }

    return 0;
}