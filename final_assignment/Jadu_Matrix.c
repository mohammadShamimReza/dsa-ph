#include <stdio.h>
int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int yes = 0;
    if(n != m ){
        yes = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if(i == j){
                if(arr[i][j] != 1){
                    yes = 1;
                    break;
                }
            }else if(i + j == n-1){
                if (arr[i][j] != 1)
                {
                    yes = 1;
                    break;
                }
            }else{
                if(arr[i][j] != 0){
                    yes = 1;
                    break;
                }
            }

            // if (arr[i][i] != 1)
            // {
            //     yes = 1;
            //     continue;
            // }
            // else if (arr[n - 1 - i][i] != 1)
            // {
            //      yes = 1;
            //     continue;
            // }
            // else if (arr[i][j] != 0)
            // {
            //      yes = 1;
            //     continue;
            // }
        }
        printf("\n");
    }

    if (yes == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
};