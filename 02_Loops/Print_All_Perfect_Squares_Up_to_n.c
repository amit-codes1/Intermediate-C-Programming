#include <stdio.h>
/*
Input an integer n.

Print all perfect squares less than or equal to n.
*/

int main()
{

    int num;

    printf("Enter Number to print perfect squares: ");
    scanf("%d", &num);

    int perfect_sqr = 0;
    
    printf("--- All Perfect Squares upto %d are ---\n", num);

    for (int i = 1; i < num / 2; i++)
    {
        perfect_sqr = i * i;

        if (perfect_sqr < num)
        {
            printf("%d \n", perfect_sqr);
        }
    }

    return 0;
}