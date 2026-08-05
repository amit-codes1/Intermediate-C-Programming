#include <stdio.h>
#include <stdlib.h>
/*
Traverse an array only using pointers and count how many numbers are even and odd.

Example:

Input:
2 5 7 8 10

Output:
Even = 3
Odd = 2
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

    int isEven = 0;
    int isOdd = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            isEven++;
        }

        else
            isOdd++;
    }

    printf("Total Count of Even Numbers in the Array is:  %d \n", isEven);
    printf("Total Count of Odd Numbers in the Array is: %d", isOdd);

    free(arr);

    arr = NULL;

    return 0;
}