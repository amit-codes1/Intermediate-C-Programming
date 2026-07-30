#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Enter number of integers to be stored in Array: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Enter value greater than or equal to 2!!");
    }

    int *arr;

    arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    int largest, secondLargest;

    if (arr[0] > arr[1])
    {
        largest = arr[0];
        secondLargest = arr[1];
    }

    else
    {
        largest = arr[1];
        secondLargest = arr[0];
    }

    int *ptr = arr;

    for (int i = 2; i < n; i++)
    {
        if (*(ptr + i) > largest)
        {
            secondLargest = largest;
            largest = *(ptr + i);
        }

        else if (arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Second Largest Element in the Array is: %d", secondLargest);

    free(arr);

    arr = NULL;

    return 0;
}