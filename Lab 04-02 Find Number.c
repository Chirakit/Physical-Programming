#include <stdio.h>

int main(){
    double num1, num2, num3;
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
        if (num2 > num3)
            printf("%.2lf", num2);
        else
            printf("%.2lf", num3);
    if (num2 > num1 && num2 > num3)
        if (num1 > num3)
            printf("%.2lf", num1);
        else
            printf("%.2lf", num3);
    if (num3 > num2 && num3 > num1)
        if (num2 > num1)
            printf("%.2lf", num2);
        else
            printf("%.2lf", num1);
    return 0;
}
