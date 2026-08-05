#include <stdio.h>
#include <stdlib.h>
/*
Ask the user to enter two arrays of equal size.

Using pointers only, determine whether both arrays are identical.

Example:

Array 1:
1 2 3

Array 2:
1 2 3

Output:
Arrays are identical.
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

    if (n != n1)
    {
        printf("Arrays are not Identical!!");
        return 1;
    }

    int count = 0;

    int *ptr = &arr[0];
    int *ptr1 = &arr1[0];

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) == *(ptr1 + i))
        {
            count++;
        }
    }

    if (count == n)
    {
        printf("Arrays are Identical!!");
    }

    else
        printf("Arrays are not Identical!!");

    free(arr);
    free(arr1);

    arr = NULL;
    arr1 = NULL;

    return 0;
}