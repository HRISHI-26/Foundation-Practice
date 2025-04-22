#include<stdio.h>

int main(){
    int count;
    printf("Enter count: ");
    scanf("%d", &count);

    // Patten Code
    for (int i = count; i > 0; i--){
        for (int j = 0; j < i; j++){
            printf("%d ", j+1);
        }
        printf("\n");
    }
    
    return 0;
}


// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1