#include <stdio.h>

int main(){
    int num, i;
    i = 1;
    scanf("%d", &num);
    while (i <= num){
        printf("%d ", i);
        i++;
    }
    return 0;
}
