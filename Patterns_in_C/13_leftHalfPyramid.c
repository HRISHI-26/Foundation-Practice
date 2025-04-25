#include<stdio.h>

void main(){
    int row = 5; 

    // * Pattern Code
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // No: Pattern Code
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", i+1);
        }
        printf("\n");
    }
    printf("\n");

    // No: in all lines
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", j+1);
        }
        printf("\n");
    }
    printf("\n");

    // Ascii Values
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", 'A'+i); // or use 65 + j
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", 97); // providing Ascii values to out letter
        }
        printf("\n");
    }
}