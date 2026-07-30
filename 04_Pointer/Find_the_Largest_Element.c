#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Enter number of elements you want in the Array: ");
    scanf("%d", &n);

    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &ptr[i]);
    }

    int *temp = ptr;

    int largest = *temp;

    for (int i = 0; i < n; i++)
    {
        if (*(temp + i) > largest)
        {
            largest = *(temp + i);
        }
    }

    printf("Largest element in the Array is: %d", largest);

    free(ptr);

    ptr = NULL;

    return 0;
}