// Task: Ladder Pattern

/*  * * 
    *
    *
    *
    * * * * 
    *
    *
    *
    *
    *
    *
    * * * * * *     */

#include <stdio.h>
void main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 2 * i; j++)
        {
            printf("* ");
        }
        printf("\n");
        if (i<3)
        {
            for (int k = 1; k <=3*i; k++)
            {
                printf("*\n");
            }
        }
        
    }
}