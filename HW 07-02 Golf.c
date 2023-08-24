#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793
#define g 9.81

double to_sin(double radius) {
    double theta_to_radius = (radius * PI) / 180;
    return sin(theta_to_radius);
}

int main() {
    int theta, u;
    scanf("%d %d", &theta, &u);
    double radius_sin = to_sin(theta);
    double h = (pow(u, 2) * pow(radius_sin, 2)) / (2 * g);
    printf("theta (degree) : %d\nu (m/s) : %d\nh (m) : %.4lf", theta, u, h);
    return 0;
}
