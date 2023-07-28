#include <stdio.h>

int main(){
    int num_a, num_b, num_c;
    scanf("%d %d %d", &num_a, &num_b, &num_c);
    if (num_b + num_c > num_a){
        if (num_a + num_c > num_b){
            if (num_a + num_b > num_c){
                printf("Triangle is valid.");
            }
            else
                printf("Triangle is not valid.");
        }
        else
            printf("Triangle is not valid.");
    }
    else
        printf("Triangle is not valid.");
    return 0;
}
