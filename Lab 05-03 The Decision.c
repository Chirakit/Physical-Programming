#include <stdio.h>

int main(){
    int numM, numN, i;
    scanf("%d %d", &numM, &numN);
    if (numM > numN){
        for (i = numM; i >= numN; i--)
            printf("%d ", i);
    } else{
        for (i = numM; i <= numN; i++)
            printf("%d ", i);
    }
    return 0;
}
