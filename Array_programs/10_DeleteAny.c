// Task: Program to delete an element from a position

#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int limit = sizeof(arr) / sizeof(arr[0]);

    int pos;
    // Reading element
    printf("Enter position: ");
    scanf("%d", &pos);

    // Deleting element from pos
    for (int i = pos; i < limit; i++)
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