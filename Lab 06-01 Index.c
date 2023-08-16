#include <stdio.h>
#include <stdbool.h>

int main(){
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int num, i;
    char txt1, txt2;
    while (true){
        scanf("%d", &num);
        if (num > 20 || num < 1){
            continue;
        }else
            for (i = 0; i < 8; i++) {
                if (M[i] == num){
                    printf("%d is in M at index [%d]", num, i);
                    return 0;
                }if (N[i] == num){
                    printf("%d is in N at index [%d]", num, i);
                    return 0;
                }else
                    continue;
        }
        printf("%d is not in neither M nor N", num);
        break;
    }
    return 0;
}
