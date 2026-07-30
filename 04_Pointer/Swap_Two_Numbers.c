#include <stdio.h>

int main()
{

    int num, num_1;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Enter another Number: ");
    scanf("%d", &num_1);

    printf("--- Number before Swapping --- \n");

    printf("First number: %d \n", num);
    printf("Second Number: %d \n", num_1);

    int *ptr = &num;
    int *ptr_1 = &num_1;

    int temp = *ptr;
    *ptr = *ptr_1;
    *ptr_1 = temp;

    printf("--- Number after Swapping --- \n");

    printf("First number: %d \n", num);
    printf("Second Number: %d \n", num_1);

    return 0;
}