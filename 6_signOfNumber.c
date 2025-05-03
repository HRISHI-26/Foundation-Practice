// Task: Read a number and check if it is negative or positive
#include <stdio.h>
void main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Number is positive");
    }else{
        printf("Number is negative");
    }
    
}