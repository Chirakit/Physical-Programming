#include <stdio.h>

int main() {
    char num[5];
    scanf("%s", num);
    char num0 = num[2];
    char num1 = num[3];
    char num2 = num[4];
    char num3 = num[0];
    char num4 = num[1];
    printf("%c%c%c%c%c", num0, num1, num2, num3, num4);
    return 0;
}
