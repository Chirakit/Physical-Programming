#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char secret[2000];
    int num = 0;
    scanf("%[^\n]", secret);
    for(int i = 0; i < strlen(secret); i++) {
        if(tolower(secret[i]) == 'c') {
            if(tolower(secret[i+1] )== 'a') {
                if(tolower(secret[i+2]) == 't') {
                    num += 1;
                    if(num > 1) {
                        printf(", %d", i);
                    }else
                        printf("%d", i);
                }
            }
        }
    }
    return 0;
}
