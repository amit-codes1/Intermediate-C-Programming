#include <stdio.h>
#include <string.h>
/*
A system stores:

Username: admin
Password: @12345

Take username and password as input.

Conditions:

If username is incorrect
Invalid Username

If username is correct but password is wrong
Invalid Password

If both are incorrect
Invalid Username and Password

If both are correct
Login Successful

If password length is less than 5 characters
Please set Password with more than 5 characters.
*/

int main()
{

    char username[] = "admin";
    char password[] = "@12345";

    if (strlen(password) < 5)
    {
        printf("Please set Password with more than 5 characters.");
        return 0;
    }

    char username_1[50];
    char password_1[50];

    printf("Enter Username: ");
    scanf("%s", username_1);

    printf("Enter Password: ");
    scanf("%s", password_1);

    if ((strcmp(username_1, username) == 0) && (strcmp(password_1, password) == 0))
    {
        printf("Login Successful.");
    }

    else if ((strcmp(username_1, username) != 0) && (strcmp(password_1,password)==0))
    {
        printf("Invalid Username!!");
    }

    else if ((strcmp(password_1, password) != 0) && (strcmp(username_1,username)==0))
    {
        printf("Invalid Password!!");
    }

    else if ((strcmp(username_1, username) != 0) && (strcmp(password_1, password) != 0))
    {
        printf("Invalid Username and Password!!");
    }


    return 0;
}