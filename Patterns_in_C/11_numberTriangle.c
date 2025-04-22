#include<stdio.h>
int main()
{
    int count, k=1;
    printf("Enter count: ");
    scanf("%d", &count);

    // Pattern Code
    for (int i = 0; i < count; i++){
        for (int j = 0; j < i+1; j++){    
            printf("%d ", k++);
        }
        printf("\n");
    }
    
    return 0;
}

// 1
// 2 3
// 4 5 6
// 7 8 9 10