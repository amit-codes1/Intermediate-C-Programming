#include <stdio.h>
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

int main()
{

    int n;
    int num = 1;

    printf("Enter Number to print Pattern: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" %d", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}