#include <stdio.h>
#include <stdlib.h>

/*
Takes the number of rows and columns from the user.
Dynamically allocates a 2D integer array.
Takes all matrix elements as input.
Calculates the sum of each row.
Finds which row has the highest sum.
Displays that row number and its sum.
Frees all dynamically allocated memory.
*/

int main()
{
    int row = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    int column = 0;

    printf("Enter number of column: ");
    scanf("%d", &column);

    int **arr = malloc(row * sizeof(int *));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < row; i++)
    {
        arr[i] = malloc(column * sizeof(int));

        if (arr[i] == NULL)
        {
            printf("Memory allocation failed for row %d", i + 1);

            for (int j = 0; j < i; j++)
            {
                free(arr[j]);
            }

            free(arr);
            arr = NULL;
            return 1;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    int highest = 0;
    int req_row = 0;

    for (int i = 0; i < row; i++)
    {
        int curr_row = 0;

        for (int j = 0; j < column; j++)
        {
            curr_row = curr_row + arr[i][j];
        }

        if (i == 0)
        {
            highest = curr_row;
            req_row = 1;
        }

        if (curr_row > highest)
        {
            highest = curr_row;
            req_row = i + 1;
        }
    }

    printf("Row with the highest sum is: %d", req_row);

    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}