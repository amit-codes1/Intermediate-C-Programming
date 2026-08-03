#include <stdio.h>
#include <stdlib.h>
/*
Determine whether the given array is:

Sorted in ascending order
Sorted and rotated
Completely unsorted

Example 1

Input:
1 2 3 4 5

Output:
Sorted

Example 2

Input:
4 5 1 2 3

Output:
Sorted and Rotated

Example 3

Input:
3 1 5 2 4

Output:
Unsorted
*/

int main()
{

    int n;

    printf("Enter number elements to be stored in the Array: ");
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

    int breaks = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            breaks++;
        }
    }

    if (breaks == 0)
    {
        printf("The Array is Sorted!!");
    }
    else if (breaks == 1 && arr[0] >= arr[n - 1])
    {
        printf("The Array is Sorted and Rotated!!");
    }
    else
    {
        printf("The Array is Unsorted!!");
    }

    free(arr);

    arr = NULL;

    return 0;
}