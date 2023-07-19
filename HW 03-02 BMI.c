#include <stdio.h>

int main() {
    float height, weight;
    scanf("%f %f", &height, &weight);
    float bmi = weight / ((height / 100) * (height / 100));
    printf("%f", bmi);
    return 0;
}
