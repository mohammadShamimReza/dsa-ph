#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int space = n - 1;
    int contant = 1;

    int evenodd = 0;

       for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
           
            
        }
        for (int j = 0; j < contant; j++)
        {
            if(evenodd%2 == 0){

                printf("#");
            } else{
                printf("-");
            }
        }
        if(i < n -1){

            contant = contant + 2;
        }

        printf("\n");
        space--;
        if(evenodd % 2==0){
            evenodd = 1;
        }else{
            evenodd = 0;
        }
    }

    int secContant = contant - 2;
    int secSpace = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < secSpace; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < secContant; j++)
        {
            if(evenodd%2 == 0){

                printf("#");
            } else{
                printf("-");
            }
        }

        secContant = secContant - 2;

        printf("\n");
        secSpace++;
        if(evenodd % 2==0){
            evenodd = 1;
        }else{
            evenodd = 0;
        }
    }

    return 0;
};