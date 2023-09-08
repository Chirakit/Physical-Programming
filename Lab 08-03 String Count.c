#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char txt[150], traget;
    int num = 0;
    scanf("%c %[^\n]", &traget, txt);
    for(int i = 0; i < strlen(txt); i++) {
        if(tolower(traget) == tolower(txt[i])) {
            num += 1;
        }
    }
    printf("%d", num);
    return 0;
}
