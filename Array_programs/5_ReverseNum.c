// Task: Reverse an integer array

//  [2, 5, 6, 9] -> [9, 5, 6, 2] -> [9, 6, 5, 2]

#include <stdio.h>

// Reading Array
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

// Reversing Array
void reverse(int arr[], int limit)
{
    for (int i = 0; i < limit / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[limit - i - 1];
        arr[limit - i - 1] = temp;
    }
}

// Printing Array
void display(int arr[], int limit)
{
    printf("Array is: ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", arr[i]);
    }
}
void main()
{
    int limit, arr[100];

    limit = read(arr);
    reverse(arr, limit);
    display(arr, limit);
}