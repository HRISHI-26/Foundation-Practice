// Task: Printing pattern
// 0 1 2
// 3 4
// 5 6
// 7 8
// 9 10

#include <stdio.h>
void main()
{
    for (int i = 0; i <= 10; i++)
    {
        // for printing 0 -> 10
        printf("%d ", i);

        // As we want to print newline after every even number i%2==0
        //  but no new line is needed when i is 0
        if (i % 2 == 0 && i != 0)
        {
            printf("\n");
        }
    }
}