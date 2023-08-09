#include <stdio.h>

int main(){
    int num, i, lab;
    scanf("%d", &num);
    lab = num;
    i = 1;
    do {
        i++;
        printf("%d ", num);
        num = num - 1;
    } while (i <= lab);
    return 0;
}
