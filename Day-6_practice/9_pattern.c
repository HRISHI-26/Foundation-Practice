//     *       *
//    * *     * *
//   * * *   * * *
//  * * * * * * * *
// * * * * * * * * *

#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (i == 5 && j == 5)
            {
                continue;
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == 5 && j == 5)
            {
                continue;
            }
            else
            {
                printf("* ");
            }
        }
        for (int j = i; j < 8 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}