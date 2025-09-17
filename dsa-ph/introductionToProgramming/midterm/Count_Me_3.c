#include<stdio.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);

   

    for (int i = 0; i < n+1; i++)
    {
        char arr[10001];
        fgets(arr, 10001, stdin);
         int d = 0;
        int a = 0;
        int s = 0;

        int length = strlen(arr);
        
        for (int i = 0; i < length; i++)
        {
            if (arr[i] > 47 && arr[i] < 58)
            {
                d++;
            }
            else if (arr[i] > 64 && arr[i] < 91)
            {
                a++;
            }
            else if (arr[i] > 96 && arr[i] < 123)
            {
                s++;
            }
        }
        if(i>0){
        printf("%d %d %d\n", a, s, d);

        }

    }


    return 0;
};