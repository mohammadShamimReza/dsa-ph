#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m, n, d;
        scanf("%d %d %d", &m, &n, &d);
        int perDay = m * d;
        int allw = m + n;
        int totalDay = perDay / allw;
        int finalDay =  d - totalDay;

        printf("%d\n", finalDay);
    }

    return 0;
};