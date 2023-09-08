#include <stdio.h>
#include <string.h>

int main() {
    struct student_info {
    char name[60];
    char surname[60];
    char sex[10];
    int age;
    char id[12];
    double gpa;
    }student;

    scanf("%s", student.name);
    scanf("%s", student.surname);
    scanf("%s", student.sex);
    scanf("%d", &student.age);
    scanf("%s", student.id);
    scanf("%lf", &student.gpa);
    if(strcmp("Male", student.sex) == 0) {
        printf("%s %c %s (%d) ID: %s GPA %.2lf", strcpy(student.sex, "Mr"), student.name[0], student.surname, student.age, student.id, student.gpa);
    }else
        printf("%s %c %s (%d) ID: %s GPA %.2lf", strcpy(student.sex, "Miss"), student.name[0], student.surname, student.age, student.id, student.gpa);
    return 0;
}
