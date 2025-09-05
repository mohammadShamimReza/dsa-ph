#include<bits/stdc++.h>
using namespace std;
int par[1005];
int groupSize[1005];
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

int main (){
    int n, e;
    cin >> n >> e;
    bool cycle = false;
    memset(par, -1, sizeof(par));
    memset(groupSize, 1, sizeof(groupSize));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);
         if(leaderA == leaderB){
             cycle = true;
         }else{
             dsuUnion(a, b);
         }
    }


    if(cycle){
        cout << "cycle detected"<< endl;
    }else{
        cout << "not detected" << endl;
    }

    return 0;
}