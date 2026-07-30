#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Enter Number of elements to be Stored in the Array: ");
    scanf("%d", &n);

    int *arr;

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed!!");
        free(arr);
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    int num;

    printf("Enter Element to Search: ");
    scanf("%d", &num);

    int *ptr = arr;

    int found = 0;

    int *index = (int *)malloc(n * sizeof(int));
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) == num)
        {
            found = 1;
            index[j++] = i;
        }
    }

    printf("---- Searching Element ---- \n");

    if (found)
    {
        printf("%d is found at following Index: ",num);

        for (int i = 0; i < j; i++)
        {
            printf("%d   ", index[i]);
        }
    }

    else
        printf("Element not Found!!");

    free(arr);
    free(index);

    arr = NULL;
    index = NULL;

    return 0;
}