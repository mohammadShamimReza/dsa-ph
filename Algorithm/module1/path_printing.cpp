#include <bits/stdc++.h>
using namespace std;
vector<int> adj_lst[1005];
bool vis[1005];

void bfs(int src)
{
    queue<int> qu;
    qu.push(src);
    vis[src] = true;

    while (!qu.empty())
    {
        int par = qu.front();
        qu.pop();
        cout << par << " ";
        for (int child : adj_lst[par])
        {
            if (vis[child] == false)
            {
                qu.push(child);
                vis[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_lst[a].push_back(b);
        adj_lst[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    bfs(0);
    return 0;
}