#include <stdio.h>
#include <stdlib.h>
/*
Ask the user to enter n elements.

Print the array in reverse order without using array indexing ([]).

Example:

Input:
1 2 3 4 5

Output:
5 4 3 2 1
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

    printf("---- Array in Reverse Order ---- \n");

    int *ptr = &arr[n - 1];

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", *(ptr - i));
    }

    free(arr);

    arr = NULL;

    return 0;
}