#include <stdio.h>
#include <stdlib.h>
/*
Input two arrays.

Create a third array containing all elements of both arrays.
*/

int main()
{

    int num, num_1;

    printf("Enter number of elements to be Stored in the First Array: ");
    scanf("%d", &num);

    printf("Enter number of elements to be stored in the Second Array: ");
    scanf("%d", &num_1);

    int *arr;
    int *arr_1;

    arr = (int *)malloc(num * sizeof(int));

    arr_1 = (int *)malloc(num_1 * sizeof(int));

    if (arr==NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    if (arr_1==NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }
    

    printf("---- Enter Elements For First Array ---- \n");

    for (int i = 0; i < num; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    printf("---- Enter Elements For Second Array ---- \n");

    for (int j = 0; j < num_1; j++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr_1[j]);
    }

    int n = 0;
    int arr_2[n];

    for (int i = 0; i < num; i++)
    {
        arr_2[n] = arr[i];
        n++;
    }
    arr_2[n] = '\0';

    for (int i = 0; i < num_1; i++)
    {
        arr_2[n] = arr_1[i];
        n++;
    }
    arr_2[n] = '\0';

    printf("---- Third Array after Merging of the First and Second Array ---- \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr_2[i]);
    }

    free(arr);
    free(arr_1);

    arr = NULL;
    arr_1 = NULL;

    return 0;
}