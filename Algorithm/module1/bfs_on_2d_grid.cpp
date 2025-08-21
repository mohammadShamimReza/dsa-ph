#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int lavel[105][105];
int n, m;
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
};
void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    lavel[si][sj] = 0;
    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
       
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;

            if (!vis[ci][cj] && valid(ci, cj))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                lavel[ci][cj] = lavel[par_i][par_j] + 1;
            }
        }
    }
}
int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char val;
            cin >> grid[i][j];
        }
    }
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    memset(vis, false, sizeof(vis));
    memset(lavel, -1, sizeof(lavel));

    bfs(si, sj);
    cout << lavel[di][dj] << endl;
    return 0;
}