#include <stdio.h>

int main() {
    char a, b, c , d, e;
    scanf("%c %c %c %c %c", &a, &b, &c, &d, &e);
    int ascii1 = a;
    int ascii3 = c;
    int ascii5 = e;
    char ch1 = ascii1 + 1;
    char ch2 = ascii3 + 1;
    char ch3 = ascii5 + 1;
    printf("%c\n%c\n%c\n%c\n%c", ch1, b, ch2, d, ch3);
    return 0;
}
