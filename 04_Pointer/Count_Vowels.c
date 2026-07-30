#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n;

    printf("Enter the size of the String: ");
    scanf("%d", &n);
    getchar();

    char *arr;

    arr = (char *)malloc(n * sizeof(char));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    printf("Enter the String: ");
    fgets(arr, n, stdin);

    char vowel[11] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};

    char *ptr = arr;

    int count = 0;

    for (int i = 0; ptr[i] != '\0'; i++)
    {
        if (strchr(vowel, *(ptr + i)) != NULL)
        {
            count++;
        }
    }

    printf("Total number of Vowels in the String is: %d", count);

    free(arr);

    arr = NULL;

    return 0;
}