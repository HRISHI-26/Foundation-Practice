// Task: Finding prime No of a series

#include <stdio.h>
void main()
{
    int limit = 13, flag = 0;

    // Prime No:
    for (int i = 2; i < limit / 2; i++)
    {
        // if remainder == 0 => not prime
        if (limit % i != 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            printf("%d is not a prime number", limit);
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is a prime number", limit);
    }
}