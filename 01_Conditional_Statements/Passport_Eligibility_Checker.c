#include <stdio.h>
#include <string.h>
/*
A person can apply for a passport only if:

Age ≥ 18
Citizenship = Indian
Has Aadhaar
Has Birth Certificate

If age is below 18, but both parents' consent is available,
print:

Minor Passport Eligible

Otherwise,

print the appropriate eligibility message.
*/
int main()
{

    int age;

    char citizenship[10];
    char aadhaar[10];
    char birth_certificate[10];
    char permission[10];

    printf("Enter Age: ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("Is both parent's consent is available? Enter Yes/No: ");
        scanf("%s", permission);
    }

    if (strcmp(permission, "No") == 0)
    {
        printf("Not Eligible for Passport!!");
        return 0;
    }

    printf("Are you Indian Citizen? Type Yes/No: ");
    scanf("%s", citizenship);

    printf("Do you have Aadhaar Card? Enter Yes/No: ");
    scanf("%s", aadhaar);

    printf("Do you have Birth Certificate? Enter Yes/No: ");
    scanf("%s", birth_certificate);

    if (age >= 18 && strcmp(citizenship, "Yes") == 0 && strcmp(aadhaar, "Yes") == 0 && strcmp(birth_certificate, "Yes") == 0)
    {
        printf("You are eligible for Passport. \n");
    }

    else if (age < 18 && strcmp(permission, "Yes") == 0 && strcmp(citizenship, "Yes") == 0 && strcmp(aadhaar, "Yes") == 0 && strcmp(birth_certificate, "Yes") == 0)
    {
        printf("Minor Passport Eligible. \n");
    }

    else if (age <= 0 || age > 120)
    {
        printf("Please enter Valid Age!! \n");
    }

    else
        printf("Not Eligible for Passport!! \n");

    return 0;
}