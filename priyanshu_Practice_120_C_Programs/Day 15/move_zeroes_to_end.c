#include <stdio.h>

int main()
{
    int arr[100], n, i, position = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[position] = arr[i];
            position++;
        }
    }

    while(position < n)
    {
        arr[position] = 0;
        position++;
    }

    printf("Array after moving zeroes: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}