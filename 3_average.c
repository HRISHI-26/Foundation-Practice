// Task: Reading 3 numbers and finding average

#include <stdio.h>
void main()
{
    float num1, num2, num3;
    float avg;
    printf("Enter 3 numbers:");
    scanf("%f%f%f",&num1,&num2,&num3);

    avg = (num1+num2+num3) / 3.0;
    
    // value after % defines the limit of decimal part
    printf("Average is: %0.2f", avg);
}