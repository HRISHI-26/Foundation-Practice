#include<stdio.h>
int main(){
    int size;
    printf("Enter size: ");
    scanf("%d",&size);

    // Pattern Code
    for (int i = 0; i < size; i++){
        for (int j = size; j >= 0; j--){
            if(j < size-i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}