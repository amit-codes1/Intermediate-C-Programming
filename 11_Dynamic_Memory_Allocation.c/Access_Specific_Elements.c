#include <stdio.h>
#include <stdlib.h>

/*
Dynamically allocate a n × m matrix and take input from the user.

After displaying the matrix, ask the user for:

Enter row: 1
Enter column: 2

Then display the element at that position.

For example:

Matrix:
10 20 30
40 50 60
70 80 90

Enter row: 1
Enter column: 2

Element = 60

Assume the user enters 0-based indexes, so row 1, column 2 means arr[1][2].
*/

int main()
{
    int r = 0;
    int c = 0;

    printf("Enter num of rows: ");
    scanf("%d", &r);

    printf("Enter num of columns: ");
    scanf("%d", &c);

    int **arr = (int **)malloc(r * sizeof(int *));

    if (arr == NULL)
    {
        printf("Memory allocation failed for rows");
        return 1;
    }

    for (int i = 0; i < r; i++)
    {
        arr[i] = (int *)malloc(c * sizeof(int));

        if (arr[i] == NULL)
        {
            printf("Memory alloaction failed for row %d", i);

            for (int j = 0; j < i; j++)
            {
                free(arr[j]);
            }

            free(arr);
            arr = NULL;
            return 1;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int row = 0;
    int col = 0;

    printf("Enter element pos in [row][col] format to get the element at that specific pos: \n");

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter Column: ");
    scanf("%d", &col);

    printf("Element at [%d][%d] is: %d \n", row, col, arr[row][col]);

    for (int i = 0; i < r; i++)
    {
        free(arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}