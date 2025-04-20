#include<stdio.h>
int main(){

    int total_input;
    scanf("%d", &total_input);
    int left_digit;

    for (int i = 0; i < total_input; i++)
    {
        int input;
        scanf("%d", &input);
       do{
            printf("%d ", input % 10);
            input = input / 10;
       } while (input != 0);

        printf("\n");
    }

    return 0;
};