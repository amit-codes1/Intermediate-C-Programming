#include <stdio.h>
/*
Input:

Day
Month
Year

Check whether the entered date is valid.
*/

int main()
{

    int day, month, year;

    printf("---- Enter Date to Check it's Valid or Not ---- \n");

    printf("Day: ");
    scanf("%d", &day);

    printf("Month: ");
    scanf("%d", &month);

    printf("Year: ");
    scanf("%d", &year);

    if (day == 0 || month == 0 || year == 0)
    {
        printf("Please enter a Valid Date!!");
    }

    else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31)
    {
        printf("%d/%d/%d is a Valid date.", day, month, year);
    }

    else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
    {
        printf("%d/%d/%d is not a Valid date.", day, month, year);
    }

    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
    {
        printf("%d/%d/%d is a Valid date.", day, month, year);
    }

    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        printf("%d/%d/%d is not a Valid date.", day, month, year);
    }

    else if (month == 2 && day <= 28)
    {
        printf("%d/%d/%d is a Valid date.", day, month, year);
    }

    else if (month == 2 && day == 29 && year % 4 == 0 || (year % 100 != 0 || year % 400 == 0))
    {
        printf("%d/%d/%d is a Valid date. \n", day, month, year);
        printf("%d is a Leap Year.", year);
    }

    else if (month == 2 && day > 29)
    {
        printf("%d/%d/%d is not a Valid date.", day, month, year);
    }

    return 0;
}