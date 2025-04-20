#include<stdio.h>

int main(){
    int  size;
    printf("Enter size: ");
    scanf("%d", &size);

    // Pattern Code
    for(int i = 1; i <= size; i++){
        for(int j = 1; j <=  size; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}