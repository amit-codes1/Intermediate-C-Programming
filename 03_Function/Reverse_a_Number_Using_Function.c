#include <stdio.h>
/*
Write a function reverseNumber(int x) that returns the reversed number.

Example:

Input: 12345
Output: 54321*/

int reverseNumber(int);

int reverseNumber(int x)
{

    int reverse = 0;
    int digit = 0;
    int original;

    original = x;

    while (x != 0)
    {
        digit = x % 10;
        reverse = reverse * 10 + digit;
        x = x / 10;
    }

    printf("Number before Reverse: %d \n", original);
    printf("Number after Reverse: %d \n", reverse);
}
int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    reverseNumber(num);

    return 0;
}