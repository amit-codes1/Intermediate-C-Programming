#include <stdio.h>
/*
A mobile company offers discounts based on the recharge amount.

Input the recharge amount and calculate the final amount to be paid according to these rules:

Recharge below ₹200 → No discount
Recharge from ₹200 to ₹499 → 10% discount
Recharge from ₹500 to ₹999 → 15% discount
Recharge ₹1000 or above → 20% discount

Additionally:

If the recharge amount is ₹750 or more, the customer also gets 1 GB bonus data.

Print:

Original recharge amount
Discount amount
Final amount to be paid
Whether the customer gets the bonus data
*/

int main()
{

    float rechargeamt;
    float finalamt;

    printf("Enter Recharge Amount: ");
    scanf("%f", &rechargeamt);

    if (rechargeamt < 200.00)
    {
        printf("No discount \n");
        finalamt = rechargeamt;
    }

    else if (rechargeamt >= 200.00 && rechargeamt <= 499.00)
    {
        printf("You got 10%% discount. \n");
        finalamt = rechargeamt - .1 * rechargeamt;
    }

    else if (rechargeamt >= 500.00 && rechargeamt < 750.00)
    {
        printf("You got 15%% discount. \n");
        finalamt = rechargeamt - .15 * rechargeamt;
    }

    else if (rechargeamt >= 750.00 && rechargeamt < 1000.00)
    {
        printf("You got 15%% discount and an additional 1 GB bonus data. \n");
        finalamt = rechargeamt - .15 * rechargeamt;
    }

    else if (rechargeamt >= 1000.00)
    {
        printf("You got 20%% discount and an additional 1 GB bonus data. \n");
        finalamt = rechargeamt - .2 * rechargeamt;
    }

    printf("Total amount to be paid: %.2f", finalamt);

    return 0;
}