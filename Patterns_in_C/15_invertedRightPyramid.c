#include<stdio.h>

void main(){
    int row = 5;

    // Pattern Code
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}