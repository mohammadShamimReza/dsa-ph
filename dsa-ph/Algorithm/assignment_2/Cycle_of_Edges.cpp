#include <bits/stdc++.h>
using namespace std;
vector<int> par;
vector<int> groupSize;
int find(int node)
{
    if (par[node] == -1)
    {
        return node;
    }
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}
void dsuUnion(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (groupSize[leader1] >= groupSize[leader2])
    {
        par[leader2] = leader1;
        groupSize[leader1] += groupSize[leader2];
    }
    else
    {
        par[leader1] = leader2;
        groupSize[leader2] += groupSize[leader1];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    par.assign(n + 1, -1);
    groupSize.assign(n + 1, 1);
    int cycle = 0;
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
    }
    for (int i = 1; i <= n; i++){
        groupSize[i] = 1;
    }
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);
        if (leaderA == leaderB)
        {
            cycle ++;
        }
        else
        {
            dsuUnion(a, b);
        }
    }

   
        cout << cycle << endl;
  
    return 0;
}

