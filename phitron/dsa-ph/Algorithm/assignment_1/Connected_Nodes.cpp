#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int v;
        cin >> v;
        if (adj_list[v].empty())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(adj_list[v].begin(), adj_list[v].end(), greater<int>());

            for(int m:adj_list[v]){
                cout << m << " ";
            }
            cout << endl;
        }
    }
    

    return 0;
}