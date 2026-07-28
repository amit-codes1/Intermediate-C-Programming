#include <stdio.h>
/*
Write a function findGCD(int a, int b) that returns the Greatest Common Divisor of two numbers.
*/

int findGCD(int a, int b)
{
    int greatestGCD = 0;

    if (a > b)
    {
        for (int i = 1; i <= a; i++)
        {
            if (b % i == 0 && a % i == 0)
            {
                greatestGCD = i;
            }
        }
        return greatestGCD;
    }

    else if (b > a)
    {
        for (int i = 1; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                greatestGCD = i;
            }
        }
        return greatestGCD;
    }

    else if (a == b)
    {
        return a;
    }
}

int main()
{

    int num, num_1;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Enter another number: ");
    scanf("%d", &num_1);

    printf("The Greatest Common Divisor of %d and %d is %d \n", num, num_1, findGCD(num, num_1));

    return 0;
}