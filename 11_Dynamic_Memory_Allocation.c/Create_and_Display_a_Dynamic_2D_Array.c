#include <stdio.h>
#include <stdlib.h>

/*
Write a C program that:

Asks the user for rows and columns.
Dynamically allocates a 2D integer array using int **.
Takes input for every element.
Displays the matrix.
Properly frees all allocated memory.
*/

int main()
{
    int rows = 0;
    int columns = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    //Allocating memory for row pointers:
    int **arr = (int **)malloc(rows * sizeof(int *));

    if (arr == NULL)
    {
        printf("Memory allocation failed for rows");
        return 1;
    }

    //Allocating memory for each rows:
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(columns * sizeof(int));

        if (arr[i] == NULL)
        {
            printf("Memory allocation failed for rows %d \n", i);

            for (int j = 0; j < i; j++)
            {
                free(arr[j]);
            }

            free(arr);
            arr = NULL;
            return 1;
        }
    }

    printf("Enter element for the rows(%d) x columns(%d) matrix: \n", rows, columns);

    // Input for the matrix:
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter Element: [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the matrix:
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}