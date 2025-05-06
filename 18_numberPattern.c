// Task: Print a triangle pattern of numbers
// 1
// 12
// 1 3
// 1  4
// 12345


#include<stdio.h>
void main(){
    for (int i = 1; i <=5 ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j==1 || i==j || i==5)
            {
                printf("%d ",j);   
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}