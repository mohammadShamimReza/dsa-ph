#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int space = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = space; k > 1; k--)
        {
            printf(" ");
        }

        for (int j = i; j > 0 ; j--)
        {
            printf("%d", j);
        }

        space--;
        printf("\n");
        }
    
    return 0;
};