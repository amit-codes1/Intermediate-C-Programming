#include <stdio.h>
#include <stdlib.h>
/*
Write a program to find both the second Largest number in an array.

Conditions:

Assume all elements are distinct.

Example:

Input:
8 2 10 5 6

Output:
Second Largest = 8
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

    int Largest = arr[0];
    int secondLargest = arr[1];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > Largest)
        {
            secondLargest = Largest;
            Largest = arr[i];
        }

        else if (arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Largest Number in the Array is: %d \n", Largest);
    printf("Second Largest Number in the Array is: %d \n", secondLargest);

    free(arr);

    arr = NULL;

    return 0;
}