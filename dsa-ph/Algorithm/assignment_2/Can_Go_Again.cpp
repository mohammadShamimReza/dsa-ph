#include<bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b;
   long long c;
    Edge(int a, int b, long long c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
long long dis[1005];

int main (){
    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;

    while (e--)
    {
        int a, b;
       long long c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }
    int s;
    cin >> s;

    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    dis[s] = 0;

    for (int i = 1; i <= n-1; i++)
    {
        for (auto ed : edge_list)
        {
            int a = ed.a;
            int b = ed.b;
            long long c = ed.c;

            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }
    bool cycle = false;
    
        for (auto ed : edge_list)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;

            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
            {
                cycle = true;
                break;
            }
        }
    
    int t;
    cin >> t;
    if(cycle == true){
        cout << "Negative Cycle Detected"<< endl;
    }else{
        for (int i = 0; i < t; i++)
        {
            int d;
            cin >> d;
            if (dis[d] == LLONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[d] << endl;
            }
        }
    }
   

    return 0;
}