#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
int vis[1005][1005];
int n, m;

pair<int, int> d[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
priority_queue<int,vector<int>, greater<int>> pq;
bool valid(int c1, int c2)
{
    return c1 < n && c1 >= 0 && c2 < m && c2 >= 0;
}
int com = 0;
void dfs(int s1, int s2)
{
    vis[s1][s2] = true;
    for (int i = 0; i < 4; i++)
    {
        int c1 = s1 + d[i].first;
        int c2 = s2 + d[i].second;
        if (grid[c1][c2] == '.' && vis[c1][c2] == false && valid(c1, c2) == true)
        {
            com++;
            dfs(c1, c2);
        }
    }
}

int main()
{
    cin >> n >> m;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j] == '.'){
                com = 1;
                dfs(i, j);
                pq.push(com);
            }
        }
    }
    if(!pq.empty()){
        cout << pq.top() << endl;
    }else{
        cout << -1 << " ";
    }

    return 0;
}