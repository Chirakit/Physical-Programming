#include <stdio.h>

int main(){
    int num, i, lab;
    scanf("%d", &num);
    lab = num;
    if (num < 0){
        while (num <= i){
            printf("%d ", num);
            num++;
        }
    } else{
        while (i <= lab){
        printf("%d ", num);
        num = num - 1;
        i++;
        }
    }
    return 0;
}
