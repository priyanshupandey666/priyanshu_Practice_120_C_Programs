#include <stdio.h>

int main()
{
    char book[50];
    int bookId;

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Name: ");
    scanf("%s", book);

    printf("\n----- Library Record -----\n");
    printf("Book ID   : %d\n", bookId);
    printf("Book Name : %s\n", book);

    return 0;
}