#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that:

Takes rows and columns from the user.
Dynamically allocates the original 2D matrix.
Takes its elements as input.
Dynamically allocates another 2D matrix for the transpose.
Stores the transpose in the second matrix.
Displays both matrices.
Frees all allocated memory.

Example:

Original matrix (2 × 3):

1  2  3
4  5  6

Transpose:

1  4
2  5
3  6
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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element for [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    int transpose_row = column;
    int transpose_column = row;

    int **arr1 = malloc(transpose_row * sizeof(int *));

    if (arr1 == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < transpose_row; i++)
    {
        arr1[i] = malloc(transpose_column * sizeof(int));

        if (arr1[i] == NULL)
        {
            printf("Memory allocation failed for row %d", i);

            for (int j = 0; j < transpose_row; j++)
            {
                free(arr1[j]);
            }

            free(arr1);
            arr1 = NULL;
            return 1;
        }
    }

    for (int i = 0; i < transpose_row; i++)
    {
        for (int j = 0; j < transpose_column; j++)
        {
            arr1[i][j] = arr[j][i];
        }
    }

    printf("----- Input matrix ----- \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("----- Transpose Matrix ----- \n");

    for (int i = 0; i < transpose_row; i++)
    {
        for (int j = 0; j < transpose_column; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }

    for (int i = 0; i < transpose_row; i++)
    {
        free(arr1[i]);
    }

    free(arr);
    free(arr1);

    arr = NULL;
    arr1 = NULL;

    return 0;
}
