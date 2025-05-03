// Task: Perform Arithmetic operations using switch
#include<stdio.h>
void main(){
    float num1, num2,result;
    int choice;

    printf("Enter 2 numbers:");
    scanf("%f%f", &num1, &num2);

    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result=num1+num2;
        printf("Result: %0.2f", result);
        break;
    case 2:
        if (num1>num2)
        {
            result=num1-num2;
            printf("Result: %0.2f", result);
            break;
        }else{
            result=num2-num1;
            printf("Result: %0.2f", result);
            break;
        }
    case 3:
        result=num1*num2;
        printf("Result: %0.2f", result);
        break;
    case 4:
    if (num2!=0)
    {
        result=num1/num2;
        printf("Result: %0.2f", result);
        break;
    }    
    default:
        printf("You are a foooool!!!");
        break;
    }
}
