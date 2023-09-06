#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200], short_name[10];
    int j = 0;
    scanf("%[^\n]", name);
    for(int i = 0; i < strlen(name); i++) {
        if(isupper(name[i])) {
            short_name[j] = name[i];
            j++;
        }
    }
    printf("%c.%c.", short_name[0], short_name[1]);
    return 0;
}
