#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    scanf("%s", name);
    int ascii_name[strlen(name)], i, j, stop;
    for(i = 0; i < strlen(name); i++) {
        ascii_name[i] = name[i];
    }
    for(i = 0; i < strlen(name) - 1; i++) {
        stop = 0;
        for(j = 0; j < strlen(name) - 1; j++) {
            if(ascii_name[j] > ascii_name[j + 1]) {
                int temp = ascii_name[j];
                ascii_name[j] = ascii_name[j + 1];
                ascii_name[j + 1] = temp;
                stop = 1;
            }
        }
        if(stop == 0) {
            break;
        }
    }
    for(i = 0; i < strlen(name); i++) {
        name[i] = ascii_name[i];
        printf("%c", name[i]);
    }
    return 0;
}
