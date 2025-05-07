// Task: Pointer function for returning charachter array

#include <stdio.h>

char *display()
{
    char *name[100];
    printf("Enter a string: ");
    // use pointer to store value else
    scanf("%s", *name);

    return *name;
}
void main()
{
    char *string[100];
    // use pointer return variable to access value inside 'name'
    *string = display();

    printf("%s\n", *string);
}