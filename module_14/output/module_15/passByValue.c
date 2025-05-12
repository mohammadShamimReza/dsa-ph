#include<stdio.h>

void fun(int x){ 
    printf("ref of main function x %p\n", &x);
    x = 20;

}

int main(){

    int x = 10;
    fun(x);
    printf("ref of main function x %p\n", &x);
    return 0;
};