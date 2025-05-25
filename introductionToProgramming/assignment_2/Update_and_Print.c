#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }
    int firstValue;
    scanf("%d", &firstValue);

      int secondValue;
      scanf("%d", &secondValue);

      arr[firstValue] = secondValue;


      for (int i = n-1; i>=0; i--)
      {
          printf(
              "%d ", arr[i]);
      }

      return 0;
};