#include <stdio.h>
 
int main(){
    int age = 0, height = 0, weight = 0, i, num1 = 0, num2 = 0, num3 = 0, num4 = 0, total_age = 0;
    double total_height = 0, total_weight = 0;
    i = 1;
    while (i <= 50){
        scanf("%d %d %d", &age, &height, &weight);
        if (age >= 20 && height >= 160){
            num1++;
        }if (age < 20 && (height <= 180 || weight >= 60)){
            num2++;
        }if (age >= 30 && weight >= 40 && weight <= 80){
            num3++;
        }if (age < 40 && (weight < 85 || height <= 200)){
            num4++;
        }
        total_age += age;
        total_height += height;
        total_weight += weight;
        i++;
    }
    printf("Age >= 20 and Height >= 160: %d\n", num1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", num2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", num3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", num4);
    printf("Average Age: %d\n", total_age / 50);
    printf("Average Height: %.2f\n", total_height / 50);
    printf("Average Weight: %.2f", total_weight / 50);
    return 0;
}
