// Task: Program to insert an element at first index of an array
#include <stdio.h>

int read(int arr[])
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

int insert(int arr[], int limit)
{
    int value;
    printf("Enter value: ");
    scanf("%d", &value);

    for (int i = limit; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    limit++;
    arr[0] = value;
    return limit;
}

void display(int arr[], int limit)
{
    printf("Array is:  ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main()
{
    int arr[100], limit;
    limit = read(arr);
    display(arr, limit);
    limit = insert(arr, limit);
    display(arr, limit);
}