// Task: Program to sort an array using functions

// []

#include <stdio.h>

// Function for reading array
int readArray(int arr[])
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

// Function for sorting array
void sort(int arr[], int limit)
{

    for (int i = 0; i < limit - 1; i++)
    {
        for (int j = i + 1; j < limit; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function for printing array
void display(int arr[], int limit)
{

    printf("Array contains:");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main()
{
    int arr[100], limit;

    limit = readArray(arr);
    sort(arr, limit);
    display(arr, limit);

}