// Task: Ladder Pattern
/*  *
 * * * *
 *
 *
 * * * * * * * *
 *
 *
 *
 * * * * * * * * * * * *     */

#include <stdio.h>
void main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf("*");
            printf("\n");
        }

        for (int j = 1; j <= 4 * i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}