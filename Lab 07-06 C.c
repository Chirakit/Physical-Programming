#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z;
    scanf("%lf %lf", &x, &y);
    z = sqrt(pow(x, 2) + pow(y, 2));
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf", x, y, z);
    return 0;
}
