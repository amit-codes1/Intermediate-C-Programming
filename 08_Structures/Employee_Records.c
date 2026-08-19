#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
Create a structure Employee containing id, name, salary, and department. Write a program that stores information for 5 employees and:

Displays employees earning more than ₹50,000.
Finds the employee with the highest salary.
Calculates the average salary of all employees.
*/

struct Employee
{
    char name[20];
    int id;
    float salary;
    char department[20];
};

int main()
{
    struct Employee e[5];

    for (int i = 0; i < 5; i++)
    {
        printf("---- Enter Employee Details ---- \n");

        printf("Enter Name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Enter Id: ");
        scanf("%d", &e[i].id);

        getchar();

        printf("Enter Department: ");
        fgets(e[i].department, sizeof(e[i].department), stdin);
        e[i].department[strcspn(e[i].department, "\n")] = '\0';

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);

        getchar();
    }

    int highest;
    int index;
    float total;

    printf("---- Employees Earning more than 50000 \n ----");

    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        if (e[i].salary > 50000)
        {
            printf("--- Employee Details --- \n");

            printf("Name: %s \n", e[i].name);
            printf("Id: %d \n", e[i].id);
            printf("Department: %s \n", e[i].department);
            printf("Salary: %.2f \n", e[i].salary);
        }

        if (e[i].salary > highest)
        {
            highest = e[i].salary;
            index = i;
        }

        total = total + e[i].salary;
    }
    printf("\n");

    printf("---- Employee with the Highest Salary ---- \n");


    printf("Name: %s \n", e[index].name);
    printf("Id: %d \n", e[index].id);
    printf("Department: %s \n", e[index].department);
    printf("Salary: %.2f \n", e[index].salary);

    printf("\n");

    printf("---- Avg Salary of all Employees ---- \n");

    printf("Avg Salary: %.3f \n", total / 5.0);

    return 0;
}