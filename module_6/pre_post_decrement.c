#include<stdio.h>
int main(){

    int a = 5;
    int b = --a;
    int c = a--;
    printf("%d %d %d\n", a, b, c);
    return 0;
};