#include<stdio.h>

int main(){
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    // Pattern Code
    for (int i = 0; i < size; i++){
        for (int j = 0; j < 2*size; j++){
            // Eg: size = 5 => in line 2: 5-2 = 3rd index
            if(j == size-i){
                for (int k = 0; k <= 2*i; k++){
                    printf("*");
                }
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    
    return 0;    
}
 
// line
// 0     5th index
// 1     *
// 2    ***
// 3   *****
// 4  *******
// 5 *********