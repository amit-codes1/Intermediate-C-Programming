#include <stdio.h>
#include <stdlib.h>

/*
Ask the user for the number of rows and columns, dynamically allocate a 2D matrix, and take its elements as input.

Then calculate and display:

Sum of each row
Sum of each column
Sum of all elements

Example:

Rows: 2
Columns: 3

Matrix:
1  2  3
4  5  6

Row 1 sum = 6
Row 2 sum = 15

Column 1 sum = 5
Column 2 sum = 7
Column 3 sum = 9

Total = 21
*/

int main()
{
    int r = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    int c = 0;

    printf("Enter number of columns: ");
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

    int total = 0;
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);

            total = total + arr[i][j];
        }
    }
    printf("\n");

    // sum of each row:
    for (int i = 0; i < r; i++)
    {
        int row_sum = 0;

        for (int j = 0; j < c; j++)
        {
            row_sum = row_sum + arr[i][j];
        }

        printf("Sum of row %d is: %d \n", i + 1, row_sum);
    }
    printf("\n");

    // sum of each column:
    for (int i = 0; i < c; i++)
    {
        int col_sum = 0;

        for (int j = 0; j < r; j++)
        {
            col_sum = col_sum + arr[j][i];
        }

        printf("Sum of column %d is: %d \n", i + 1, col_sum);
    }
    printf("\n");

    printf("Total sum: %d", total);

    for (int i = 0; i < r; i++)
    {
        free(arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}
