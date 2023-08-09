#include <stdio.h>
 
int main(){
    int row, col1, col2, n;
    scanf("%d", &n);
    for (row = 1; row <= n; row++){
        for (col1 = 1; col1 <= n-row; col1++)
            printf(" ");
        for (col2 = 1; col2 <= row; col2++)
            printf("*");
        for (col2 = 1; col2 <= row-1; col2++)
            printf("*");
        printf("\n");
    }
    return 0;
}
