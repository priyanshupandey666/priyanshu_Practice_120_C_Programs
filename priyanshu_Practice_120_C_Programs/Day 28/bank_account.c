#include <stdio.h>

int main()
{
    char name[50];
    int accountNumber;
    float balance, deposit;

    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Current Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);

    balance += deposit;

    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", accountNumber);
    printf("Name           : %s\n", name);
    printf("Current Balance: %.2f\n", balance);

    return 0;
}