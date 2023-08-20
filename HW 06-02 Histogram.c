#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int num, num_char, check = 1, count = 0;
    int i, j;
    char charecter;
    scanf("%d", &num);
    char alphabet[num], txt[num];
    for (i = 0; i < num; i++) {
        scanf(" %c", &charecter);
        char lower_charecter = tolower(charecter);
        for (j = 0; j < i; j++) {
            if (lower_charecter == alphabet[j]) {
                check = 0;
                break;
            }
        }
        alphabet[i] = lower_charecter;
        if (check == 1) {
            txt[count] = lower_charecter;
            ++count;
        }
        check = 1;
    }
    for (i = 0; i < count; i++) {   
        num_char = 0;
        for (j = 0; j < strlen(alphabet); j++) {
            if (txt[i] == alphabet[j]) {
                num_char += 1;
            }
        }
        printf("%c: %d\n", txt[i], num_char);
    }
    return 0;
}
