#include<stdio.h>
int main(){

    char s;
    scanf("%c", &s);
    if(s >= 'a' && s <= 'z'){
        printf("%c", s - 32);

    }else {
        printf("%c", s + 32);
    }
    return 0;
};