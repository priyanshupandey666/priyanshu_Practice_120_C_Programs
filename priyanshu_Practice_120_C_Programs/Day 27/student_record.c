#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float marks;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\n----- Student Record -----\n");
    printf("Name : %s\n", name);
    printf("Roll : %d\n", roll);
    printf("Marks: %.2f\n", marks);

    return 0;
}