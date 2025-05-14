// Task: Read an array using function

#include <stdio.h>

int insert(int arr[])
{
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);

    printf("Enter elements: ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }

    return limit;
}

void display(int arr[], int limit)
{

    printf("Array is: ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100];
    int limit;

    limit = insert(arr);
    display(arr, limit);

    return 0;
}