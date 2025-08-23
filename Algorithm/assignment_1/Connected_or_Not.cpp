#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];
    memset(adj_mat, 0, sizeof(adj_mat));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
       
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int c, d;
        cin >> c >> d;
        if (adj_mat[c][d] == 1 || c==d)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

 

    return 0;
}