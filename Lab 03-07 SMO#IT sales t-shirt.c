#include <stdio.h>

int main() {
    float cost, discount, amount;
    scanf("%f %f %f", &cost, &discount, &amount);
    printf("%.2f", (cost*amount)-((cost*amount)*(discount/100)));
    return 0;
}
