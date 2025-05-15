#include<stdio.h>

int count_before_one(int arr[], int n){
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]== 1){
           return index = i;
        }
    }

    return index;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

   int res =  count_before_one(arr, n);

   printf("%d", res);

   return 0;
};