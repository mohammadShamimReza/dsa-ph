#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, e;
    cin >> n >> e;
    long long adj_mat[n + 1][n + 1]; 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj_mat[i][j] = LLONG_MAX;
            if (i==j){
                adj_mat[i][j] = 0;
            }
        }
    }

    while (e--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b], c);
    }


    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int k = 1; k <= n; k++)
            {
                if (adj_mat[i][j] + adj_mat[j][k] < adj_mat[i][k] && adj_mat[i][j] != LLONG_MAX && adj_mat[j][k] != LLONG_MAX)
                {
                    adj_mat[i][k] = adj_mat[i][j] + adj_mat[j][k];
                }
            }
            
        }
        
    }
    
    int t;
    cin >> t;

   for (int i = 0; i < t; i++)
   {
       int s, d;
       cin >> s >> d;
       if (adj_mat[s][d] == LLONG_MAX)
       {
           cout << -1 << endl;
       }
       else
       {
           cout << adj_mat[s][d] << endl;
       }
   }

    return 0;
}