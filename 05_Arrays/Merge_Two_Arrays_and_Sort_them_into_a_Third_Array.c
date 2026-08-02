#include <stdio.h>
#include <stdlib.h>
/*
Given two arrays, merge them into a third array so that the final array is sorted.

Example:

Array 1:
1 4 9 6

Array 2:
2 8 5 3

Output:
1 2 3 4 5 6 8 9
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

    int *arr_2 = (int *)malloc((n + n1) * sizeof(int));

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        arr_2[j++] = arr[i];
    }

    for (int i = 0; i < n1; i++)
    {
        arr_2[j++] = arr_1[i];
    }

    for (int i = 0; i < j; i++)
    {
        for (int k = 0; k < j; k++)
        {
            if (arr_2[i] > arr_2[k])
            {
                int swap = arr_2[i];
                arr_2[i] = arr_2[k];
                arr_2[k] = swap;
            }
        }
    }

    printf("---- Array After Sorting the Elements ---- \n");

    for (int i = j-1; i >= 0; i--)
    {
        printf("%d  ", arr_2[i]);
    }

    free(arr);
    free(arr_1);
    free(arr_2);

    arr = NULL;
    arr_1 = NULL;
    arr_2 = NULL;

    return 0;
}