#include<bits/stdc++.h>
using namespace std;
int par[1005];
int find(int val){
    int res = val;
    while (par[res] != -1)
    {
         res = par[res];
    }
    return res;
}
int main()
{
    memset(par, -1, sizeof(par));
    par[0] = 1;
    par[1] = -1;
    par[2] = 1;
    par[3] = 1;
    par[4] = 5;
    par[5] = 3;

    int res = find(5);
    for (int i = 0; i < 6; i++)
    {
        cout << i << " -> " << par[i] << endl;
    }

    cout << res;

    return 0;
}