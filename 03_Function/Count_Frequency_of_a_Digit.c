#include <stdio.h>
/*
Write a function

int digitFrequency(int number, int digit)

that returns how many times the given digit appears in the number.

Example:

Input:
Number = 455545
Digit = 4

Output:
4
*/

int digitFrequency(int number, int digit)
{

    int check = 0;
    int count = 0;

    int original = number;

    while (number != 0)
    {
        check = number % 10;

        if (check == digit)
        {
            count++;
        }

        number = number / 10;
    }

    return count;
}
int main()
{

    int num, integer;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Enter an integer to check it's Frequency: ");
    scanf("%d", &integer);

    printf("Frequency of %d in %d is: %d", integer, num, digitFrequency(num, integer));

    return 0;
}