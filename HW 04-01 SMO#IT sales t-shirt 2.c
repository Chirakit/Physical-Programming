#include <stdio.h>
#include <math.h>

int main(){
    double cost, discount, amount;
    double get, total, total_free, total_dis, other;
    scanf("%lf %lf %lf", &cost, &discount, &amount);
    get = floor(amount / 3);
    total = (cost * 2) * get;
    other = cost * ((int)amount % 3);
    total_free = total + other;
    total_dis = (cost * amount) - (cost * amount * discount) / 100;
    if (total_free <= total_dis){
        printf("Buy 2 Get 1\n%.2lf", total_free);
    }
    else
        printf("Discount %.lf%\n%.2lf", discount, total_dis);
    return 0;
}
