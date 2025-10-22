#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    int positive = 0;
    int negetive = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0){
            positive += arr[i];
        }
        else
        {
            negetive += arr[i];
        }
    }

    printf(
        "%d %d", positive, negetive);

    return 0;
};