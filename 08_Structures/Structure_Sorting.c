#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
Create a structure Product containing product_id, name, and price. Store details of 5 products and arrange them in ascending order based on their price.
*/

struct Product
{
    int id;
    char name[20];
    float price;
};

int compare(const void *a, const void *b)
{
    const struct Product *p1 = a;
    const struct Product *p2 = b;

    if (p1->price < p2->price)
    {
        return -1;
    }

    if (p1->price > p2->price)
    {
        return 1;
    }

    return 0;
}

int main()
{
    struct Product p[5];

    for (int i = 0; i < 5; i++)
    {
        printf("---- Enter Product Details ---- \n");

        printf("Enter Product Name: ");
        fgets(p[i].name, sizeof(p[i].name), stdin);
        p[i].name[strcspn(p[i].name, "\n")] = '\0';

        printf("Enter Product Id: ");
        scanf("%d", &p[i].id);

        printf("Enter Product Price: ");
        scanf("%f", &p[i].price);

        getchar();
    }
    printf("\n");

    qsort(p, 5, sizeof(struct Product), compare);

    printf("---- Product Details in Ascending Order based on Price ---- \n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("---- Product Details ---- \n");

        printf("Product Name: %s \n", p[i].name);
        printf("Product Id: %d \n", p[i].id);
        printf("Product Price: %.3f \n", p[i].price);
    }

    return 0;
}