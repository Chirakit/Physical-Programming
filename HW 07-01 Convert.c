#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char txt1[101], txt2[101], lower_txt1[101], lower_txt2[101];
    scanf("%[^\n] %[^\n]", txt1, txt2);
    for (int i = 0; i < strlen(txt1); i++) {
        if (txt1[i] == tolower(txt1[i])) {
            txt1[i] = toupper(txt1[i]);
        }else if (txt1[i] == toupper(txt1[i])) {
            txt1[i] = tolower(txt1[i]);
        }
        lower_txt1[i] = tolower(txt1[i]);
    }
    lower_txt1[strlen(txt1)] = '\0';
    for (int i = 0; i < strlen(txt2); i++) {
        if (txt2[i] == tolower(txt2[i])) {
            txt2[i] = toupper(txt2[i]);
        }else if (txt2[i] == toupper(txt2[i])) {
            txt2[i] = tolower(txt2[i]);
        }
        lower_txt2[i] = tolower(txt2[i]);
    }
    lower_txt2[strlen(txt2)] = '\0';
    if (strcmp(lower_txt1, lower_txt2) == 0) {
        printf("*** Results ***\n%s\n%s\n***************\nBoth strings are the same.", txt1, txt2);
        }else
            printf("*** Results ***\n%s\n%s\n***************\nBoth strings are not the same.", txt1, txt2);
    return 0;
}
