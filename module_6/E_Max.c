#include<stdio.h>
#include<limits.h>
int main(){

    int n;
    scanf("%d", &n);
    int ns = 0;
    int m = INT_MIN;
    printf("%d\n", m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ns);
        if(ns > m){
            m = ns;
        }
    }
    printf("%d\n", m);
    
    return 0;
};