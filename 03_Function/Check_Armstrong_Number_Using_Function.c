#include <stdio.h>
/*
Write a function isArmstrong(int n) that returns:

1 if the number is an Armstrong number
0 otherwise
*/

// Only works for three digits number:

int isArmstrong(int n)
{

    int original = n;

    int digit = 0;
    int sum = 0;

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (sum == original)
    {
        return 1;
    }

    else
        return 0;
}

int main()
{

    int num;

    printf("Enter a 3 digit Number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
    {
        printf("%d is Armstrong Number.", num);
    }

    else
        printf("%d is not a Armstrong Number!!", num);

    return 0;
}