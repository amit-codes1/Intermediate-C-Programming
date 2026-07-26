#include <stdio.h>
/*
Input two integers.

Print the largest prime number present in that range.

If no prime exists, print an appropriate message.

Example

Input:
20 35

Output:
31
*/

int main()
{

    int num, num_1;

    printf("Enter Starting point of the Range: ");
    scanf("%d", &num);

    printf("Enter Ending point of the Range: ");
    scanf("%d", &num_1);

    int Largest_Prime = 0;
    int found = 0;

    for (int i = num; i <= num_1; i++)
    {
        if (i < 2)
        {
            continue;
        }

        int is_Prime = 1;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_Prime = 0;
                break;
            }
        }

        if (is_Prime)
        {
            found = 1;

            if (i > Largest_Prime)
            {
                Largest_Prime = i;
            }
        }
    }

    if (found)
    {
        printf("The Largest Prime number in the entered Range is : %d \n", Largest_Prime);
    }

    else
    {
        printf("No Prime Number exist in the entered Range!!");
    }

    return 0;
}