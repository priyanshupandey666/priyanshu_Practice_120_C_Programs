#include <stdio.h>

int main()
{
    char product[50];
    int quantity;
    float price;

    printf("Enter Product Name: ");
    scanf("%s", product);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price per Item: ");
    scanf("%f", &price);

    printf("\n----- Inventory Details -----\n");
    printf("Product  : %s\n", product);
    printf("Quantity : %d\n", quantity);
    printf("Price    : %.2f\n", price);
    printf("Total Value = %.2f\n", quantity * price);

    return 0;
}