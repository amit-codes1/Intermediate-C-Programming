#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
Define a structure Employee containing id, name, and another structure Address containing city, state, and pin. Write a program to input and display the complete employee information.
*/
struct Address
{
    char city[20];
    char state[20];
    int pin;
};

struct Employee
{
    int id;
    char name[20];
    struct Address adr;
};

int main()
{
    struct Employee e[3];

    for (int i = 0; i < 3; i++)
    {
        printf("---- Enter Employee Deatils ---- \n");

        printf("Enter Name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Enter Id: ");
        scanf("%d", &e[i].id);

        getchar();

        printf("Enter City: ");
        fgets(e[i].adr.city, sizeof(e[i].adr.city), stdin);
        e[i].adr.city[strcspn(e[i].adr.city, "\n")] = '\0';

        printf("Enter State: ");
        fgets(e[i].adr.state, sizeof(e[i].adr.state), stdin);
        e[i].adr.state[strcspn(e[i].adr.state, "\n")] = '\0';

        printf("Enter PinCode: ");
        scanf("%d", &e[i].adr.pin);

        getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("---- Employee Details ---- \n");

        printf("Name: %s \n", e[i].name);
        printf("Id: %d \n", e[i].id);
        printf("City: %s \n", e[i].adr.city);
        printf("State: %s \n", e[i].adr.state);
        printf("PinCode: %d \n", e[i].adr.pin);

        printf("\n");
    }

    return 0;
}