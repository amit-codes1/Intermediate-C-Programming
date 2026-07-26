#include <stdio.h>
/*
Take an integer n from the user and print the following pattern.

Example (n = 5):

1
12
123
1234
12345
*/

int main()
{

    int n;

    printf("Enter integer to print Pattern: ");
    scanf("%d", &n);

    for (int i = 2; i < n + 2; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }

    return 0;
}