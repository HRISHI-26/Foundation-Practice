// Task: Program to delete an element from last position

#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int limit = sizeof(arr) / sizeof(arr[0]);

    // Deleting last element
    arr[limit--];

    // Printing array
    printf("Array is: ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", arr[i]);
    }
}