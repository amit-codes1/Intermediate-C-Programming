#include <stdio.h>
#include <stdlib.h>

/*
Dynamically allocate a normal rectangular 2D array based on user-provided rows and columns.

Take the elements as input and find the largest element in each row.

Example:

Rows: 3
Columns: 4

10 25 13 8
45 12 67 20
5  90 32 11

Output:

Largest in row 1 = 25
Largest in row 2 = 67
Largest in row 3 = 90

Then also display the overall largest element:

Overall largest = 90
*/

int main()
{
    int row = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    int column = 0;

    printf("Enter number of column: ");
    scanf("%d", &column);

    int **arr = malloc(row * sizeof(int));

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
            printf("Enter element for [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int largest = 0;

    for (int i = 0; i < row; i++)
    {
        int highest = 0;

        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] > highest)
            {
                highest = arr[i][j];
            }

            if (highest > largest)
            {
                largest = highest;
            }
        }

        printf("Largest element in row %d is: %d \n", i + 1, highest);
    }
    printf("\n");

    printf("The largest overall element is: %d", largest);

    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}