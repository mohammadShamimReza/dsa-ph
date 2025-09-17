#include<stdio.h>

int sum(int m, int n) {
    int res = m + n;
    return res;
};
int main()
{
    int res = sum(5, 10);
    printf("%d", res); 
    return 0;
};