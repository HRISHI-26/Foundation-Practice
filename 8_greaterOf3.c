// Task: Find greater number of 3 numbers using nested if
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter 3 no's:");
    scanf("%d%d%d", &num1,&num2,&num3);



    if (num1>num2)
    {
        // Nested If
        if (num1>num3)
        {
            // num1 > num2 > num3
            printf("%d is greater", num1);
        }else{
            // num1 > num2 but num3 > num1 => num3
            printf("%d is greater", num3);
        }
    }else{
        if (num2>num3)
        {
            // num1 < num2 >num3 => num2
            printf("%d is greater", num2);
        }
        else{
            // num1 < num2 < num3 => num3
            printf("%d is greater", num3);
        }
    }
    
}