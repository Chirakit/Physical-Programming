#include <stdio.h>
#include <stdbool.h>
 
int main(){
    int num, total;
    while (true){
        scanf("%d", &num);
        if (num == -9){
            break;
        }
        total += num;
    }
    printf("%d", total);
    return 0;
}
