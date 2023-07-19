#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    scanf("%lf,%lf", &num1, &num2);
    printf("The sum of the given numbers : %lf\nThe difference of the given numbers : %lf\nThe product of the given numbers : %lf\nThe quotient of the given numbers : %lf", num1+num2, num1-num2, num1*num2, num1/num2);
    return 0;
}
