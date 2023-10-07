#include<stdio.h>
#include<string.h>

int main(){
    int alphabet[26];
    int len, index;
    char str[100];

    scanf("%s", str);

    for(int i=0; i<26; i++){
        alphabet[i] = -1;
    }

    len = strlen(str);

    for (int i = 0; i < len; i++) {
        index = str[i] - 'a';
        if (alphabet[index] == -1) {
            alphabet[index] = i;
        }
        else {
            continue;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }
}