// Find the largest palindrome in the given string

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = {"mam madam malayalam dood hello yes abcba"};
    char* s[100];
    int i=0,j,k;
    
    char* token = strtok(str,"  ");
    while(token != NULL){
        k = 0,j=0;
        int len = strlen(token) - 1;
    
        while(len > j){
            if(token[len--] != token[j++]){
                k = 1;
            }
        }
        if(k == 0){
            s[i] = token;
            i++;
        }
        token = strtok(NULL,"  ");
    }
    
    int h = strlen(s[0]) ;
    char* f[1];
    f[0] = s[0];
    for(int m = 0; m<=i-1; m++){
        if(strlen(s[m]) > h){
            h = strlen(s[m]);
            f[0] = s[m];
        }
    }
    printf("%s",f[0]);

    return 0;
}
