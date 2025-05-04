// Task: Finding sum of a series

#include <stdio.h>
void main()
{

    // Sum of Even numbers
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of even no's: %d\n", sum);

    // Sum of Odd numbers
    sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }
    printf("Sum of Odd no's: %d\n", sum);

    // Sum of numbers that give remainder 1 when divided by 3
    sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (i % 3 == 1)
        {
            sum += i;
        }
    }
    printf("Sum of no's: %d", sum);
}