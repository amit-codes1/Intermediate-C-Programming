#include <stdio.h>
#include <stdlib.h>

/*
Ask the user for the number of rows.

For each row, ask how many elements it should contain, dynamically allocate that row, and then take the elements as input.

Example:

Number of rows: 3

Size of row 0: 2
Size of row 1: 4
Size of row 2: 3

Row 0: 10 20
Row 1: 30 40 50 60
Row 2: 70 80 90

Then:

Display all rows.
Calculate the sum of each row.
Calculate the total sum.
*/

int main()
{
    int row = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    int **arr = malloc(row * sizeof(int *));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    int column = 0;
    int total = 0;

    int *size = malloc(row * sizeof(int));

    if (size == NULL)
    {
        printf("Memory allocation failed");
        free(arr);
        return 1;
    }

    for (int i = 0; i < row; i++)
    {
        printf("Enter number of element to be stored in row number %d: ", i + 1);
        scanf("%d", &column);

        size[i] = column;

        arr[i] = malloc(column * sizeof(int));

        if (arr[i] == NULL)
        {
            printf("Memory allocation failed");

            for (int a = 0; a < i; a++)
            {
                free(arr[a]);
            }

            free(arr);
            arr = NULL;
            return 1;
        }

        for (int j = 0; j < column; j++)
        {
            printf("Enter element for [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);

            total = total + arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < row; i++)
    {
        int row_sum = 0;

        for (int j = 0; j < size[i]; j++)
        {
            row_sum = row_sum + arr[i][j];
        }

        printf("Sum of row %d is: %d \n", i + 1, row_sum);
    }
    printf("\n");

    printf("Total sum: %d", total);

    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }

    free(arr);
    free(size);

    size = NULL;
    arr = NULL;

    return 0;
}