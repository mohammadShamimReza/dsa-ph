#include<stdio.h>
#include <stdlib.h>

void copyArray(int arr[], int carr[], int index, int size){
if(index == size){
    return;
}
carr[index] = arr[index];
copyArray(arr, carr, index+1, size);
}

void sortArray(int carr[], int m ){
    for (int i = 0; i < m; i++)
    {
        int temp = 0;
        for (int j = i+1; j < m; j++)
        {
            if(carr[j] < carr[i]){
                temp = carr[i];
                carr[i] = carr[j];
                carr[j] = temp;
            }
        }
        
    }
    
}

int main(){

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        int arr[m];
        int carr[m];

        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[j]);
        }

        copyArray(arr, carr, 0, m);

        sortArray(carr,  m);

        for (int k = 0; k < m; k++)
        {
            printf("%d ", abs(arr[k] - carr[k]));
        }
       

        printf("\n");
    }

    return 0;
};