// Task: Find the unique elements of an array
#include <stdio.h>
void main()
{
    int arr[] = {2, 3, 2, 4, 1, 5, 2, 3, 6, 4, 7};
    int limit = sizeof(arr) / sizeof(arr[0]);
    int count[10] = {0};

    // printing array
    printf("Array is: ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // finding frequency
    for (int i = 0; i < limit; i++)
    {
        count[arr[i]]++;
    }

    // printing unique elements
    printf("Unique elements: ");
    for (int i = 0; i < 11; i++)
    {
        if (count[arr[i]] == 1)
        {
            printf("%d ", arr[i]);
            count[arr[i]] = 0;
        }
    }
}