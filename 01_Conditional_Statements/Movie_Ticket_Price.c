#include <stdio.h>
/*
Input:

Age
Day of booking (1–7)
Whether the person is a student (1 = Yes, 0 = No)

Rules:

Base ticket price = ₹250
Age below 12 → 50% discount
Age above 60 → 30% discount
Student → 20% discount
Sunday (Day 7) → No discounts allowed

Print the final ticket price.

(If multiple discounts apply, only apply the highest one.)*/

int main()
{

    int age, day, is_Student;

    float price;

    printf("Enter Age: ");
    scanf("%d", &age);

    if (age >= 12 && age <= 60)
    {
        printf("Is the Customer a Student?? Enter '1' for Yes and '0' for No. \n");
        printf("Response: ");
        scanf("%d", &is_Student);
    }

    else
        is_Student = 0;

    printf("---- Choose day according to the following numbers ---- \n");

    printf("\t   Monday(1) \n");
    printf("\t   Tuesday(2) \n");
    printf("\t   Wednesday(3) \n");
    printf("\t   Thursday(4) \n");
    printf("\t   Friday(5) \n");
    printf("\t   Saturday(6) \n");
    printf("\t   Sunday(7) \n");

    printf("Enter Day: ");
    scanf("%d", &day);

    if (day == 7)
    {
        printf("No Discount Today!! \n");
        price = 250;
    }

    else if (age < 12)
    {
        printf("You got 50%% discount. \n");
        price = 250 - (.5 * 250);
    }

    else if (age > 60)
    {
        printf("You got 30%% discount. \n");
        price = 250 - (.3 * 250);
    }

    else if (is_Student == 1)
    {
        printf("You got 20%% discount. \n");
        price = 250 - (.2 * 250);
    }

    else
    {

        printf("No Discount!! \n");
        price = 250;
    }

    printf("Final Amount to be Paid: %.2f", price);

    return 0;
}