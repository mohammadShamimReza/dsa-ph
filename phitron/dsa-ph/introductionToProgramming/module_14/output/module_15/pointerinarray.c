#include<stdio.h>
int main(){

    int a[5] = {2, 4, 2, 5, 6};
    printf("%p\n", &a[0]);
    printf("%p", a);

    return 0;
};