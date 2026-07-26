#include <stdio.h>
/*
Input an integer n.

Find:

1! + 2! + 3! + ... + n!

Example

Input:
5

Output:
153

(Because 1 + 2 + 6 + 24 + 120 = 153)
*/

int main()
{

    int n;

    printf("Enter Number to print Sum of Factorial: ");
    scanf("%d", &n);

    long long factorial = 1;
    long long sum = 0;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        sum = sum + factorial;
    }

    printf("%lld", sum);

    return 0;
}