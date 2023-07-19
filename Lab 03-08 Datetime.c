#include <stdio.h>

int main() {
    int time;
    scanf(" %d", &time);
    int temp = time;
    int day = time / 86400;
    time = time % 86400;
    int hour = time / 3600;
    time = time % 3600;
    int min = time / 60;
    int sec = time % 60;
    printf("%d s = %d d %d h %d m %d s", temp, day, hour, min, sec);
    return 0;
}
