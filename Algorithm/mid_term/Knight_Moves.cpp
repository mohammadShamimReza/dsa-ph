#include<bits/stdc++.h>
using namespace std;
int grid[105][105];
bool vis[105][105];
int lavel[105][105];
pair<int, int> d[8] = {{-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {+1, 2}, {-1, 2}, {-2, 1}};
bool valid(int d1, int d2, int n, int m)
{
    return d1 < n && d1 >= 0 && d2 < m && d2 >= 0;
}
void dfs(int s1, int s2, int n,int m) {
    queue<pair<int,int>> q;
    q.push({s1, s2});
    lavel[s1][s2] = 0;
    vis[s1][s2] = true;
while (!q.empty())
{
    pair<int,int> par = q.front();
    q.pop();
    int p1 = par.first;
    int p2 = par.second;
    for (int i = 0; i < 8; i++)
    {
        int c1 = p1 + d[i].first;
        int c2 = p2 + d[i].second;
        
        if(valid(c1, c2, n,m) && !vis[c1][c2]){
            q.push({c1, c2});
            vis[c1][c2] = true;
            lavel[c1][c2] = lavel[p1][p2] + 1;
        }
    }
}
};

int main()
{
    int t;
    cin >> t;
   
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        int s1, s2;
        cin >> s1 >> s2;
        int d1,d2;
        cin >> d1 >> d2;
        
      
        memset(vis, false, sizeof(vis));
        memset(lavel, -1, sizeof(lavel));
        dfs(s1, s2, n, m);
        cout << lavel[d1][d2]<<endl;
    }

    return 0;
}