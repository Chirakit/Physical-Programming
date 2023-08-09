#include <stdio.h>
 
int main(){
    int num, row, col;
    scanf("%d", &num);
    for (row = 1; row <= num; row++){
        for (col = 1; col <= num; col++)
            if (col == row || col + row == num + 1){
                printf("-");
            } else{
                printf("#");
            }
        printf("\n");
    }
    return 0;
}
