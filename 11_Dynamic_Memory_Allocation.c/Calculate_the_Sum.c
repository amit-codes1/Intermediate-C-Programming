#include <stdio.h>
#include <stdlib.h>

/*
Dynamically allocate a 2D array based on the user's rows and columns.

Take all elements as input and calculate the sum of every element.

Example:

Rows: 2
Columns: 3

1 2 3
4 5 6

Sum = 21
*/

int main()
{
    int r = 0;

    printf("Enter num of rows: ");
    scanf("%d", &r);

    int c = 0;

    printf("Enter num of columns: ");
    scanf("%d", &c);

    int **arr = malloc(r * sizeof(int *));

    if (arr == NULL)
    {
        printf("Memory allocation failed for rows");
        return 1;
    }

    for (int i = 0; i < r; i++)
    {
        arr[i] = malloc(c * sizeof(int));

        if (arr[i] == NULL)
        {
            printf("Memory allocation failed for row %d", i);

            for (int j = 0; j < i; j++)
            {
                free(arr[j]);
            }

            free(arr);
            arr = NULL;
            return 1;
        }
    }

    int sum = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);

            sum = sum + arr[i][j];
        }
    }

    printf("Sum of all the elements present in the array is: %d", sum);

    for (int i = 0; i < r; i++)
    {
        free(arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}