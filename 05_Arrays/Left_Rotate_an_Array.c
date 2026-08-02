#include <stdio.h>
/*
Write a program to rotate all elements of an array one position to the left.

Example:

Input:
10 20 30 40 50

Output:
20 30 40 50 10
*/

int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    printf("---- Original Array ---- \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d   ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        if ((i + 1) > i)
        {
            int swap = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = swap;
        }
    }

    printf("---- Array after Rotating all elements by One Position to Left ---- \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d   ", arr[i]);
    }

    return 0;
}