#include <stdio.h>
/*
Take an integer from the user and count how many digits are even and how many are odd.

Example

Input: 582731

Even digits: 2
Odd digits: 3
*/

int main()
{

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    int odd = 0;
    int even = 0;
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit % 2 == 0 || digit == 0)
        {
            even++;
        }
        else
            odd++;

        num = num / 10;
    }

    printf("Total count of Even digit: %d \n",even);
    printf("Total count of Odd digit: %d \n",odd);

    return 0;
}