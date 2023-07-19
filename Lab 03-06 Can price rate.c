#include <stdio.h>
#include <math.h>

int main() {
    int cost;
    float d, h;
    scanf("%d %f %f", &cost, &d, &h);
    printf("Volume : %.2fml\nBaht/ml : %.4f", (h * 3.14159265359) * pow(d / 2, 2), cost / ((h * 3.14159265359) * pow(d / 2, 2)));
    return 0;
}
