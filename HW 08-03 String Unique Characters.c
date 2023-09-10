#include <stdio.h>
#include <string.h>

void remove_twin_txt(char *txt) {
    int len = strlen(txt);
    int i, j = 0;
    for(i = 0; i < len; i++) {
        if(txt[i] != txt[i + 1]) {
            txt[j++] = txt[i];
        }else
            i++;
    }
    txt[j] = '\0';
    if(len != strlen(txt)) {
        printf("%s\n", txt);
        remove_twin_txt(txt);
    }
}

int main() {
    char message[100];
    scanf("%s", message);
    remove_twin_txt(message);
    return 0;
}
