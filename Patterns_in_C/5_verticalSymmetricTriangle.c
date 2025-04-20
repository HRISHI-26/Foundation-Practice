#include<stdio.h>

int main(){
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    // Pattern Code
    for(int i = 0; i < size; i++){
        for(int j = 0; j < i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i = size; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("* ");
        }
        printf("\n");
    }

    }

    return 0;
}