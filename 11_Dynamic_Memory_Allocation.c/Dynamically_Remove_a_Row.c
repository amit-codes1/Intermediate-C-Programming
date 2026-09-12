#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    int column = 0;

    printf("Enter number of columns: ");
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
            printf("Enter element for [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int remove = 0;

    printf("Enter the row number to remove: ");
    scanf("%d", &remove);

    free(arr[remove]);

    for (int i = remove; i < row - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    row--;

    int **temp = realloc(arr, row * sizeof(int *));

    if (temp != NULL)
    {
        arr = temp;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}