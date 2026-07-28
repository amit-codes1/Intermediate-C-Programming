#include <stdio.h>
/*
Write a function isEven(int n) that returns:

1 if the number is even
0 if the number is odd

In main(), display an appropriate message based on the returned value.
*/

int is_Even(int);

int is_Even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }

    else
        return 0;
}

int main()
{

    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (is_Even(a))
    {
        printf("%d is Even Number", a);
    }

    else
        printf("%d is Odd Number", a);

    return 0;
}