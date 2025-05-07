// Task: Program to show working of Pass By Reference

#include <stdio.h>
void sum(int *num1, int *num2)
{
    int result;
    result = *num1 + *num2;
    printf("Sum: %d\n", result);
}

void main()
{
    int number1, number2;
    printf("Enter 2 numbers: ");

    // As these are pointers variable name itself represent address
    scanf("%d%d", &number1, &number2);

    // Here we are sending the address of variables to
    // other function
    sum(&number1, &number2);
}