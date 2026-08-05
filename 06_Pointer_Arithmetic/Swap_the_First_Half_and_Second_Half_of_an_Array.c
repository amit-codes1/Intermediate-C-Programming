#include <stdio.h>
/*
Given an even-sized array, swap the first half with the second half using pointers.

Example:

Input:
1 2 3 4 5 6

Output:
4 5 6 1 2 3
*/

int main()
{

    int n;

    printf("Enter Number of Elements to be Stored in the Array: ");
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

    int *ptr = &arr[0];

    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = (n / 2) + i; j < n; j++)
            {
                int swap = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = swap;
                break;
            }
        }
    }

    else
    {
        int half = n / 2;

        for (int i = 0; i < half; i++)
        {
            for (int j = (half + 1 + i); j < n; j++)
            {
                int swap = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = swap;
                break;
            }
        }
    }

    printf("--- Array after Swapping the First Half with Second Half of the Array --- \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", *(ptr + i));
    }

    free(arr);

    arr = NULL;

    return 0;
}