#include <stdio.h>

int checknum(int);

int checknum(int x)
{
    if (x > 0)
    {
        printf("is a Positive number.");
    }
    else if (x < 0)
    {
        printf("is a Negative number.");
    }
    else
        printf("is Zero!!");
}

int main()
{

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d ", num);

    checknum(num);

    return 0;
}