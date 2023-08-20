#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(){
    int i, j, k;
    char encrypt[200], decrypt[200];
    char ourlang[] = "ABXYPQRMNCEDKLJOSHTUFVZGWIABXYP";
    scanf("%[^\n]", encrypt);
    for (i = 0; i < strlen(encrypt); i++){
        if (!isalpha(encrypt[i])){
            decrypt[i] = encrypt[i];
        }else
            for (j = 0; j < strlen(ourlang); j++){
                if (toupper(encrypt[i]) == ourlang[j]){
                    decrypt[i] = ourlang[j + 5];
                    break;
                }
            }if (islower(encrypt[i])){
                decrypt[i] = tolower(decrypt[i]);
            }
    }
    for (k = 0; k < strlen(encrypt); k++){
        printf("%c", decrypt[k]);
    }
    return 0;
}
//Kqnne Uebnr = Hello World
