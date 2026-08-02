#include <stdio.h>
#include <stdlib.h>
/*
Given two already sorted arrays, merge them into a third array so that the final array is also sorted.

Example:

Array 1:
1 4 6 9

Array 2:
2 3 5 8

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

    int i = 0, k = 0, j = 0;

    while (i < n && k < n1)
    {
        if (arr[i] <= arr_1[k])
        {
            arr_2[j] = arr[i];
            i++;
        }
        else
        {
            arr_2[j] = arr_1[k];
            k++;
        }
        j++;
    }

    while (i < n)
    {
        arr_2[j] = arr[i];
        i++;
        j++;
    }

    while (k < n1)
    {
        arr_2[j] = arr_1[k];
        k++;
        j++;
    }

    printf("---- Array After Sorting the Elements ---- \n");

    for (int i = 0; i < j; i++)
    {
        printf("%d   ", arr_2[i]);
    }

    free(arr);
    free(arr_1);
    free(arr_2);

    arr = NULL;
    arr_1 = NULL;
    arr_2 = NULL;

    return 0;
}