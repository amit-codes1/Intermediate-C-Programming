#include <stdio.h>
#include <stdlib.h>
/*
Given two sorted arrays, merge them into a third sorted array.

Do not use array indexing while traversing.

Example:

Array 1:
1 4 6

Array 2:
2 3 5

Output:
1 2 3 4 5 6
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

    int *arr1 = (int *)malloc(n1 * sizeof(int));

    if (arr1 == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < n1; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr1[i]);
    }

    int *arr2 = (int *)malloc((n + n1) * sizeof(int));

    int i = 0;
    int j = 0;
    int k = 0;

    int *ptr = &arr[0];
    int *ptr1 = &arr1[0];

    while (i < n && j < n1)
    {
        if (*(ptr + i) <= *(ptr1 + j))
        {
            arr2[k++] = *(ptr + i);
            i++;
        }

        else
        {
            arr2[k++] = *(ptr1 + j);
            j++;
        }
    }

    while (i < n)
    {
        arr2[k++] = *(ptr + i);
        i++;
    }

    while (j < n1)
    {
        arr2[k++] = *(ptr1 + j);
        j++;
    }

    printf("---- Array After Merging two Sorted Arrays ---- \n");

    for (int i = 0; i < k; i++)
    {
        printf("%d  ", arr2[i]);
    }

    free(arr);
    free(arr1);
    free(arr2);

    arr = NULL;
    arr1 = NULL;
    arr2 = NULL;

    return 0;
}