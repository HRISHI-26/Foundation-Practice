// Task: Function with argument and return type

#include <stdio.h>
char displayChar(int num)
{
    char letter = 'A';
    letter += num;
    return letter;
}
void main()
{
    int number;
    char ch;
    printf("Enter a number: ");
    scanf("%d", &number);
    ch = display(number);
    printf("Result: %c\n", ch);
}