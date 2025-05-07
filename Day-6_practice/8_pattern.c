//     *        1
//    * *       2
//   * * *      3
//  * * * *     4
// * * * * * if i <= 5
//  * * * *     6
//   * * *      7
//    * *       8
//     *        9       i: 1->10

#include <stdio.h>
void main()
{
    for (int i = 1; i < 10; i++)
    {
        if (i <= 5)
        {
            // i+j == 6: right diagonal
            for (int j = 1 ; j <= 6 - i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int j = 5; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 10 - i; j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}