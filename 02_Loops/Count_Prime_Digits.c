#include <stdio.h>
/*
Input an integer.

Count how many of its digits are prime digits (2, 3, 5, 7).

Example:

Input:
2735498

Output:
Prime digits = 6*/
int main()
{

    int num,original;

    printf("Enter number: ");
    scanf("%d", &num);

    original=num;

    int digit = 0;
    int count = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }

        num = num / 10;
    }

    printf("Total Prime Digits in %d is %d", original, count);
    return 0;
}