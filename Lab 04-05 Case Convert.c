#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    int ascii1 = a;
    if (a <= 90 && a >= 65){
        printf("%c", a+32);
    }else if (a <= 122 && a >= 97){
        printf("%c", a-32);
    }
    else
        printf("error");
    return 0;
}
