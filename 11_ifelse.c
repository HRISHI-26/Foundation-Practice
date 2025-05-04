// CONTROL STATEMENTS: IF-ELSE IF-ELSE
// Task: Understanding working of if-else statements

#include <stdio.h>
void main()
{
    int i = 1;
    // if
    if (i == 1) // CONDITION
    {
        printf("Condition satisfied in IF");
        printf("\n");
    }

    // if-else
    i = 2;
    if (i == 1) // CONDITION
    {
        // condition => true
        printf("Condition satisfied in IF-ELSE");
        printf("\n");
    }
    else
    {
        // condition => false
        printf("Condition not satisfied in IF but in ELSE");
        printf("\n");
    }

    // if-else if-else
    if (i == 1) // CONDITION
    {
        printf("Condition satisfied in IF");
        printf("\n");
    }
    else if (i == 2) // ALTERNATE CONDITIONS
    {
        printf("Condition satisfied in ELSE-IF");
        printf("\n");
    }
    else
    {
        printf("Condition satisfied in ELSE");
    }
}