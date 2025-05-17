// Task: Program to  merge 2 arrays and  sort it
#include <stdio.h>
void main()
{
    int arr1[] = {2, 4, 3, 1, 5};
    int arr2[] = {8, 3, 7, 5, 0, 8, 3};
    int limit1 = sizeof(arr1) / sizeof(arr1[0]);
    int limit2 = sizeof(arr2) / sizeof(arr2[0]);

    // Merging
    int merged[limit1 + limit2];
    for (int i = 0; i < limit1; i++)
    {
        merged[i] = arr1[i];
    }
    int j = 0;
    for (int i = limit1; i < limit1 + limit2; i++)
    {
        merged[i] = arr2[j];
        j++;
    }

    // Sorting
    for (int i = 0; i < (limit1 + limit2) - 1; i++)
    {
        for (int j = i + 1; j < limit1 + limit2; j++)
        {
            if (merged[i] > merged[j])
            {
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }

    // printing array
    printf("Merged Array is: ");
    for (int i = 0; i < limit1 + limit2; i++)
    {
        printf("%d ", merged[i]);
    }
}