// Task: Create a new array and perform input output operations

#include <stdio.h>
void main()
{
    // ARRAY DECLARATION TYPES
    // predefined size
    int arr1[5] = {1, 2, 3, 4, 5};

    // printing
    for (int i = 0; i < 5; i++)
    {
        // ARR1
        printf("%d ", arr1[i]);
    }
    printf("\n");
    // ================================================================
    // no: of elements is assigned as size
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};

    // printing
    // counted manually: 8 (as person who initialized can count size)
    for (int i = 0; i < 7; i++)
    {
        // ARR2
        printf("%d ", arr2[i]);
    }
    printf("\n");
    // ================================================================
    // predefined size
    float arr3[5] = {1.2, 2.12, 30, 0.4, 3.50};
    // printing
    for (int i = 0; i < 5; i++)
    {
        // ARR3
        printf("%0.2f ", arr3[i]);
    }
    printf("\n");
    // =================================================================
    // charachter array
    char arr4[5] = {'H', 'e', 'l', 'l', 'o'};
    // printing
    for (int i = 0; i < 5; i++)
    {
        // ARR4
        printf("%c ", arr4[i]);
    }
    printf("\n");
    // ==================================================================
    // charachter array of undefined size
    char arr5[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

    // printing declared arrays
    for (int i = 0; arr5[i] != '\0'; i++)
    // As char array always ends with "\0"
    //  automatically we can use it as end of string
    {
        // ARR5
        printf("%c ", arr5[i]);
    }

    printf("\n");
    // ###################################################################
    // Array from user inputs
    int limit;
    // Reading size
    printf("Enter limit: ");
    scanf("%d", &limit);
    // Reading elements
    int arr6[limit];
    printf("Enter elements: ");
    // Loop for traversing through each index
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &arr6[i]);
    }
    // Printing elements
    printf("Array elements: ");
    // Loop for traversing through each index
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", arr6[i]);
    }
}