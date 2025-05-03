// Task: Perform Arithmetic operations using if-else if
#include<stdio.h>
void main()
{
    int choice;
    float num1, num2, result;
    printf("Enter 2 numbers:");
    scanf("%f%f", &num1, &num2);

    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    if (choice==1)
    {
        result = num1+num2;
        printf("Result: %0.2f", result);
    }else if (choice==2)
    {
        if (num1>num2){
            result = num1-num2;
            printf("Result: %0.2f", result);
        }else{
            result = num2-num1;
            printf("Result: %0.2f", result);
        }
    }else if (choice==3)
    {
        result = num1*num2;
        printf("Result: %0.2f", result);
    }else if (choice==4)
    {
        if(num2!=0){
            result = num1/num2;
            printf("Result: %0.2f", result);
        }
    }else{
        printf("You are a Foooool!!!!");
    }
}