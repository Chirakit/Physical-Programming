#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main() {
    int person;
    char employee_id[10];
    scanf("%d", &person);
    struct Record employee[person];
    for(int i = 0; i < person; i++) {
        scanf("%s %s %ld %ld", employee[i].id, employee[i].name, &employee[i].salary, &employee[i].sales);
    }
    scanf("%s", employee_id);
    for(int i = 0; i < person; i++) {
        if(strcmp(employee_id, employee[i].id) == 0) {
                printf("%s\n%s\n%ld\n%.2lf\n%ld\n%.2lf", employee[i].id, employee[i].name, employee[i].sales, employee[i].sales * 0.02, employee[i].salary, employee[i].salary + (employee[i].sales * 0.02));
                break;
        }
        if(i == person - 1){
            printf("ID not found !!!");
        }
    }
    return 0;
}
