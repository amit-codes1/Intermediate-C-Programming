#include <stdio.h>
#include <stdlib.h>
/*
An array contains numbers from 1 to N, but one number is missing.

Write a program to find the missing number.

Example:

Input:
1 2 3 5 6

Output:
4
*/

int main()
{

    int num;

    printf("Enter number of Elements you want to be Stored in the Array: ");
    scanf("%d", &num);

    int *arr = (int *)malloc(num * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Fialed!!");
        return 1;
    }

    /*User Need to Enter Elements CAREFULLY cause it's a program to find only one missing element.

    If more than 1 element is missing then the Program will give an UNDEFINED BEHAVIOUR.
    */

    for (int i = 0; i < num; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    int index = 0;

    for (int i = 0; i < num; i++)
    {
        if ((i + 1) != arr[i])
        {
            index = i + 1;
            break;
        }
    }

    printf("Missing Number from 1 to %d is %d", num, index);

    return 0;
}