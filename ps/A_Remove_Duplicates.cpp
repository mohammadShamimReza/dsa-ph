#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >>  n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        
    }

    unordered_set<int> ump;
    vector<int> ans;
    for (int i = n-1; i >= 0; i--)
    {
        if(!ump.count(v[i])){
            ump.insert(v[i]);
            ans.push_back(v[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ump.size() << endl;
    for (auto &&i : ans)
    {
        cout << i << " ";
    }

    return 0;
}