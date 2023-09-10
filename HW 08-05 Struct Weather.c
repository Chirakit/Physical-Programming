#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Weather {
        char outlook[9]; //outlook{overcast,sunny,rain}
        int temperature;
        int humidity;
        char wind; //wind{T,F}
    };

void playing_decision(struct Weather weather) {
    if(strcmp(weather.outlook, "overcast") == 0) {
        printf("yes\n");
    }else if(strcmp(weather.outlook, "rain") == 0) {
        if(weather.wind == 'F') {
            printf("yes\n");
        }else
            printf("no\n");
    }else
        if(weather.humidity > 77.5) {
            printf("no\n");
        }else
            printf("yes\n");
}

int main() {
    int day, temperature, humidity;
    char outlook[9], wind;
    scanf("%d", &day);
    struct Weather weather;
    for(int i = 0; i < day; i++) {
        scanf("%s %d %d %c", weather.outlook, &weather.temperature, &weather.humidity, &weather.wind);
        playing_decision(weather);
    }
    return 0;
}

