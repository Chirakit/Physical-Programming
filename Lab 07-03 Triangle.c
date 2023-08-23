#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c) {
    return a+b+c;
}

double area(double a, double b) {
    double total = (a * b) / 2;
    return total;
}

int main() {
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("Perimeter: %.2lf\nArea: %.2lf", perimeter(a, b, c), area(a, b));
    return 0;
}
