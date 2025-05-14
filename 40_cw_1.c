// Task: Remove multiples of 5 from array
#include <stdio.h>
void main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 40, 44, 34, 39, 47, 50, 55};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 5 == 0)
        {
            for (int j = i; j < size; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }
    printf("Array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}