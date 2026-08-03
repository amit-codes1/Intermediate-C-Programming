#include <stdio.h>
#include <stdlib.h>
/*
Write a program to find both the second smallest number in an array.

Conditions:

Assume all elements are distinct.

Example:

Input:
8 2 10 5 6

Output:
Second Smallest = 5
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

    int smallest = arr[0];
    int secondSmallest = arr[1];

    for (int i = 1; i < n; i++)
    {
        if (smallest > arr[i])
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }

        else if (secondSmallest > arr[i])
        {
            secondSmallest = arr[i];
        }
    }

    printf("Smallest Number in the Array is: %d \n", smallest);
    printf("Second Smallest Number in the Array is: %d \n", secondSmallest);

    free(arr);

    arr = NULL;

    return 0;
}