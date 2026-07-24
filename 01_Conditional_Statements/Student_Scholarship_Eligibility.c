#include <stdio.h>
/*
A student gets a scholarship if:

Marks ≥ 85
Attendance ≥ 75%

If marks are between 75 and 84, scholarship is given only if attendance is at least 90%.

Otherwise,

Not Eligible!!
*/

int main()
{

    float marks, attendance;

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("Enter Attendance percentage: ");
    scanf("%f", &attendance);

    if (marks >= 85 && attendance >= 75)
    {
        printf("Eligible for Scholarship.");
    }

    else if ((marks >= 75 && marks < 85) && attendance >= 90)
    {
        printf("Eligible for Scholarship.");
    }

    else
        printf("Not Eligible!!");

    return 0;
}