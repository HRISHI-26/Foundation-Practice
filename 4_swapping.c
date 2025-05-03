// Task: Swapping 2 variable using 3rd variable
#include <stdio.h>
void main()
{
    int num1=10, num2=20, temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Num1: %d\t Num2: %d\n ", num1, num2);

    // Without 3rd variable
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("Num1: %d\t Num2: %d", num1, num2);
}