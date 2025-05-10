#include<stdio.h>

int sum( ) {
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a + b;
    return res;
};
int main()
{
    int res = sum( );
    printf("%d", res); 
    return 0;
};