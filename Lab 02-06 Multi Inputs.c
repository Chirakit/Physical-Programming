#include <stdio.h>

int main() {
    char txt1[30];
    char txt2[30];
    char txt3[30];
    char txt4[30];
    scanf("%s %s %s %s", txt1, txt2, txt3, txt4);
    printf("String 1: %.3s\nString 2: %.4s\nString 3: %.5s\nString 4: %.6s", txt1, txt2, txt3, txt4);
    return 0;
}
