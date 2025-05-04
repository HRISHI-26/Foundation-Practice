// CONTROL STATEMENTS: LOOPS
// Task: Print no: series using for, while and do while loop

#include <stdio.h>
void main()
{
    // For Loop

    // INITIALIZATION; CONDITION; UPDATION
    for (int i = 1; i <= 10; i++)
    {
        printf("%d", i);
    }
    printf("\n");

    // While Loop

    int i = 1; // INITIALIZATION

    while (i <= 10) // CONDITION
    {
        printf("%d", i);
        i++; // UPDATION
    }
    printf("\n");

    // Do-While Loop

    int j = 1; // INITIALIZATION

    do
    {
        printf("%d", j);
        j++; // UPDATION
    } while (j <= 10); // CONDITION
}