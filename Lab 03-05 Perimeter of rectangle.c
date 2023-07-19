#include <stdio.h>

int main() {
    double width, height;
    scanf("%lf %lf", &width, &height);
    printf("Perimeter of rectangle = %.4lf units", width * 2 + height * 2);
}
