// Task: Finding sum of n numbers in a series using different loops

#include <stdio.h>
void main()
{
    int sum = 0;

    // using for loop
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("Sum: %d\n", sum);

    // using while loop
    sum = 0;
    int i = 1;
    while (i <= 10)
    {
        sum += i;
        i++; // 2-11: incrementation
    }
    printf("Sum: %d\n", sum);

    // using do while loop
    sum = 0;
    i = 1;
    do
    {
        sum += i;
        i++; // 2-11: incrementation
    } while (i <= 10);
    printf("Sum: %d", sum);
}