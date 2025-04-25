#include<stdio.h>

void main(){
    int row = 5;

    for (int i = 0; i < row; i++)
    {
        // Print space
        for (int j = i; j < row; j++)
        {
            printf("  ");
        }
        // Print star after space in same line
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // %d, i-> line no:
    for (int i = 0; i < row; i++)
    {
        // Print space
        for (int j = i; j < row; j++)
        {
            printf("  ");
        }
        // Print line no: after space in same line
        for (int k = 0; k <= i; k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    printf("\n");

    // %d, 'A'+k->Ascii values 
    for (int i = 0; i < row; i++)
    {
        // Print space
        for (int j = i; j < row; j++)
        {
            printf("  ");
        }
        // Print Ascii after space in same line
        for (int k = 0; k <= i; k++)
        {
            printf("%d",'A'+k);
        }
        printf("\n");
    }
    printf("\n");

    // %c, 'A'+k-> alphabets
    for (int i = 0; i < row; i++)
    {
        // Print space
        for (int j = i; j < row; j++)
        {
            printf("  ");
        }
        // Print Alphabets after space in same line
        for (int k = 0; k <= i; k++)
        {
            printf("%c ",'A'+k);
        }
        printf("\n");
    }
    printf("\n");
}
