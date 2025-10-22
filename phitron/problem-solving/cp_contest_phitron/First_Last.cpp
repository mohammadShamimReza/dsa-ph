#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    vector<long long > arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<long long int, pair<long long int, long long int>> m;
    for (int i = 0; i < n; i++)
    {
        
        if (m.find(arr[i]) == m.end())
        {
            m[arr[i]] = {i + 1, i + 1};
        }
        else
        {
            m[arr[i]].second= i + 1;
        }
    }

    for ( auto c:m)
    {
        cout << c.first<<  " " << c.second.first << " "<< c.second.second << endl;

    }

    return 0;
}