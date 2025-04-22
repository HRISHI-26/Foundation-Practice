#include<stdio.h>

int main()
{
    int count;
    printf("Enter count: ");
    scanf("%d",&count);

    // Pattern Code
    for (int i = 0; i < count; i++){
        for (int j = 0; j <= i; j++){
            printf("%c ", 64 + i+1);
        }
        printf("\n");
    }
    
    return 0;
}

// A
// B B
// C C C
// D D D D 
// E E E E E