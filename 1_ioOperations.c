#include <stdio.h>
void main()
{

    // Whatever you write inside double quotes gets printed as output
    printf("Hello, World!\t");
    printf("This is 100K coding challenge.\n");
    printf("This program is conducted by Brototype.\n");
    // Escape Sequences
    // \n -> prints new line
    // \t -> prints tab space

    // Variable Declaration
    int num1;
    // Initialization
    float num2 = 3.5;

    // Reading an Input
    printf("Enter a number");
    scanf("%d", &num1);
    // %d    -> Format specifier
    // &num1 -> memory address of variable

    printf("You have entered %d \n", num1);
    printf("The value of float variable is %f", num2);
}