#include <stdio.h>
/*
An ATM allows withdrawals only if:

The amount is a multiple of 100.
The amount is between ₹100 and ₹20,000 (inclusive).

If both conditions are satisfied, print:

Transaction Successful

Otherwise, print the appropriate reason why the transaction failed.
*/

int main()
{

    int amount;

    printf("Enter Amount: ");
    scanf("%d", &amount);

    if (amount % 100 == 0 && amount >= 100 && amount <= 20000)
    {
        printf("Transaction Successful");
    }

    else if (amount < 100)
    {
        printf("Please enter amount greater than ₹100");
    }

    else if (amount > 20000)
    {
        printf("Please enter amount less than ₹20000");
    }

    else if (amount % 100 != 0)
    {
        printf("Please enter amount in multiple of 100.");
    }
    else
        printf("Error. Please try again!");

    return 0;
}