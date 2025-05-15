// Task: Read an element from user and insert it into any position

#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int limit = sizeof(arr) / sizeof(arr[0]);

    // here position is not index
    int pos, value;

    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &value);

    // Insertion of element
    for (int i = limit; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    limit++;
    arr[pos - 1] = value;

    // Printing array
    printf("Modified Array is: ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", arr[i]);
    }
}