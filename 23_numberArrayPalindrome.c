// Task: check if a number is palindrome
#include <stdio.h>
void main()
{
    int num, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int cpy = num;
    while (cpy != 0)
    {
        rem = cpy % 10;
        rev = rev * 10 + rem;
        cpy /= 10;
    }

    if (rev == num)
    {
        printf("Number %d is palindrome", num);
    }
    else
    {
        printf("Number %d is not palindrome", num);
    }
}