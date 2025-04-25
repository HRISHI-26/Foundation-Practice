#include<stdio.h>
void main(){
    int row = 5;
    for (int i = 0; i < row; i++)
    {
        // This loop prints space 
        // lin  1: j == i == 0
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        //  For printing star upto row-i count after space
        // line 1: k=5-0  i = 0 => '5 *'
        for (int k =  0;k < row-i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}