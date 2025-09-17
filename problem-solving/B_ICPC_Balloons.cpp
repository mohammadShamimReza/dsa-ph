#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        unordered_set<char> un;

        string s;
        cin >> s;
    
        for (int i = 0; i < t; i++)
        {
            un.insert(s[i]);
        }
      

        int psz1 = un.size() * 2;
        int lsz = t - un.size();
        int res = psz1 + lsz;
        cout << res<< endl;
    }

    return 0;
}