#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
int n, m;
bool vis[1005][1005];
pair<int, int> src, des;

vector<pair<int, int>> d = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool valid(int i, int j){
    if(i >= n || i < 0 || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(pair<int,int> src){
    vis[src.first][src.second] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = src.first + d[i].first;
        cj = src.second + d[i].second;

        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#'){
            dfs({ci, cj});
        }
    }
}

int main()
{
    cin >> n >> m;
    int a = 0, b =0;
    int c=0, d=0;
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char val;
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
                src = {i, j};
            if (grid[i][j] == 'B')
                des = {i, j};
        }
        }



        dfs(src);
if(vis[des.first][des.second]){
    cout << "YES";
}else{
    cout << "NO";
}
        return 0;
}