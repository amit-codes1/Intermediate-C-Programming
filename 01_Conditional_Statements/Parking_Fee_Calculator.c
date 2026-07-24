#include <stdio.h>
/*
Input:

Vehicle Type
1 = Bike
2 = Car
3 = Bus
Number of hours parked

Charges:

Bike:

First 2 hours → ₹20/hour
Remaining → ₹10/hour

Car:

First 2 hours → ₹40/hour
Remaining → ₹25/hour

Bus:

First 2 hours → ₹70/hour
Remaining → ₹50/hour

*/
int main()
{

    int vehicle, hours, charges;

    printf("--- Choose number according to the Vehicle type --- \n");

    printf("\t   '1' for Bike \n");
    printf("\t   '2' for Car \n");
    printf("\t   '3' for Bus \n");

    printf("Enter Number accoding to Vehicle from above list: ");
    scanf("%d", &vehicle);

    printf("Enter number of Hours: ");
    scanf("%d", &hours);

    int correct_response = 1;

    if ((vehicle < 1 && vehicle > 3) || hours == 0)
    {
        correct_response = 1;
    }

    else if (vehicle == 1 && hours <= 2)
    {
        charges = 20 * hours;
        correct_response = 0;
    }

    else if (vehicle == 1 && hours > 2)
    {
        charges = (10 * (hours - 2)) + 20 * 2;
        correct_response = 0;
    }

    else if (vehicle == 2 && hours <= 2)
    {
        charges = 40 * hours;
        correct_response = 0;
    }

    else if (vehicle == 2 && hours > 2)
    {
        charges = (25 * (hours - 2)) + 40 * 2;
        correct_response = 0;
    }

    else if (vehicle == 3 && hours <= 2)
    {
        charges = 70 * hours;
        correct_response = 0;
    }

    else if (vehicle == 3 && hours > 2)
    {
        charges = (50 * (hours - 2)) + 70 * 2;
        correct_response = 0;
    }

    if (correct_response == 0)
    {
        printf("Total Charges: %d", charges);
    }

    else if (correct_response == 1)
    {
        printf("Please enter Valid Input!!");
    }

    return 0;
}