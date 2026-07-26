#include <stdio.h>
/*
A Strong Number is a number whose sum of the factorials of its digits is equal to the number itself.

Example
Input:
145

Output:
Strong Number

Explanation:

1! + 4! + 5!
= 1 + 24 + 120
= 145
*/

int main()
{

    int num, original;

    printf("Enter Number: ");
    scanf("%d", &num);

    original = num;

    int digit = 0;
    long long sum = 0;

    while (num != 0)
    {
        digit = num % 10;

        long long factorial = 1;

        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        num = num / 10;
    }

    if (sum == original)
    {
        printf("%d is a Strong Number.", original);
    }

    else
        printf("%d is not a Strong Number!!");

    return 0;
}