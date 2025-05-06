// Task: Printing patterns
/*111111
  111122
  111333
  114444
  155555
  666666
*/

#include<stdio.h>
void main(){
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i+j>6)
            {
                printf("%d", i);
            }else{
                printf("1");
            }
        }
        printf("\n");
    }
}