#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int sz = s.size();
        int f = s[0] + s[1] + s[2];

        int l = s[sz-1] + s[sz-2] + s[sz-3];
        if(f == l){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}