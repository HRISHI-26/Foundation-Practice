// Task: Function without argument with return type

#include <stdio.h>
int display()
{
    int num;
    printf("Enter a value: ");
    scanf("%d", &num);
    return num;
}

void main()
{
    int value;
    value = display();
    printf("%d\n", value);
}