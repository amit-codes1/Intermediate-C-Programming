#include <stdio.h>
#include <stdlib.h>
/*
Write a program to determine whether two arrays are exactly equal.

Two arrays are equal if:

They have the same size.
Every corresponding element is the same.

Example:

Array 1:
1 4 7 9

Array 2:
1 4 7 9

Output:
Arrays are equal.
*/

int main()
{

    int n;

    printf("Enter Number of Elements to be Stored in the First Array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    int n1;

    printf("Enter Number of Elements to be Stored in the Second Array: ");
    scanf("%d", &n1);

    int *arr_1 = (int *)malloc(n1 * sizeof(int));

    if (arr_1 == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < n1; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr_1[i]);
    }

    int equal = 0;

    if (n != n1)
    {
        printf("Array 1 and Array 2 are not Equal!! \n");
        return 1;
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr_1[i])
            {
                equal = 1;
            }

            else
                equal = 0;
        }
    }

    if (equal)
    {
        printf("Both Arrays are Equal. \n");
    }

    else
        printf("Array 1 and Array 2 are not Equal!! \n");

    free(arr);
    free(arr_1);

    arr = NULL;
    arr_1 = NULL;

    return 0;
}