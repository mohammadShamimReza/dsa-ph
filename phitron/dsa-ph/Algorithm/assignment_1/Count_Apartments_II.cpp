#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
int n, m;
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
};
int t = 0;
void dfs(pair<int, int> src)
{
    vis[src.first][src.second] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = src.first + d[i].first;
        cj = src.second + d[i].second;

        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
        {
            t++;
            dfs({ci, cj});
        }
    }
}

int main()
{
    cin >> n >> m;
    int a = 0, b = 0;
    int c = 0, d = 0;
    memset(vis, false, sizeof(vis));
    vector<int> tim;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char val;
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == false && grid[i][j] == '.')
            {
                t = 1;
                dfs({i, j});
                tim.push_back(t);
            }
        }
    }
    sort(tim.begin(), tim.end());

    if(t == 0){
        cout << "0";
    }else{
        for (int t : tim)
        {
            cout << t << " ";
        }
    }
   

    return 0;
}