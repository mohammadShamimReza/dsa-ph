#include<stdio.h>

void fun(int x[]){
    printf("%p\n", x);
     x[1] = 20;
}

int main(){

    int a[5] = {2, 4, 2, 5, 6};
    fun(a);
    printf("%d\n", *a);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
};