#include <stdio.h>
#include <ctype.h>

double celsiusToFahrenheit(double celcius) {
    double fahrenheit = 32 + (celcius * 1.8);
    return fahrenheit;
}

double fahrenheitToCelcius(double fahrenheit) {
    double celcius = (fahrenheit - 32) / 1.8;
    return celcius;
}

void printFarenheit(double fahrenheit) {
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius) {
    printf("%.2lf c", celcius);
}

int main() {
    double temp, ans;
    char temp_txt;
    scanf("%lf %c", &temp, &temp_txt);
    temp_txt = tolower(temp_txt);
    if (temp_txt == 'c') {
        ans = celsiusToFahrenheit(temp);
        printFarenheit(ans);
    }else if (temp_txt == 'f') {
        ans = fahrenheitToCelcius(temp);
        printCelcius(ans);
    }
    return 0;
}
