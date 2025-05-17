// Task: Program to merge 2 unsorted arrays

#include <stdio.h>
void main()
{
    int arr1[]= {3,5,1};
    int arr2[]={4,6,3,5};
    int limit1 = sizeof(arr1) / sizeof(arr1[0]);
    int limit2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[limit1+limit2];
    // Merging
    int j=0;
    for (int i = 0; i < limit1; i++)
    {
        merged[i]=arr1[i];
    }
    j=0;
    for (int i = limit1; i < limit1+limit2; i++)
    {
        merged[i]=arr2[j];
        j++;
    }
    // printing array
    printf("Merged array: ");
    for (int i = 0; i < limit1+limit2; i++)
    {
        printf("%d ", merged[i]);
    }
    
    
}