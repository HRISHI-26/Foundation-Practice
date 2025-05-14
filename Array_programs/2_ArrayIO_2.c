// Task: Program to read an array from user and print its output
#include <stdio.h>
void main()
{
    // Number array
    int limit;
    printf("Enter limit:");
    scanf("%d", &limit);

    float arr[limit];
    printf("Enter elements-> ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%f", &arr[i]);
    }
    printf("No:Array is-> ");
    for (int i = 0; i < limit; i++)
    {
        printf("%0.2f ", arr[i]);
    }

    // Charachter array
    char arrch[limit];
    printf("\nEnter charachters->");
    for (int i = 0; i < limit; i++)
    {
        scanf(" %c", &arrch[i]);
    }
    printf("Char Array is->");
    for (int i = 0; arrch[i] != '\0'; i++)
    {
        printf("%c ", arrch[i]);
    }
}