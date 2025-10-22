#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
int vis[1005][1005];
vector<vector<pair<int, int>>> parent;
int n, m;
int d1, d2;
int s1, s2;
pair<int, int> d[4] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int c1, int c2)
{
    return c1 < n && c1 >= 0 && c2 < m && c2 >= 0;
}
bool bfs(int s1, int s2)
{
    queue<pair<int, int>> q;
    q.push({s1, s2});
    vis[s1][s2] = true;
    if(s1 == d1 && s2== d2 )
        return true;
    while (!q.empty())
    {
        pair<int,int> par= q.front();
        q.pop();
        if (par.first == d1 && par.second == d2)
            return true;
        for (int i = 0; i < 4; i++)
        {
            int c1 = par.first + d[i].first;
            int c2 = par.second + d[i].second;
            if(valid(c1,c2) && !vis[c1][c2]&&grid[c1][c2]!='#'){
                q.push({c1, c2});
                vis[c1][c2] = true;
                parent[c1][c2] = {par.first, par.second};
            }
        }
        }

    return false;
}
void chenge(pair<int, int>dest, pair<int, int>start)
{
    pair<int, int> current = dest;

    while (current != start)
    {
        if (grid[current.first][current.second] != 'D')
            grid[current.first][current.second] = 'X';
        current = parent[current.first][current.second];
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
            if(grid[i][j] == 'R'){
                s1 = i;
                s2 = j;
            }

            if(grid[i][j]== 'D'){
                d1 = i;
                d2 = j;
            }
        }
    }
    parent.assign(n, vector<pair<int, int>>(m, {-1, -1}));

    memset(vis, false, sizeof(vis));
if(bfs(s1, s2)){
    chenge({d1, d2}, {s1, s2});
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {

        cout << grid[i][j];
        
    }
    cout << endl;
}

return 0;
}