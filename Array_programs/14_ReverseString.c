// Task: Program to reverse a string
#include <stdio.h>
void main()
{
    char name[10];
    printf("Enter a name:");
    gets(name);
    printf("Name: ");
    puts(name);

    int count = 0;
    // finding limit of string
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    // Reversing
    for (int i = 0; i < count / 2; i++)
    {
        int temp = name[i];
        name[i] = name[count - i - 1];
        name[count - i - 1] = temp;
    }

    // printing reversed string
    printf("\nReversed Name: ");
    puts(name);
}