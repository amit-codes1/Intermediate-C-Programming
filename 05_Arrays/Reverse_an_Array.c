#include <stdio.h>
/*
Reverse an Array without using another Array.

An Array of max 10 elements.
*/

int main()
{

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    printf("---- Original Array ---- \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d   ", arr[i]);
    }

    printf("\n");

    printf("---- Array after Reversing ---- \n");

    for (int i = 9; i >= 0; i--)
    {
        printf("%d   ", arr[i]);
    }

    return 0;
}