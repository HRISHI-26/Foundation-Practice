#include<stdio.h>

void main(){
    int row = 5;

    // * Pattern Code
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    
    // line no: in a line
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", i+1);
        }
        printf("\n");
    }
    printf("\n");
    
    // No upto row in a line
    for (int i = 0; i < row; i++)
     {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", j+1);
        }
        printf("\n");
    }
}