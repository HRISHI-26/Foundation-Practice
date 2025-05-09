// * * * * *
//  * * * *
//   * * *
//    * *
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include <stdio.h>
void main()
{
    for (int i = 1; i < 10; i++)
    {
        if (i <= 5)
        {
            // Upper Inverted Triangle
            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = i; j <= 5; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            // Lower Triangle
            // space: 4->1
            for (int j = i + 1; j <= 10; j++)
            {
                printf(" ");
            }
            // *: 1->(<6-3)=> 2->5
            for (int j = 1; j < i - 3; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}