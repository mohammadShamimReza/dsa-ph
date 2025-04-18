#include<stdio.h>
int main(){

    int a;
    scanf("%d", &a);
    int lastDigit = a % 10;
    if(lastDigit % 2 == 0){
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    printf("%d", lastDigit);
    return 0;
};