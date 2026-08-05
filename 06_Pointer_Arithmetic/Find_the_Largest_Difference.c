#include <stdio.h>
#include <stdlib.h>
/*
Using pointers only, find the maximum absolute difference between consecutive elements.

Example:

Input:
4 9 2 12 7

Differences:
5
7
10
5

Output:
Largest Difference = 10
*/

int main()
{

    int n;

    printf("Enter Number of Elements to be Stored in the Array: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Please Enter more than 1 Elements to find the Difference!!");
        return 1;
    }

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

    int Largest_Difference = 0;

    int *ptr = &arr[0];
    int *ptr1 = &arr[1];

    for (int i = 0; i < n - 1; i++)
    {
        int diff = *(ptr + i) - *(ptr1 + i);

        if (diff > Largest_Difference)
        {
            Largest_Difference = diff;
        }

        else if (diff < 0)
        {
            int magnitude = -(diff);

            if (magnitude > Largest_Difference)
            {
                Largest_Difference = magnitude;
            }
        }
    }

    printf("The Largest Difference is: %d", Largest_Difference);

    free(arr);

    arr = NULL;

    return 0;
}