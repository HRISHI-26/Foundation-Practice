// Task: Check if a number or string given is a palindrome

#include <stdio.h>
void main()
{
    char array[100];
    int count = 0, flag = 0;

    printf("Enter something: ");
    scanf("%s", array);

    for (int i = 0; array[i] != '\0'; i++)
    {
        count++;
    }

    if (count % 2 == 0)
    {
        for (int i = 0; array[i] != '\0'; i++)
        {
            if (array[i] == array[count - i - 1])
            {
                flag++;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        for (int i = 0; array[i] != '\0'; i++)
        {
            if (array[i] == array[count - i - 1])
            {
                flag++;
            }
            else
            {
                break;
            }
        }
    }

    if (flag)
    {
        printf("You've entered a palindrome");
    }
    else
    {
        printf("Its not a palindrome");
    }
}