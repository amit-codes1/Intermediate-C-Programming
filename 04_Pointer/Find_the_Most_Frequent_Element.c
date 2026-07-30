#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Enter number of elements to be stored in the Array: ");
    scanf("%d", &n);

    int *arr;

    arr = (int *)malloc(n * sizeof(int));

    if (arr==NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }
    

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    int highestCount = 0;
    int frequent = 0;

    int *ptr = arr;

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (*(ptr + j) == *(ptr + i))
            {
                count++;
            }
        }

        if (count > highestCount)
        {
            highestCount = count;
            frequent = *(ptr + i);
        }
    }

    printf("Most frequent Element is: %d", frequent);

    free(arr);

    arr = NULL;

    return 0;
}