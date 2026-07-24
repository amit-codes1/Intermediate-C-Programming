#include <stdio.h>
/*
Input:

Monthly Salary
Credit Score
Years of Employment

Loan is approved only if:

Salary ≥ ₹40,000
Credit Score ≥ 700
Employment ≥ 2 years

If salary is at least ₹60,000 and credit score is above 800,
print:

Premium Loan Approved

Otherwise,

Loan Approved

or

Loan Rejected
*/
int main()
{

    float salary;

    int credit_score, years_of_emp;

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Enter Credit Score: ");
    scanf("%d", &credit_score);

    printf("Enter Years of Employment: ");
    scanf("%d", &years_of_emp);

    if ((salary >= 40000 && salary < 60000) && credit_score >= 700 && years_of_emp >= 2)
    {
        printf("Loan Approved.");
    }

    else if (salary >= 60000 && credit_score > 800 && years_of_emp >= 2)
    {
        printf("Premium Loan Approved.");
    }

    else
        printf("Loan Rejected!!");

    return 0;
}