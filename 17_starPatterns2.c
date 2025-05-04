// Task: Printing different styles of star pattern

#include <stdio.h>
void main()
{
    int limit = 5;

    // Hollow Rectangle
    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= 2 * limit; j++)
        {
            if (i == 1 || j == 1 || i == limit || j == 2 * limit)
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

    printf("\n");
    // Hollow Square
    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= limit; j++)
        {
            if (i == 1 || i == limit || j == 1 || j == limit)
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

    printf("\n");
    // Diagonal Line to right
    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= limit; j++)
        {
            if (i == j)
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

    printf("\n");
    // Diagonal Line to left
    for (int i = 1; i <= limit; i++)
    {
        for (int j = 0; j <= limit; j++)
        {
            if (i + j == limit + 1)
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

    printf("\n");
    // X pattern
    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= limit; j++)
        {
            if (i == j || i + j == limit + 1)
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

    printf("\n");
    // Diagonals inside Hollow Square
    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= limit; j++)
        {
            if (i == j || i + j == limit + 1 || i == 1 || j == 1 || i == limit || j == limit)
            // condn: for X || condn: for h:square
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

    printf("\n");
    // Diagonals inside a Hollow Rectangle

    
}