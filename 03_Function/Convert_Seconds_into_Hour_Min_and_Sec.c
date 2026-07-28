#include <stdio.h>
/*
Write a function

void convertTime(int seconds)

that converts total seconds into:

Hours
Minutes
Seconds

Example:

Input:
7384

Output:
2 Hours
3 Minutes
4 Seconds
*/

void convertTime(int seconds)
{
    int hour = seconds / 3600;
    int remainder = seconds % 3600;

    int minutes = remainder / 60;
    int sec = remainder % 60;

    if (hour > 0)
    {
        printf("%d Hours \n", hour);
    }

    if (minutes > 0)
    {
        printf("%d Minutes \n", minutes);
    }

    printf("%d Seconds \n", sec);
}

int main()
{
    int second;

    printf("Enter Number of Seconds: ");
    scanf("%d", &second);

    convertTime(second);

    return 0;
}