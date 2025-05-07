// Task: Program to show working of Pass By Value

#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}

void main()
{
    int number1, number2, result;
    printf("Enter 2 values: ");
    scanf("%d%d", &number1, &number2);
    // Here we are sending values itself to other function
    result = sum(number1, number2);

    printf("Sum: %d\n", result);
}