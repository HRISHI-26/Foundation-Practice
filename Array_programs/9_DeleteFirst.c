// Task: Deleting the first element of the array

#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int limit = sizeof(arr) / sizeof(arr[0]);

    // Deleting first element
    for (int i = 1; i < limit; i++)
    {
        arr[i - 1] = arr[i];
    }
    limit--;

    // Printing array
    printf("Array is: ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", arr[i]);
    }
}