#include <stdio.h>
/*
Write a function countDigits(int n) that returns the total number of digits in the given number.

Example:

Input: 45892
Output: 5
*/

int countdigits(int);

int countdigits(int x)
{

    int count = 0;
    int original;

    original = x;

    while (x != 0)
    {
        x = x / 10;
        count++;
    }

    printf("Total number of Digits in %d is %d", original, count);
}

int main()
{

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    countdigits(num);

    return 0;
}