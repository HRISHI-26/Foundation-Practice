// Task: Read 2 numbers and return which is greater
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("Enter 2 numbers:");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is greater", num1);
    }else{
        printf("%d is greater", num2); 
    }
    
}