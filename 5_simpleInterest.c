// Task: Calculate simple interest
// SI = (p*r*n)/100
#include <stdio.h>
void main()
{
    int principle;
    float rate, years, si;

    printf("Enter priciple amount:");
    scanf("%d", &principle);
    printf("Enter Rate and No of years:");
    scanf("%f%f", &rate, &years);

    si = (principle*rate*years)/100;
    printf("Simple Interest: %0.2f", si);
}