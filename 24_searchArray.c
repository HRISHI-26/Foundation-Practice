// Task: Searching a key from an array
#include <stdio.h>
void main()
{
    int limit, array[limit], searchKey, flag = 0;
    printf("Enter limit:");
    scanf("%d", &limit);

    printf("Enter elements:");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter search key:");
    scanf("%d", &searchKey);
    for (int i = 0; i < limit; i++)
    {
        if (array[i] == searchKey)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("%d is at location: %d ", searchKey, i+1);
    }
    else
    {
        printf("%d is not in array", searchKey);
    }
}