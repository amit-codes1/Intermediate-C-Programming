#include <stdio.h>
/*
A perfect number is a number whose sum of proper divisors equals the number itself.

Example

Input:
28

Output:
Perfect Number

Since:

1 + 2 + 4 + 7 + 14 = 28
*/

int main()
{

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        printf("%d is a Perfect Number.", num);
    }

    else
    {
        printf("%d is not a Perfect Number.", num);
    }

    return 0;
}