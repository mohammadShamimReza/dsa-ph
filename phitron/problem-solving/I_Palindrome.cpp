#include<bits/stdc++.h>
using namespace std;
 
int main (){
    string s;
    cin >> s;
    string res = "YES";
    for (char i = 0; i < s.size(); i++)
    {
        if (s[i] != s[s.size()-1 - i])
        {
            res = "NO";
        }
    }
    cout << res;
    return 0;
}