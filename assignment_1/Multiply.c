#include<stdio.h>
int main(){
   long   int a, b;
    scanf("%ld %ld", &a, &b);
    
    long long int result = a * b;
    printf("%lld", result);
    return 0;
}