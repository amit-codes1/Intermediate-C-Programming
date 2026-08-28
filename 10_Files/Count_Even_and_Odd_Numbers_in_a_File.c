#include <stdio.h>
#include <stdlib.h>

/*

*/

int main()
{
    FILE *f1 = fopen("numbers.txt", "w");

    if (f1 == NULL)
    {
        printf("Failed to open the file!!");
        return 1;
    }

    int n = 0;

    printf("Enter number of elements you want to store in the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memoer allocation failed!!");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter num: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(f1, "%d \n", arr[i]);
    }

    fclose(f1);

    free(arr);
    arr = NULL;

    //=====================================

    FILE *f2 = fopen("numbers.txt", "r");

    if (f2 == NULL)
    {
        printf("File does not exist!!");
        return 1;
    }

    int even_count = 0;
    int odd_count = 0;

    int sum_even = 0;
    int odd_sum = 0;

    int num;

    while (fscanf(f2, "%d", &num) == 1)
    {
        if (num % 2 == 0)
        {
            even_count++;
            sum_even = sum_even + num;
        }
        else
        {
            odd_count++;
            odd_sum = odd_sum + num;
        }
    }

    printf("Total elements present in the file is: %d \n", n);
    printf("Total count of even numbers are: %d \n", even_count);
    printf("Total count of odd numbers are: %d \n", odd_count);
    printf("Sum of all even numbers are: %d \n", sum_even);
    printf("Sum of all odd numbers are: %d \n", odd_sum);

    fclose(f2);

    return 0;
}