#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n-1;
    int time = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= star; j++)
        {
            if(time == 1){

                for (int k = 1; k <= space; k++)
                {
                    printf(" ");
                    time = 2;
                }
            }
                printf("*");
        }
        star += 2;
        printf("\n");
        space -= 1;
        time = 1;
    }

    return 0;
};