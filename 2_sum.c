// Task: Read 2 numbers and return its sum
#include <stdio.h>
void main()
{
    int num1, num2, sum;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &num1, &num2);
    // finding sum
    sum = num1+num2;
    printf("Sum is: %d", sum);
}