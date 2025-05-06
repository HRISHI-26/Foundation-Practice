// Task: Input and Output operations of an array with dynamic size

#include<stdio.h>
void main(){
    int array[100], limit;

    printf("Enter your limit:");
    scanf("%d", &limit);

    printf("Enter your values");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("Array:");
    for (int i = 0; i < limit; i++)
    {
        printf("%d\t",array[i]);
    }
    
}