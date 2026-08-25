#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ptr;

    ptr = fopen("data.txt", "a");

    if (ptr == NULL)
    {
        printf("File does not exist");
        return 1;
    }

    char str[50];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, ptr);
    fputs("\n", ptr);

    fclose(ptr);

    return 0;
}