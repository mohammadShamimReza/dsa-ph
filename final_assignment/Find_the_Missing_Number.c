 #include<stdio.h>
 int main(){

     int n;
     scanf("%d", &n);
     long long int arr[n][4];
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < 4; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
     }

     for (int i = 0; i < n; i++)
     {
        long long int gonitok = 1;
         for (int j = 1; j < 4; j++)
         {

            
                 gonitok = gonitok * arr[i][j];


        }

        int pointer = 1;
       
        if(arr[i][0] == 0){
            printf("%d", 0);
        } else if(arr[i][0] % gonitok == 0){
            printf("%lld", arr[i][0] / gonitok);
        }else{
            printf("%d", -1);
        }

        printf("\n");
     }

     return 0;
 };