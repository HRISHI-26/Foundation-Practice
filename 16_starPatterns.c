// Task: Printing different styles of star patterns

#include <stdio.h>
void main()
{
    int limit=5;

    // Use %d and row or column variable to get number pattern
    // Use %c and ascii + row or column variable to print alphabet

    // Square Pattern
    for (int i = 1; i <= limit; i++) //no of Rows
    {
        for (int j = 1; j <= limit; j++)//no of Cols
        {
            printf("* "); // printing star
        }
        printf("\n");// moving to a new line
    }
    
    printf("\n");
    // Left Lower Triangle Pattern
    for (int i = 1; i <= limit; i++)// 1 -> limit
    {
        // to get diagonal
        for (int j = 1; j <= i; j++)// 1 -> i (*)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");
    // Left Upper Triangle Pattern
    for (int i = 1; i <= limit; i++)// 1 -> limit
    {
        // to get diagonal
        for (int j = limit; j >= i; j--)// limit -> i (*)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n");
    // Right Upper Triangle Pattern
    for (int i = 1; i <= limit; i++)// 1 -> limit
    {
        for (int j = 1; j <= i; j++) //1 -> i
        {
            printf("  ");
        }
        for (int k = i; k <=limit ; k++) // i -> limit (*)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n");
    // Right Lower Triangle Pattern
    for (int i = 1; i <= limit; i++) // 1 -> limit
    {
        for (int j = limit; j >= i; j--) // limit ->i 
        {
            printf("  ");
        }
        for (int k = i; k >= 1; k--) // i -> 1 (*)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    // Centered Upper and Lower Triangle can be 
    // done but removing 1 space from j loop of
    // above Right Triangles

    printf("\n");
    // Hollow Square Pattern
    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= limit; j++)
        {
            if (i==1||i==limit||j==1||j==limit)
            {
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}