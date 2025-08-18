#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n, e;
    cin >> n >> e;
    vector<pair<int, int> > edj_lst;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edj_lst.push_back({a, b});
    }

    for(auto x: edj_lst){
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}