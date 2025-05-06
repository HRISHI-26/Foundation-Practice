// Task: Input and Output operations of an array

#include <stdio.h>
void main()
{
    int array[10], size;
    printf("Enter size of array:");
    scanf("%d", &size);

    printf("Enter values:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Entered Array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}