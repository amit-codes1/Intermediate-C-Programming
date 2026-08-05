#include <stdio.h>
#include <stdlib.h>
/*
Ask the user to enter an array.

Using pointers only, print the middle element.

If the number of elements is even, print both middle elements.

Example:

Input:
1 2 3 4 5

Output:
Middle = 3


Input:
10 20 30 40

Output:
Middle Elements = 20 30
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

    if (n % 2 == 0)
    {
        int index = n / 2;

        int *ptr = &arr[index];

        printf("---- Total number of Elements in the Array is Even(%d) ---- \n", n);

        printf("The Middle Element in the Array are: %d and %d", *(ptr - 1), *ptr);
    }

    else
    {
        int index1 = (n / 2);

        int *ptr1 = &arr[index1];

        printf("---- Total Number of Elements in Array is Odd(%d) ---- \n", n);

        printf("The middle Elements in the Array is: %d", *ptr1);
    }

    free(arr);

    arr = NULL;

    return 0;
}