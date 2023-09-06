#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char txt[150], nah[150];
    scanf("%[^\n]", txt);
    for (int i = 0; i < strlen(txt) ; i++) {
        if(isspace(txt[i])) {
            nah[i] = txt[i];
        }else
            printf("%c", txt[i]);
    }
    return 0;
}
