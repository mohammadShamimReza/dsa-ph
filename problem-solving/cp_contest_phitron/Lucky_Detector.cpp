#include<bits/stdc++.h>
using namespace std;
 
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string res = "Not Lucky";
    for (char c : s)
    {
        if(c == 55){

            res = "Lucky";
        }
        }
        cout << res;

        return 0;
}