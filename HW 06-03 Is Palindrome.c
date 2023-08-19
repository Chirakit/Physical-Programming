#include <stdio.h>
#include <string.h>
 
int main(){
    char word[100];
    scanf("%s", word);
    if ((word[0] == word[strlen(word)-1]) && (word[1] == word[strlen(word)-2])){
        printf("It is Palindrome.");
    }else
        printf("It is not Palindrome.");
    return 0;
}
