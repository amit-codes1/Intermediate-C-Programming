#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Enter the number of Integers to be taken as Input: ");
    scanf("%d", &n);

    int *arr;

    arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    int positive = 0;
    int negative = 0;
    int zero = 0;

    int *temp = arr;

    // Using Only Pointer Traversal Concept---

    for (int i = 0; i < n; i++)
    {
        if (*(temp + i) > 0)
        {
            positive++;
        }

        else if (*(temp + i) < 0)
        {
            negative++;
        }

        else
            zero++;
    }

    printf("Total Count of Positive Elements are: %d \n", positive);
    printf("Total Count of Negative Elements are: %d \n", negative);
    printf("Total Count of Zero Elements are: %d \n", zero);

    free(arr);

    arr = NULL;

    return 0;
}