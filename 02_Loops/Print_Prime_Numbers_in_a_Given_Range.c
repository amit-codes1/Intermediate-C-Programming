#include <stdio.h>

int main()
{

    int num, num_1;

    printf("Enter the Starting point of the Range: ");
    scanf("%d", &num);

    printf("Enter the Ending point of the Range: ");
    scanf("%d", &num_1);

    printf("---- Prime Numbers between %d and %d are ---- \n", num, num_1);

    for (int i = num; i < num_1; i++)
    {
        if (i < 2)
        {
            continue;
        }

        int is_Prime = 1;

        for (int j = 2; j * j < i; j++)
        {
            if (i % j == 0)
            {
                is_Prime = 0;
            }
        }

        if (is_Prime)
        {
            printf("%d \t", i);
        }
    }

    return 0;
}