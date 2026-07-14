#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be created.");
        return 0;
    }

    fprintf(fp, "Hello World");

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}