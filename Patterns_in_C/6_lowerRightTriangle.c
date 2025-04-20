#include<stdio.h>

int main(){
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    // Pattern Code
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size ; j++){
            if(j < size-i-1){
                // for eg: line 1: 5-0-1 = 4
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}