#include <bits/stdc++.h>
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
void dsuUnion(int node1,int node2){
    int leader1 = find(node1);
    int leader2 = find(node2);
    if(groupSize[leader1]>= groupSize[leader2]){
        par[leader2] = leader1;
        groupSize[leader1] += groupSize[leader2];
    }else{
        par[leader1] = leader2;
        groupSize[leader2] += groupSize[leader1];
    }
}
int main()
{
    memset(par, -1, sizeof(par));
    memset(groupSize, 1, sizeof(groupSize));

    dsuUnion(1, 2);
    dsuUnion(2, 0);
    dsuUnion(3, 1);

    for (int i = 0; i < 6; i++)
    {
        cout << i << " -> " << par[i] << endl;
    }

    return 0;
}