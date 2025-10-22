#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    int divby2 = 0;
    int divby3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            // printf("%d", arr[i]);
            divby2++;
        }
        else if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            // printf("%d", arr[i]);
            divby2++;
        }
        else if (arr[i] % 3 == 0)
        {
            // printf("%d", arr[i]);
            divby3++;
        }
    }

    printf("%d %d", divby2, divby3);

    return 0;
};