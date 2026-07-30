#include <stdio.h>
#include <stdlib.h>

int main()
{

     int n;

     printf("Enter number of Integers you want to be taken as Input in Array: ");
     scanf("%d", &n);

     int *arr;

     arr = (int *)malloc(n * sizeof(int));

     for (int i = 0; i < n; i++)
     {
          printf("Enter Number: ");
          scanf("%d", &arr[i]);
     }

     int *ptr = arr;

     printf("---- After Reversing the Array ---- \n");

     for (int i = n-1; i >= 0; i--)
     {
          printf("%d \t", *(ptr + i));
     }

     return 0;
}