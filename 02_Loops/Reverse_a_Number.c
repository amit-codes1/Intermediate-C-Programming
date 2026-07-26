#include <stdio.h>
/*
Input a number and print its reverse.

Example:

Input: 58391
Output: 19385
*/

int main()
{

    int num;

    printf("Enter Number to Reverse: ");
    scanf("%d", &num);

    int reverse = 0;
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("Number after Reverse: %d", reverse);

    return 0;
}