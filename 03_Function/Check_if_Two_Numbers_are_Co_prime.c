#include <stdio.h>
/*
Write a function:

int isCoPrime(int a, int b);

The function should return:

1 if the two numbers are co-prime (their GCD is 1)
0 otherwise
*/

int isCoPrime(int a, int b)
{
    int GCD = 0;

    if (a > b)
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                GCD = i;
            }
        }
    }

    else if (b > a)
    {
        for (int i = 1; i <= b; i++)
        {
            if (b % i == 0 && a % i == 0)
            {
                GCD = i;
            }
        }
    }

    if (GCD == 1)
    {
        return 1;
    }

    else
        return 0;
}

int main()
{
    int num, num_1;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Enter another Number: ");
    scanf("%d", &num_1);

    if (isCoPrime(num, num_1))
    {
        printf("%d and %d is Co-Prime. \n", num, num_1);
    }

    else
        printf("%d and %d is not Co-Prime!! \n", num, num_1);

    return 0;
}