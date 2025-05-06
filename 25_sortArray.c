// Task: Performing sorting of array

#include <stdio.h>
void main()
{
    int limit, array[limit];
    printf("Enter limit:");
    scanf("%d", &limit);

    printf("Enter elements:");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Array:\n");
    for (int i = 0; i < limit; i++)
    {
        printf("%d\t", array[i]);
    }

    // Sorting
    // upto last
    for (int i = 0; i < limit-1; i++)
    {
        // upto second last
        for (int j = i + 1; j < limit; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nSorted Array:\n");
    for (int i = 0; i < limit; i++)
    {
        printf("%d\t", array[i]);
    }
}