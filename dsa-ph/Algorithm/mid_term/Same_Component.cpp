#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
int vis[1005][1005];
int n, m;

pair<int, int> d[4] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
bool valid(int c1, int c2){
    return c1 < n && c1 >= 0 && c2 < m && c2 >= 0;
}
void dfs(int s1, int s2)
{
    vis[s1][s2] = true;
    for (int i = 0; i < 4; i++)
    {
        int c1 = s1 + d[i].first;
        int c2 = s2 + d[i].second;
        if(grid[c1][c2] == '.'&& vis[c1][c2] == false && valid(c1, c2) == true){
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
        int s1, s2;
        cin >> s1 >> s2;
        int d1, d2;
        cin >> d1 >> d2;
        memset(vis, false, sizeof(vis));
        dfs(s1, s2);

        if(vis[d1][d2] == true){
            cout << "YES";
        }else{
            cout << "NO";
        }
     

        return 0;
}