#include <stdio.h>
/*
Create an array of integers.

Ask the user to enter two valid indices.

Using pointers, calculate how many elements are between those two indices.

Example:

Array: 10 20 30 40 50 60

Index 1 = 1
Index 2 = 5

Output:
Difference = 3 elements
*/

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n, n1;

    printf("Enter Index of first Element: ");
    scanf("%d", &n);

    printf("Enter Index of Second Element: ");
    scanf("%d", &n1);

    if (n < 0 || n > 9 || n1 < 0 || n1 > 9)
    {
        printf("Enter Index from 0 to 9");
        return 1;
    }

    int *ptr = &arr[n];
    int *ptr1 = &arr[n1];

    int diff = ptr1 - ptr - 1;

    printf("The total number of elements between %d and %d is: %d", n, n1, diff);

    return 0;
}