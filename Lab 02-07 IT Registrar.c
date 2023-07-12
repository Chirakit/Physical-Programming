#include <stdio.h>

int main() {
    char firstname[30];
    char lastname[30];
    int id;
    int dd, mm, yy;
    float gpa;
    scanf("%s", firstname);
    scanf("%s", lastname);
    scanf("%d", &id);
    scanf("%d/%d/%d", &dd, &mm , &yy);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\nID: %d\nDOB: %.2d-%.2d-%.4d\nGPA: %.2f", firstname, lastname, id, dd, mm , yy, gpa);
    return 0;
}
