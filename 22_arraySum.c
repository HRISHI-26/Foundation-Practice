// Task: Sum of elements of array

#include <stdio.h>
void main()
{
    int limit, array[limit], sum = 0;

    printf("Enter size:");
    scanf("%d", &limit);

    printf("Enter values:");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i]; //Calculating sum
    }
    // Printing output
    printf("Sum: %d", sum);
}