#include <stdio.h>
#include <stdlib.h>
/*
Ask the user to enter an array.

Using only pointers, print all duplicate values.

Example:

Input:
1 2 3 2 5 1 4

Output:
Duplicate Elements:
1
2

(Print each duplicate only once.)
*/

int main()
{

    int n;

    printf("Enter Number of Elements to be Stored in the Array: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Enter more than 1 element to find Duplicate Element!!");
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

    int *duplicate = (int *)malloc((n / 2) * sizeof(int));

    int k = 0;

    int *ptr = &arr[0];
    int *ptr1 = &arr[0];

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (*(ptr + i) == *(ptr1 + j))
            {
                count++;
            }
        }

        if (count > 1)
        {
            int present = 0;

            for (int a = 0; a < k; a++)
            {
                if (*(ptr + i) == duplicate[a])
                {
                    present++;
                    break;
                }
            }

            if (present == 0)
            {
                duplicate[k++] = *(ptr + i);
            }
        }
    }

    if (k == 0)
    {
        printf("No Duplicate Elements Found!!");
    }

    else
    {
        printf("---- All Duplicate Elements in the Array are ---- \n");

        for (int i = 0; i < k; i++)
        {
            printf("%d  ", duplicate[i]);
        }
    }

    free(arr);
    free(duplicate);

    arr = NULL;
    duplicate = NULL;

    return 0;
}