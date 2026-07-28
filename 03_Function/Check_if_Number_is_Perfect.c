#include <stdio.h>
/*
Write a function isPerfect(int x) that returns whether a number is a Perfect Number.
*/

int isPerfect(int x)
{

    int sum = 0;

    for (int i = 1; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }

    if (sum == x)
    {
        return 1;
    }

    else
        return 0;
}

int main()
{

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (isPerfect(num))
    {
        printf("%d is a Perfect Number.", num);
    }

    else
        printf("%d is not a Perfect Number!!", num);

    return 0;
}