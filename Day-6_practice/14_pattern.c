//         *
//       *   *
//     *       *
//   *           *
// * * * * * * * * *

#include <stdio.h>
void main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = i; j <= 10; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == j || j == 1 || i == 9)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
}