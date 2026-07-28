#include <stdio.h>
/*
Write a function largestDigit(int x) that returns the largest digit present in the number.

Example:

Input:
593741

Output:
9
*/

int largestDigit(int x)
{

    int largest = 0;
    int digit = 0;

    while (x != 0)
    {
        digit = x % 10;

        if (digit > largest)
        {
            largest = digit;
        }

        x = x / 10;
    }

    return largest;
}
int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("The largest digit in %d is %d", num, largestDigit(num));

    return 0;
}